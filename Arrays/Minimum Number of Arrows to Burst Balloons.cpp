class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;
        sort(points.begin(), points.end(), [] (auto &p1, auto&p2) {
            return p1[1] < p2[1];
        });
        int end = points[0][1];
        int res = 1;
        for (auto point: points)
        {
            if (point[0] <= end) continue;
            res++;
            end = point[1];
        }
        return res;
    }
};
