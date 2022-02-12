// TestChain.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Blockchain.h"
#include <chrono>
#include <ctime>
#pragma warning(disable : 4996)
int main()
{
    Blockchain bChain = Blockchain();
    std::chrono::time_point<std::chrono::system_clock> start, end;
    
    start = std::chrono::system_clock::now();
    std::cout << "Mining block 1..." << std::endl;
    bChain.AddBlock(Block(1, "Block 1 Data"));
    end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);
    std::cout << "finished computation at " << std::ctime(&end_time)<< "elapsed time: " << elapsed_seconds.count() << "s\n";

    std::cout << "Mining block 2..." << std::endl;
    bChain.AddBlock(Block(2, "Block 2 Data"));
    
    
    std::cout << "Mining block 3..." << std::endl;
    bChain.AddBlock(Block(3, "Block 3 Data"));
    

    return 0;
}
