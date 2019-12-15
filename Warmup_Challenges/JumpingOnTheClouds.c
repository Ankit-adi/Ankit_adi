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
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-2;i++){
        if(a[i+1]==0 && a[i+2]==0 && i<n-1){
            i++;
            count++;
        }
        else if(a[i+1]==0 && a[i+2]==1 && i<n-1){
            count++;
        }
        else if(a[i+1]==1 && a[i+2]==0 && i<n-1){
            i++;
            count++;
        }
    }
    if(a[n-1]==0 && a[n-2]==0){
        count++;
    }
    printf("%d",count);
}
