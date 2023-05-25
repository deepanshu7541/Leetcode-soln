class Solution {
public:

//                      OPTIMISE IT LATER ON - USED O(n) space.

    string reverseWords(string s) {
        stack<string> st;
        string a;
        for(int i=0; i<s.length(); i++){
            if(!isspace(s[i])){
                a+=s[i];
            }
            if((isspace(s[i]) || i==s.length()-1) && a.size()!=0){
                // cout<<a;
                st.push(a);
                a="";
                // cout<<s.subtr(0,i);
            }
        }

        string x;
        while(!st.empty()){
            x+=st.top();
            if(st.size()!=1){
                x+=" ";
            }
            st.pop();
        }
        return x;
    }
};