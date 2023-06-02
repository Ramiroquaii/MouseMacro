#include <windows.h>
#include <stdio.h>
#include <time.h>

int main() {
    const char* programa = "C:\\Program Files (x86)\\iVMS-4200 Site\\iVMS-4200 Client\\Client\\iVMS-4200.Framework.C.exe";
	
    const char* ventana = "iVMS-4200";

    // Verificar si la ventana está en ejecución
    HWND windowHandle = FindWindow(NULL, ventana);

    if (windowHandle != NULL) {
        printf("El programa ya esta en ejecucion.\n");
    } else {
        printf("El programa no esta en ejecucion. Ejecutando...\n");

        // Ejecutar el programa
        HINSTANCE hInstance = ShellExecute(NULL, "open", programa, NULL, NULL, SW_SHOWNORMAL);

        if (hInstance > (HINSTANCE)32) {
            printf("El programa se ejecuto correctamente.\n");
            
            Sleep(15000);
            
            SetCursorPos(1051, 466);
    		
        } else {
            printf("No se pudo ejecutar el programa.\n");
        }
    }
    
    int x = 1051;
    int y = 466;	
	SetCursorPos(1051, 466);
            //mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    		//mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
    		//escribirUser();
    		
 printf("Movi el mouse.\n");
    return 0;
}



