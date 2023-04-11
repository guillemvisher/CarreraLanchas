#include "lanchas.h";
#include <iostream>;
#include <windows.h>;
using namespace std;
string player1Name;
string player2Name;
//constructor

lanchas::lanchas(string pPlayerName, int pPlayerSpeed, int pPlayerNitro, int pPlayerDistance, int pPlayerBank) {
	playerName = pPlayerName;
	playerSpeed = pPlayerSpeed;
	playerDistance = pPlayerDistance;
	playerNitro = pPlayerNitro;
	playerBank = pPlayerBank;
}


//Getters
string lanchas::getPlayerName() {
	return playerName;
}
int lanchas::getPlayerSpeed() {
	return playerSpeed;
}
int lanchas::getPlayerDistance() {
	return playerDistance;
}
int lanchas::getPlayerNitro() {
	return playerNitro;
}
int lanchas::getPlayerBank() {
	return playerBank;
}

//Setters
void lanchas::setPlayerName(string pPlayerName) {
	playerName = pPlayerName;
}
void lanchas::setPlayerSpeed(int pPlayerSpeed) {
	playerSpeed = pPlayerSpeed;
}
void lanchas::setPlayerDistance(int pPlayerDistance) {
	playerDistance = pPlayerDistance;
}
void lanchas::setPlayerNitro(int pPlayerNitro) {
	playerNitro = pPlayerNitro;
}
void lanchas::setPlayerBank(int pPlayerBank) {
	playerBank = pPlayerBank;
}

//Turno jugador 1

void lanchas::player1Turn() {
	string text = "...";
	int useNitro;
	srand(time(NULL));
	cout << "El jugador 1 va a tirar los dados: \n";
	for (int i = 0; i < text.length(); i++)
	{
		cout << text[i] << std::flush;
		Sleep(500);
	}
	cout << "\n";
	int dadoP1 = 1 + rand() % 6;
	cout << "Ha salido un " << dadoP1 << "\n";
	playerSpeed = playerSpeed + dadoP1;
	if (playerNitro == 1) {
		cout << "Quieres usar el nitro? Si usas el nitro hay la posibilidad de que funcione y ganes el doble de velocidad o de que falle y pierdas velocidad. [1] Usar nitro, [2] No, me lo guardo. \n";
		cin >> useNitro;
		if (useNitro == 1) {
			playerNitro = 0;
			int nitroRand = rand() % 2;
			if (nitroRand == 0) {
				playerSpeed /= 2;
				cout << "Al activar el nitro el motor ha fallado y tu velocidad se ha reducido a la mitad! Tu velocidad actual es de : " << playerSpeed << "\n";
			}
			else {
				playerSpeed *= 2;
				cout << "El nitro te ha dado un impulso extra y has doblado tu velocidad. Tu velocidad actual es de : " << playerSpeed << "\n";
			}
		}
	}
	playerDistance = playerDistance + playerSpeed * 100;
	cout << "La velocidad de " << playerName << " es de " << playerSpeed << " y ha recorrido una distancia de " << playerDistance << " Km \n";
}

void lanchas::player2Turn() {
	string text = "...";
	int useNitro;
	int nitroRand;
	
	cout << "El jugador 2 va a tirar los dados: \n";
	for (int i = 0; i < text.length(); i++)
	{
		cout << text[i] << std::flush;
		Sleep(500);
	}
	cout << "\n";
	int dadoP1 = 1 + rand() % 6;
	cout << "Ha salido un " << dadoP1 << "\n";
	playerSpeed = playerSpeed + dadoP1;
	if (playerNitro == 1) {
		cout << "Quieres usar el nitro? Si usas el nitro hay la posibilidad de que funcione y ganes el doble de velocidad o de que falle y pierdas velocidad. [1] Usar nitro, [2] No, me lo guardo. \n";
		cin >> useNitro;
		if (useNitro == 1) {
			playerNitro = 0;
			int nitroRand = rand() % 2;
			if (nitroRand == 0) {
				playerSpeed /= 2;
				cout << "Al activar el nitro el motor ha fallado y tu velocidad se ha reducido a la mitad! Tu velocidad actual es de : " << playerSpeed << "\n";
			}
			else {
				playerSpeed *= 2;
				cout << "El nitro te ha dado un impulso extra y has doblado tu velocidad. Tu velocidad actual es de : " << playerSpeed << "\n";
			}
		}
	}
	playerDistance += playerSpeed * 100;
	cout << "La velocidad de " << playerName << " es de " << playerSpeed << " y ha recorrido una distancia de " << playerDistance << " Km \n";
	
	
	
}



