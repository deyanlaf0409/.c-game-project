
void setup()
{
//Center snake head
    x = Height / 2;
    y = Width / 2;  
	                
//Spawn first fruit
do{
    fruit_x = 1 + rand()%Height;
    fruit_y = 1 + rand()%Width;
    } while(fruit_x <= 2||fruit_y <= 2||fruit_x == x||fruit_y == y||fruit_x>=Height||fruit_y>=Width);//cases to respawn the fruit
    score = 0;
}
