bool comp(vector<int> &a, vector<int>& b){
        return a[1] < b[1];
    }

class Solution {
public:

    int findMinArrowShots(vector<vector <int>>& points) {

        sort(points.begin(), points.end(), comp);

        int arrows = 1;
        int start = points[0][1];

        for(int i=1; i<points.size(); i++){
            if(points[i][0] > start){
                arrows++;
                start = points[i][1];
            }
        }

        return arrows;
    }
};