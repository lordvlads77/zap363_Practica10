/*Este va a ser un programa de un battle royale de consola*/
/*Eva Luna Álvarez Calderón - zap363 - Amerike*/
/*No tengo ni la más minima idea de como voy a hacer esto*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdio.h>
#include <locale.h>

using namespace std;

/*Crear jugadores con atributos*/
class warriors
{
public:

	int fuerza = 0;
	int velocidad = 0;
	int agilidad = 0;
	int cosmos = 0;


};

/*Dar valor a los atributos de los jugadores*/
void valorando (warriors* Players)
{
	Players->fuerza = rand() % 4;
	Players->velocidad = rand() % 4;
	Players->agilidad = rand() % 4;
	Players->cosmos = rand() % 4;


}




/*La batallita.*/
void batalla(warriors* Player, warriors* Player1, warriors* Player2, warriors* Player3, warriors* Player4, warriors* Player5)
{
	if (Player->fuerza > Player1->fuerza && Player->fuerza > Player2->fuerza && Player->fuerza > Player3->fuerza && Player->fuerza > Player4->fuerza && Player->fuerza > Player5->fuerza)
	{

		cout << "Cebreros ha ganado la competencia de Fuerza" << endl; /*Place Holder para mejor narrativa jeje*/

	}

	if (Player1->fuerza > Player->fuerza && Player1->fuerza > Player2->fuerza && Player1->fuerza > Player3->fuerza && Player1->fuerza > Player4->fuerza && Player1->fuerza > Player5->fuerza)
	{

		cout << "David ha ganado la competencia de Fuerza" << endl; /*Place Holder para mejor narrativa jeje*/

	}

	if (Player2->fuerza > Player->fuerza && Player2->fuerza > Player1->fuerza && Player2->fuerza > Player3->fuerza && Player2->fuerza > Player4->fuerza && Player2->fuerza > Player5->fuerza)
	{


		cout << "Castañeda ha ganado la competencia de Fuerza" << endl;  /*Place Holder para mejor narrativa jeje*/

	}
	if (Player3->fuerza > Player->fuerza && Player3->fuerza > Player1->fuerza && Player3->fuerza > Player2->fuerza && Player3->fuerza > Player4->fuerza && Player3->fuerza > Player5->fuerza)
	{

		cout << "Felipe ha ganado la competencia de Fuerza" << endl; /*Place Holder para mejor narrativa jeje*/


	}

	if (Player4->fuerza > Player->fuerza && Player4->fuerza > Player1->fuerza && Player4->fuerza > Player2->fuerza && Player4->fuerza > Player3->fuerza && Player4->fuerza > Player5->fuerza)
	{

		cout << "Gera ha ganado la competencia de Fuerza" << endl;


	}

	if (Player5->fuerza > Player->fuerza && Player5->fuerza > Player1->fuerza && Player5->fuerza > Player2->fuerza && Player5->fuerza > Player3->fuerza && Player5->fuerza > Player4->fuerza)
	{

		cout << "Martin ha ganado la competencia de Fuerza" << endl;

	}

	if (Player->velocidad > Player1->velocidad && Player->velocidad > Player2->velocidad && Player->velocidad > Player3->velocidad && Player->velocidad > Player4->velocidad && Player->velocidad > Player5->velocidad)
	{
		cout << "Cerebros ha ganado la competencia de Velocidad" << endl;

	}

	if (Player1->velocidad > Player->velocidad && Player1->velocidad > Player2->velocidad && Player1->velocidad > Player3->velocidad && Player1->velocidad > Player4->velocidad && Player1->velocidad > Player5->velocidad)
	{

		cout << "David ha ganado la competencia de velocidad " << endl;

	}

	if (Player2->velocidad > Player->velocidad && Player2->velocidad > Player1->velocidad && Player2->velocidad > Player3->velocidad && Player2->velocidad > Player4->velocidad && Player2->velocidad > Player5->velocidad)
	{

		cout << "Castañeda ha ganado la competencia de velocidad " << endl;

	}

	if (Player3->velocidad > Player->velocidad && Player3->velocidad > Player1->velocidad && Player3->velocidad > Player2->velocidad && Player3->velocidad > Player4->velocidad && Player3->velocidad > Player5->velocidad)
	{

		cout << "Felipe ha ganado " << endl;

	}

	if (Player4->velocidad > Player->velocidad && Player4->velocidad > Player1->velocidad && Player4->velocidad > Player2->velocidad && Player4->velocidad > Player3->velocidad && Player4->velocidad > Player5->velocidad)
	{

		cout << " Gera ha ganado la competencia de velocidad " << endl;

	}

	if (Player5->velocidad > Player->velocidad && Player5->velocidad > Player1-> velocidad && Player5->velocidad > Player2->velocidad && Player5->velocidad > Player3->velocidad && Player->velocidad > Player4->velocidad)
	{
		cout << "Martin ha ganado la competencia velocidad" << endl;

	}

	if (Player->agilidad > Player1->agilidad && Player->agilidad > Player2->agilidad && Player->agilidad > Player3->agilidad && Player->agilidad > Player4->agilidad && Player->agilidad > Player5->agilidad)
	{

		cout << "Cebreros ha ganado la competencia de agilidad " << endl;


	}
	if (Player1->agilidad > Player->agilidad && Player1->agilidad > Player2->agilidad && Player1->agilidad > Player3->agilidad && Player1->agilidad > Player4->agilidad && Player1->agilidad > Player5->agilidad)
	{
		cout << "David ha ganado la competencia de agilidad " << endl;

	}
	
	if (Player2->agilidad > Player->agilidad && Player2->agilidad > Player1->agilidad && Player2->agilidad > Player3->agilidad && Player2->agilidad > Player4->agilidad && Player2->agilidad > Player5->agilidad)
	{

		cout << "Castañeda ha ganado la competencia de agilidad " << endl;


	}

	if (Player3->agilidad > Player->agilidad && Player3->agilidad > Player1->agilidad && Player3->agilidad > Player2->agilidad && Player3->agilidad > Player4->agilidad && Player3->agilidad > Player5->agilidad)
	{

		cout << "Felipe ha ganado la competencia de agilidad " << endl;

	}

	if (Player4->agilidad > Player->agilidad && Player4->agilidad > Player1->agilidad && Player4->agilidad > Player2->agilidad && Player4->agilidad > Player3->agilidad && Player4->agilidad > Player5->agilidad)
	{

		cout << "Gera ha ganado la competencia de agilidad " << endl;

	}
	
	if (Player5->agilidad > Player->agilidad && Player5->agilidad > Player1->agilidad && Player5->agilidad > Player2->agilidad && Player5->agilidad > Player3->agilidad && Player5->agilidad > Player4->agilidad)
	{

		cout << "Martin ha ganado la competencia de agilidad " << endl;

	}

	if (Player->cosmos > Player1->cosmos && Player->cosmos > Player2->cosmos && Player->cosmos > Player3->cosmos && Player->cosmos > Player4->cosmos && Player->cosmos > Player5->cosmos)
	{

		cout << "Cebreros fue el que quemo al máximo su cosmos " << endl;

	}

	if (Player1->cosmos > Player->cosmos && Player1->cosmos > Player2->cosmos && Player1->cosmos > Player3->cosmos && Player1->cosmos > Player4->cosmos && Player1->cosmos > Player5->cosmos)
	{

		cout << "David elevo al máximo su cosmos!! y Gano esta contienda!!! " << endl;

	}

	if (Player2->cosmos > Player->cosmos && Player2->cosmos > Player1->cosmos && Player2->cosmos > Player3->cosmos && Player2->cosmos > Player4->cosmos > Player2->cosmos > Player5->cosmos)
	{

		cout << "Castañeada a despertado su Septimo Sentido gracias a que hizo que explotara su cosmo!!! " << endl;

	}

	if (Player3->cosmos > Player->cosmos && Player3->cosmos > Player1->cosmos && Player3->cosmos > Player2->cosmos && Player3->cosmos > Player4->cosmos && Player3->cosmos > Player5->cosmos)
	{

		cout << "Felipe: ARDE MI PODEROSO COSMO DORADO!!!!! (y gracias a eso Felipe gano la contienda en esta categoria) " << endl;

	}

	if (Player4->cosmos > Player->cosmos && Player4->cosmos > Player1->cosmos && Player4->cosmos > Player2->cosmos && Player4->cosmos > Player3->cosmos && Player4->cosmos > Player5->cosmos)
	{

		cout << "Gerardo fue ayudado por el Emperador que conociendo su paradero en otro mundo paralelo decidio ayudarlo, activando así su poderoso Octavo Sentido con la ayuda de su inmesa capacidad Psiquica" << endl;

	}

	if (Player5->cosmos > Player->cosmos && Player5->cosmos > Player1->cosmos && Player5->cosmos > Player2->cosmos && Player5->cosmos > Player3->cosmos && Player5->cosmos > Player4->cosmos)
	{

		cout << "RUGEE MI PODEROSO COSMO DORADOOOOOOOO!!! (Y así fue como Martin gano la contienda) GOLDEN VICTORY!! " << endl;

	}
	/*Todo el choro de haya abajo es para determinar las batallas */
	/*Lit modo si esto es verdadero el más fuerte/agil/veloz/con el cosmos más alto es el jugador tal */

}


