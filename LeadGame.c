#include <stdio.h>

int main(void) {
    int n,w,l,i,lead=0,m;
    scanf("%d",&n);
    m=2*n;
    int A[m],K[n];
    for(i=0;i<m;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<m;i++){
        if(i%2!=0)
            lead=A[i-1]-A[i];
    }
    if(lead<0)
        w=1;
    else
        w=2;
    for(i=0;i<m;i++){
        if(i%2!=0 && i!=0){
            lead=A[i-1]-A[i];
            if(lead<=0)
                lead=-lead;
        }    
        K[i-1]=lead;
    }
    int key=K[0];
    for(i=0;i<n;i++)
        if(key>K[i])
            l=K[i];
    printf("%d %d",w,l);
	return 0;
}

