class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        if(k == cardPoints.size()) {
            int total=0;
            for(int num : cardPoints) {
                total+=num;
            }
            return total;
        }
        
        int left=0 , right=cardPoints.size()-1;
        int leftSum=0 , rightSum=0;
        int maxSum=INT_MIN;
        while(left<k)
        {
            leftSum+=cardPoints[left];
            left++;
        }
        maxSum=leftSum;
        left--;
        while(left>=0)
        {
            leftSum-=cardPoints[left];
            rightSum+=cardPoints[right];
             maxSum=max(maxSum,(leftSum+rightSum));
            left--;
            right--;
        }
        
        return maxSum;
    }
};