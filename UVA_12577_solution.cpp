#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int cas=0;
    while(scanf("%s", &str)!=EOF){
        cas++;
            if(str[0]=='*') break;
    else if(str[0]=='H'&&str[1]=='a'&&str[2]=='j'&&str[3]=='j')
        printf("Case %d: Hajj-e-Akbar\n", cas);
    else if(str[0]=='U'&&str[1]=='m'&&str[2]=='r'&&str[3]=='a'&&str[4]=='h')
        printf("Case %d: Hajj-e-Asghar\n", cas);
    }
    return 0;
}
