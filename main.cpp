#include <windows.h>
int main(){
    Sleep(100);
    SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);
    return 0;
}
