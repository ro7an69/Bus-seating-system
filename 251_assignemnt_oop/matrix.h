#pragma once
#include <iomanip>
#include <iostream>
#include <fstream>
#include <deque>
using namespace std;

class matrix {
public:
	char seats[8][4] = { {'0','0','0','0',},{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0',},{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0'} };

	void display();

	void stopA(ifstream& file1, deque<char>& s_1);
	void stopB(ifstream& file2, deque<char>& s_2);
	void stopC(ifstream& file3, deque<char>& s_3);
	void stopD(ifstream& file4, deque<char>& s_4);
	void stopE(ifstream& file5, deque<char>& s_5);
	void assignE(deque<char>& s_6);
	
	
	void seat_map();
	void remove(deque<char>& r_1);
};

