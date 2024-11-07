class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(!vowels.contains(s[i]) && i<s.size()) i++;
            
            while(!vowels.contains(s[j]) && j>0) j--;
            
            if(i<j) swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};