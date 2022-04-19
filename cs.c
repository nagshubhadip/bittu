// C Program for counting sort
#include <stdio.h>
#include <string.h>
#define RANGE 255
 
// The main function that sort the given string arr[] in
// alphabatical order
void countSort(float arr[])
{
    int n = sizeof(arr)/sizeof(arr[0]);
    // The output character array that will have sorted arr
    float output[n];
 
    // Create a count array to store count of inidividul
    // characters and initialize count array as 0
    int count[110], i;
    memset(count, 0, sizeof(count));
 
    // Store count of each character
    for (i = 0; i<n ; ++i)
        ++count[(int)(arr[i]*10)-950];
 
    // Change count[i] so that count[i] now contains actual
    // position of this character in output array
    for (i = 1; i <= 110; ++i)
        count[i] += count[i - 1];
 
    // Build the output character array
    for (i = 0; i< n; ++i) {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }
 
    /*
     For Stable algorithm
     for (i = sizeof(arr)-1; i>=0; --i)
    {
        output[count[arr[i]]-1] = arr[i];
        --count[arr[i]];
    }
    
    For Logic : See implementation
    */
 
    // Copy the output array to arr, so that arr now
    // contains sorted characters
    for (i = 0; arr[i]; ++i)
        arr[i] = output[i];
}
 
// Driver program to test above function
int main()
{
    float arr[] = {102.6, 101.0, 100.7, 96.7, 99.1, 98.6}.; //"applepp";
 
    countSort(arr);
 
    printf("Sorted character array is %sn", arr);
    return 0;
}
