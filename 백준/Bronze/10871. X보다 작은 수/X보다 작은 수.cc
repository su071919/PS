#include<stdio.h>
int main(){
    int a;
    int b;
    int num[10000];
    scanf("%d", &a);
    scanf("%d", &b);
    for(int i=0;i<a;i++){
        scanf("%d", &num[i]);
        if(b>num[i]){
            printf("%d ", num[i]);
        }
    }


    return 0;
}