class Solution {
public:
    static bool  cmp(vector<int> & a, vector<int> & b){
        if(a[0]==b[0]) return b[1]>a[1];
        return a[0]<b[0];

    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);

        vector<int>previous = intervals[0];
        vector<vector<int>> ans;
        for(int i=1;i<intervals.size();i++){
            // overlapping

            if(intervals[i][0]<=previous[1]){
                previous[1]=max(previous[1],intervals[i][1]);
            }
            // non-overlapping
            else {
                ans.push_back(previous);
                previous = intervals[i];
            }

        }
        ans.push_back(previous);

        return ans;

    }
};