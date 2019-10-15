## Algoritmos y Programación I

## Curso Mendez

# TP1 - El Cáliz de Fuego

```
Fecha Presentación 28/03/
Fecha Entrega 11/04/
```

Curso Mendez

### Introducción

El ​ **Torneo de los Tres Magos** ​ es un concurso mágico celebrado entre los tres
principales colegios de magia de Europa: el Colegio Hogwarts de Magia y
Hechicería, el Instituto Durmstrang y la Academia de Magia Beauxbatons, cada
escuela representada por un ​ **campeón** ​. Los campeones seleccionados compiten en
tres pruebas -tradicionalmente juzgados por los directores o directoras de las
escuelas participantes- diseñadas para probar la capacidad mágica, la inteligencia y
el coraje. Los campeones compiten por el honor y la gloria de ganar el Torneo, por
la Copa de los Tres Magos y por un premio monetario.
A cada escuela participante se le permite tener un campeón para que la represente
durante el Torneo. Los estudiantes que deseen participar deben escribir sus
nombres y la escuela a la que asisten en un pedazo de pergamino e insertarlo en el
**cáliz de fuego** ​. El cáliz es un juez imparcial, y selecciona al que considera ser el
mejor estudiante de cada escuela. A la hora señalada, el cáliz expulsa los nombres,
haciendo a cada estudiante seleccionado el campeón oficial de su escuela. Cada
campeón está, entonces, ligado por un contrato mágico a participar en el Torneo
hasta el final.
El Torneo consta de tres pruebas diseñadas para evaluar el valor, la inteligencia, el
ingenio y la habilidad mágica de los tres campeones. Estas pruebas son sumamente
peligrosas y cambian de un año a otro. Los campeones reciben una puntuación en
cada una de las pruebas desde un panel de jueces, y quien obtenga el mayor
puntaje será consagrado campeón del Torneo.

### Objetivo

El presente trabajo práctico tiene como objetivo evaluar a los alumnos en aspectos
fundamentales de la programación.
Por un lado se evaluará la ​ **validación de datos** ​ingresados por el usuario, y la
comunicación con este último a la hora de informar errores en dichos ingresos, así
como también el correcto uso de ​ **estructuras de control** ​y ​ **tipos de dato simples** ​.
Por otro se requiere que el trabajo cumpla con las buenas ​ **prácticas de
programación** ​profesadas por la cátedra.


Curso Mendez

### Enunciado

En esta oportunidad se desea implementar el funcionamiento del Cáliz de Fuego.
Para el cual se deberá pedir ciertos datos de alumnos al usuario para luego calcular
al campeón.

#### Datos a solicitar:

Para que este mismo pueda decidir cuál es el campeón de una escuela son
necesarios los siguientes datos de un alumno, los cuales deben ser solicitados al
usuario:
● **Edad** ​: número entero mayor o igual a 17.
● **Inteligencia** ​: número entero entre 0 y 10 (inclusives).
● **Fuerza** ​: número entero entre 0 y 10 (inclusives).
● **Capacidad mágica** ​: caracter que puede tomar los valores (​ **B** ​)uena, (​ **R** ​)egular
o (​ **M** ​)ala. Ojo, se toman en mayúscula!

#### Elección de un campeón:

La comparación para la elección de un campeón se debe hacer entre el campeón
actual y el alumno que se ha ingresado. Las condiciones de elección son:
● Si no cumple con el mínimo de edad se lo descarta como opción.
● El campeón será el que tenga más inteligencia.
● Si tienen igual de inteligencia, el campeón será el que tenga más fuerza.
● Si tanto inteligencia como fuerza son iguales, se pasa a comparar por la
capacidad mágica. Teniendo ​ **M** ​< ​ **R** ​ < ​ **B** ​.
● Si coinciden en todos los valores anteriores, quedará como campeón el que
ya estaba actualmente.

#### Interacción con el usuario:

