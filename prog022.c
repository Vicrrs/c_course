#include <stdio.h>

int main()
{

    char s[10];

    printf("Digite algo (Scand convencional): \n");
    gets(s);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
    puts(s);
    puts("");

    printf("Digite algo (Scand convencional): ");
    fgets(s, 10, stdin);
    fflush(stdin);

    printf("Resultado: %s\n\n", s);
}
