#include <stdio.h>
#include <windows.h>
#include <locale.h>

//ESSA STRUCT É ONDE É DECLARADO O DIA, MES E ANO EM FORMATO DE NÚMERO INTEIRO
//PARA AUXILIAR O USUARIO A ENCONTRAR O DIA DA SEMANA
typedef struct{
int dia;
int mes;
int ano;
}data;

    int main(void)
    {
        int res, x;
        char r;

        data data;

        setlocale(LC_ALL,"portuguese");

        printf("\n ===== BEM VINDO AO CALENDÁRIO =====\n");

        printf("\n\nVocê deseja iniciar o calendário ? [S/N] ");
        scanf("%c", &r);

        if(r=='s'){

        printf("\nDIGITE O DIA: ");
        scanf("%d", &data.dia);
        printf("\nDIGITE O MÊS: ");
        scanf("%d", &data.mes);
        printf("\nDIGITE O ANO: ");
        scanf("%d", &data.ano);
        if (data.mes > 2)
       {
           data.mes = data.mes - 2;
           x = 8;
       }
       else
       {
           data.ano = data.ano - 1;
           x = 13;
       }
       res = (x + data.dia + 2 * data.mes + ((7 * data.mes) / 12) + data.ano % 7 +
              data.ano / 4 % 7 - (3 * (1 + data.ano / 100)) / 4 % 7) % 7;

        if(data.mes > 12){
            printf("\nMÊS NÃO ENCONTRADO !\n");
            return 0;
        }

       switch(res){
       case 0:
           printf("\nO DIA ESCOLHIDO FOI SÁBADO\n");
           break;
       case 1:
           printf("\nO DIA ESCOLHIDO FOI DOMINGO\n");
           break;
       case 2:
           printf("\nO DIA ESCOLHIDO FOI SEGUNDA\n");
           break;
       case 3:
           printf("\nO DIA ESCOLHIDO FOI TERÇA\n");
           break;
       case 4:
           printf("\nO DIA ESCOLHIDO FOI QUARTA\n");
           break;
       case 5:
           printf("\nO DIA ESCOLHIDO FOI QUINTA\n");
           break;
       case 6:
           printf("\nO DIA ESCOLHIDO FOI SEXTA\n");
           break;
       }

    return 0;
    }
    else{
    printf("\n\nFINALIZANDO SISTEMA...");
    Sleep(2000);
    system("cls");
    printf("\n\nSISTEMA FINALIZADO.\n");
    return 0;
    }
    }
