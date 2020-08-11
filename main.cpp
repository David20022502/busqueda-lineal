#include <iostream>
#include <fstream>
using namespace std;

int busqueda (int a[], int n, int dato);


int main()
{

    int a[10]={4,1,3,2,5,8,6,9,10,7};
    int num;
    ofstream archivolineal;
    archivolineal.open("lineal.txt", ios::out);
    archivolineal<< "arreglo :";
    for (int e=0;e<10;e++)
    {
      archivolineal<<a[e];
    }
    cout << "ingrese el elemento a buscar: ";
    cin >> num;
     archivolineal<< "\n";
    archivolineal<< "elemento a buscar: " << num;
    if (busqueda(a,10,num)== -1)
    {
      archivolineal<< "\n";
        cout<<"ELEMENTO NO ENCONTRADO";
        archivolineal<< "ELEMENTO NO ENCONTRADO";
       
    }
    else
    {
      archivolineal<< "\n";
        cout<<"ELEMENTO ENCONTRADO EN LA POSICIÓN: "<<busqueda(a,10,num);
        archivolineal<< "ELEMENTO ENCONTRADO EN LA POSICIÓN: "<<busqueda(a,10,num);
    }
    archivolineal.close();
    return 0;
}



int busqueda (int a[], int n, int dato)
{

    for (int i=0 ; i<=n; i++)
    {
            if (a[i] == dato)
                {
                    return i;
                }
    }

    return -1;
}
