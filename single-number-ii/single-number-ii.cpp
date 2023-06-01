class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1){
            return nums[0];
        }

        int j=1;

        // for(auto x:nums){
        //     cout<<x<<" ";
        // }
        for(int i=0; i<nums.size(); i++){

            j=i+1;
            if(i == nums.size()-1){
                return nums[i];
            }

            if((nums[i]==nums[j]) && (nums[j]==nums[j+1])){
                i+=2;
            }
            else{
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
};