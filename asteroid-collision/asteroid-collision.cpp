class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s1;
        
        for(int i=0; i<asteroids.size(); i++){
            //If the asteroid is positiveso push it in stack.
            if(s1.empty() || asteroids[i] > 0){
                s1.push(asteroids[i]);
            }
            //If the asteroid is negative, then check for 3 cases.
            // 1. If s1.top is also -ve then they both will not collide and simply push in stack.
            // 2. if stack top is +ve and has greater value then desroy the asteroid.
            // 3. If the top stack is +ve and is equal to abs(asteroid[i]), then simply pop that element.
            else{
                while(!s1.empty() && s1.top()>0 && s1.top() < abs(asteroids[i])){
                    s1.pop();
                }
                if(!s1.empty() && s1.top() > 0 && s1.top()==abs(asteroids[i])){
                    s1.pop();
                }
                else{
                    if(s1.empty() || s1.top() < 0){
                        s1.push(asteroids[i]);
                    }
                }
            }
        }
        vector<int> ans(s1.size());
        for(int i=s1.size()-1; i>=0; i--){
            ans[i] = s1.top();
            s1.pop();
        }
        return ans;
        /*
        while(!s1.empty()){
            ans.push_back(s1.top());
            s1.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        */
    }
};