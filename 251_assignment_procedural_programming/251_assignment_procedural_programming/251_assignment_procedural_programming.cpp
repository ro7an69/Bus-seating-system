#include <iostream>
#include <iomanip>
#include <fstream>
#include <deque>
#include <string>
using namespace std;
char check;

#define rows 8
#define columns 4
void display() {

    string line;
    char letter = 'a';

    while (letter <= 'e') {
        string str = "stop";
        str.push_back(letter);
        ifstream file(str + ".txt");
        if (file.is_open()) {
            while (getline(file, line)) {
                cout << line;
                cout << endl;
            }
        }
        letter++;
        cout << letter << endl;
    }
}
void stopA(ifstream& file1, deque<char>& s_1) {
    string x;
    while (getline(file1, x)) {
        for (int k = 0;k < x.size();k++) {
            s_1.push_back(x[k]);
        }
    }
}
void stopB(ifstream& file2, deque<char>& s_2) {
    string x1;
    while (getline(file2, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_2.push_back(x1[k]);
        }
    }
}
void stopC(ifstream& file3, deque<char>& s_3) {
    string x1;
    while (getline(file3, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_3.push_back(x1[k]);
        }
    }
}
void stopD(ifstream& file4, deque<char>& s_4) {
    string x1;
    while (getline(file4, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_4.push_back(x1[k]);
        }
    }
}
void stopE(ifstream& file5, deque<char>& s_5) {
    string x1;
    while (getline(file5, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_5.push_back(x1[k]);
        }
    }
}

void assignE(char seats[8][4], deque<char>& s_5) {
    char check;
    int inserted = 0;

    for (int k = 1;k < s_5.size();k++) {
        check = s_5[k];
        inserted = 0;
        if (check == 'L') {
            for (int i = 0;i < 4;i++) {
                for (int j = 0;j < 4;j++) {
                    if (seats[i][j] == '0') {
                        seats[i][j] = 'L';
                        inserted = 1;
                        if (inserted == 1)
                            break;
                    }
                }
                if (inserted == 1)
                    break;
            }
        }


         
        if (check == 'M') {
            for (int i = 0;i < 4;i++) {
                for (int j = 0;j < 4;j++) {
                    if (seats[i][j] == '0') {
                        seats[i][j] = 'M';

                        inserted = 1;
                        if (inserted == 1)
                            break;
                    }
                }

                if (inserted == 1)
                    break;
            }
        }
      
        if (check == 'C') {
            for (int i = 0;i < 4;i++) {
                for (int j = 0;j < 3;j++) {
                    if (seats[i][j] == '0') {
                        seats[i][j] = 'C';
                        inserted = 2;
                        if (inserted == 2)
                            break;
                    }
                }
                if (inserted == 2)
                    break;
            }
        }
        if (check == 'B') {
            for (int i = 4;i < 8;i++) {
                for (int j = 0;j < 4;j++) {
                    if (seats[i][j] == '0') {
                        seats[i][j] = 'B';
                        inserted = 1;
                        if (inserted == 1)
                            break;
                    }
                }
                if (inserted == 1)
                    break;
            }
        }



    }
}

void remove(char seats[8][4], deque<char>& r_1) {
    char check;
    int removed = 0;
    for (int k = 1;k < r_1.size();k++) {
        check = r_1[k];

        if (check == 'l') {
            for (int i = 0;i <= 4;i++) {
                for (int j = 0;j < 4;j++) {
                    if (seats[i][j] == 'L') {
                        seats[i][j] = '0';
                        removed = 1;
                        if (removed == 1)
                            break;
                    }
                }
                if (removed == 1)
                    break;
            }
        }
        if (check == 'm') {
            for (int i = 0;i < 4;i++) {
                for (int j = 0;j < 4;j++) {
                    if (seats[i][j] == 'M') {
                        seats[i][j] = '0';
                        removed = 1;
                        if (removed == 1)
                            break;
                    }
                }
                if (removed == 1)
                    break;
            }
        }removed = 0;
        if (check == 'z') {
            for (int i = 0;i < 4;i++) {
                for (int j = 0;j < 4;j++) {
                    if (seats[i][j] == 'C') {
                        seats[i][j] = '0';
                        removed++;

                        if (removed == 1)
                            break;
                    }
                }
                if (removed == 1)
                {
                    removed = 0;
                    break;
                }


            }
        }






    }
}

void seat_map(char seats[rows][columns])
{

    unsigned i, j;
    char letter = 'A';

    for (j = 0;j < columns;j++)
    {
        if (j == 4)
            cout << "  ";
        cout << setw(10) << letter++;
    }
    cout << endl << endl;
    for (i = 0;i < rows;i++)
    {
        cout << "seat";
        cout << i + 1;
        for (j = 0;j < columns;j++)
        {
            if (j == 4)
                cout << " ";
            cout << setw(8) << seats[i][j];
        }
        cout << endl;
    }
}

int main() {
    ifstream file1("stopa.txt");
    ifstream file2("stopb.txt");
    ifstream file3("stopc.txt");
    ifstream file4("stopd.txt");
    ifstream file5("stope.txt");
    deque<char>s_1;
    deque<char>s_2;
    deque<char>s_3;
    deque<char>s_4;
    deque<char>s_5;
    int counter = 0;
    ifstream file("data.txt");
    string line;
    string in;
    string out;
    char stopName = 'a';
    while (getline(file, line)) {
        string stop = "stop";
        deque <string> a;
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

        for (int i = 0; i < a.size();i++) {
            write << a[i] << endl;
        }
    }
    char seats[rows][columns] = { {'0','0','0','0',},{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0',},{'0','0','0','0'},{'0','0','0','0'},{'0','0','0','0'} };
    char oper;
    cout << " click ofstream file to get to know passengers that come in and out" << endl;
    cout << "enter  D to display all the seating arrangment" << endl;
    cout << "press v to see passengers getting in and out from every stop" << endl;
    cout << "press R to reset sitting plan" << endl;
    cin >> oper;
    switch (oper) {
    case 'D':
        cout << "passengers entering stop a" << endl;
        stopA(file1, s_1);
        assignE(seats, s_1);
        seat_map(seats);
        cout << "passengers entering stop b" << endl;
        stopB(file2, s_2);
        assignE(seats, s_2);
        remove(seats, s_2);
        seat_map(seats);
        cout << "passengers entering stop c" << endl;
        stopC(file3, s_3);
        assignE(seats, s_3);
        remove(seats, s_3);

        seat_map(seats);
        cout << "passengers entering stop d" << endl;

        stopD(file4, s_4);
        assignE(seats, s_4);

        seat_map(seats);
        cout << "passengers entering stop e" << endl;

        stopE(file5, s_5);
        assignE(seats, s_5);
        remove(seats, s_5);

        seat_map(seats);

        break;

    case 'V':
        display();
        break;
    case 'R':
        seat_map(seats);
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
