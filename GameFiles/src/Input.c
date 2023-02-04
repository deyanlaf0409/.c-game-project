
    void Input(){  //Getting user input from keyboard

    if(kbhit()){ //If a key has been pressed then it returns a non zero value otherwise returns zero.         
        switch(getch()){
        case 'w':
            direction = 1;   
            break;
        case 's':
            direction = 2;
            break;
        case 'a':
            direction = 3;
            break;
        case 'd':
            direction = 4;
            break;
        case 27: //ASCII number for 'esc' button
        	GameOver = 1;
        	break;
    }
    }
}

