#include <windows.h>

int main(){
    
    int x, y, z, w;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite o valor a soma: ");
    scanf("%d", &y);
    
    z = x + y;
    w = pow(x, 3);
    printf("\nA soma de %d com %d equivalenyte  a %d\n ", x, y, z);
    printf("\n%d elevado ao cubo: %d\n", x, w);
    
    return 0;
}
