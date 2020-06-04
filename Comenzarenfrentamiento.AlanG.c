/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
# incluye <demogorgon.h>


# define  MSJ_ENFRENTAMIENTO;
# define  INGRESO_INVALIDO;
# define  MSJ_ANIMO;

const  int DEF_ANIMO = 0 ;
const  int MIN_ANIMO = 1 ;
const  int MAX_ANIMO = 100 ;

const  bool ANIMO_VERIFICADO = verdadero ;
const  bool ANIMO_NO_VERIFICADO = falso ;



/*Pre: -.
 *Post: Anuncia el comienzo del enfrentamiento mediante consola.
*/
void comenzar_enfrentamiento(){

    printf MSJ_ENFRENTAMIENTO; 
     
}

int main(){

 int recibir_animo{ 
    
    int var_animo; 
    
    printf (MSJ_ANIMO); 
    printf ("%i", &var_animo); 
    scanf ("%i", &recibir_animo);
    scanf ("%i", &recibir_animo); 
    
    
  while( ("%i", &recibir_animo==MAX_ANIMO) && (var_animo==ANIMO_VERIFICADO){
  
    printf ("Estoy listo para pelear");
    scanf (MSJ_ENFRENTAMIENTO); 
    
  }
  
    return0; 
    
 }    
     
    
    

/*error:advertencia: el formato ‘% i’ espera un argumento de tipo ‘int’, pero el argumento 2 tiene el tipo ‘int *’ [-Wformat =]*/  
    
    
    
    
    
    
    


