class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        sort(intervals.begin(), intervals.end());

        vector<int> temp = intervals[0];

        for(auto i:intervals){
            if(i[0] <= temp[1]){
                temp[1] = max(i[1], temp[1]);
            }
            else{
                mergedIntervals.push_back(temp);
                temp = i;
            }
        }
        mergedIntervals.push_back(temp);
        return mergedIntervals;
    }
};


/*                                      TRIES NOT SOLVED

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int m = intervals.size();
        int n = intervals[0].size();

        vector<vector<int>> ans(m, vector<int>(n));
        // ans.push_back(intervals[0][0]);
        ans[0][0] = intervals[0][0];
        int x = intervals[0][1];
        for(int i=1; i<m; i++){
            for(int j=0; j<n; j++){
                int y = intervals[i][j];
                ans.push_back(max(y, x));
                // if(y < x){
                //     ans[i-1][n-1]=intervals[i][n-1];
                //     // ans.push_back({intervals[0][0], y});
                //     break;
                // }
                // else{
                //     ans[i][j] = intervals[i][j];
                // }
                // x = intervals[i][n-1];
                
            }
        }
        return ans;
    }
};
*/