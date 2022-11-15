#include "matrix.h"
#include <string>
#include <iomanip>
#include <iostream>


void matrix::display() {
    string line;
    char letter = 'a';
    while (letter <= 'e') {
        string str = "stop";
        str.push_back(letter);
        ifstream file(str + ".txt");
        if (file.is_open()) {
            while (getline(file, line)) {
                cout << line << endl;
            }
        }
        letter++;
        cout << letter << endl;
    }
}
void matrix::stopA(ifstream& file1, deque<char>& s_1) {
    string x;
    while (getline(file1, x)) {
        for (int k = 0;k < x.size();k++) {
            s_1.push_back(x[k]);
        }
    }
}
void matrix::stopB(ifstream& file2, deque<char>& s_2) {
    string x1;
    while (getline(file2, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_2.push_back(x1[k]);
        }
    }
}
void matrix::stopC(ifstream& file3, deque<char>& s_3) {
    string x1;
    while (getline(file3, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_3.push_back(x1[k]);
        }
    }
}
void matrix::stopD(ifstream& file4, deque<char>& s_4) {
    string x1;
    while (getline(file4, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_4.push_back(x1[k]);
        }
    }
}
void matrix::stopE(ifstream& file5, deque<char>& s_5) {
    string x1;
    while (getline(file5, x1)) {
        for (int k = 0;k < x1.size();k++) {
            s_5.push_back(x1[k]);
        }
    }
}
void matrix::assignE(deque<char>& s_5) {
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
                        cout << "the ticket price for lady in seat" << i << j << " is 10 dhs" << endl;
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
                        cout << "the ticket price for mother in seat" << i << j << " is 8 dhs" << endl;
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
                        cout << "the ticket price for children in seat" << i << j << " is 5 dhs" <<endl;
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
                        cout << "the ticket price for man in seat" << i << j <<  " is 12 dhs" << endl;
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

void matrix::remove(deque<char>& r_1) {
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
void matrix::seat_map()
{

    unsigned i, j;
    char letter = 'A';

    for (j = 0;j < 4;j++)
    {
        if (j == 4)
            cout << "  ";
        cout << setw(10) << letter++;
    }
    cout << endl << endl;
    for (i = 0;i < 8;i++)
    {
        cout << "seat";
        cout << i + 1;
        for (j = 0;j < 4;j++)
        {
            if (j == 4)
                cout << " ";
            cout << setw(8) << seats[i][j];
        }
        cout << endl;
    }
}

