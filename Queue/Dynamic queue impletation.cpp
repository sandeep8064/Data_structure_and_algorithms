#include<iostream>
#include<stack>
using namespace std;
 class queue
 {
 public:    
 int *arr;
 int index;
 int front;
 int size;
 int cap;
 
 queue()
  {   cap = 5;
      arr = new int[cap];
      index=0;
      front = -1;
      size=0;
  }
  
  
 
//* 
int size1()
{
    return size;
}  


//*
bool isempty()
{
    return size==0;
} 
    
    
//* 
void push(int x)
{
if(cap==size)
{
    int *newarr = new int(2*cap);
    int j=0;
    for(int i=index;i<cap;i++)
    {
        newarr[j]=arr[i];
        j++;
    }
    for(int i=0 ; i<index;i++)
    {
        newarr[j]=arr[i];
        j++;
    }
    front=0;
    index=cap;
    cap= 2*cap;
    delete []arr;
    arr=newarr;
    
}    
if(front==-1)              // setting our fron  index only once which will point to first element
 {                         // going circular is much better than shifting array elements to left
 front=0;
 }       
arr[index] = x;  
index = (index+1)%cap;   // this line will make out array circular
size++;
}    
   

//* 
int front1()
 {
     if(isempty())
     {
         cout<<" queue empty "<<endl;
         return -1;
     }
 return arr[front];    
 }  

void pop()
{
   if(isempty())
     {
         cout<<" queue empty "<<endl;
         return ;
     }
  front= (front+1)%cap;    // front will go circular in array
  size--;
} 
    
 };
 
int main()
 {
     queue s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);
     s.push(60);
     s.push(70);
     cout<<s.front1()<<endl;
     s.pop();
     s.pop();
     s.pop();
     cout<<s.front1()<<endl;
     cout<<s.size1()<<endl;
     cout<<s.isempty()<<endl;
     s.push(60);
     s.push(70);
     s.pop();
     s.pop();
     cout<<s.front1()<<endl;
     cout<<s.size1()<<endl;
     
     
 }