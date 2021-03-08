#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{    /* checking space availability */
     int num_items;
     scanf("%d",&num_items);
     int *a = malloc(num_items * sizeof(int));
     if (a == NULL)
     {
         printf("Out of memory\n");
         exit(1);
     }
     else
     {
         printf("we have memory\n");
     } 
     
     /* allocating space for multidimensional Arrays M *N */
     int **p;
     int i,M,N;
     printf("give the dimendon of 2D matrics in M*N format");
     scanf("%d %d",&M,&N);

      p = (int **) malloc(M * sizeof(int));

      for (i =0; i<M; i++){
          p[i] = (int *) malloc(N * sizeof(int));
      }
    
    /* de-allocating space for multidimensional Arrays M *N */
    for (i =0; i<M; i++){
          free(p[i]);
         }
    free(p);
    p = NULL;
     
    return 0;
}

