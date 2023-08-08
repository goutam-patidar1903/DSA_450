class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        int k=0;
        for(int i=0;i<address.size();i++)
        {
            if(address[i]=='.')
            {
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            }
            else
            {
                result.push_back(address[i]);
            }
        }
        return result;
    }
};