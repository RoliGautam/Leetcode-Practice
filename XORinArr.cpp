class Solution {
public:
    int xorOperation(int n, int start) {
        //lets initially result is 0..
        int res = 0;
        //loop to traverse elements...
        for(int i = 0; i<n; i++){

            //as we know that elements of array will be start+2*i, so no need to create a new array, just find the xor of elements with res..
            res = res ^ start + 2*i;
        }
        return res;
    }
};
