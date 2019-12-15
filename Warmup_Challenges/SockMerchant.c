#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i,n,j,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int count=0;
        for(int j=i;j<n;j++){
            if(a[i]==a[j])
                count++;
        }
        if(count%2==0){
            d++;
        }
    }
    printf("%d",d);
}