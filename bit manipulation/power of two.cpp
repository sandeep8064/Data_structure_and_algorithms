int main()
{
    int n;
    cin>>n;
    
    //if we do and of a number and number-1 and do and if ans =0 then power of 2 
    if((n&(n-1))==0)
    cout<<"Power of two"<<endl;
    else
    cout<<"Not power of two"<<endl;

    return 0;
}