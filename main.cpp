#include <iostream>
#include <windows.h>
#include <string>

using namespace std;


int main()

{
    int n = 1;
    int x{};
    int y{};
    int time; // amount of times to click
    int done = 0; // time before completion for loops
    int interval; // time in ms between clicks
    cout << "Amount of times to click" << endl;

    cin >> time;

    cout << "How many ms should be in between clicks?" << endl;
    cin >> interval;


    while (done < time) // loops through until time is greater than done
    {
        Sleep(interval);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
        mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
        done++;
    }

    cout << "Auto clicking has completed." << endl;
    string finished;
    getline(cin, finished)
       
    return 0;


}