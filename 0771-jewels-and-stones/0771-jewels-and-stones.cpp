class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        map<char,int> m1;
        map<char,int> m2;
        int k=0;
        for(int i=0;i<stones.size();i++)
        {
            if(m1[stones[i]]==1) {count++ ;}
            else{
                if(m2[stones[i]]==1) {count++ ;}
                else{
                    for(int j=k;j<jewels.size();j++)
                    {
                        m2[jewels[j]]=1;
                        if(stones[i]==jewels[j]) 
                        {
                            m1[stones[i]]=1;
                            count++;
                            k=j;
                            break;
                        }
                        k++;
                    }
                }
            }
        }
        return count;
    }
};