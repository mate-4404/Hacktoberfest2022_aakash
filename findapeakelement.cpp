#include <bits/stdc++.h>
using namespace std;
int findPeak(int arr[], int n)
{
    if (n == 1)      // when either first or last element is the peak element
      return 0;
    if (arr[0] >= arr[1])
        return 0;
    if (arr[n - 1] >= arr[n - 2])
        return n - 1;
		
    		// check if other elements can be the peak element
    for (int i = 1; i < n - 1; i++) {
 
	        // check for the presence of smaller neighbors
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
            return i;
    }
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 3, 20, 4, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is "
         << findPeak(arr, n);
    return 0;
}
