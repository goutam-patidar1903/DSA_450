class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       // int n=digits.size();
       //  for(int i=n-1;i>=0;i--){
       //      if(digits[i]<9){
       //          digits[i]+=1;
       //          return digits;
       //      }
       //      else {
       //          digits[i]=0;
       //          if(i==0) digits.insert(digits.begin()+0,1);
       //      }
       //  }
       //  return digits;
        vector<int> ans;

        int n = digits.size();
        int carry = 1;
        for(int i=n-1; i>=0; i--){
            int a = digits[i];
            int b = carry;
            int sum = a+b;
            int r = sum%10;
            carry = sum/10;
            ans.insert(ans.begin(), r);
        }
        if (carry>0){
            ans.insert(ans.begin(), carry);
        }

        return ans;
    }
};