#include<stdio.h>
#include<limits.h>
int main(){
    int x=(INT_MIN-1);
    int y=(INT_MAX+1);
    printf("%d\n",x);   //O/P :2147483647 ; overflows and move anti-clockwise
    printf("%d\n",y);   //O/P : -2147483648; overflows and move anti-clockwise

}
