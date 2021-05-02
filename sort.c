#include <stdio.h>

int main() {

    int i, temp,j,ary[10];
       printf("enter the array: ");

       for (i=0; i<10; i++) {
           scanf("%d", &ary[i]);
           printf("%d\t", ary[i]);
    }
    
    
    for(j=0; j<10; j++){
        for(i=0; i<9; i++) {
        if (ary[i+1]<ary[i]) {
            temp=ary[i];
            ary[i]=ary[i+1];
            ary[i+1]= temp;    
        }
       }
    }
       printf("\n");
        for(i=0; i<10; i++) {
          printf("%d\t", ary[i]);
         }
          
    return 0;
}
