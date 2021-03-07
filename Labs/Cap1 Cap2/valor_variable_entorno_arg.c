#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
   char *pathPtr;

   if (argc!=2) {
	printf("No se recibio la variable o hay argumentos demas\n");
	return 0;
   }

	pathPtr = (char *) getenv(argv[1]); // Para ejecutar pasar un argumento una variable de entorno, ejemplo PATH

	if (pathPtr == NULL) {
	   printf("No path environment variable was found for %s\n",argv[1]);
	}
    else {
	   printf("Contents of %s: %s\n",argv[1], pathPtr);
	   return 0;
	}
return 0;
}
