class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //we use moore's voting algo....
        //we assume that our majority element is first element of array...
        int maj_ele = nums[0];
        //count will be 1 of first element..
        int count = 1;
        //now traverse the array to check....
        for(int i = 0; i<nums.size(); i++){
            //while traversing array if element is equal to majority element then we will increse our count......
            if(nums[i]==maj_ele){
                count++;
            }
            //if not equal then we just decrese our count ...
            else{
                count--;
                 //while decresing , if our count will became zero then , we change our majority element with current element of array.... and count will be 1
                if(count == 0){
                maj_ele = nums[i];
                    count = 1;
                }
            }
        }
        //return the majority element.....
        return maj_ele;
    }
};
