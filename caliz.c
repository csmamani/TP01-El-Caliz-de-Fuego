#include <stdio.h>
#include <stdbool.h>

#define EDAD_MIN 17
#define INTELIGENCIA_MIN 0
#define INTELIGENCIA_MAX 10
#define FUERZA_MIN 0
#define FUERZA_MAX 10
#define BUENO 'B'
#define REGULAR 'R'
#define MALO 'M'
#define SALIR 'N'

//pre: funcion que recibe la variable capacidad magica en caracteres y los transforma en numeros
//post: esta funcion hace posible la comparacion entre estas variables.
void numerar_capacidad_magica (char capacidad_magica_char, int *capacidad_magica_num){
   if(capacidad_magica_char==MALO){
     *capacidad_magica_num=0;
   }
   if(capacidad_magica_char==REGULAR){
     *capacidad_magica_num=1;
   }
   if(capacidad_magica_char==BUENO){
     *capacidad_magica_num=2;
   }
 }

//pre: Funcion que pide y recibe la edad en numeros enteros
//post: Si la edad es mayor o igual a 17 el alumno es tenido en cuenta para la seleccion de campeones
void ingresar_edad(int *edad){
  printf("\nIngresar Edad:\n");
  scanf("%i", edad);
}

//pre: Funcion que valida que la inteligencia del alumno se encuentre entre el 0 y 10 inclusive
//post: La inteligencia ingresada es tomada por otra funcion
bool validar_inteligencia(int inteligencia){
  return (inteligencia>=INTELIGENCIA_MIN&&inteligencia<=INTELIGENCIA_MAX);
}

//pre: Funcion que valida que la fuerza del alumno se encuentre entre el 0 y 10 inclusive
//post: La fuerza ingresada es tomada por otra funcion
bool validar_fuerza(int fuerza){
  return (fuerza>=FUERZA_MIN&&fuerza<=FUERZA_MAX);
}

//pre: Funcion que valida que la capacidad magica del alumno se manifieste en estos unicos tres caracteres
//post: La capacidad magica ingresada es tomada por otra funcion
bool validar_capacidad_magica(char capacidad_magica_char){
  return (MALO==capacidad_magica_char||REGULAR==capacidad_magica_char||BUENO==capacidad_magica_char);
}

//pre: funcion que solicita la inteligencia en enteros al usuario
//post: la inteligencia es leida por esta funcion, previamente validada en "validar_inteligencia"
void ingresar_inteligencia(int *inteligencia){
  do{
    printf("Ingresar Inteligencia:\n");
    scanf("%i",inteligencia);
  } while(!validar_inteligencia(*inteligencia));
}

//pre: funcion que solicita la fuerza en enteros al usuario
//post: la fuerza es leida por esta funcion, previamente validada en "validar_inteligencia"
void ingresar_fuerza(int *fuerza){
  do{
    printf("Ingresar fuerza:\n");
    scanf("%i", fuerza);
  } while(!validar_fuerza(*fuerza));
}

//pre: funcion que solicita la capacidad magica en caracteres al usuario
//post: la capacidad magica es leida por esta funcion, previamente validada en "validar_inteligencia"
void ingresar_capacidad_magica(char *capacidad_magica_char){
  do{
    printf("Ingresar capacidad magica:\n");
    scanf(" %c",capacidad_magica_char);
  } while(!validar_capacidad_magica(*capacidad_magica_char));
}

int main(){
  char ingreso_alumno, capacidad_magica_char;
  int numero_alumno=0, edad, fuerza, inteligencia, capacidad_magica_num;
  int inteligencia_campeon=0, fuerza_campeon=0, numero_campeon= 0, capacidad_magica_campeon;

//pre: funcion que pide solo una tecla para poder proceder con la carga de alumnos, o no (en el caso de que se haya presionado N)
//post: recibe el valor ingresado por el usuario y procede con el proceso de seleccion
  printf("\n¿Desea ingresar un alumno? (Presione N para NO, cualquier otra tecla para SI).\n");
  scanf(" %c",&ingreso_alumno);
  while (ingreso_alumno!='N'){
    numero_alumno++;
    printf("Ingrese datos del alumno n° %i.", numero_alumno);
    ingresar_edad(&edad);
    if (edad>=EDAD_MIN){
      ingresar_inteligencia(&inteligencia);
      ingresar_fuerza(&fuerza);
      ingresar_capacidad_magica(&capacidad_magica_char);
      numerar_capacidad_magica(capacidad_magica_char,&capacidad_magica_num);
      if(inteligencia>inteligencia_campeon){
        inteligencia_campeon=inteligencia;
        fuerza_campeon=fuerza;
        capacidad_magica_campeon=capacidad_magica_num;
        numero_campeon=numero_alumno;
      } else{
        if(inteligencia==inteligencia_campeon&&fuerza>fuerza_campeon){
          fuerza_campeon=fuerza;
          numero_campeon=numero_alumno;
        } else{
          if(fuerza==fuerza_campeon&&capacidad_magica_num>capacidad_magica_campeon){
            capacidad_magica_campeon=capacidad_magica_num;
            numero_campeon=numero_alumno;
          }
        }
      }
    } printf("\n¿Desea ingresar otro alumno? (Presione N para NO, cualquier otra tecla para SI)\n");
      scanf(" %c",&ingreso_alumno);
  }
if(numero_campeon==0){
  printf("\nNo hay campeón :(.\n");
} else {
  printf("El campeón es el número %i :)\n", numero_campeon);
}
  return 0;
}
