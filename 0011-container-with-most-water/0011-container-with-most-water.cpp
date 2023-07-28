class Solution {
public:
    int maxArea(vector<int>& height) {
        int resArea=0;
        int i=0;
        int j=height.size()-1;
        //for(int i=0;i<(height.size()-1);i++)
        while(i<j)
        {
          //  for(int j=i+1;j<height.size();j++)
            //{
                int a,b,h;
                b=j-i;
                if(height[i]>height[j])
                {
                     a=height[j];
                    j--;
                }else
                {
                     a=height[i];
                    i++;
                }
                int area=(a*b);
                if(area>resArea) resArea = area;                
            //}
        }
        return resArea;
    }
};