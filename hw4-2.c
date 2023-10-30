#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[6][3] = {
        {123,456,9000},
        {456,789,5000},
        {789,888,6000},
        {336,558,10000},
        {775,666,12000},
        {566,221,7000},
        };

    while(n){
        int q,w,t=0;
        scanf("%d%d",&q,&w);
        for(int o=0;o<6;o++){
            if(q==a[o][0]&&w==a[o][1]){
                    printf("%d\n",a[o][2]);
                    t=1;
                    break;
                }
            }
        if(t==0) printf("error");
        n=n-1;
    }
}
