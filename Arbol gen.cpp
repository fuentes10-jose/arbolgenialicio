#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x=0;
    do
    {
        printf("\n Coloca la opcion que quieras para saber el nombre de tu pariente: \n");
        printf("\n 1- primos ");
        printf("\n 2- hermano ");
        printf("\n 3- papa y sus hermanos(tias tios) ");
        printf("\n 4- mama y sus hermanos(tias tios) ");
        printf("\n 5- abuelos ");
        printf("\n 6- bisabuelos ");
        printf("\n 7- fin del programa  \n");
        printf("\n opcion que eligio: ");
        scanf("%d",&x);
        system("cls");
        switch(x)
        {
            case 1:
                printf("\n\n");
                printf("\n\t\t primos \t\t");
                printf("\n Cedrick Hernandez Navarro\n");
                printf("\n Lahalla Hernandez Navarro\n");
                printf("\n\n");
                break;

            case 2:
                printf("\n\n");
                printf("\n\t\t hermano \t\t");
                printf("\n Sebastian Barcenas Hernandez\n");
                break;

            case 3:
                printf("\n\n");
                printf("\n\t\t papa \t\t");
                printf("\n Noel Barcenas Morales \n ");
                printf("\n\t\(hermanos de mi papa)\t\t");
                printf("\n Susana Barcenas \n");
                printf("\n Oscar Barcenas \n");
                printf("\n Elideth Barcenas \n");
                break;

            case 4:
                printf("\n\n");
                printf("\n\t\tmama\t\t");
                printf("\n Elsy Viridiana Hernandez Ramirez  \n");
                printf("\n\t\t hermanos \t\t");
                printf("\n Jose Guadalupe Hernadez Ramirez \n");
               
                break;

            case 5:
                printf("\n\n");
                printf("\n\t\t abuelos \t\t");
                printf("\n Jose Arturo Hernandez Martinez \n");
                printf("\n Guadalupe Ramirez Cabrera \n");
                printf("\n\n");
                break;

            case 6:
                printf("\n\n");
                printf("\n\t\t bisabuelos \t\t");
                printf("\n Maria Montes de oca\n");
                printf("\n Antonio Barcenas Hernandez \n");
                printf("\n\n");
                break;
                default:
                printf("Fin del Programa \n");
                printf("\n\n");
        }
    }while(x);
    return 0;
}
