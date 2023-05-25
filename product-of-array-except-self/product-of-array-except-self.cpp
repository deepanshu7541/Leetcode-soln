class Solution {
public:
    #define pb push_back

    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int product = 1;
        for(int i=0; i<size; i++){
            product*=nums[i];
        }
        vector<int> ans;
        for(int i=0; i<size; i++){
            if(nums[i]==0){
                int temp=1;
                for(int j=0; j<size; j++){
                    if(i==j){
                        continue;
                    }
                    else{
                        temp*=nums[j];
                    }
                }
                ans.pb(temp);
            }
            else{
                ans.pb(product/nums[i]);
            }
        }
        return ans;
    }
};