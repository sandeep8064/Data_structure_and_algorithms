#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr, int n)
{
	int low=0; // we will move mid only if we find mid=0 we will swap mid with low
	int mid =0; // if mid=2 we will swap mid with high and if m=1 we will do m++
	int high = n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{	swap(arr[low],arr[mid]);
			low++;
		 	mid++;
		}
	    else if(arr[mid]==1)
		{
			mid++;
		}
		else
		{
			swap(arr[high],arr[mid]);
		    high--;
		}
	}
}