#include <stdio.h>


void array_print (int *A){

    int count = sizeof(A);

    for (size_t i = 0; i < count; i++)
    {
        printf("%d",A[i]);
    }
    
    

}


 int main(int argc, char const *argv[])
 {
     int A[] = {1,2,3,4,5};
     array_print(A);
     return 0;
 }
 