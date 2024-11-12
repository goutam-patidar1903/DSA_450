class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        sort(items.begin(), items.end());
        
        int n = items.size();
        vector<pair<int, int>> pricesAndBeauties(n);
        pricesAndBeauties[0] = {items[0][0], items[0][1]};
        
        for (int i = 1; i < n; ++i) {
            pricesAndBeauties[i].first = items[i][0];
            pricesAndBeauties[i].second = max(pricesAndBeauties[i - 1].second, items[i][1]);
        }
        
        vector<int> result(queries.size());
        vector<pair<int, int>> queriesWithIndex;
        
        for (int j = 0; j < queries.size(); ++j) {
            queriesWithIndex.push_back({queries[j], j});
        }
        
        sort(queriesWithIndex.begin(), queriesWithIndex.end());
        
        int idx = 0;
        
        for (auto& [query, originalIdx] : queriesWithIndex) {
            while (idx < n && pricesAndBeauties[idx].first <= query) {
                ++idx;
            }
            
            result[originalIdx] = (idx == 0) ? 0 : pricesAndBeauties[idx - 1].second;
        }
        
        return result;
    }
};