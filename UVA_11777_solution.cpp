#include<stdio.h>
int main()
{
    int T,cas=0;
    scanf("%d", &T);
    while(T--){
        int a,b,c,d,e,f,g,n,sum,x;
        scanf("%d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g);
        cas++;
        if(e<=f&&e<=g) x= (f+g)/2;
        else if(f<=e&&f<=g) x= (e+g)/2;
        else if(g<=e&&g<=f) x=(e+f)/2;
        sum= a+b+c+d+x;
        if(sum>=90) printf("Case %d: A\n",cas);
        if(sum>=80&&sum<90) printf("Case %d: B\n",cas);
        if(sum>=70&&sum<80) printf("Case %d: C\n",cas);
        if(sum>=60&&sum<70) printf("Case %d: D\n",cas);
        if(sum<60) printf("Case %d: F\n",cas);
    }
    return 0;
}
