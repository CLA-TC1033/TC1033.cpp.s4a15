# Ejercicio-Actividad datos estructurados con objetos

## Descripción del Problema

Diseña el diagrama de clases UML que represente la clase ```Fracción``` en C++ de acuerdo a los requerimientos adjuntos.

## Ejemplo de ejecución

```
Arreglo de 5 fracciones
-----------------------
Fraccion 1:
Numerador:
1
Denominador:
2
Fraccion 2:
Numerador:
2
Denominador:
3
Fraccion 3:
Numerador:
3
Denominador:
4
Fraccion 4:
Numerador:
4
Denominador:
5
Fraccion 5:
Numerador:
5
Denominador:
6
Fracciones capturadas:
1/2=0.5
2/3=0.666667
3/4=0.75
4/5=0.8
5/6=0.833333
Sumando la primera y la segunda fracción:
7/6=1.16667
Sumando la tercera y la cuarta fracción:
31/20=1.55
Sumando la quinta y la primera fracción:
4/3=1.33333
```

## Diagrama de Clases

```mermaid
classDiagram
      class Clase
      Clase: -x
      Clase: -y
      Clase: +op1()
      Clase: +op2()
```

## Objetivo

- Busca que el código pase correctamente todas las pruebas
   * Solamente cambia los archivos permitidos para lograr este objetivo (abajo se indican las reglas específicas)
   
- Las GitHub Actions deberán presentar una palomita en verde si se han satisfecho todas las pruebas, y una cruz roja cuando alguna (o todas) las pruebas han fallado.
   * **Recomendación:** Puedes dar clic en la cruz roja para verificar cual de las pruebas ha fallado (o si el código no ha compilado correctamente).
   * **Recomendación:** En caso de que el Autograding no muestre pruebas o no funcione, contacta a tu profesor mediante un issue.

## Instrucciones

- Deberás completar el código correspondiente.

Explicación de los otros archivos:

- Archivo `test/tests.cpp` tiene las pruebas de esta actividad (NO LO CAMBIES!)
- Archivo `test/catch.hpp` tiene la biblioteca de pruebas  CATCH2 (NO LA CAMBIES!)
- Archivo `makefile` tienes los comandos para ejecutar la actividad (NO LO CAMBIES!)
- Archivo  `./build/appTests` se generará después de compilar (para **pruebas locales**, solo ejecútalo)

## Comandos para pruebas locales, ejecución y depuración

- Comando para construir y ejecutar pruebas: `make` o `make test`
    * Si el ejecutable ya está construido, sólo teclea : `./build/appTests`

- Comando para construir y ejecutar la aplicación: `make run` 
    * Si el ejecutable ya está construido, sólo teclea : `./build/exercise`

- Comando para depurar: `make debug`
    * Para conocer los comandos de depuración consulta:
     https://u.osu.edu/cstutorials/2018/09/28/how-to-debug-c-program-using-gdb-in-6-simple-steps/
     
- Comando para depurar con `vsCode`: `make debugvs` 
    * Utilizar el depurador de la IDE.
      
- Comando para depurar pruebas con `vsCode`: `make debugtest` 
    * Utilizar el depurador de la IDE.

## Notas

- El código será evaluado solamente si compila.
   * La razón de esto es, si no compila no es posible generar el ejecutable y realizar las pruebas.

- Algunos casos de prueba podrían recibir calificación individual, otros podrían recibir calificación y si pasan todos juntos (o todas las pruebas en conjunto).

- La calificación final se otorgará de manera automática en cada *commit*, y se evaluará solamente hasta la fecha limite de la actividad.

Para dudas adicionales, consulta a tu profesor.

## License

MIT License 2020
