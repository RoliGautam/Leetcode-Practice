class Solution {
public:
    
        int countPrimeSetBits(int left, int right) {
            //initially let count is 0...
        int count = 0;
            //traverse from left to right...
        for (int i = left; i <= right; i++){
            //check no. of 1's in binary representation of number...
            int bits = __builtin_popcount(i);
            //if number of bits (1's) are prime then , increase count by 1...
            if (isPrime(bits)){
                count++;
            }
        }
            //return total count...
        return count;
    }
    
    //function to check for prime....
        bool isPrime(int n){
            if (n <=1){
                return false;
            }
           for(int i = 2; i<=n/2; i++){
               if(n%i == 0) return false;
           }
            return true;
        }


};
