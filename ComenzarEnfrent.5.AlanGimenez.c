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
    
bool verificar_nivel_confianza_recib ( char confianza_recibida){ 
 
    bool confianza_verificada=true; 
    bool confianza_no_verificada=false; 
    char bajo='b';
    char medio='m';
    char alto='a'; 
    
    if( (confianza_recibida=='b') || (confianza_recibida=='m') || (confianza_recibida=='a')){
    
      printf ("confianza_verificado\n");
      return confianza_verificada;
      
    }else{ 
         
      printf ("confianza_no_verificado\n");
      return confianza_no_verificada; 
      
    }
     
}
    
float  recibir_fuerza_psiquica ( int nivel_animo, char nivel_confianza){
    float multiplicador=0.0F;
    float mult_conf_baja=0.7F;
    float mult_conf_media=1.3F;
    float mult_conf_alta=3.7F;
    char conf_baja;
    char conf_media;
    char conf_alta;
    float fuerza_psiquica=nivel_animo * multiplicador;
    
    switch(nivel_confianza){ 
        
        case 'conf_baja':
            multiplicador= mult_conf_baja;
            break;
            
        case 'conf_media':
             multiplicador= mult_conf_media;
            break;
            
        default: 
              multiplicador= mult_conf_alta;
    
    }    
    
    return fuerza_psiquica;
}

    
    
int main(){ 
    
    float fuerza_psiquica=recibir_fuerza_psiquica(nivel_animo, nivel_confianza);
    
    comenzar_enfrentamiento();
    
    recibir_animo();
    verificar_animo_recib(animo_recibido);
    
    recibir_confianza();
    verificar_nivel_confianza_recib (confianza_recibida);
    
    return 0; 
}






