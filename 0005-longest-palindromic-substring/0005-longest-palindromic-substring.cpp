class Solution {
public:
    string longestPalindrome(string s) {
//         int start = 0, end = 0;

//         for (int i = 0; i < s.length(); i++) {
//             int len1 = expandAroundCenter(s, i, i);
//             int len2 = expandAroundCenter(s, i, i + 1);
//             int max_len = max(len1, len2);
            
//             if (max_len > end - start + 1) {
//                 start = i - (max_len - 1) / 2;
//                 end = i + max_len / 2;
//             }
//         }

//         return s.substr(start, end - start + 1);
         int start = 0 ;
        int n =s.length();
        int maxlen =1; //because a single element is always a palindrom
  for(int i = 1;i<n ;i++){
        //for odd length
         int l = i-1;
        int r = i+1;
     while(l>=0 && r<n && s[l]==s[r]){
        if(r-l+1 > maxlen){
            maxlen = r-l+1;   // r-l+1 for calculating the length of the palindromic
           
            start = l;
        }
         l--;
            r++;
     }
     //for even length
        l = i-1;
       r = i;
     while(l>=0 && r<n && s[l]==s[r]){
        if(r-l+1 > maxlen){
            maxlen = r-l+1;   // r-l+1 for calculating the length of the palindromic
          
            start = l;
        }
          l--;
            r++;
     }

    }
    return s.substr(start , maxlen);
    
    }

private:
    int expandAroundCenter(const string& s, int left, int right) {
        int n = s.length();
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};
