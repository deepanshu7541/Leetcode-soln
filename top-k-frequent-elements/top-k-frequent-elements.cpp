class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        vector<int> vect;
        priority_queue<pair<int,int>>pq;

        for(int i=0; i<nums.size(); i++){
            map[nums[i]]++;
        }
        for(auto i:map){
            // cout<<i<<" ";
            // cout<<i.second<<" = "<<i.first<<endl;
            pq.push({i.second, i.first});
            // pq.push(make_pair(map[nums[i]].second, map[nums[i]].first));
        }
        for(int i=0; i<k; i++){
            vect.push_back(pq.top().second);
            pq.pop();
        }
        return vect;
    }
};