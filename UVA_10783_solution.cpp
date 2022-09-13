#include<stdio.h>
int main()
{
    int T,cas=0;
    scanf("%d", &T);
    while(T--){
        int a,b,sum,i;
        scanf("%d %d", &a,&b);
        cas++;
        for(i=a,sum=0;i<=b;i++){
            if(i%2==1){
                sum+=i;
            }
        }
        printf("Case %d: %d\n", cas,sum);
    }
    return 0;
}
