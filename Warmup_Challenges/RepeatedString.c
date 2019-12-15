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
    long i,k,n,len,count=0;
    char str[n];
    scanf("%s",str);
    scanf("%ld",&n);
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]=='a'){
            count++;
        }
    }
    k=n/len;
    count=count*k;
    int m=n%len;
    for(i=0;i<m;i++){
        if(str[i]=='a'){
            count++;
        }
    }
    printf("%ld",count);

}

