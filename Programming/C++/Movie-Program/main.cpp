#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	// Nombre de mis variables 
	string MOVIE_NAME, AUTHOR, YEAR, RATING; 

	// Mi constante para que siempre salga este mensaje
	const string SALUDO = "Bienvenido al programa de peliculas de Las Marias";
	cout << SALUDO << endl;

	// El nombre del input que es la pelicula
	cout << "Cual es el nombre de la pelicula? " ;
	getline(cin, MOVIE_NAME);

	// El nombre del director de la pelicula 
	cout << "Cual es el nombre del director? ";
	getline(cin, AUTHOR);

	// El año de estreno de la pelicula
	cout << "Cual es el año de estreno de la pelicula? ";
	cin >> YEAR;

	// El rating personal que tiene que dar el usuario sobre la pelicula
	cout << "Que rating le das del 1 al 10 a la pelicula? ";
		cin >> RATING;
	
	// El mensaje final de todo junto 
	cout << "Tu eleccion ha sido: " << MOVIE_NAME + " de " + AUTHOR + " del año " + YEAR + " tu rating personal: " + RATING + " de 10," << " muy buena eleccion!" << endl;
}
