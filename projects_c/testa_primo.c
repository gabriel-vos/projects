#include <stdio.h>
#include <stdlib.h>

int naoeprimo(int num)
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int num, yn;
    char sn;
    do
    {
        system("cls");
        printf("Digite um numero: ");
        scanf("%d", &num);
        yn = naoeprimo(num);
        system("cls");
        if (yn == 1)
        {
            printf("O numero digitado nao e primo.");
        }
        else
        {
            printf("O numero digitado e primo.");
        }
        while (1)
        {
            printf("\n\nDeseja retornar ao menu? [s/n]: ");
            scanf(" %c", &sn);
            if (sn == 'n')
            {
                system("cls");
                printf("Ate logo!\n\n");
                return 0;
            }
            else if (sn == 's')
            {
                break;
            }
            else
            {
                system("cls");
                printf("Opcao invalida! Tente novamente.");
            }
        }
    } while (sn == 's');
    return 0;
}