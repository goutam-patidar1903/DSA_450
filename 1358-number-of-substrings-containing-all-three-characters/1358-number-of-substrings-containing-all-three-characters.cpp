class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=0 , r=0;
        int cnt=0;
        int ans=0;
        int n=s.size();
        vector<int> arr(3,0);
        while(r<n)
        {
            arr[s[r]-'a']++;
            while(arr[0] && arr[1] && arr[2])
            {
                // ans+=(n-r);    // way2
                cnt++;    // way 1
                arr[s[l]-'a']--;
                l++;
            }
            ans+=cnt;  //way 1
            r++;
        }
        return ans;
    }
};