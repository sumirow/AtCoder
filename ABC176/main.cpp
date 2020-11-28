//20201128 B
#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;

char s[200010];
int main(){
    scanf("%s",s);
    int len=strlen(s);
    int sum=0;
    for(int i=0;i<len;i++)sum+=s[i]-'0';
    if(sum%9==0){
        puts("Yes");
    }else{
        puts("No");
    }
}



