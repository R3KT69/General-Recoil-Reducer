#include <iostream>
#include <windows.h>

bool buttonInfo() {
    bool leftButtonHeld = false; 

    if (GetAsyncKeyState(VK_LBUTTON) & 0x8000) { 
    if (!leftButtonHeld) 
        { 
            leftButtonHeld = true; 
        }
    } else {
        if (leftButtonHeld) 
        { 
            leftButtonHeld = false; 
        }
    }

    

    return leftButtonHeld;
}
