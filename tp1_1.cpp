#include <stdio.h>

int main()
{
    int var = 1;
    int *p_var = &var;
    
    //a)
    printf("Contenido del puntero: %d \n", *p_var);
    
    //b)
    printf("Direccion de memoria almacenada por el puntero: %p \n", p_var);
    
    //c)
    printf("Direccion de memoria de la var: %p \n", &var);
    
    //d)
    printf("Direccion de de memoria del puntero: %p \n", &p_var);
    
    //e)
    printf("Tamanio de memoria de la var: %d \n", sizeof(p_var));
    
    return 0;
}
