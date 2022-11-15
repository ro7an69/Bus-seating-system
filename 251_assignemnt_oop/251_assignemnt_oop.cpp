// 251_assignemnt_oop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "matrix.h"
#include "stop.h"
#include <fstream>
#include <iostream>
#include <string>
#include <deque>

int main() {
    /*
    matrix m1;
    m1.setRows(8);
    m1.setColumns(4);
    */

    stop m1;
    ifstream file("data.txt");
    ifstream file1("stopa.txt");
    ifstream file2("stopb.txt");
    ifstream file3("stopc.txt");
    ifstream file4("stopd.txt");
    ifstream file5("stope.txt");
    deque<char> s_1;
    deque<char> s_2;
    deque<char> s_3;
    deque<char> s_4;
    deque<char> s_5;
    int counter = 0;

    string line;
    string in;
    string out;
    char stopName = 'a';

    while (getline(file, line)) {
        string stop = "stop";
        deque<string> a;
        getline(file, in);

        a.push_back(in);
        getline(file, out);
        a.push_back(out);
        counter++;
        stop.push_back(stopName);
        stop.push_back('.');
        stop.push_back('t');
        stop.push_back('x');
        stop.push_back('t');
        ofstream write(stop, std::ios::trunc);
        stopName++;

        for (int i = 0; i < a.size(); i++) {
            write << a[i] << endl;
        }
    }

    char oper;
    cout << " click ofstream file to get to know passengers that come in and out"
        << endl;
    cout << "enter  D to display all the seating arrangment" << endl;
    cout << "press v to see passengers getting in and out from every stop"
        << endl;
    cout << "press R to reset sitting plan" << endl;
    cin >> oper;




    switch (oper) {
    case 'D':
    {
        m1.setName("Stop A");
        m1.disp();
        m1.stopA(file1, s_1);

        m1.assignE(s_1);

        m1.seat_map();
        m1.setName("Stop B");
        m1.disp();
        m1.stopB(file2, s_2);

        m1.assignE(s_2);
        m1.remove(s_2);
        m1.seat_map();
        m1.setName("Stop C");
        m1.disp();

        m1.stopC(file3, s_3);

        m1.assignE(s_3);
        m1.remove(s_3);
        m1.seat_map();
        m1.setName("Stop D");
        m1.disp();

        m1.stopD(file4, s_4);

        m1.assignE(s_4);

        m1.seat_map();
        m1.setName("Stop E");
        m1.disp();

        m1.stopE(file5, s_5);

        m1.assignE(s_5);
        m1.remove(s_5);
        m1.seat_map();

        break;
    }


    case 'V':
        m1.display();
        break;
    case 'R':
        m1.seat_map();

        break;
    default:
        cout << "enter the right key";
    }
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
