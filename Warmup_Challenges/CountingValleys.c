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
    long i,n,d=0,k=0,count=0;
    char a[n];
    scanf("%ld",&n);
    for(i=0;i<n;i++){
        scanf("%s",a);
    }
    for(int i=0;i<n;i++){
        if(a[i]=='U'){
            k++;
            if(k==0){
                count++;
            }
        }
        else if(a[i]=='D'){
            k--;
        }
    }
    printf("%ld",count);
}
