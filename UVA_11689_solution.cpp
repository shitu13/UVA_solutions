#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        int a,b,c,sum=0,n=0,m=0;
        scanf("%d %d %d", &a, &b, &c);
        sum= a+b;
        while(sum>=c){
        n= sum/c;
        m= m+n;
        sum= n+(sum%c);
        }
        printf("%d\n", m);
    }
    return 0;
}
