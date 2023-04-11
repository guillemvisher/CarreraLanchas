#pragma once;
#include <iostream>;
using namespace std;

class lanchas
{
private:
	//atributesLanchas
	string playerName;
	int playerSpeed;
	int playerNitro;
	int playerDistance;
	int playerBank;

public:
	//constructor
	lanchas(string pPlayerName, int pPlayerSpeed, int pPlayerNitro, int pPlayerDistance, int pPlayerBank);

	//Getters
	string getPlayerName();
	int getPlayerSpeed();
	int getPlayerNitro();
	int getPlayerDistance();
	int getPlayerBank();

	//setters
	void setPlayerName(string pPlayerName);
	void setPlayerSpeed(int pPlayerSpeed);
	void setPlayerNitro(int pPlayerNitro);
	void setPlayerDistance(int pPlayerDistance);
	void setPlayerBank(int pPlayerBank);
	
	//methods
	void player1Turn();
	void player2Turn();
};

