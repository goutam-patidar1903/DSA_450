//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printDiamond(int n) {
        // code here
        int spc=n-1,star=1;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=spc;j++) cout<<" ";
            for(int j=1;j<=star;j++) cout<<"* ";
            cout<<endl;
            spc--;
            star++;
        }
        star=n;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++) cout<<" ";
	        for(int j=0;j<star;j++) cout<<"* ";
	        star--;
	        cout<<endl;
	    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printDiamond(n);
    }
    return 0;
}
// } Driver Code Ends