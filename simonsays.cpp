#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;

void SimonSays() {
    int right = 0;
    int Disp[5];
    int input, j, cnt = 0;
    char playAgain;

    do {
        srand(time(0));
        for (int i = 0; i < 5; i++) {
            int N = 10;
            Disp[i] = rand() % N;
        }

        for (int i = 0; i < 5; i++) {
            for (j = 0; j <= i; j++) {
                for (int k = 0; k <= i; k++) {
                    cout << Disp[k];
                }
                cout << "" << endl;
                int a;
                cout << "enter any number to proceed:";
                cin >> a;
                system("cls");
                cout << "type the number just displayed" << endl;
                cin >> input;
                system("cls");
                cout << "" << endl;
                if (input == Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 1] + 10 * Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 2] + 10 * Disp[j + 1] + 100 * Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 3] + 10 * Disp[j + 2] + 100 * Disp[j + 1] + 1000 * Disp[j])
                    cout << "Equal! you may proceed to the next round." << endl;
                else if (input == Disp[j + 4] + 10 * Disp[j + 3] + 100 * Disp[j + 2] + 1000 * Disp[j + 1] + 10000 * Disp[j])
                    cout << "Congratulations ! You win" << endl;
                else if (input != Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else if (input == Disp[j + 1] + 10 * Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else if (input == Disp[j + 2] + 10 * Disp[j + 1] + 100 * Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else if (input == Disp[j + 3] + 10 * Disp[j + 2] + 100 * Disp[j + 1] + 1000 * Disp[j]) {
                    cout << "Not Equal! you fail this round" << endl;
                    cnt += 1;
                }
                else
                    cout << "Not Equal! you fail this round" << endl;
                break;
                cnt += 1;
            }
            cout << "" << endl;
            if (cnt >= 1)
                break;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');
}

int main() {
    SimonSays();
    return 0;
}
