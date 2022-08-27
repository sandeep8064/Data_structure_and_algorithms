int main()
{
    int n = 5;
    int position;
    int mask = ~(1<<position);
     n = (n&mask);
     cout<<n;
    return 0;
}
