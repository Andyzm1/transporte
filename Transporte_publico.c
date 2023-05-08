//Andres Zurita
#include <stdio.h>
#include<string.h> 
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
void menu();
int precioruta(){
    int usuario=1, ruta, distancia;
    float precio;
    while (usuario!=5)
    {
    printf("Usuario:%d\n",usuario);
    printf("¿Cual es su tipo de ruta?\n 1. Urbana\n 2. Interurbana\n 3. Internacional\n");
    scanf ("%d", &ruta);
    switch (ruta)
    {
    case 1:
        printf("Su ruta es Urbana\n");
        printf("Ingrese la disctancia en kilometros a recorrer\n");
        scanf("%d", distancia);
        precio= distancia*0,10;

        break;
    case 2:
        printf("Su ruta es Interurbana\n");
        printf("Ingrese la disctancia en kilometros a recorrer\n");
        scanf("%d", distancia);
        precio= distancia*0,15;
        break;
    case 3:
        printf("Su ruta es Internacional\n");
         printf("Ingrese la disctancia en kilometros a recorrer\n");
        scanf("%d", distancia);
        precio= distancia*0,20;
        break;
    default:
        printf("Ruta invalida, intentelo nuevamente\n");
        break;
    }
    printf("");
    }
    
    
}
void operatrans(){
    int ui;
    for (ui=0; ui == 5; ui++)
    {
        precioruta();
    }
    
}
void redes(){

}
void opciones(op){
     switch (op)
    {
    case 1:
    operatrans();
        break;
    case 2:
    redes();
        break;
    case 3:
    printf("Tenga un lindo dia");
        exit(0);    
    default:
        printf("Opcion invalida, intentelo nuevamente\n");
        menu();
        break;
    }
}
void menu(){
    int op;
    while (op!=4){
    printf("Seleccione una opcion\n");
    printf("1. Operacion de transporte\n");
    printf("2. Intereacturar en la red social\n");
    printf("3. Salir\n");
    scanf("%d", &op); 
    opciones(op);
    }
    
    
}
int main (void)
{
    int acep, u1, u2, u3, c1, c2, c3, inten, icus;
    char us1[10]="andres";
    char us2[10]="user";
    char us3[10]="cisco";
    int cus1=25024, cus2=67890, cus3=12345;
    char ius[5];
    inten=3;
    do {
        printf("Log in\n");
        printf("Ingrese el usuario\n");
        scanf("%s", &ius);
        printf("Ingrese la contraseña\n");
        scanf("%d", &icus);
        u1 = strcmp(ius,us1);
        u2 = strcmp(ius,us2);
        u3 = strcmp(ius,us3);
        if (u1==0 && cus1==icus)
        {
            printf("Usuario y contraseña correctos\n");
            acep=0;
        }
        else if (u2==0 && cus2==icus)
        {
            printf("Usuario y contraseña correctos\n");
            acep=0;
        }
        else if (u3==0 && cus3==icus)
        {
             printf("Usuario y contraseña correctos\n");
            acep=0;
        }
        else{
            inten=inten-1;
            printf("Usuario o contraseña incorrectos.\n Intentelo nuevamente.\n Le quedan %d intentos\n", inten);
        }
    }while(acep!=0 || inten==0);
    if (acep==0)
    {
        printf("Imposible ingresar, intentelo en otro momento\n");
        exit(0);
    }
    
    menu();
}