class Solution {
public:
    long long minEnd(int n, int x) {
//         vector<long long> store;
//         long long temp = x;
//         store.push_back(x);
//         while(store.size()<=n){
            
//             if((temp & x) == x)   store.push_back(temp);
//             temp++;
            
//         }
//         return store[store.size()-1];
        
        long long result = x;
        while (--n) {
            result = (result + 1) | x;
        }

        return result;
    }
};