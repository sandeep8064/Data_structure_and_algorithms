#include<bits/stdc++.h>
using namespace std;

int maxslidingwindow(int arr[], int n, int k)
{
   if (n < k) {
        cout << "Invalid";
        return -1;
    }
 
    // Compute sum of first window of size k
    int max_sum = 0;
    for (int i = 0; i < k; i++)
        max_sum += arr[i];
 
    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int window_sum = max_sum;
    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }
 
    return max_sum;
}
       
int main()
{
    int a[]={1,8,30,-5,20,7};
    
    cout<<maxslidingwindow(a,6,3)<<endl;
   
     return 0;
}