#include <Windows.h>
#include <stdio.h>

bool IsProgramRunning(const char* windowTitle) {
    HWND windowHandle = FindWindow(NULL, windowTitle);
    return (windowHandle != NULL);
}

int main() {
    // Obtener el identificador de la ventana
    HWND ivms4200 = FindWindow(NULL, "iVMS-4200");
	printf("ivms4200: %d\n", ivms4200);

    if (ivms4200 != NULL) {
  
        HWND primerPlano = GetForegroundWindow(); //Ventana en primer plano
		printf("primerPlano: %d\n", primerPlano);
		
        if (primerPlano == ivms4200) {
            printf("La ventana está activa y en primer plano.\n");
        } else {
        	printf("La ventana en segundo plano.\n");
        	printf("Activando ventana.\n");
        	
        	// Traer la ventana al frente
        	SetWindowPos(ivms4200, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        	SetWindowPos(ivms4200, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        	//SetWindowPos(ivms4200, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
        	ShowWindow(ivms4200, SW_MAXIMIZE); // Si está minimizada, maximizarla antes de traerla al frente
        	SetForegroundWindow(ivms4200); // La ventana no está en primer plano, activarla
		}

        // Verificar si la ventana ahora está en primer plano
        //HWND checkPrimerPlano = GetForegroundWindow();

		//printf("Seleccion inicial: %d\n", ivms4200);
		//printf("Antes: %d\n", primerPlano);
		//printf("Comprobacion: %d\n", checkPrimerPlano);
		
        //if (checkPrimerPlano == ivms4200) {
        //    printf("La ventana QUEDO ACTIVA Y AL FRENTE.\n");
        //} else {
        //    printf("No se pudo activar iVMS-4200.\n");
        //}
    } else {
        // La ventana no se encontró
        printf("La ventana iVMS-4200 no fue encontrada como programa.\n");
    }

    return 0;
}

