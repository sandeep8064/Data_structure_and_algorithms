int main()
{
    int n = 5;
    int mask = (1<<2);
    if((n&mask)>0)
     cout<<"set";
     else
     cout<<"not set";
    return 0;
}