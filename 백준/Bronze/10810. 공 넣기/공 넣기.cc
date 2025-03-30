#include<stdio.h>
int main(){
    int n;
    int m;
    scanf("%d %d", &n,&m);
    int num[101]={0};
    for(int a=0;a<m;a++){
        int i,j,k;
        scanf("%d %d %d",&i,&j,&k);
        for(;i<=j;i++)
        num[i]=k;
    }
    for (int i = 1; i <= n; i++) {
        printf("%d ", num[i]);
    }
    return 0;
}