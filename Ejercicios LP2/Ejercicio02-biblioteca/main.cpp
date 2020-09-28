#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[10][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion/autor
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes),";libros[0][2] = "Jose Luis Borges";
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos,";libros[1][2] = "Charles Dickens";
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos,";libros[2][2] = "Mario Vargas";
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion,";libros[3][2] = "Mark Twain";
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos,";libros[4][2] = "Virginia Woolf";
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos,";libros[5][2] = "arcMel Prost";
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1,";libros[6][2] = "Ernest Hemingway";
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005),";libros[7][2] = "Williams Faulkner";
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011),";libros[8][2] = "Jose Luis Borges";
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013),";libros[9][2] = "Mark Twain";
}	


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion o el autor del libro que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 10; i++)
        {
            string libro = libros[i][1];
            string autor =libros[i][2];
            string libroEnminuscula = libro;
            string autorEnminuscula = autor;
            

            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (autorEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " <<libro<<autor<< endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 9 + 1;
                int sugerencia2 = rand() % 9 + 1;
                int sugerencia3 = rand() % 9 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1]<< endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1]<< endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1]<< endl;

                salir = true;
                break;
            }
            if (libroEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libro<<autor<< endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 9 + 1;
                int sugerencia2 = rand() % 9 + 1;
                int sugerencia3 = rand() % 9 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    

    return 0;
}