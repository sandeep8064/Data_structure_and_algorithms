#include<bits/stdc++.h>
using namespace std;

// int maxsubarraysum(int a[],int n)
// {
//    
//     int sum=0;
//     int cur = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         sum+=a[i];
//        
//         if(sum<a[i])   //we will check if sum is less than element at i if yes we will update sum to a[i]
//             sum=a[i];
//            
//         if(sum>cur)  // we wii check if sum is greater than cur if yes update cur = sum and we will get max value
//             cur=sum;
//     }
//    
//     return cur;
// }

//kadens algorithm
int maxsubarraysum(int a[],int n)
{
    int currentsum=0;
    int maxsum= INT_MIN;;
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        maxsum=max(maxsum,currentsum);
        if(currentsum<0)  // To we add -1 to 3 ans will be 2 which is less than 3 itself//
          currentsum=0;
    }

    return maxsum;
}
       
int main()
{
    int a[]={2,3,-8,7,-1,2,3};
    
    cout<<maxsubarraysum(a,7)<<endl;
   
     return 0;
}