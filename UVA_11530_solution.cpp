#include<stdio.h>
#include<string.h>
int main()
{
    int T,cas=0;
    char str[10000];
    scanf("%d", &T);
    getchar();
    while(T--){
        int l,count,i;
        gets(str);
        cas++;
        l= strlen(str);
        for(i=0,count=0;i<l;i++){
            if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' ') count++;
            else if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x') count+=2;
            else if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y') count+=3;
            else if(str[i]=='s'||str[i]=='z') count+=4;
        }
        printf("Case #%d: %d\n",cas,count);

    }
    return 0;
}
