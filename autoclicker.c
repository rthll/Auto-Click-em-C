#include <Windows.h>
#include <stdio.h>
#include <conio.h>

int main() {
    printf("Pressione F1 para iniciar o autoclicker e F2 para parar...\n");

    while (1) {
        if (GetAsyncKeyState(VK_F1) & 0x8000) {
            printf("Autoclicker iniciado! Pressione F2 para parar...\n");

            while (!(GetAsyncKeyState(VK_F2) & 0x8000)) {
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                Sleep(1);
            }

            printf("Autoclicker parado.\n");
        }

        Sleep(100);
    }

    return 0;
}
