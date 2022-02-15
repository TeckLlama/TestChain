#include "Vote.h"


void Vote::cinYesOrNo(std::string yNQuestion)
{ // cinYesOrNo is used to get input of Y or N from user 
	do {
		std::cout << yNQuestion << "[Y/N] --> ";
		std::cin >> yesOrNo;
	} while (std::cin.fail() || yesOrNo != 'y' && yesOrNo != 'n' && yesOrNo != 'Y' && yesOrNo != 'N');
	std::cin.ignore();
	putchar(tolower(yesOrNo));
}
void Vote::initializeVoteCandidates()
{
	voteText = "Please choose from the candidates listed bellow and input [A/B/C/D]";
	voteCandidateA = "Labour";
	voteCandidateB = "Conservative";
	voteCandidateC = "Liberal Democrat";
	voteCandidateD = "Plaid Cymru";
}
void Vote::initializeValidVoterIDs()
{
	voterStatus = "VoterID#1,1\nVoterID#2,1\nVoterID#3,1\nVoterID#4,1\nVoterID#5,1\nVoterID#6,1\nVoterID#7,1\nVoterID#8,1\nVoterID#9,1\nVoterID#10,1";
}
void Vote::userInputVote()
{
	std::cout << voteText << std::endl;
	std::cout << "Candidate A: " << voteCandidateA << std::endl;
	std::cout << "Candidate B: " << voteCandidateB << std::endl;
	std::cout << "Candidate C: " << voteCandidateC << std::endl;
	std::cout << "Candidate D: " << voteCandidateD << std::endl;
	do {
		std::cout << "Please enter which Candidate you want to vote for [A/B/C/D] --> ";
		std::cin >> userInputChar;
	} while (std::cin.fail() || userInputChar != 'a' && userInputChar != 'b' && userInputChar != 'c' && userInputChar != 'd' && userInputChar != 'A' && userInputChar != 'B' && userInputChar != 'C' && userInputChar != 'D');
	std::cin.ignore();
	putchar(tolower(userInputChar));
	

	
}

void Vote::checkVoterStatus(std::string voterID)
{

}
