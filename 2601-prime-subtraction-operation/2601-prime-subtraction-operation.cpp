class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
    bool primeSubOperation(vector<int>& nums) {
        int lastElem = INT_MIN;
        for(int i=0;i<nums.size();i++){
            int x = nums[i];
            bool found=false;
            
            for(int j=x-1;j>1;j--){
                if(isPrime(j) && (x-j)>lastElem){ 
                    lastElem = x-j;
                    found=true;
                    break;
                } 
            }
            if(found==false) {
                if (x > lastElem) {
                    lastElem = x;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};