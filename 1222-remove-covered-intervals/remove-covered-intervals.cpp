class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>&a, vector<int> &b){
            if(a[0]==b[0]) return a[1]>b[1];
            return a[0]<b[0];
        });
        int cnt=0;
        int pend=intervals[0][1];
        int pstart= intervals[0][0];
        for(int i=1;i<intervals.size();i++){
            if(pstart<=intervals[i][0] && pend>=intervals[i][1]) cnt++;
            else {
                pstart = intervals[i][0];
                pend = intervals[i][1];
            }


        }
        return intervals.size()-cnt;

    }
};