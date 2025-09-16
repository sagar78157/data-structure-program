#include <stdio.h>
int swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
printf("after swapping a and b are:%d and %d",*a,*b);
return 0;
}
int main(){
    int a,b;
    printf ("Enter a:");
    scanf("%d",&a);
     printf ("Enter b:");
    scanf("%d",&b);
    printf("before swapping a and b are:%d & %d\n",a,b);
    swap(&a,&b);
    return 0;
}