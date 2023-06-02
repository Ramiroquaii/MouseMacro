#include <windows.h>

int main() {
	
	int x = 1803;
    int y = 10;
    SetCursorPos(x, y);
    
    // Simular un clic izquierdo
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    
    // Simular un clic derecho
    //mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
    //mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);

    return 0;
}
