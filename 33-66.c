#include <stdio.h>

int main(){


     /*Ejercicio 34
    
    Diseñar un programa que lea el peso de una persona en libras y devuelva su peso en kilogramo (una libra equivale a 0.453592 kilogramos).
    
    float pesolibras; 
    float libra =  0.45359; 
    float pesoKil; 
    
    printf("Ingrese su peso en libras: ");
    scanf("%f", &pesolibras); 
    
    pesoKil= pesolibras * libra;
    
    printf("%f", pesoKil);*/

    //--------------------------------------------------------------
    
    /*Ejercicio 35 
    
    Se desea calcular de forma independiente la suma de los números pares e impares comprendidos del 1 al 200.
    
    int numeros[200];
    int tamanio = sizeof(numeros) / sizeof(numeros[0]);
    printf("%d \n", tamanio);
    int auxpar = 0;
    int auximpar = 0;
    
    for(int i = 0; i < tamanio; i++){
        numeros[i] = i;
        if ((numeros[i] % 2) == 0) {
        auxpar++;
      } else {
        auximpar++;
      }
    }
    
    printf("Hay %d numeros pares.\n", auxpar);
    printf("Hay %d numeros impares.\n", auximpar);*/
    
    /*Ejercicio 36
    Leer una serie de números distintos de cero (el último número de la lista debe ser el –99), obtener el número mayor.*/

    //--------------------------------------------------------------
    
    
    /*Ejercicio 37
    Se trata de escribir el programa que permita emitir la factura correspondiente a una compra de un artículo determinado del que se adquieren una o varias unidades. El IVA a aplicar es del 12% y si el precio bruto (precio de venta más IVA) es mayor de 100 Bs., se aplicará un descuento del 7%.
    
    char product[30];
    int cant;
    float value;
    float valueFinal; 
    
    printf("Introduzca el nombre del producto (maximo 30 caracteres): ");
    scanf("%s", &product);
    
    printf("Ingrese el valor de cada unidad: ");
    scanf("%f", &value);
    
    printf("¿Cuant@ %s llevara?: ", product);
    scanf("%d", &cant);
    
    valueFinal = value * cant;
    
    float iva =  (12 * valueFinal) / 100;
    
    valueFinal = valueFinal + iva; 

    
    if(valueFinal > 100000){
        float descuento =  (7 * valueFinal) / 100;
        valueFinal = valueFinal + descuento;
        printf("1. El valor total de su compra de %s es: $ %.3f", product, valueFinal);
    }else {
        printf("2. El valor total de su compra de %s es: $ %f", product, valueFinal);
    }*/

    //--------------------------------------------------------------
    
    /*Ejercicio 38
    Visualizar los múltiplos de 4 comprendidos entre 4 y N, donde N es un número introducido por teclado y debe ser mayor a 4.
    
    int inicio = 4; 
    int n; 
    int aux;
    int multiplos = 0;
    
    printf("Ingrese un numero final del arreglo: ");
    scanf("%d", &n);
    
    int array[n];
    
    for(int i = 4; i < n; i++){
        array[i] = i;
        //printf("%d ", array[i]);
        if(array[i] % 4 == 0){
            multiplos++;
        }
    }
    
    printf("\n Hay %d multiplos de 4 entre %d y %d", multiplos, inicio, n);
    */

   //--------------------------------------------------------------
    
    /*Ejercicio 39
     Para un salario base hasta de 1500,00 Bs., no hay retención. Para un salario base mayor a 1500,00 Bs. a 3000,00 Bs. el porcentaje de retención es del 5,25%. Para un salario base mayor de 3000,00 Bs. el porcentaje de retención es del 7,45%. Obtener la retención y el salario neto de N empleados.
     
     int empleados; 
     int auxMenor = 0;
     int auxMedio = 0;
     int auxMayor = 0;
     float retencion; 
     
     printf("Ingrese la cantidad de empleados: ");
     scanf("%d", &empleados);
     
     for(int i = 0; i < empleados; i ++){
         float salario; 
         
         printf("Ingrese salario de empleado %d: ", i +1);
         scanf("%f", &salario);
         
         if(salario <= 1500){
             auxMenor++;
             
             printf("El empleado %d no tiene retenciones. Su salario neto es: %f \n", i +1, salario);
             printf("\n ");
             
         }else if(salario > 1500 && salario <= 3000){
             auxMedio++;
             retencion = (5.25 * salario) / 100;
             
             printf("El empleado %d tiene una retencion de %f. Su salario neto es: %f \n", i +1, retencion, salario);
             printf("\n ");
             
         }else if(salario > 3000){
             auxMayor++;
             retencion = (7.45 * salario) / 100;
             
             printf("El empleado %d tiene una retencion de %f. Su salario neto es: %f \n", i +1, retencion, salario);
             printf("\n");
         }
         
     }
     
     printf("Hay %d empleados que ganan menos de 1500 \n", auxMenor);
     printf("\n");
     printf("Hay %d empleados que ganan menos de 1500 \n", auxMedio);
     printf("\n");
     printf("Hay %d empleados que ganan menos de 1500 \n", auxMayor);
     printf("\n");
     
     */
    
    //--------------------------------------------------------------

    /*Ejercicio 40 
    Se pide calcular y mostrar el valor de Y, sabiendo que:
    En donde: Xi = A + B si (A2 – B2) > 0
    Xi = A – 2*B si (A2 – B2) = 0
    Xi = A + B – 5 si (A2 – B2) < 0 */
    
    
    //--------------------------------------------------------------
    
    
    /*Ejercicio 41
    Dados 10 números introducidos por teclado, visualizar la suma de los números pares de la lista, cuantos números pares existen y cuál es la media aritmética de los números impares.*
    
    int numbers[10];
    int number; 
    int auxpar = 0; 
    int auximpar = 0; 
    
    int pares[auxpar];
    int impares[auximpar]; 
    
    int sumaPar = 0;
    int sumaImpar = 0;
    
    printf("Ingrese 10 numeros cualquiera \n");
    
    for (int i = 0; i < 10; i++){
        printf("Ingrese numero %d: ", i + 1);
        scanf("%d", &number); 
        numbers[i] = number; 
    }
    
    for (int a = 0 ; a < 10; a ++){
        if((numbers[a] % 2) == 0 ){
            auxpar++; 
            //printf("Par: %d \n", numbers[a]);
            for(int b = 0; b < 1; b ++){
                pares[b] = numbers[a];
                sumaPar = sumaPar + pares[b];
            }
        }else {
            auximpar++;
            //printf("Impar: %d", numbers[a]);
            for(int c = 0; c < 1; c ++){
                impares[c] = numbers[a];
                sumaImpar = sumaImpar + pares[c];
            }
        }
    }
    
    int promImpar = sumaImpar / auximpar;
    printf("Hay %d numeros pares \n", auxpar);
    printf("La suma de los numeros pares es: %d \n", sumaPar);
    printf("El promedio de los numeros impares es: %d \n", promImpar);*/ 

    //-------------------------------------------------------
    
    /*Ejercicio 42 
    Desarrollar un programa que genere las tablas de multiplicar del 1 al 10.*
    
    int tablas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int result = 0; 
    
    printf("Tablas de Multiplicar del 1 al 10 \n \n");
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10 ; j++){
            result = tablas[i] * tablas[j];
            printf("EL resultado de %d x %d es: %d \n", tablas[i], tablas[j], result); 
        }
        printf("\n");
    }*/
    
    //------------------------------------------------------------
    
    
    /*Ejercicio 43
    Calcular la nota media por alumnos de una clase de n alumnos. Cada alumno podrá tener m notas distintas*
    
    //Numero de alumnos
    int n = 0; 
    //Numero de notas
    int m = 0; 
    
    printf("Ingrese cantidad de alumnos: ");
    scanf("%d", &n);
    printf("\n Ingrese cantidad de notas por alumno: ");
    scanf("%d", &m);
    
    float notas[m]; 
    float nota; 
    
    for(int i = 0; i < n ; i ++){
        float suma = 0; 
        
        printf("\n");
        printf("Ingrese las notas de alumno %d \n \n", i +1);
        
        for(int j = 0; j < m ; j++){
            printf("Ingrese nota %d: ", j + 1); 
            scanf("%f", &nota); 
            notas[j] = nota;
            printf("\n");
        }
        
        for(int a = 0; a < m; a ++){
            suma = suma + notas[a]; 
        }
        
        float prom = 0; 
        prom = suma / m; 
        printf("El promedio del estudiante %d es: %.1f \n", i +1, prom);
    }*/

    //-----------------------------------------
    
    /*Ejercicio 44
    Dados tres números diferentes, deducir cual es el central.*
    
    int n1, n2, n3; 
    
    printf("Programa para encontrar numero central \n \n");
    
    printf("Ingrese numero 1: ");
    scanf("%d", &n1);
    
    printf("Ingrese numero 2: ");
    scanf("%d", &n2);
    
    printf("Ingrese numero 3: ");
    scanf("%d", &n3);
    
    if((n1 > n2 && n1 < n3) || (n1 < n2 && n1 > n3)){
        printf("El numero centrarl es: %d", n1);
    }else if((n2 > n1 && n2 < n3) || (n2 < n1 && n2 > n3)){
        printf("El numero centrarl es: %d", n2);
    }else  if((n3 > n1 && n3 < n2) || (n3 < n1 && n3 > n2)){
        printf("El numero centrarl es: %d", n3);
    }*/

    //-------------------------------------------------------

    /*Ejercicio 45
    Determinar el precio de un pasaje en ferrocarril, conociendo la distancia a recorrer y sabiendo que si el número de días de estancia es superior a siete y la distancia superior a 800 kilómetros, el pasaje tiene una reducción del 30%. El precio por kilómetro es de 0,75 Bs.*
    
    float precioK = 0.75; 
    float distancia = 0; 
    int dias = 0; 
    float precioFinal = 0; 
    
    printf("Ingrese dias de estancia recorrida: ");
    scanf("%d", &dias);
    
    printf("Ingrese la cantidad de kilometros recorridos: ");
    scanf("%f", &distancia);
    
    
    precioK = precioK * distancia;
    float descuento = (30 * precioK) / 100; 
    
    if (dias > 7 || distancia > 800){
        precioFinal = precioK - descuento; 
        printf("Se total a pagar por el recorrido es: %.3f", precioFinal);
        
    }else {
        printf("Se total a pagar por el recorrido es: %.3f", precioK);
    }*/
    
    //---------------------------------------------------------
    
    /*Ejercicio 46
    
    int estadoc = 0;
    int sexo = 0; 
    int sueldo = 0;
    
    //Total de empleados del sexo femenin
    int conditional1 = 0;
    //Total de hombres casados que ganan más de 2500 Bs
    int conditional2 = 0;
    //Total de mujeres viudas que ganan más de 1000 Bs
    int conditional3 = 0;
    // Edad promedio de los hombres.
    int conditional4 = 0; 

    
    for(int i = 0; i < 5; i ++){
        
        printf("\nIngrese información de empleado No %d \n", i +1 );
        
        printf("Estado Civil: \n 1 = Soltero \n 2 = Casad@ \n 3 = Viud@ \n"); 
        printf("Ingrese alguno de los numeros: ");
        scanf("%d", &estadoc);
        
        printf("Sexo: \n 1 = Masculino \n 2 = Femenino \n"); 
        printf("Ingrese alguno de los numeros: ");
        scanf("%d", &sexo);
        
        printf("Sueldo: \n 1 = Menos de 100 \n 2 = Entre 1000 y 2500 \n 3 = Más de 2500 \n"); 
        printf("Ingrese alguno de los numeros: ");
        scanf("%d", &sueldo);
        
        if(sexo == 2){
            conditional1 ++;
        } else if (estadoc == 1 || sexo == 1 || sueldo == 3){
            conditional2 ++;
        } else if (estadoc == 3 || sexo == 2 || sueldo == 2){
            conditional3 ++;
        } else if ( sexo == 1 ){
            conditional4 ++;
        }
        
    }
    
    printf("\n");
    
    printf("Total de empleados del sexo femenino : %d \n", conditional1);
    
    printf("Total de hombres casados que ganan más de 2500: %d \n", conditional2); 
    
    printf("Total de mujeres viudas que ganan más de 1000: %d \n", conditional3); 
    
    printf("Total de empleados del sexo Masculino : %d \n", conditional4); */

    //---------------------------------------
    
    /*Ejercicio 47
    Diseñar un programa en el que a partir de una fecha introducida por teclado con el formato DIA, MES, AÑO, se obtenga la fecha del día siguiente.*
    
    int dia; 
    int mes; 
    float annio; 
    
    printf("Ingrese fecha del dia de hoy: \n");
    
    printf("Ingrese dia: ");
    scanf("%d", &dia);
    
    printf("Ingrese mes: ");
    scanf("%d", &mes);
    
    printf("Ingrese año: ");
    scanf("%f", &annio);
    
  if(mes == 13){
        mes++;
    }
    
   if (dia == 31 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) || dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11) || dia == 28 && (mes == 2)){
        mes++; 
        dia = 1;
    } else  if(dia == 30 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
        dia++;
    }else  if(dia >= 1 || dia <= 28){
        dia++;
    }
    
    if(mes == 13){
        mes = 1;
        annio++;
    }
    
    if((mes == 2 && dia > 28 ) || dia > 31){
        printf("Fecha ingresada esta incorrecta");
    } else if (mes > 12 || mes < 1){
        printf("Fecha ingresada esta incorrecta");
    }else{
        printf("Fecha de mañana: %d - %d - %.0f", dia, mes, annio);
    }*/
    
    
    // ---------------------------------------------------------
    
    
    /*Ejercicio 48
    Se desea realizar una estadística de los pesos de los alumnos de un colegio, de acuerdo a la siguiente tabla:

·   Alumnos de menos de 40 Kg.
·   Alumnos entre 40 y 50 Kg.
·   Alumnos de más de 50 y menos de 60 Kg.
·   Alumnos de más o igual a 60 Kg.

    La entrada de los pesos de los alumnos se terminará cuando se introduzca el valor centinela –99. Al final se desea obtener cuántos alumnos hay en cada uno de los baremos*
    
    int peso = 0;
    int aux40 = 0; 
    int aux40_50 = 0;
    int aux50_60 = 0;
    int aux60 = 0;

   
   int parar = -99;
   do
   {
       
       printf("Ingrese el peso del estudiante: ");
       scanf("%d", &peso);
       
       if(peso <= 40){
           aux40++;
       } else if(peso >40 && peso < 50){
           aux40_50++;
       }else if(peso >= 50 && peso < 60){
           aux50_60++;
       }else if(peso >= 60){
           aux60++;
       }
       
   } while (peso != parar);
   
   printf("Hay %d estudiantes con peso menor a 40 km. \n", aux40);
   printf("Hay %d estudiantes con peso de 40 a 50 km. \n", aux40_50);
   printf("Hay %d estudiantes con peso de 50 a 60 km \n", aux50_60);
   printf("Hay %d estudiantes con peso mayor a 60 km. \n", aux60);*/

   //-------------------------------------------------------------------

    /*Ejercicio 52 
    Calcular y mostrar los salarios que se adeudan a trabajadores, 
    basados en tasas de 1.5 veces la tasa regular, cuando las horas trabajadas excedan de 40 por semana*

    int trabajadores;
    float tasaRegular; 
    float tasaIncre = 1.5; 
    float salario; 

    int auxEmple = 0;
    float aux; 
    float deuda;

    

    printf("Ingrese la cantidad de trabajadores: ");
    scanf("%d", &trabajadores); 

    printf("Ingrese salario regular de los empleados: "); 
    scanf("%f", &salario);

    printf("Ingrese tasa regular: ");
    scanf("%f", &tasaRegular); 


    for(int i = 0; i < trabajadores; i++){
        int horas = 0;
        
        printf("Ingrese horas trabajadas de trabajador %d \n", i +1); 
        scanf("%d", &horas); 

        if(horas > 40){
            auxEmple++;
            aux = tasaRegular * tasaIncre; 
            deuda = deuda + aux;
        }

    }

    float valor = (deuda * salario) / 100; 

    printf("La deuda total de %d empleados que trabajaron más de 40 horas es: %f", auxEmple, valor);*/

    //---------------------------------------

    /*Ejercicio 53
    Cierta universidad está interesada en saber estadísticamente la calificación media de los estudiantes 
    que recibieron matemáticas durante un semestre. Desea saber también el número total de estudiantes y 
    el número de estudiantes reprobados. Calcular lo anterior, teniendo en cuenta que se leen las calificaciones*

    int estudiante = 0;
    int estudiantesM = 0;
    int estudiantesR = 0;
    int response; 
    int reprobados = 0; 
    float suma = 0; 

    int parar = 0; 

    do
    {
        estudiante++;
        
        printf("¿El estudiantes %d recibio matematicas en este semestre? \n", estudiante); 
        printf("1 = Sí \n2 = No \n");
        printf("Escriba 1 o 2 segun corresponda: ");
        scanf("%d", &response); 

        if(response == 1){
            estudiantesM++;
        }
        
        printf("\n");

    } while ( response != parar );
    
    //printf("%d", estudiantesM);

    int notas[estudiantesM];
    int nota; 

    for (int i = 0; i < estudiantesM; i++){
        printf("Ingrese la nota del estudiante %d que curso matematicas: ", i+1);
        scanf("%d", nota);
        //notas[i] = nota;

    }
    
    SE DEBE TERMINAR!! */


    //------------------------------------------------------------
    
    /*Ejercicio 54
    Un hombre planea invertir 5000,00 Bs. por año al 6% de interés. 
    ¿Cuántos años requerirá para acumular 1000000,00 Bs.?. Se debe obtener el año en 
    el cual la inversión excede a 1000000,oo Bs.*

    int inversion = 5000; 
    int interes = (6 * inversion) / 100; 
    int num = 0;
    int aux = 0;
    int suma = 0;

    for(int i = 5000; i <= 100000; i++){
        num++;
    }

    num = num/inversion;


    for(int j = 0; j < num; j++){
        aux++;
        suma = suma + (inversion + interes);
    }

    printf("La inversion necesita de %d años para superar los 100000 con un interes de %d. \nEl resultado de la inversion luego de este tiempo es: %d", aux, interes, suma);
    */

    //-------------------------------------------------

    /*Ejercicio 55
    Haga un programa que lea N tarjetas de datos A, B, C, D.

        A = Número de cédula de identidad del alumno.
        B = Nota de matemáticas
        C = Nota de física
        D = Nota de programación

        Hallar:

        · Nota promedio de cada materia.
        · Número de alumnos aprobados en cada materia.
        · Número de alumnos aplazados en cada materia.
        · Número de alumnos que aprobaron todas las materias.
        · Número de alumnos que aprobaron una sola materia.
        · Número de alumnos que aprobaron dos materias.
        · Nota máxima en cada materia --- *

    int targets; 
    float promMate = 0;
    int aprobMate= 0;
    int reproMate= 0;
    float promFisica = 0;
    int aprobFisica= 0;
    int reproFisica = 0;
    float promProgramacion = 0;
    int aprobProgramacion= 0;
    int reproProgramacion = 0;
    int totalStudents;
    int oneMateria = 0;
    int twoMateria = 0; 
    int threeMateria = 0; 
     
    printf("Ingrese numero de tarjetas: ");
    scanf("%d", &targets); 

    //Estudiante
    float students[targets][4]; 

    //Se obtienen valores de cada cada materia
    for(int i = 0; i < targets; i++){
        printf("Ingrese Numero de Cedula del estudiante %d: ", i +1);
        scanf("%f", &students[i][0]);

        printf("Ingrese la nota de matematicas del estudiante %d: ", i +1);
        scanf("%f", &students[i][1]);

        printf("Ingrese la nota de fisica del estudiante %d: ", i + 1);
        scanf("%f", &students[i][2]);

        printf("Ingrese la nota de programación del estudiante %d: ", i +1);
        scanf("%f", &students[i][3]);
    }

    //Se encuentra el promedio de cada materia y estudiantes aprobados y reprobados (cantidad)
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < targets; j++){
            if(i == 0){
                promMate = promMate + students[j][1];
                if(students[j][1] >= 3.0){
                   aprobMate ++;
                } else {
                    reproMate ++;
                }
            } else if(i == 1) {
                 promFisica = promFisica + students[j][2];
                  if(students[j][2] >= 3.0){
                   aprobFisica ++;
                } else {
                    reproFisica ++;
                }
            } else if(i == 2) {
               promProgramacion = promProgramacion + students[j][3];
                if(students[j][3] >= 3.0){
                   aprobProgramacion ++;
                } else {
                    reproProgramacion ++;
                }
            }
            
        }
    
     }

     //Se ecnuentran los estudiantes que perdieron 3, 2 o 1 materia
     for(int j = 0; j < targets; j++){

        if(students[j][1] >= 3){
            if(students[j][2] >= 3){
                if(students[j][3] >= 3){
                    threeMateria++;
                }
                twoMateria++;
            }
            oneMateria++;
        }
    
     }

    //Promedios de cada materia
    printf("Promedios:\n");
    printf("Promedio Matematicas  %.1f: \n", promMate / targets);
    printf("Promedio Fisica  %.1f: \n", promFisica / targets);
    printf("Promedio Prograciòn  %.1f: ", promProgramacion / targets);
    printf("\n\n");

    //No de estudiantes aprobados en cada materia
    printf("Estudiantes aprobados: \n");
    printf("Matematicas:  %d: \n", aprobMate);
    printf("Fisica:  %d: \n", aprobFisica);
    printf("Programacion:  %d: \n", aprobProgramacion);
    printf("\n\n");

    //No de estudiantes reprobados en cada materia
    printf("Estudiantes Reprobados: \n");
    printf("Matematicas:  %d: \n", reproMate);
    printf("Fisica:  %d: \n", reproFisica);
    printf("Programacion:  %d: \n", reproProgramacion);
    printf("\n\n");

    //No de estudiantes que aprobaron todas las materias
    printf("Numero de estudiantes que aprobaron todas las maaterias: \n");
    printf("Total: %d: \n", threeMateria);
    printf("\n\n");

    //No de estudiantes que aprobaron una materia
    printf("Numero de estudiantes que aprobaron una maateria: \n");
    printf("Total: %d: \n", oneMateria);
    printf("\n\n");

    //No de estudiantes que aprobaron dos materias
    printf("Numero de estudiantes que aprobaron dos maateria: \n");
    printf("Total: %d: \n", twoMateria);*/

    // ----------------------------------------------------------

    /*Ejercicio 56
    · Por cada venta menor de 1500,00 Bs. se le entrega al vendedor el 5% del monto, por otra parte se resta también el 15% 
    por gastos de servicios y por último, se resta un 40% del costo.

    · Por cada venta mayor o igual de 1500,00 Bs. se le entrega al vendedor el 7% del monto, por otra parte se resta también
    el 25% por gastos de servicios y por último, se resta un 40% del costo.

    · Suponga que la tienda realizó N ventas.*

    int nV; 

    printf("Ingrese numero de ventas: "); 
    scanf("%d", &nV); 

    float valueV[nV];
    int prom1; 
    int prom2; 
    int prom3; 
    int suma = 0; 

    for (int i = 0; i < nV; i++){

        int result = 0; 

        printf("Ingrese valor de la venta %d: ", i+1); 
        scanf("%f", &valueV[i]); 

        if(valueV[i] < 1500){
            prom1 = ( 5 * valueV[i] ) / 100; 
            prom2 = ( 15 * valueV[i] ) / 100; 
            prom2 = ( 40 * valueV[i] ) / 100; 
            result = valueV[i] - prom1 - prom2 - prom3; 
            valueV[i] = result; 
        }else {
            prom1 = ( 7 * valueV[i] ) / 100; 
            prom2 = ( 25 * valueV[i] ) / 100; 
            prom2 = ( 40 * valueV[i] ) / 100; 
            result = valueV[i] - prom1 - prom2 - prom3; 
            valueV[i] = result; 
        }

        suma = suma + valueV[i];
    }

    printf("Las ganancias de la tienda son: %d", suma); */

    //---------------------------------------------------

    /*Ejercicio 57 
    Calcular el interés que tiene una cuenta de ahorros a fin de año, sabiendo que:

    · La cuenta genera un interés del 15% anual, lo que equivale a 1.25% mensual.

    · El monto inicial se ingresa en el mes de enero y mensualmente se ingresan 250,00 Bs.

    · El cálculo se requiere hasta el mes de diciembre.*

    float montoI = 0; 
    float interes2 = (1.25 * 250.00) / 100; 
    float sumaI = 0; 

    printf("Ingrese monto inicial: "); 
    scanf("%f", &montoI);

    float interes = (1.25 * montoI) / 100; 
    
    printf("Interes -> 1: %f \nInteres -> 2: %f", interes, interes2);

    for (int i = 0; i < 12; i++)
    {
        if(i == 0){
            sumaI = sumaI +  interes;
        } else {
            montoI = montoI + 2500.00;

            sumaI = sumaI + interes2;
            
        }
        
    }

    printf("El interes total en un año es igual a: %f \n", sumaI); 
    printf("La cuenta de ahorros tendría un monto final de: %f", montoI - sumaI); */


    //--------------------------
    
    /*ejercicio 58
    Se desea calcular el precio de un libro teniendo en cuenta que: Si el libro es de portada suave, 
    el precio base es de 5,50 Bs., y de 10,70 Bs. en caso contrario. Por otra parte, se le incrementa 
    al monto 0,125 Bs. por página, y si el libro tiene más de 500 páginas se descuenta un 25%. 
    Suponga que se debe calcular el precio de N libros.*

    int libros; 
    float descuento; 
    float total = 0; 

    printf("Ingrese numero de libros: "); 
    scanf("%d", &libros);

    float priceLi[libros]; 

    for (int i = 0; i < libros; i++)
    {
        int option = 0; 
        int option2 = 0; 
        int price = 0; 

        printf("¿El libro %d es de portada suave? \n", i+1); 
        printf("1 = Sí \n2 = No \n"); 
        printf("Ingrese un numero segun corresponda: "); 
        scanf("%d", &option); 
        if (option < 1 || option > 2)
        {
            printf("La opcion escogida es incorrecta \n"); 
            break;
        }

        printf("¿Cuantas paginas tiene el libro %d? ", i+1); 
        scanf("%d", &option2); 

        if(option == 1){
            priceLi[i] = 5.50; 
        }else {
            priceLi[i] = 10.70;
        }

        for (int j = 0; j < option2; j++)
        {
           priceLi[i] =  priceLi[i] + 0.125;  
        }

        descuento = (25 * priceLi[i]) / 100; 

        if(option2 >= 500){
            priceLi[i] = priceLi[i] - descuento; 
        }  

        total = total + priceLi[i];       

    }

    printf("La suma total a pagar por todos los libros es: %f", total); */


    //------------------------------

    /*Ejercicio 59
    Desarrollar un programa para ordenar 3 números en forma ascendente y descendente.*

    int a, b, c; 

    printf("Ingrese tres numero enteros: \n"); 
    scanf("%d %d %d", &a, &b, &c); 


    if( a < b ){
        if ( a < c ){
            if ( b < c ){
                printf("Los numeros ordenados de forma ascendente: %d %d %d\n\n", a,b,c);
            } else {
                printf("Los numeros ordenados de forma ascendente: %d %d %d\n\n", a,c,b);
                }
        } else {
            printf("Los numeros ordenados de forma ascendente: %d %d %d\n\n", c,a,b);
        }
    }else {
        if ( a < c ) {
            printf("Los numeros ordenados de forma ascendente: %d %d %d\n\n", b,a,c);
        } else{
            if ( c < b ) { 
                printf("Los numeros ordenados de forma ascendente: %d %d %d\n\n", c,b,a);
            } else {
                printf("Los numeros ordenados de forma ascendente: %d %d %d\n\n", b,c,a);
            }
        }
    }

    if( a > b ){
        if ( a > c ){
            if ( b > c ){
                printf("Los numeros ordenados de forma descendente: %d %d %d\n\n", a,b,c);
            } else {
                printf("Los numeros ordenados de forma descendente: %d %d %d\n\n", a,c,b);
                }
        } else {
            printf("Los numeros ordenados de forma descendente: %d %d %d\n\n", c,a,b);
        }
    }else {
        if ( a > c ) {
            printf("Los numeros ordenados de forma descendente: %d %d %d\n\n", b,a,c);
        } else{
            if ( c > b ) { 
                printf("Los numeros ordenados de forma descendente: %d %d %d\n\n", c,b,a);
            } else {
                printf("Los numeros ordenados de forma descendente: %d %d %d\n\n", b,c,a);
            }
        }
    }*/

    //-------------------------------

    /*ejercicio 60
    Una persona ha trabajado 38 horas en una semana dada y gana a razón de Bs. 25.50 por hora. 
    La tasa de impuesto del estado es del 3.75% de su paga base. Se desea saber cuál es la paga base, 
    el descuento por impuesto y la paga neta de n trabajadores.*
    
    float pagoSemanal = 38 * 25.50;
    float impuesto = (3.75 * pagoSemanal) / 100;
    int numT;
    float sumaI =0;
    float sumaPagos = 0; 

    printf("Ingrese No de trabajadores: "); 
    scanf("%d", &numT); 

    for (int i = 0; i < numT; i++)
    {
    
        sumaPagos = sumaPagos + pagoSemanal; 
        sumaI = sumaI + impuesto; 
        
    }

    printf("La paga base es: %f \n", sumaPagos); 
    printf("El descuento por impuesto al pago base es: %f\n", sumaI); 
    printf("La paga neta por los %d trabajadores es: %f", numT, sumaPagos - sumaI); */

    //-----------------------

    /*Ejercicio 61
    Escribir un programa que permita llevar de kilómetros a millas, sabiendo que:

    · 1 Klm. = 0.621504 millas terrestres

    · 1Klm. = 0.5399568 millas marinas*
    
    float km; 
    float millaT = 0.6215; 
    float millaM = 0.539956;

    printf("Ingrese los kilometros a convertir: "); 
    scanf("%f", &km); 

    float result1 = km * millaT; 
    float result2 = km * millaM; 

    printf("%.0f kilometros son %f millas terrestres. \n", km, result1); 
    printf("%.0f kilometros son %f millas marinas. \n", km, result2); */ 

    //---------------------------------------------------------------

    /*Ejercicio 62
    Lea las edades de los alumnos de una clase y calcule el promedio.*

    int alumnos; 

    printf("Ingrese cantidad de alumnos: "); 
    scanf("%d", &alumnos); 

    int edades[alumnos]; 
    int suma = 0; 

    for (int i = 0; i < alumnos; i++)
    {
        printf("Ingrese edad de alumno %d: ", i+1); 
        scanf("%d", &edades[i]); 

        suma = suma + edades[i];
    }

    int prom = suma / alumnos; 

    printf("El promedio de las edades de los alumnos es: %d", prom); */

    //-----------------------------------------------

    /*Ejercicio 64
    Crear un programa que lea dos números y que escriba el mayor de los dos*

    int a, b; 

    printf("Ingrese dos numeros enteros: \n"); 
    scanf("%d %d", &a, &b); 

    if (a > b){
        printf("%d es el numero mayor", a);
    }else if(a < b) {
        printf("%d es el numero mayor", b);
    } else{
        printf("Los numeros son iguales"); 
    } */

    /*Ejercici 65
    Crear un programa que lea un número e indique si es par o no.*

    int num; 

    printf("Ingrese un numero entero: \n"); 
    scanf("%d", &num); 

    if (num % 2 == 0 ){
        printf("El numero es par");
    }else{
        printf("El numero es impar");
    }*/

    /*ejercicio 66
    Leer tres números y escribir el mayor de los tres.*

    int a, b, c; 

    printf("Ingrese tres numero enteros: \n"); 
    scanf("%d %d %d", &a, &b, &c); 

    if(a > b && a > c){
        printf("El numero mayor es: %d", a); 
    }else if (b > a && b > c){
        printf("El numero mayor es: %d", b); 
    }else{
        printf("El numero mayor es: %d", c);
    }*/

    //--------------------------------------------------------------


    return 0; 
}