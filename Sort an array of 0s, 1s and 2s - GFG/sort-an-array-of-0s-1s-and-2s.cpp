//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
           int k;
           int low=0;
           int mid=0;
           int high=n-1;
           while(mid<=high)
           {
               if(a[mid]==0)
               {
                   k=a[mid];
                   a[mid]=a[low];
                   a[low]=k;
                   low++;
                   mid++;
               }else if(a[mid]==2)
               {
                   k=a[mid];
                   a[mid]=a[high];
                   a[high]=k;
                   high--;
               }else{
                   mid++;
               }
           }
    }
    
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends