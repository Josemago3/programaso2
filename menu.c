#include <stdio.h>
#include <unistd.h>

int G;
char comensal[20];
void guardar1(char nombre[50], char comensal[20], char com [100]);
void guardar2(char nombre[50], char comensal[20], char com [100]);
void guardar3(char nombre[50], char comensal[20], char com [100]);
void guardar4(char nombre[50], char comensal[20], char com [100]);
void guardar5(char nombre[50], char comensal[20], char com [100]);
void guardar6(char nombre[50], char comensal[20], char com [100]);

int main(void) {

pid_t pidC;
   

	printf("Bienvenido. \n");
	printf("Ingrese su nombre. (max 20)\n");
	scanf("%s",comensal);
	
	
	do{
	
	printf("Quedesea ordenar hoy. \n");
	printf("las opciones son: \n");
	printf("1.-Desayuno.\n");
	printf("2.-Comida.\n");
	printf("3.-Cena.\n");
	printf("4.-Desayuno y Comida. \n");
	printf("5.-Comida y cena. \n");
	printf("6.-Desayuno, Comida y Cena. \n");	
	printf("7.-SALIR. \n");
	scanf("%d",&G);

	switch(G)
		{
		case 1:
			if(pidC>0){
			}
			else if(pidC==0){
			printf("El desayuno es: \n");
				printf("Hot cakes, fruta con yoghurt y jugo de naranja.\n");
                guardar1(" desayuno ", comensal, "Hot cakes, fruta con yoghurt, jugo de naranja.\n");
				break;
			}
			break;
		case 2:
			if(pidC>0){
			}
			else if(pidC==0){
			printf("La comida es: \n");
				printf("Arrachera con queso fundido.\n");
                guardar2(" comida ", comensal, "Arrachera con queso fundido.\n");
				break;
			}
			break;
		case 3:
			if(pidC>0){
			}
			else if(pidC==0){
			printf("La cena es: \n");
				printf("Empanada de atun y cafe.\n");
                guardar3(" cena ", comensal, "Empanada de atun y cafe.\n");

				break;
			}
			break;
		case 4:
			if(pidC>0){
			}
			else if(pidC==0){
			printf("El desayuno y la comida es: \n");
				printf("Hot cakes, fruta con yoghurt, jugo de naranja y arrachera con queso fundido.\n");
				guardar4(" desayuno_comida ", comensal, "Hot cakes, fruta con yoghurt, jugo de naranja y arrachera con queso fundido.\n");
				break;
			}
			break;
		case 5:
			if(pidC>0){
			}
			else if(pidC==0){
			printf("La comida y la cena es: \n");
				printf("Arrachera con queso fundido con empanada de atun y cafe .\n");
				guardar5(" comida_cena ", comensal, "arrachera con queso fundido con empanada de atun y cafe.\n");

				break;
			}
			break;
		case 6:	
			if(pidC>0){
			}
			else if(pidC==0){
			    printf("El desayuno, la comida y cena es: \n");
				printf("Hot cakes, fruta con yoghurt, jugo de naranja, arrachera con queso fundido con empanada de atun y cafe.\n");
                guardar6(" desayuno_comida_cena ", comensal, "Hot cakes, fruta con yoghurt, jugo de naranja, arrachera con queso fundido con empanada de atun y cafe.\n");
				break;
			}
			break;
		default: 
			return 0;
		}
	}while(G!=7);
	return 0;	
}

void guardar1(char nom[50], char comensal[20], char com [100]){
    FILE* fichero;
    fichero = fopen("desayuno.txt", "a+");
    fputs(comensal, fichero);
    fputs(nom, fichero);
    fputs(com, fichero);
    fclose(fichero);
    return;
}

void guardar2(char nom[50], char comensal[20], char com [100]){
    FILE* fichero;
    fichero = fopen("comida.txt", "a+");
    fputs(comensal, fichero);
    fputs(nom, fichero);
    fputs(com, fichero);
    fclose(fichero);
    return;
}

void guardar3(char nom[50], char comensal[20], char com [100]){
    FILE* fichero;
    fichero = fopen("cena.txt", "a+");
    fputs(comensal, fichero);
    fputs(nom, fichero);
    fputs(com, fichero);
    fclose(fichero);
    return;
}

void guardar4(char nom[50], char comensal[20], char com [100]){
    FILE* fichero;
    fichero = fopen("desayuno_comida.txt", "a+");
    fputs(comensal, fichero);
    fputs(nom, fichero);
    fputs(com, fichero);
    fclose(fichero);
    return;
}

void guardar5(char nom[50], char comensal[20], char com [100]){
    FILE* fichero;
    fichero = fopen("comida_cena.txt", "a+");
    fputs(comensal, fichero);
    fputs(nom, fichero);
    fputs(com, fichero);
    fclose(fichero);
    return;
}

void guardar6(char nom[50], char comensal[20], char com [100]){
    FILE* fichero;
    fichero = fopen("desayuno_comida_cena.txt", "a+");
    fputs(comensal, fichero);
    fputs(nom, fichero);
    fputs(com, fichero);
    fclose(fichero);
    return;
}