/*Hacer la bufeación*/

void comida(warriors* Player, warriors* Player1, warriors* Player2, warriors* Player3, warriors* Player4, warriors*	Player5)
{

	int arrachera = rand() % 4;
	int hambriento = rand() % 6;

	switch (hambriento)
	{
	case 0: /*Esto aumentara al player 0*/
		if (arrachera == 2)
		{
			/*Agregara un punto de fuerza al Player0*/
			Player->fuerza + 1;
			cout << "Cebreros ha ganado un buff! de Fuerza" << endl;

		}
		else if (arrachera == 3)
		{
			/*Esto aumentara un punto de velocidad*/
			Player->velocidad + 1;
			cout << "Cebreros ha ganado un buff de Velocidad! " << endl;

		}
		else if (arrachera == 4)
		{
			/*Esto aumentara un punto de agilidad*/
			Player->agilidad + 1;
			cout << "Cebreros ha ganado un buff de Agilidad!" << endl;

		}
		break;
	case 1: /*Esto es para hacerle la bufeacion al Player1*/
		if (arrachera == 2)
		{

			Player1->fuerza + 1;
			cout << "David ha ganado un buff de Fuerza!" << endl;
		}
		else if (arrachera == 3)
		{

			Player1->velocidad + 1;
			cout << "David ha ganado un buff de velocidad!" << endl;
		}
		else if (arrachera == 4)
		{

			Player1->agilidad + 1;
			cout << "David ha ganado un buff de Agilidad!" << endl;
		}
		break;
	case 2: /*Bufeacion Player2*/
		
		if (arrachera == 2)
		{

			Player2->fuerza + 1;
			cout << "Castañeda ha ganado un buff de Fuerza!" << endl;
		}
		else if (arrachera == 3)
		{

			Player2->velocidad + 1;
			cout << "Castañeda ha ganado un buff de velocidad!" << endl;
		}
		else if (arrachera == 4)
		{

			Player2->agilidad + 1;
			cout << "Castañeda ha ganado un buff de Agilidad!" << endl;
		}
		break;
	case 3: /*Bufeacion Player3*/
		
		if (arrachera == 2)
		{

			Player3->fuerza + 1;
			cout << "Felipe ha ganado un buff de Fuerza!" << endl;
		}
		else if (arrachera == 3)
		{
			
			Player3->velocidad + 1;
			cout << "Felipe ha ganado un buff de velocidad!" << endl;
		}
		else if (arrachera == 4)
		{

			Player3->agilidad + 1;
			cout << "Felipe ha ganado un buff de Agilidad!" << endl;
		}
		break;
	case 4: /*Bufeación Player4*/

		if (arrachera == 2)
		{

			Player4->fuerza = + 1;
			cout << "Gera ha ganado un buff de Fuerza!" << endl;
		}
		else if (arrachera == 3)
		{

			Player4->velocidad = + 1;
			cout << "Gera ha ganado un buff de velocidad!" << endl;
		}
		else if (arrachera == 4)
		{

			Player4->agilidad = + 1;
			cout << "Gera ha ganado un buff de Agilidad!" << endl;
		}
		break;
	case 5: /*Bufeación Player5*/
		if (arrachera == 2)
		{

			Player5->fuerza + 1;
			cout << "Martin ha ganado un buff de Fuerza!" << endl;
		}
		else if (arrachera == 3)
		{

			Player5->velocidad + 1;
			cout << "Martin ha ganado un buff de velocidad!" << endl;
		}
		else if (arrachera == 4)
		{

			Player5->agilidad + 1;
			cout << "Martin ha ganado un buff de Agilidad!" << endl;
		}
		break;
	}

}


/*Tiene que tener atributos o propiedades porque se tienen que comparar cosas.*/



int main()
{
	setlocale(LC_ALL, "spanish");
	
	/*Se usa una clase para cada jugador.*/

	/*Coso para el Srand*/
	srand(time(NULL));
	
	/*Haciendo la creacioncita de cada jugador*/
	warriors* Cebreros = NULL;
	Cebreros = new warriors;
	valorando(Cebreros);

	warriors* David = NULL;
	David = new warriors;
	valorando(David);

	warriors* Castañeda = NULL;
	Castañeda = new warriors;
	valorando(Castañeda);

	warriors* Felipe = NULL;
	Felipe = new warriors;
	valorando(Felipe);

	warriors* Gera = NULL;
	Gera = new warriors;
	valorando(Gera);

	warriors* Martin = NULL;
	Martin = new warriors;
	valorando(Martin);

	/*Se usa la función batalla para determinar los ganadores de las competencia, asi como para imprimir dichos valores a la pantalla */
	comida(Cebreros, David, Castañeda, Felipe, Gera, Martin);
	batalla(Cebreros, David, Castañeda, Felipe, Gera, Martin);



}