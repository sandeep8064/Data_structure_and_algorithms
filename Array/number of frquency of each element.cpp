#include<bits/stdc++.h>
using namespace std;

   void printFreq(int arr[], int N)
    {
        
        // Stores the frequency of an element
        int freq = 1;
        
       // Traverse the array arr[]
        for (int i = 0; i < N; i++)
        {
           
            // If the current element is equal
            // to the previous element
            if (arr[i] == arr[i + 1])
            {
               
                // Increment the freq by 1
                freq++;
            }
           
        // Otherwise,
            else {
                cout<<"Frequency of "<<arr[i - 1]<< " is: " << freq<<endl;
                // Update freq
                freq = 1;
            }
        }
        
        // Print the frequency of the last element
       cout<<"Frequency of "<<arr[N - 1]<< " is: " << freq<<endl;
    }
       
int main()
{
    int a[]={10,10,10,25,30,30};
    
    printFreq(a,6);
    cout<<endl;
   
     return 0;
}