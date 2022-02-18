// TestChain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <Windows.h>
#include "Blockchain.h"
#include "Vote.h"

Vote testVote = Vote();


void mining(Vote testVote) {
// manually mines three blocks 
//@todo Blockchain need to continue / end automaticly 
//@todo Data need to be populated with votes users votes
	Blockchain bChain = Blockchain();

	//bChain.AddBlock(Block(1, "Block 1 Data"));
	bChain.AddBlock(Block(1, testVote.unverifiedVotes),testVote.unverifiedVotes);
	testVote.unverifiedVotes = "";
	bChain.AddBlock(Block(2, testVote.unverifiedVotes), testVote.unverifiedVotes);

	bChain.AddBlock(Block(3, "Block 3 Data"),"Block 3 Data");
}
void voting() {
	std::cout << "TEST VOTING" << std::endl;
	
	testVote.initializeVoteCandidates();
	//testVote.userInputVote();
	testVote.voterLogin();
	//menu();
}

int menu() {
	// inputChar used to navigate menu only accepts M/V/E as input 
	char inputChar;
	do {
		std::cout << "\nTest Mining, Test Voting or Exit[M/V/E] --> ";
		std::cin >> inputChar;
	} while (std::cin.fail() || inputChar != 'm' && inputChar != 'v' && inputChar != 'e' && inputChar != 'M' && inputChar != 'V' && inputChar != 'E');
	std::cin.ignore();
	if (inputChar == 'm' || inputChar == 'M')
	{
		mining(testVote);
	}
	else if (inputChar == 'v' || inputChar == 'V')
	{
		voting();
	}
	else if (inputChar == 'e' || inputChar == 'E')
	{// if user chooses exit out return 0 will close program 
		
		return 0;
	}
	else {
		return 0;
	}
}


int main()
{
    SetConsoleTitleA("Testchain");
	int a = 1;
	do {
		menu();
	} while (a == 1);
	  

    return 0;
}
