#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   
   printf("El array de argumentos contiene: \n");

   int i;

   for (i = 0; i < argc; i++) {
      printf("argv[%d] : %s\n", i, argv[i]); // imprime todo los argumentos que se pasaron en la ejecucion
   }

   return 0;
}
