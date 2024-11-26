#include <windows.h>

int main(){
 
 // Trabalhando com tamanho de campos....
 
 printf("%d\n", 6);
 printf("%5\n", 6);
 printf("%10d\n", 6);
 printf("10d\n", 700);
 printf("%c\n", 'T');
 printf("%1c\n", 'A');
 printf("%2c\n", 'B');
 printf("%3c\n", 'C');
 printf("%4c\n", 'D');
 printf("%10f\n", 23.8);
 
 // Alinhado os caracteres á esquerda com simbolos....
 printf("%-10d\n", 700);
 
 return 0;
}
