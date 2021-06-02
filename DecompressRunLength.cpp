// Question : https://leetcode.com/problems/decompress-run-length-encoded-list/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        // create a vector res..
        vector<int> res;
        // traverse vector for the frequncy and goes to next 2nd element as this will be our frequency for our value...
          for(int i= 0 ; i<nums.size(); i+=2){
              
              //this loop will goes till frequency and push res into array..
              for(int j = 0; j<nums[i]; j++){
                  res.push_back(nums[i+1]);
              }
          }
        return res;
    }
};
