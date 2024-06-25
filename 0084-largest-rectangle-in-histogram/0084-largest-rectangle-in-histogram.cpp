class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // int len=heights.size();
        // int maxArea=0;
        // for(int i=0;i<len;i++) {
        //     int h=INT_MAX;
        //     for(int j=i;j<len;j++) {
        //         h=min(h,heights[j]);
        //         int area=(h)*(j-i+1);
        //         maxArea=max(maxArea,area);
        //     }
        // }
        // return maxArea;
        stack < int > st;
      int maxA = 0;
      int n = heights.size();
      for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
          int height = heights[st.top()];
          st.pop();
          int width;
          if (st.empty())
            width = i;
          else
            width = i - st.top() - 1;
          maxA = max(maxA, width * height);
        }
        st.push(i);
      }
      return maxA;
    }
};