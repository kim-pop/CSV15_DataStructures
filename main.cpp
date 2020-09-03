#include <iostream>
#include <ctime>    // for time
#include "World.h"
#include <Windows.h>
using namespace std;

int main()
{
    World myWorld(time(0));

    myWorld.display();
	int x = 0;
    char ch;
	cout << "Kimberly Lancaster" << endl;
    while (x != 5) {   // q for quit (cin.get(ch) && ch != 'q')
		system("cls");
		cout << "Kimberly Lancaster" << endl;
        myWorld.simulateOneStep();
        myWorld.display();
		Sleep(1000);
    }

    return 0;
}
