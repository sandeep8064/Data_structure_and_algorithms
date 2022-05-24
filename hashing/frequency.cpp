#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
 
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
        //mp[arr[i]]= mp[arr[i]+1;  //mp[arr[i]]= value of Mp[15(key)]=0
        mp[arr[i]]++; 
 
    // Traverse through map and print frequencies
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}

int main()
{
	int v[] = {15,12,13,12,13,13,18};
    countFreq(v,7);
}
