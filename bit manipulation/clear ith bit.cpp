int main()
{
    int n = 5;
    int mask = ~(1<<2);
     n = (n&mask);
     cout<<n;
    return 0;
}
