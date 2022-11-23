/* ProyectoFinalMatematicas
   Calculadora de conjunto poder
   Alan Varela
*/

#include <iostream>
#include <math.h>

void conjuntoPoder(int A[], int nElementos);

int main()
{
    //Variables
    int nA;

    //Arreglos A
    int *arregloA = NULL; 
    
    
    std::cout << "Calculadora de Conjunto Poder" << std::endl;
    std::cout << "Introduce el numero de elementos del conjunto A: "; std::cin >> nA;
    arregloA = new int[nA];
    //Introducir A
    for (int i = 0; i < nA; i++)
    {
        std::cout << "Introduce el elemento " << i + 1 << " de A: ";
        std::cin >> arregloA[i];
    }
    //Mostrar A
    system("cls");
    std::cout << "A = {";
    for (int i = 0; i < nA; i++)
    {
       std::cout << arregloA[i];
       if (i<nA-1)
       {
           std::cout <<", ";
       }
    }
    std::cout << "}";

    //Operacion de conjunto poder
    conjuntoPoder(arregloA, nA);
    
    //Liberar memoria punteros
    delete [] arregloA;
    arregloA = NULL;
    
    return 0;
}

void conjuntoPoder(int A[], int nElementos)
{
    //Calcular el numero de subconjuntos
    int n = pow(2, nElementos);
    std::cout << "\nP(A) = { {}";
    //Ciclo hasta que i sea menor a numero de subconjuntos
    for (int i = 0; i < n; i++)
    {
        //Ciclo hasta que j sea menor a numero de elementos
        for (int j = 0; j < nElementos; j++)
        {
          
           //If ( Si i & (bitwise) 1 <<(left shift) j                                
           if (i & (1<<j))
           {
               
               std::cout << A[j];
              
           }
        }
        std::cout << " ";
    }
    std::cout << "}\n\n";
}
    
    
    
    
 
    