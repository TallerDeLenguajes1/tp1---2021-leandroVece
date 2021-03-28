#include <stdio.h>

//a)
int cuadrado(int num);
//b)
void cuadradoVoid(int num);
//c)
void mostrarDirCont (int num);
//d)
void invertir(int *a, int *b);
//e)
void ordenados(int a, int b);
//f) 
void ordenados2();

int main()
{
    int num, a, b;
    
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    
    printf("Cuadrado del numero: %d\n", cuadrado(num) );
    
    cuadradoVoid(num);
    
    mostrarDirCont(num);
    
    printf("\nFUNCION Invertir \n");   
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("Ingrese otro numero: ");
    scanf("%d", &b);
    invertir(&a, &b);
    printf("Luego del intercambio: %d, %d \n", a, b);
    
    printf("\nFUNCION Orden Ascendente \n");   
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("Ingrese otro numero: ");
    scanf("%d", &b);
    ordenados(a, b);
    
    ordenados2();
    
    getchar();
    return 0;
}

int cuadrado (int num)
{
	printf("\nFUNCION Cuadrado \n");
	return num * num;
}

void cuadradoVoid (int num)
{
	printf("\nFUNCION Cuadrado Void \n");    
	printf("Cuadrado del numero: %d\n", (num * num) );
}

void mostrarDirCont (int num)
{
	printf("\nFUNCION Mostrar contenido y direccion \n");
	printf("Contenido de variable recibida: %d \n", num);
    printf("Direccion de memoria de la variable recibida: %p \n", &num);
}

void invertir(int *a, int *b)
{
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void ordenados(int a, int b)
{
	if(a > b)
	{
		printf("Ordenados: %d, %d \n", b, a);
	}
	else
	{
		printf("Ordenados: %d, %d \n", a, b);
	}
}

void ordenados2()
{
	int a, b;
	
	printf("\nFUNCION Ordenados 2 \n");   
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("Ingrese otro numero: ");
    scanf("%d", &b);
    
    if(a > b)
	{
		printf("Ordenados: %d, %d \n", b, a);
	}
	else
	{
		printf("Ordenados: %d, %d \n", a, b);
	}
}
