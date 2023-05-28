class Solution {
public:
    string removeStars(string s){
        string ans = "";
        for(int i : s){
            if(i=='*'){
                ans.pop_back();
                continue;
            }
            ans += i;
        }
        return ans;
    }




/*
        --------------->>>>>>>>>> APPROACH 1 (SUCCESSFUL) <<<<<<<<<<<<--------------

    string removeStars(string s) {
        string ans = "";
        stack<char> st;

        int i=0;
        cout<<s.size()<<endl;
        while(i<s.size()){
            if(s[i] == '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
        }
        cout<<st.empty();
        while(!st.empty()){
            char x = st.top();
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    */
};