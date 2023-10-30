#include <stdio.h>

main()
{
    int n;
    scanf("%d",&n);
    int p[n][n],a,b;
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
    scanf("%d",&p[i][j]);
        }
    }
    for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(p[i][j]>max){
                max=p[i][j];
                a=i;
                b=j;
                }
        }
    }
     for(int i=0;i<n;i++){
        p[a][i]=0;
        p[i][b]=0;
     }

    printf("boy %d pair with girl %d\n",a+1,b+1);
    max=0;
    }
}
