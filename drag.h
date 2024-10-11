#ifndef MOUSE_DRAG_H
#define MOUSE_DRAG_H

#include <windows.h>

// Function to drag the mouse down by a specified distance
void dragMouseDown(int distance) {
    
    INPUT inputMove = {0};
    inputMove.type = INPUT_MOUSE;
    inputMove.mi.dx = 0;                
    inputMove.mi.dy = distance;         
    inputMove.mi.dwFlags = MOUSEEVENTF_MOVE; 
    SendInput(1, &inputMove, sizeof(INPUT));
}

// Function to drag the mouse right by a specified distance
void dragMouseRight(int distance) {
    
    INPUT inputMove = {0};
    inputMove.type = INPUT_MOUSE;
    inputMove.mi.dx = distance;         
    inputMove.mi.dy = 0;                
    inputMove.mi.dwFlags = MOUSEEVENTF_MOVE; 
    SendInput(1, &inputMove, sizeof(INPUT));
}

// Function to drag the mouse left by a specified distance
void dragMouseLeft(int distance) {
    
    INPUT inputMove = {0};
    inputMove.type = INPUT_MOUSE;
    inputMove.mi.dx = -distance;        
    inputMove.mi.dy = 0;                
    inputMove.mi.dwFlags = MOUSEEVENTF_MOVE; 
    SendInput(1, &inputMove, sizeof(INPUT));
}

#endif // MOUSE_DRAG_H
