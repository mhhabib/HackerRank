#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hh,mm,ss;
    char ch[10];
    scanf("%d:%d:%d%s",&hh,&mm,&ss,&ch);
    if(strcmp(ch,"PM")==0 && hh==12)
        hh=12;
    else if(strcmp(ch,"PM")==0 && hh!=12)
        hh+=12;
    else if(strcmp(ch,"AM")==0 && hh==12)
        hh=00;
    printf("%02d:%02d:%02d\n",hh,mm,ss);
    return 0;
}

