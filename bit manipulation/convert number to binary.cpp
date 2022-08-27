int convert_to_binary(int n)
{
    int ans=0;
    int power=1;
    
    while(n>0)
    {
       int last_bit = (n&1); //extracting last bit and adding it to sum (e.g lastbit=1*10^0)
       
       ans+=power*last_bit;
       
       //update power from 2^0 t0 2^n
       power = power*10;
       
       n=n>>1;
    }
    return ans;
}
