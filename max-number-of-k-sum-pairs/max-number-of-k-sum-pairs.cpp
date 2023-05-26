class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        for(int i=0; i<nums.size(); i++){
            if(map[nums[i]] > 0){
                int num = k-nums[i];
                if(num==nums[i] && map[nums[i]]==1){
                    map[nums[i]]=0;
                }
                if(map[num] >= 1){
                    count++;
                    map[nums[i]]--;
                    map[num]--;
                }
            }
        }
        return count;
    }
};