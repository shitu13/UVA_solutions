#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%llu %llu", &a,&b)!=EOF)
    {
        printf("%llu\n", a^b);
    }
    return 0;
}