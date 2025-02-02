// Link to the question : https://leetcode.com/problems/longest-valid-parentheses/

class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.length(), maxLength=0;
        stack<int> st;
        st.push(-1);
        
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()) st.push(i);
                else maxLength=max(maxLength,i-st.top());
            }
        }
        return maxLength;
    }
};
