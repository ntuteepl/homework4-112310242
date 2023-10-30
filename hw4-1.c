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
printf("NO ");
break;
}
}
if ( i == j ){
printf("YES ");
}
n=n-1;
}
}
