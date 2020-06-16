/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

**************************************************************/
 
#include <stdio.h>  
#include <stdbool.h>




void comenzar_enfrentamiento(){
    
    printf ("\n\nEl enfrentamiento esta por comenzar\n");
        
}

int animo_recibido;
    
int recibir_animo(){
    
  
  int min= 1; 
  int max= 100; 
 
    printf ("ingresar valor de animo: \n");
    scanf ("%i", &animo_recibido); 
 
  while( (animo_recibido<min) || (animo_recibido>max)){

    printf ("\nincorrecto, vuelva a ingresar el valor\n");
    scanf ("%i", &animo_recibido);
        
  }    
      
    printf ("\nBien hecho, valor correcto\n");
    printf ("\nComenzar enfrentamiento\n"); 
    
    return animo_recibido;
      
} 


bool verificar_animo_recib(int animo_recibido){ 
 
    bool animo_verificado=true; 
    bool animo_no_verificado=false; 
    int min_animo=1; 
    int max_animo=100; 
    
    if( (animo_recibido>=min_animo) && animo_verificado<=max_animo){
    
      printf ("animo_verificado\n");
      return animo_verificado;
      
     }else{ 
         
      printf ("animo_no_verificado\n");
      return animo_no_verificado; 
      
     }
     
}
    
char confianza_recibida; 
    
char recibir_confianza(){
    
  int error=0;
  char bajo='b';
  char medio='m';
  char alto='a'; 
 
    printf ("ingresar valor de confianza: \n");
    scanf ("%s", &confianza_recibida); 
    
  if( (confianza_recibida=='b') || (confianza_recibida=='m') || (confianza_recibida=='a')){
 
    printf ("\nBien hecho, valor correcto\n");
    printf ("\nEl nivel de confianza es: %s", &confianza_recibida); 
    printf ("\n");
    
  }else{
 
  while( error==0){
      
    printf ("\nincorrecto, vuelva a ingresar el valor\n");
    scanf ("%s", &confianza_recibida);
    
    if( (confianza_recibida=='b') || (confianza_recibida=='m') || (confianza_recibida=='a')){
      error=1;
      printf ("\nBien hecho, valor correcto\n");
      printf ("\nEl nivel de confianza es: %s", &confianza_recibida); 
      printf ("\n");
      
    }else{
        
        error=0;
        
    }
        
  }    
  
  }
      
    return confianza_recibida; 
      
} 
    
    

    
    
int main(){ 
      
    comenzar_enfrentamiento();
    recibir_animo();
    verificar_animo_recib(animo_recibido);
    recibir_confianza();
    return 0; 
}



