class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> pair;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<intervals.size();i++){
            if(pair.empty()||pair.back()[1]<intervals[i][0]){
                pair.push_back(intervals[i]);
            }
            else{
                pair.back()[1]=max(pair.back()[1],intervals[i][1]);
            }
        }
        return pair;
    }
};
