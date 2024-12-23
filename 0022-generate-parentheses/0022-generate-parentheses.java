class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> ans = new ArrayList<>(); // Initialize the list
        generate(ans, n, 0, 0, ""); // Start the recursive function
        return ans;
    }

    public void generate(List<String> ans, int n, int open, int close, String cur_str) {
        // If the current string has the required length, add it to the result
        if (cur_str.length() == 2 * n) {
            ans.add(cur_str);
            return;
        }

        // If the number of open brackets is less than n, add an open bracket
        if (open < n) {
            generate(ans, n, open + 1, close, cur_str + "(");
        }

        // If the number of close brackets is less than open brackets, add a close bracket
        if (close < open) {
            generate(ans, n, open, close + 1, cur_str + ")");
        }
    }
}