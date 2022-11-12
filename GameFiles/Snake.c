#include <stdio.h>    //Standart library..
#include <stdlib.h>  //For system("cls")
#include <conio.h>  //For kbhit()
#include <time.h>  //For rand() functions
#include <math.h>
#define _WIN64_WINNT  _WIN64_WINNT_WIN10
#define NTDDI_VERSION NTDDI_WIN10_22H2
#include <SdkDdkVer.h>//Macros to future-proof the code

//Size of game border 
#define Height 20
#define Width 20 

//Variables
int i,j;
int GameOver = 0, score=0;
int x, y, k, fruit_x, fruit_y;
int totalTails=0; //<-Number of new tails;                 
int tailX[100], tailY[100];
int direction; 

//Game source code
#include "Setup.h"
#include "Draw_Border.h"
#include "Input.h"
#include "Movement.h"



void main()
{
	srand(time(NULL));
	setup();
	
	while(GameOver!=1)
    {
    DrawBorder();
    Input();
    Movement();
    }
    
    
    
    if(GameOver==1) 
    {
    	if(score==1)
    	{
    		printf("\tAre you serious right now bro??");
		}	
	}
	
}





