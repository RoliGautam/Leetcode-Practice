class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int res = 0;
        for(int i = 0; i<arr.size(); i++){
            int t = 0;
            for(int j = 0; j<arr[i].size(); j++){
                t = t+arr[i][j];
            } 
            res = max(res, t);
        }
        return res;
    }
};

