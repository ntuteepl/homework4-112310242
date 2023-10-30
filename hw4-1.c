#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    while(n){
    scanf("%d",&i);
for (j = 2 ; j < i ; j++ ){
if ( i%j == 0 )
{
printf("no ");
break;
}
}
if ( i == j ){
printf("yes ");
}
n=n-1;
}
}
