#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int dado(int num)
{
    srand(time(0));
    return 1 + (rand() % num);
}

void desejaretornar(char sn)
{
    printf("\n\nDeseja retornar ao menu? [s/n]: ");
    scanf("%s", &sn);
    if (sn == 's')
    {
        sleep(1);
        main();
    }
    else if (sn == 'n')
    {
        system("cls");
        printf("Ate logo!\n\n");
        exit(0);
    }
}

int main()
{
    char sn;
    int i, op;
    system("cls");
    printf("\t\t*** Menu ***\n");
    printf("\n1. Sorteia um numero entre 0 e 6");
    printf("\n2. Sorteia um numero entre 0 e um numero digitado");
    printf("\n\n0. Sair");
    printf("\n\n\tSelecione uma opcao: ");
    scanf("%d", &op);
    if (op == 1)
    {
        i = 6;
        system("cls");
        printf("O numero sorteado foi %d.", dado(i));
        sleep(1);
        desejaretornar(sn);
    }
    else if (op == 2)
    {
        system("cls");
        printf("Digite um numero: ");
        scanf("%d", &i);
        system("cls");
        sleep(1);
        printf("O numero sorteado foi %d.", dado(i));
        sleep(1);
        desejaretornar(sn);
    }
    else if (op == 0)
    {
        system("cls");
        printf("Ate logo!\n\n");
        exit(0);
    }
    else
    {
        printf("\nOpcao invalida! Tente novamente.");
        sleep(2);
        system("cls");
        main();
    }
}
