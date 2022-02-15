#pragma once
#include <iostream>
#include <ctype.h>

class Vote{
public:
	//std::string voteText;
	char yesOrNo;
	void cinYesOrNo(std::string yNQuestion);

	std::string voteText;
	std::string voteCandidateA;
	std::string voteCandidateB;
	std::string voteCandidateC;
	std::string voteCandidateD;
	void initializeVoteCandidates();

	std::string voterStatus;
	void initializeValidVoterIDs();

	char userInputChar;
	void userInputVote();

	void checkVoterStatus(std::string voterID);



private:


};

