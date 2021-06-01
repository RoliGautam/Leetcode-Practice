class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        // create a vector
       vector<int>ans;
        // traverse the array
       for(int i = 0; i<n; i++){
           // push element from 0th index
            ans.push_back(nums[i]);
           // after pushing one element from start , push another element of remaining n whose index will start from n, so to move forwart add i.. 
           ans.push_back(nums[i+n]);
       }
        // return our answer
    return ans;
    }
};




--------------------------------------------------------------------------------------------------------------------------------------------------------------------
// another way..

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
       vector<int>ans;
        
        int x = 0 , y =  n,count = 0;
        
        while(count < nums.size()){
            
            ans.push_back(nums[x++]);
            
            ans.push_back(nums[y++]);
            count+=2;
        }
        return ans;
    
    }
};
