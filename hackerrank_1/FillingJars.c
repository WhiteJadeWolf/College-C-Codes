#include <stdio.h>
void main(){
    int n,m,s=0;
    scanf("%d%d",&n,&m);
    int jars[n];
    for(int i=1;i<=n;i++){
        jars[i-1]=0;
    }
    for(int i=0;i<m;i++){
        int a,b,k;
        scanf("%d%d%d",&a,&b,&k);
        for(int j=a-1;j<b;j++){
            jars[j]+=k;
        }
    }
    for(int i=0;i<n;i++){
        s+=jars[i];
    }
    printf("%d",s/n);
}