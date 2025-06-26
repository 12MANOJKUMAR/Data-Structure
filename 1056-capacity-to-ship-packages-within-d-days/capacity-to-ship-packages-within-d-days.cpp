class Solution {
public:
    static bool check(const int& capct, vector<int>& wt, int d) {
    int daycnt = 1, currentwt = 0;
        for (auto it : wt) {
            if (it > capct) return false;
            if (currentwt + it > capct) {
                daycnt++;
                currentwt = it;
            } else {
                currentwt += it;
            }
        }
        return daycnt <= d;
    }


    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end())-1;
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (high > low + 1) {
            int mid = low + (high - low) / 2;
            if (check(mid, weights, days)) {
                high = mid;
            } else {
                low = mid;
            }
        }
        return high;
    
            // because FFFFTTTT pattern → high is the first True
    }
};
