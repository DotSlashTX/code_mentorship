#include<stdio.h>
#include<string.h>
void up_to_low(int l, char *s);
int main(){
    char a[50];
    int l,n=0;
    printf("Enter the string:");
    scanf("%s",&a);
    l=strlen(a);
    up_to_low(l,a);
    for(int i=0;i<l;i++){
        if(a[i]!=a[l-(i+1)]){
            n+=1;
            break;
        }
    }
    if(n!=0){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}
void up_to_low(int l, char *s){
    for(int i=0;i<l;i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]=s[i]+32;
        }
    }
}
