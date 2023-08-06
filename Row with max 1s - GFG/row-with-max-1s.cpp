//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int result=-1;
	    int cnt1=0;
	    int cnt2;
	    for(int i=0;i<arr.size();i++)
	    {
	        cnt2=0;
	        for(int j=0;j<arr[i].size();j++)
	        {
	           if(arr[i][j]==1) cnt2++; 
	        }
	        if(cnt2>cnt1) 
	        {
	            result=i;
	            cnt1=cnt2;
	        }
	    }
	    return result;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends