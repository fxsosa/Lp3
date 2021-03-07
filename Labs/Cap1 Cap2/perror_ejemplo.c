#include <stdio.h>
#include <errno.h>
#include <string.h>

int main () {

  FILE * pFile;

  pFile = fopen ("strerror_ejemplo.xxx","rb"); //Se abre un archivo que no existe en modo lectura
  if (pFile == NULL) { //Si el archivo no existe
    perror("Error al abrir el archivo"); //Se imprime el mensaje mas la descripcion del error
  }//end if
  else {
    printf("No error");
    fclose (pFile);
  }//end else
  return 0;
}//end main
