#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <dos.h>
#include <windows.h>
#include <cmath>

using namespace std;

int main() {
    int square;

    cout << "Type a number." << "\n\n";

    cin >> square;

    cout << "The Square Root of " << square << " " << "is " << sqrt(square);

    sleep(3);
    return 0;
}
