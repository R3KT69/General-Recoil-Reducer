#include <iostream>
#include <windows.h>
#include <cstdlib>  
#include <ctime> 
#include "drag.h"
#include "button.h"

using namespace std;

void bottomright(int intensity)
{
    dragMouseDown(intensity);
    dragMouseRight(intensity);
}
void bottomleft(int intensity)
{
    dragMouseDown(intensity);
    dragMouseLeft(intensity);
}

int simulate_recoil_ak(int bullet)
{
    int alternator = 1;
    int count = 0;
    
    while (count != bullet)
    {
        if (buttonInfo() == true)
        {
            if (count < 10)
            {
                dragMouseDown(40);
            } 

            if (count > 10)
            {
                if (alternator == 1)
                {
                    dragMouseLeft(50);
                    
                } else if (alternator == -1)
                {
                    dragMouseRight(50);
                    
                }
            }

            alternator *= -1;
            count += 1;
            cout << "Bullet fired: " << count << endl;
        }

        if (buttonInfo() == false)
        {
            count = 0;
        }
        
        Sleep(100);
    }
    
    return count;

    
}


int main()
{
    POINT cursorPos;
    SetCursorPos((1920/2), (1080/2));
    int bullet = 9999;
    bool exit;
    
    simulate_recoil_ak(bullet);

    return 0;
}


