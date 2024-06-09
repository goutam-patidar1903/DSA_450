 int atoi(string &s,int sign,int i,long result)
    {
        //check for base condition
        if(sign*result>=INT_MAX)
        {
            return INT_MAX;
        }
        if(sign*result<=INT_MIN)
        {
            return INT_MIN;
        }
        if(i>=s.size() || s[i]<'0' || s[i]>'9')
        {
            return sign*result;
        }
        result = atoi(s,sign,i+1,(result*10+(s[i]-'0')));
        return result;
    }
  
class Solution {
public:
    int myAtoi(string s) {
       //  int i=0,n=s.size();
       //  while(s[i]==' ') i++;
       //  int positive=0,negative=0;
       // if(s[i] == '+'){
       //      positive++;
       //      i++;
       //  }
       //  if(s[i] == '-'){
       //      negative++; 
       //      i++;
       //  }
       //  double ans = 0; 
       //  while(i<n and s[i] >= '0' and s[i] <= '9'){
       //      ans = ans*10 + (s[i] - '0'); 
       //      i++;
       //  }
       //  if(negative > 0) ans = -ans;
       //  if(positive > 0 and negative > 0) return 0;
       //  if(ans > INT_MAX) ans = INT_MAX;
       //  if(ans < INT_MIN) ans = INT_MIN;
       //  return (int)ans;
        
        int i=0,n = s.size(),sign = 1;
        while(i<n && s[i] == ' ')    ++i;
        if(s[i] == '-') {
            sign = -1;
            ++i;
        }
        else if(s[i] == '+')  ++i;
        return atoi(s,sign,i,0);
    }
};