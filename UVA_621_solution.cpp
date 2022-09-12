#include<stdio.h>
#include<string.h>
int main()
{
    int T;
    scanf("%d", &T);
    while(T--){
        char str[1000];
        int l;
        scanf("%s", str);
        l= strlen(str);
        if(!strcmp(str,"1")||!strcmp(str,"4")||!strcmp(str,"78")) printf("+\n");
        else if(str[l-1]=='5'&&str[l-2]=='3') printf("-\n");
        else if(str[0]=='9'&&str[l-1]=='4') printf("*\n");
        else if(str[0]=='1'&&str[1]=='9'&&str[2]=='0') printf("?\n");
    }
    return 0;
}