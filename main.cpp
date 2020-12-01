#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void autoClick() {
	int n = 1;
    int x{};
    int y{};
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTDOWN, x, y, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, x, y, 0, 0);
}




int main()
{
	HWND console = GetConsoleWindow();
  RECT ConsoleRect;
   GetWindowRect(console, &ConsoleRect); 
   MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 475, 225, TRUE);
    cout << "F2 to initiate autoclicker, F10 to stop autoclicking." << endl;

    bool spamOn;

	while (true) {
    if (GetAsyncKeyState(VK_F2))
       {
       while(!GetAsyncKeyState(VK_F10)) {
          autoClick();
       }
    }
  }
}
