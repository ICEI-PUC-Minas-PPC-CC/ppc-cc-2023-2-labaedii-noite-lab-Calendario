#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include "menu.h"
#include "structs.c"

//ESSA STRUCT É ONDE É DECLARADO O DIA, MES E ANO EM FORMATO DE NÚMERO INTEIRO
//PARA AUXILIAR O USUARIO A ENCONTRAR O DIA DA SEMANA
    int main(void)
    {
        int res, x, o, r=1, s=1, u=1, w=1, i=1, ano, mes, dia, bissexto;

        Data data;

        setlocale(LC_ALL,"portuguese");

        menu(o);
        scanf("%d", &o);

    switch(o)
    {

    case 1:

        do{

                printf("\nDigite o dia: ");
                scanf("%d", &data.dia);
                printf("Digite o mês: ");
                scanf("%d", &data.mes);
                printf("Digite o ano: ");
                scanf("%d", &data.ano);
                if (data.mes > 2 && data.mes <= 12)
                   {
                       data.mes = data.mes - 2;
                       x = 8;
                   }
               else
                    if(data.mes < 2)
                       {
                           data.ano = data.ano - 1;
                           x = 13;
                       }
                       res = (x + data.dia + 2 * data.mes + ((7 * data.mes) / 12) + data.ano % 7 +
                              data.ano / 4 % 7 - (3 * (1 + data.ano / 100)) / 4 % 7) % 7;



       switch(res)
       {
           case 0:
               printf("\nO Dia escolhido foi SÁBADO\n");
               break;
           case 1:
               printf("\nO Dia escolhido foi DOMINGO\n");
               break;
           case 2:
               printf("\nO Dia escolhido foi SEGUNDA\n");
               break;
           case 3:
               printf("\nO Dia escolhido foi TERÇA\n");
               break;
           case 4:
               printf("\nO Dia escolhido foi QUARTA\n");
               break;
           case 5:
               printf("\nO Dia escolhido foi QUINTA\n");
               break;
           case 6:
               printf("\nO Dia escolhido foi SEXTA\n");
               break;
       }

       if(data.mes > 12 || data.dia > 31 || data.dia < 1 || data.mes < 1)
        {
            system("cls");
            printf("\nDia, mês e ano inválidos !\n");
            printf("\n\nREINICIANDO SISTEMA...");
            Sleep(2000);
            system("cls");
            printf("\n\nSISTEMA REINICIADO.\n");
        }


    printf ("\n\nDeseja descobrir o dia da semana de outro dia ?");
    printf("\n[1]. Sim");
    printf("\n[2]. Nao\n");
    printf("\nSua resposta: ");
    scanf("%d", &r);

    }while(r==1);

        printf("\n\nFINALIZANDO SISTEMA...");
        Sleep(2000);
        system("cls");
        printf("\n\nSISTEMA FINALIZADO.\n");


    break;

    case 2:

        do{
                printf("\n\nDigite o dia: ");
                scanf("%d", &dia);
                printf("Digite o mês: ");
                scanf("%d", &mes);


            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
                    printf ("\n%d dias para o fim do mês\n", 31-dia);
                    else
                    if (mes !=2)
                        printf ("\n%d dias para o fim do mês\n", 30-dia);
                    else
                    if (ano %4 == 0)
                        printf("\n%d dias para o fim do mês\n",29-dia);
                    else
                        printf("\n%d dias para o fim do mês\n", 28-dia);

            if(mes > 12 || dia > 31 || dia < 1 || mes < 1)
                {
                    system("cls");
                    printf("\nDia, mês e ano inválidos !\n");
                    printf("\n\nREINICIANDO SISTEMA...");
                    Sleep(2000);
                    system("cls");
                    printf("\n\nSISTEMA REINICIADO.\n");
                }

                    printf("\n\nDeseja calcular novamente quantos dias para o fim do mês ?");
                    printf("\n[1]. Sim");
                    printf("\n[2]. Nao\n");
                    printf("\nSua resposta: ");
                    scanf("%d", &s);

                }while(s==1);

                printf("\n\nFINALIZANDO SISTEMA...");
                Sleep(2000);
                system("cls");
                printf("\n\nSISTEMA FINALIZADO.\n");

            break;

    case 3:

        do{
                printf("\n\nDigite o dia: ");
                scanf("%d", &dia);
                printf("Digite o mês: ");
                scanf("%d", &mes);

            if(dia > 31 || dia < 1 || mes > 12 || mes < 1)
                {
                    printf("\nMês ou dia inválidos");
                    printf("\n\nTentar novamente ?");
                    printf("\n[1]. Sim");
                    printf("\n[2]. Não");
                    printf("\n\nSua resposta: ");
                    scanf("%d", &w);
                }

        else
            {
                printf("\n\nFaltam %d dias e %d meses para o Natal 2023 !\n", 25-dia, 12-mes);

                printf("\nCalcular uma nova data ?");
                printf("\n[1]. Sim");
                printf("\n[2]. Não");
                printf("\n\nSua resposta: ");
                scanf("%d", &w);
            }

        }while(w==1);

        printf("\n\nFINALIZANDO SISTEMA...");
        Sleep(2000);
        system("cls");
        printf("\n\nSISTEMA FINALIZADO.\n");

    break;

    case 4:

        do{

        printf("\n\nDigite o dia: ");
        scanf("%d", &dia);
        printf("Digite o mês: ");
        scanf("%d", &mes);

        if(dia > 31 || dia < 1 || mes > 12 || mes < 1)
            {
                printf("\nMês ou dia inválidos");
                printf("\n\nTentar novamente ?");
                printf("\n[1]. Sim");
                printf("\n[2]. Não");
                printf("\n\nSua resposta: ");
                scanf("%d", &u);
            }

        else
            {
                printf("\n\nFaltam %d dias e %d meses para o Ano Novo 2024 !\n", 31-dia, 12-mes);

                printf("\nCalcular uma nova data ?");
                printf("\n[1]. Sim");
                printf("\n[2]. Não");
                printf("\n\nSua resposta: ");
                scanf("%d", &u);
            }

        }while(u==1);

        printf("\n\nFINALIZANDO SISTEMA...");
        Sleep(2000);
        system("cls");
        printf("\n\nSISTEMA FINALIZADO.\n");

    break;


    case 5:

    do{

        printf("\nDigite um ano para saber se é bissexto: ");
         scanf("%d", &bissexto);

         if (bissexto % 4 == 0)
                 printf("\nEste ano é bissexto.\n");
         else
                 printf("\nEste ano não é bissexto.\n");

                printf("\nQuer saber se algum outro ano é bissexto ?");
                printf("\n[1]. Sim");
                printf("\n[2]. Não");
                printf("\n\nSua resposta: ");
                scanf("%d", &i);

       }while(i==1);

        printf("\n\nFINALIZANDO SISTEMA...");
        Sleep(2000);
        system("cls");
        printf("\n\nSISTEMA FINALIZADO.\n");

        break;

    case 6:

        printf("\n\nFINALIZANDO SISTEMA...");
        Sleep(2000);
        system("cls");
        printf("\n\nSISTEMA FINALIZADO.\n");

        break;

    default:

        printf("\n\nFINALIZANDO SISTEMA...");
        Sleep(2000);
        system("cls");
        printf("\n\nSISTEMA FINALIZADO.\n");

        break;
    }
}
