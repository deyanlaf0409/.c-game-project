
   void Movement(){

    int prevX = tailX[0];         //Making new tails follow snake head
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (i = 1; i < totalTails; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    
    switch(direction){    //After user input , move direction of the snake is determined
        case 1:            
            x--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y--;
            break;
        case 4:
            y++;
            break;
        default:
            break;
    }
	 
    
       if(x <2 || x >Height-1 || y <2 || y >Width-1)  //Game over if snake head gets out of border 
   {
        GameOver = 1;
   }


   for(i = 0; i <totalTails; i++){
        if(tailX[i] == x && tailY[i] == y){  //Game-over if snake head is on the position of tail
            GameOver = 1;
        }
    }


    if(x == fruit_x && y == fruit_y){  //Every time snake head is on the position of fruit, score is +1 and new tail is genarated
        score += 1;
        totalTails++;
            	
 do{  //After snake head eats fruit, new one is genarated randomly
    fruit_x = 1 + rand()%Height;
    fruit_y = 1 + rand()%Width;
    } while(fruit_x <= 2||fruit_y <= 2||fruit_x == x||fruit_y == y||fruit_x>=Height||fruit_y>=Width);
    }
}
