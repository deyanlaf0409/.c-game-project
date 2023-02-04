
   void Movement(){

    int prevX = tailX[0];         //Making new tails follow snake head
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = head_pos_x;
    tailY[0] = head_pos_y;

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
            head_pos_x--;
            break;
        case 2:
            head_pos_x++;
            break;
        case 3:
            head_pos_y--;
            break;
        case 4:
            head_pos_y++;
            break;
        default:
            break;
    }
	 
    
       if(head_pos_x <2 || head_pos_x >Height-1 || head_pos_y <2 || head_pos_y >Width-1)  //Game over if snake head gets out of border 
   {
        GameOver = 1;
   }


   for(i = 0; i <totalTails; i++){
        if(tailX[i] == head_pos_x && tailY[i] == head_pos_y){  //Game-over if snake head is on the position of tail
            GameOver = 1;
        }
    }


    if(head_pos_x == fruit_x && head_pos_y == fruit_y){  //Every time snake head is on the position of fruit, score is +1 and new tail is genarated
        score += 1;
        totalTails++;
            	
 do{  //After snake head eats fruit, new one is genarated randomly
    fruit_x = 1 + rand()%Height;
    fruit_y = 1 + rand()%Width;
    } while(fruit_x <= 2||fruit_y <= 2||fruit_x == head_pos_x||fruit_y == head_pos_y||fruit_x>=Height||fruit_y>=Width);
    }
}
