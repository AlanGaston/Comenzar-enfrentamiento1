#include <stdio.h>  
#include <stdbool.h>


#define CONF_BAJA 'b'
#define CONF_MEDIA 'm'
#define CONF_ALTA 'a'


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
    float fuerza_psiquica; 
    
    switch(nivel_confianza){ 
        
        case CONF_BAJA:
            multiplicador= mult_conf_baja;
            break;
            
        case CONF_MEDIA:
             multiplicador= mult_conf_media;
            break;
            
        default: 
              multiplicador= mult_conf_alta;
    
    }    
    
    fuerza_psiquica = nivel_animo * multiplicador;
    
    return fuerza_psiquica;
}

    
    
int main(){ 
    
    int nivel_animo= 0; 
    char nivel_confianza= 'z'; 
    
    comenzar_enfrentamiento();
    
    nivel_animo = recibir_animo();
    //verificar_animo_recib(animo_recibido);
    
    nivel_confianza = recibir_confianza();
    //verificar_nivel_confianza_recib (confianza_recibida);
    
    float fuerza_psiquica=recibir_fuerza_psiquica(nivel_animo, nivel_confianza);
    
    printf ("fuerza calculada %f", fuerza_psiquica); 
    
    if(fuerza_psiquica < 65){
        
        printf ("\nResultado desconocido\n");
        printf ("\nDesaparicion de enfrentamiento\n");
        
    }else if((fuerza_psiquica > 65) && fuerza_psiquica < 67){
       
        printf ("\nResultado positivo\n");
        printf ("\nEleven quedo debil, despues del enfrentamiento\n");
        
    }else{ 
      (fuerza_psiquica > 67) && (fuerza_psiquica < 370);
        
        printf ("\nResultado positivo\n");
        printf ("\nEleven logra vencer al demogorgon por completo\n"); 
        
    }    
    
    return 0; 

}








