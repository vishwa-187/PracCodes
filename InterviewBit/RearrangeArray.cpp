/*
Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.

Example:

Input : [1, 0]
Return : [0, 1]
Lets say N = size of the array. Then, following holds true :

All elements in the array are in the range [0, N-1]
N * N does not overflow for a signed integer
*/



void Solution::arrange(vector<int> &arr) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    int n = arr.size();
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    for (int i=0; i < n; i++)
        arr[i] += (arr[arr[i]]%n)*n;
 
    // Second Step: Divide all values by n
    for (int i=0; i<n; i++)
        arr[i] /= n;
    
}
