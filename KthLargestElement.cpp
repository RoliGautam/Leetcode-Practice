
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //sort our vector array in decreasing order 
        //used here greater<>() function to sort array decreasing order...
        sort(nums.begin(),nums.end(),greater<int>());
        //as we start indexing from 0 so , if k = 2 that means index will be 1(k-1) that is why we are returning nums[k-1] element
        return nums[k - 1];
    }
};

// eg: nums =  [3,2,1,5,6,4], k = 2
//     sorted array in decresing order : [6, 5, 4, 3, 2, 1]
//     so kth(2nd) largest element is on 1st(k-1)index which is 5..  
//     hence, outpul is 5;

// if we don't want to use greater function then after sorting use reverse function to reverse the array 
// reverse(nums.begin(),nums.end());

//solution using both (reverse and sort) function:
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        return nums[k - 1];
    }
};
