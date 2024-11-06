class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
    int j = 0;
    
    // Split the string s by spaces into words
    while (j < s.size()) {
        // Skip spaces
        while (j < s.size() && s[j] == ' ') j++;
        
        if (j >= s.size()) break; // End of string
        
        // Collect a word
        string tmp = "";
        while (j < s.size() && s[j] != ' ') {
            tmp += s[j];
            j++;
        }
        
        words.push_back(tmp);
    }
    
    // Check if pattern size matches number of words
    if (pattern.size() != words.size()) return false;
    
    // Maps to store the pattern-to-word and word-to-pattern mappings
    unordered_map<char, string> mp;
    unordered_map<string, char> reverseMp;
    
    for (int i = 0; i < pattern.size(); i++) {
        char p = pattern[i];
        string w = words[i];
        
        // Check pattern-to-word mapping
        if (mp.count(p) && mp[p] != w) return false;
        
        // Check word-to-pattern mapping
        if (reverseMp.count(w) && reverseMp[w] != p) return false;
        
        mp[p] = w;
        reverseMp[w] = p;
    }
    
    return true;
    }
};