El usuario podrá ingresar tantos alumnos como desee. Para esto después de cada
ingreso de un alumno se le debe preguntar al usuario si desea cargar uno nuevo.
Dicha pregunta también debe realizarse para el primer alumno.
La respuesta del usuario será ​ **N** ​ si no desea cargar más o cualquier otro en caso
que desee lo contrario.


Curso Mendez
Ejemplo:
Desea ingresar un alumno? (N para ​NO​, cualquier otra tecla para sí):
S
_// Se solicitan los datos del alumno al usuario_
Desea ingresar otro alumno? (N para ​NO​, cualquier otra tecla para sí):
S
_// Se solicitan los datos del alumno al usuario._
Desea ingresar otro alumno? (N para ​NO​, cualquier otra tecla para sí):
N
_// Se termina el ingreso de alumnos y se muestra campeón._
Cuando este mismo termine de ingresar a todos los alumnos a considerar para la
elección de campeón, se deberá mostrar al campeón definitivo por pantalla y
terminar el programa.
Con mostrar al campeón definitivo por pantalla se espera que se muestre el número
de orden en el que fue ingresado el campeón (empezando desde 1). Es decir, si
quien fue elegido como campeón es el alumno cuyos datos se ingresaron en tercer
lugar, deberá aparecer en pantalla el número 3 con exactamente el siguiente
formato:
El campeón es el número 3 :)
En caso de que no haya campeón, el mensaje mostrado deberá ser:
No hay campeón :(

### Resultado Esperado

#### El programa creado debe:

```
● Solicitar al usuario que ingrese un valor para cada uno de los datos
necesarios para determinar al campeón.
● En caso de que alguno de estos esté fuera del rango definido, debe solicitar
que sea reingresado este dato hasta que sea válido.
● En caso de que la edad del alumno ingresado sea menor (estricto) a 17 se
deberá descartar a este mismo como candidato a ser campeón y se pasará al
ingreso de otro nuevo alumno (si así lo solicita el usuario).
```

Curso Mendez
● Después del válido ingreso de un alumno se debe pasar a comparar el
alumno ingresado con el campeón hasta el momento, el alumno que gane se
asignará como el nuevo campeón. Considerar que si es el primer alumno
ingresado no hay campeón contra el que evaluarlo, en este caso pasa a ser
el campeón actual automáticamente.
● Luego del ingreso de un alumno se deberá preguntar al usuario si se desea
ingresar a otro alumno como candidato, si así lo desea se deberá proseguir al
ingreso y validación del mismo de la misma forma que la que se describió
hasta ahora.
● Una vez que el usuario termine de cargar todos los alumnos que este mismo
desee se deberá mostrar por pantalla la información del alumno elegido como
campeón definitivo, como se muestra en ​ **_Interacción con el Usuario_** ​.

### Compilación y Entrega

El trabajo práctico debe ser realizado en un solo archivo llamado ​ **caliz.c** ​y debe
poder ser compilado ​ **sin errores** ​con el comando:
gcc​ caliz.c -o caliz -std=c99 -Wall -Wconversion -W​error
Por último debe ser entregado en la plataforma de corrección de trabajos prácticos
**Kwyjibo** ​ ​en la cual deberá aparecer con la etiqueta ​ _successful._

### Aclaraciones Complementarias

```
● No ​ debe guardarse la información de ​ todos ​ los alumnos ingresados, solo del
campeón actual y del que se está agregando en ese momento.
● El texto mostrado debe ser exactamente el mismo al expuesto en la sección
Interacción con el usuario ​.
● Las herramientas y conceptos a utilizar deben ser los vistos hasta el
momento en la cursada.
● Aunque la edad del alumno no esté en el rango permitido, ese alumno
incrementa la cantidad de concursantes.
● El programa debe iniciar preguntando al usuario si desea ingresar un alumno.
En caso afirmativo, solicitar los datos y luego preguntar si desea seguir
ingresando alumnos.
```
## Bibliografía

[http://es.albusspotter.wikia.com/wiki/Torneo_de_los_Tres_Mago](http://es.albusspotter.wikia.com/wiki/Torneo_de_los_Tres_Mago)
