

void DrawBorder() //Function for making game border
{
	system("cls"); //to clear console screen
    for (i = 1; i <=Height; i++) {
    	
    	printf("\033[0;32m"); //Colours
    	
        for (j = 1; j <=Width; j++) 
		{
            if(i==1 && j==1)
			{
			  printf("%c",201);   //ASCII characters for border lines and corners
			}
			else if(j==Width && i==Height)
            {
            	printf("%c",188); 
			}
            else if(i==Height && j==1)     
            {
            	printf("%c",200);
			}
			else if(i==1 && j==Width)
			{
				printf("%c",187);
			}
			else if(j == 1 || j == Height)
            {                              
                printf("%c",186);
            }
            else if(i == 1 || i ==Width)   
            {                          
                printf("%c",205);
            }
            else if(i==head_pos_x && j==head_pos_y) //Display snake head
            {
            	printf("O");
			}
			else if(fruit_x==i && fruit_y==j) //Display fruit
			{
				printf("\033[0;31m");
				printf("@");         
				printf("\033[0;32m");
			}
			else{
				int print = 0;
				for(k=0;k<totalTails;k++)
				{
					if(tailX[k]==i && tailY[k]==j)
					{
						printf("o");                   //Display new tails
						print = 1;
					}
				}
				if(print==0)
				{
					printf(" ");
				}
			}
			
            }
            printf("\n");
        } 
        printf("Score: ");
        printf("\033[0;33m");
        printf("%d\n",score);
        printf("\033[0;32m");
        printf("Press ESC to exit");
}
