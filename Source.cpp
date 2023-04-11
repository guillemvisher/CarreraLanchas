#include <iostream>;
#include <windows.h>;
#include "lanchas.h";
using namespace std;

int main() {
		string player1Name;
		string player2Name;
		int turn = 0;
		cout << "Introduce el nombre del jugador 1: \n";
		cin >> player1Name;
		cout << "Introduce el nombre del jugador 2: \n";
		cin >> player2Name;
		lanchas player1(player1Name, 0, 1, 0, 100), player2(player2Name, 0, 1, 0, 100);
		while (turn < 5) {
			cout << "Empieza el turno " << turn + 1 << ".\n";
			player1.player1Turn();
			Sleep(1000);
			player2.player2Turn();
			Sleep(1000);
			cout << "Ha finalizado el turno " << turn + 1 << ". " << player1Name << " ha recorrio una distancia de " << player1.getPlayerDistance() << " y " << player2Name << " ha recorrido una distancia de " << player2.getPlayerDistance() << "\n\n";
			turn++;
			Sleep(1000);
			
		}
		cout << "El juego ha terminado, vamos a ver quien ha ganado: \n";
		cout << player1.getPlayerName() << " ha recorrido una distancia de " << player1.getPlayerDistance() << " Km. \n";
		cout << player2.getPlayerName() << " ha recorrido una distancia de " << player2.getPlayerDistance() << " Km. \n";
		if (player1.getPlayerDistance() > player2.getPlayerDistance()) {
			cout << player1.getPlayerName() << " ha ganado la carrera! \n";
		}
		else {
			cout << player2.getPlayerName() << " ha ganado la carrera! \n";
		}
	}


