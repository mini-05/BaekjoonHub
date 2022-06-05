#include <iostream>
int d(int n)
{
    int hun,ten,one,c=0;
    if(n<100)
        return n;
    else
    {
        for(int i=99;i<=n;i++)
        {
            if(((i/100)-((i/10)%10))==(((i/10)%10)-(i%10)))
                c++;
        }
        return (c+99);
    }
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << d(n);
    return 0;
}