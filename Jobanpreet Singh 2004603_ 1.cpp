
//  We will see how we can find maximum sum of contiguous subarray using kadane algorithm 

//  c++ code 
#include <iostream>
using namespace std;
 
// Function to find the maximum sum of a contiguous subarray

int maxsum(int arr[], int n)
{
    // it will store  the maximum sum subarray found so far
    int maxSoFar = 0;
 
    // it will store  the maximum sum of subarray ending at the current position
    int currentsum= 0;
 
    
    for (int i = 0; i < n; i++)
    {
        // update the maximum sum of subarray "ending" at index `i` (by adding the
        // current element to maximum sum ending at previous index `i-1`)
    currentsum = currentsum + arr[i];
  
      
        // maximum sum should be more than the current element
      
      currentsum  = max(currentsum, arr[i]);
 
        // update the result if the current subarray sum is found to be greater
      
        maxSoFar = max(maxSoFar, currentsum);
    }
 
    return maxSoFar;
}
 
int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout << "The maximum sum of a contiguous subarray is " <<
            maxsum(arr, n);
  return 0;
  
}
  
