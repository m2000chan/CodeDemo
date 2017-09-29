#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  printf("The functions I had to define are strcpy and strncpy\n\n");
  printf("strcpy works by copying a string from one place, to another.  The header for strcpy is:\n\n\tchar *strcpy(char *dest, const char *src)\n\n");
  char s[] = "Hello World!";
  printf("Creating s with value: %s\n", s);
  char b[20];
  printf("Creating empty array b: %s\n", b);
  printf("Running command strcpy(b, s)...\n\n");
  strcpy(b,s);
  printf("\ts: %s\n", s);
  printf("\tb: %s\n", b);

  printf("strncpy works similar to strcpy, except it takes a number n, which is the number of characters copied from the source to the destination.  The header for strncpy is:\n\n\tchar *strncpy(char *dest, const char *src, size_t n)\n\n");

  char x[] = "abcdefghijklmnop";
  printf("Creaing x with value: %s\n", x);
  char y[10];
  printf("Creaing empty array y: %s\n", y);
  printf("Running command strncpy(y,x,5)...\n\n");
  strncpy(y,x,5);
  printf("\tx: %s\n", x);
  printf("\ty: %s\n", y);

  return 0;
}
