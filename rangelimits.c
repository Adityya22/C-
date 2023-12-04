#include<stdio.h>
#include<limits.h>
int main(){
    int x=-2147483648+2147483648;
    printf("%d\n",x);
    printf("%d\n",INT_MAX);
    printf("%d\n",INT_MIN);
    printf("%ld\n",LONG_MAX);
    printf("%ld\n",LONG_MIN);
    printf("%lld \n",LLONG_MAX);
    printf("%lld \n",LLONG_MIN);
    // printf("%d,%d \n,%ld,%ld \n,%lld,%lld \n",INT_MAX,INT_MIN,LONG_MAX,LONG_MIN,LLONG_MAX,LLONG_MIN);
    return 0;
}