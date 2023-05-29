class Solution {
public:
    int getMax(vector<int>& candies){
        int maxi = INT_MIN;
        for(int i=0; i<candies.size(); i++){
            if(candies[i] > maxi){
                maxi = candies[i];
            }
        }
        return maxi;
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = getMax(candies);

        vector<bool> ans;
        for(int i=0; i<candies.size(); i++){
            int x = candies[i] + extraCandies;
            if(x >= maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};