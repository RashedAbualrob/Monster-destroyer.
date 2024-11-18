#include <iostream>
#include <ctime>
using namespace std;
//Copilot, 11/7/2024
int randomDamage(int arr[], int size) {
    int randomIndex = rand() % size;
    return arr[randomIndex];
}

int main() {
    srand(time(0));

    //Variables, Melvyn, 11/7/2024
    int myArray[] = { 100, 110, 120, 140, 150, 160, 170, 180, 190, 200 };
    int arraySize1 = sizeof(myArray) / sizeof(myArray[0]);
    int bossArray[] = { 1000, 1100, 1200, 1400, 1500, 1600, 1700, 1800, 1900, 2000 };
    int arraySize2 = sizeof(bossArray) / sizeof(bossArray[0]);
    int choice;
    int menu;

    //Menu, Guillermo, 11/9/2024
    do {
        cout << "Welcome to Monster Destroyer" << endl;
        cout << "(1) Start" << endl;
        cout << "(2) Credits" << endl;
        cout << "(3) Close" << endl;
        cin >> menu;

        //Primary if/else and secondary Loop, Rashed, 11/11/2024
        if (menu == 1) {
            int randomPlayerValue = randomDamage(myArray, arraySize1);
            int randomBossValue = randomDamage(bossArray, arraySize2);

            cout << "You fight the Great Beast, it has a total HP of " << randomBossValue << ", while your damage output is " << randomPlayerValue << endl;
            cout << "Do you wish to fight or flee?" << endl;
            cout << "(1) Fight" << endl;
            cout << "(2) Flee" << endl;
            cin >> choice;

            if (choice == 1) {
                do {
                    randomBossValue -= randomPlayerValue;
                    cout << "Boss HP after attack: " << randomBossValue << endl;
                } while (randomBossValue > 0);
                cout << "You have defeated the Great Beast!" << endl;
                return 0;
            }
            else if (choice == 2) {
                cout << "You ran away like a coward, never to see the beast slain" << endl;
                return 0;
            }
        }
        else if (menu == 2) {
            cout << "Melvyn" << endl;
            cout << "Guillermo" << endl;
            cout << "Rashed" << endl;
            cout << "Copilot :^)" << endl;
            cout << "*******************************************************************************************************************************" << endl;
        }
    } while (menu != 3);

    cout << "Closing the program." << endl;
    return 0;
}

