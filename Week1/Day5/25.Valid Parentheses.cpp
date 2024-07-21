class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
       int i=0;
        while(i!=s.length()){
            if(s[i]=='{'||s[i]=='('||s[i]=='[')
                st.push(s[i]);
            else if(s[i]=='}' && !(st.empty())){
                    if(st.top()=='{')
                    st.pop();
                else
                    break;
            }
                else if(s[i]==']' && !(st.empty())){
                    if(st.top()=='[')
                    st.pop();
                else
                    break;
                }
                    else if(s[i]==')' && !(st.empty())){
                    if(st.top()=='(')
                    st.pop();
                else
                    break;
                    }
                            else
                            return 0;
                        
                        i++;
        }
             if(st.empty())
                            return 1;
                            else
                            return 0;
    }
};
