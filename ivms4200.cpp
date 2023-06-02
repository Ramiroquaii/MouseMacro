#include <windows.h>
#include <stdio.h>
#include <time.h>

void SendInputKey(WORD keyCode) {
    INPUT input;
    ZeroMemory(&input, sizeof(INPUT));
    input.type = INPUT_KEYBOARD;
    input.ki.wVk = 0;
    input.ki.wScan = keyCode;
    input.ki.time = 0;
    input.ki.dwExtraInfo = 0;

    // Simular pulsación de la tecla
    input.ki.dwFlags = 0; // Indicar que es una pulsación de tecla
    SendInput(1, &input, sizeof(INPUT));

    // Simular liberación de la tecla
    input.ki.dwFlags = KEYEVENTF_KEYUP; // Indicar que es una liberación de tecla
    SendInput(1, &input, sizeof(INPUT));
}

int main() {
	
	SetCursorPos(1051, 466);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	
    // Ejemplo de envío de la letra 'A'
    SendInputKey('r'); // Código ASCII de la letra 'A'
    SendInputKey('a'); // Código ASCII de la letra 'A'
    SendInputKey('m'); // Código ASCII de la letra 'A'
    SendInputKey('i'); // Código ASCII de la letra 'A'
    SendInputKey('r'); // Código ASCII de la letra 'A'
    SendInputKey('o'); // Código ASCII de la letra 'A'

    printf("Se simuló la pulsación de la letra.\n");

    return 0;
}


int pp() {
	
	SetCursorPos(1051, 466);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	BYTE r = 114; // Tecla A (código ASCII)
	BYTE a = 97;
	BYTE m = 109;
	BYTE i = 105;
	BYTE o = 111;

    keybd_event(r, 0, 0, 0); // Simular pulsación de la tecla
    keybd_event(r, 0, KEYEVENTF_KEYUP, 0); // Simular liberación de la tecla
    Sleep(100);
    keybd_event(a, 0, 0, 0); // Simular pulsación de la tecla
    keybd_event(a, 0, KEYEVENTF_KEYUP, 0); // Simular liberación de la tecla
    Sleep(100);
    keybd_event(m, 0, 0, 0); // Simular pulsación de la tecla
    keybd_event(m, 0, KEYEVENTF_KEYUP, 0); // Simular liberación de la tecla
    Sleep(100);
    keybd_event(i, 0, 0, 0); // Simular pulsación de la tecla
    keybd_event(i, 0, KEYEVENTF_KEYUP, 0); // Simular liberación de la tecla
    Sleep(100);
    keybd_event(r, 0, 0, 0); // Simular pulsación de la tecla
    keybd_event(r, 0, KEYEVENTF_KEYUP, 0); // Simular liberación de la tecla
    Sleep(100);
    keybd_event(o, 0, 0, 0); // Simular pulsación de la tecla
    keybd_event(o, 0, KEYEVENTF_KEYUP, 0); // Simular liberación de la tecla
    Sleep(100);
    		
   
    
    SetCursorPos(1047, 520);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    

    
    SetCursorPos(1064, 694);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    		
    		
    return 0;
}
