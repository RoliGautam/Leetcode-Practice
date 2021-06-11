#include <bits/stdc++.h>
using namespace std;

int getWater(int arr[], int n)
{
  //initialize our result as 0...
	int res = 0;
  //traverse the array...
	for(int i = 1; i < n - 1; i++)
	{  //create two array of left maximum height and right maximum height..
    	int lMax[n];
    	int rMax[n];
    //initialize left maximum height as arr[0]...
      lMax[0] = arr[0];
      //traverse array and update the left max if there is any other maximum number 
    	for(int i = 1; i < n; i++)
    		lMax[i] = max(arr[i], lMax[i - 1]);

     //initialize right maximum element as last element of array...
    	rMax[n - 1] = arr[n - 1];
      //traverse arrray from right side till first element and update it,if there is any other maximum element that rMax
    	for(int i = n - 2; i >= 0; i--)
    		rMax[i] = max(arr[i], rMax[i + 1]);
     //now simply take minimum of both left and right maximum height and subtract it from current element and add in our result,,
    	for(int i = 1; i < n - 1; i++)
    		res = res + (min(lMax[i], rMax[i]) - arr[i]);
    	return res;
	}
	return res;
}


int main() {
	int n;
    cin>>n;
   int arr[n];
   for(int i = 0; i<n; i++){
      cin>>arr[i];
   }
     cout<<getWater(arr, n);
    return 0;
}
