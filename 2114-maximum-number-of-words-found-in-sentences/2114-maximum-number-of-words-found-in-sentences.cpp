class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int result=0;
        for(int i=0;i<sentences.size();i++)
        {
            string s=sentences[i];
            int count=0;
            int k=0;
            while(s[k]!='\0')
            {
                if(s[k]==' ') count++;
                k++;
            }
            count++;
            result=max(count,result);
        }
        return result;
    }
};