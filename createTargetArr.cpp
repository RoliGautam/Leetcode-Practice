class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        //create a vector and insert the element from nums at the index. 
        vector<int> target;
        
        for(int i = 0;i<index.size(); i++){
            //used insert(position, value) function ..
            target.insert(target.begin()+index[i], nums[i]);
        }
        return target;
    }
};
