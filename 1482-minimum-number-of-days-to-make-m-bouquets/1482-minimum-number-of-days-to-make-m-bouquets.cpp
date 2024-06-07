class Solution {
private:
    bool isPossible(vector<int>& bloomDay , int day , int m , int k)
    {
        int count=0 , numOfBouquet=0;
        for(int i=0;i<bloomDay.size();i++)
        {
          if(bloomDay[i] <= day){
              count++;
          }
          else{
            numOfBouquet += (count/k);
            count=0;
          }
        }
        numOfBouquet += (count/k);
        return numOfBouquet >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
       
        long long val = m * 1ll * k * 1ll;
        int n = bloomDay.size(); //size of the array
        if (val > n) return -1; //impossible case.
        
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(bloomDay , mid , m , k))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};