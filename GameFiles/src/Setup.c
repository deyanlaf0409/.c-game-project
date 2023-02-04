
void setup()
{
//Center snake head
    head_pos_x = Height / 2;
    head_pos_y = Width / 2;  
	                
//Spawn first fruit
do{
    fruit_x = 1 + rand()%Height;
    fruit_y = 1 + rand()%Width;
    } while(fruit_x <= 2||fruit_y <= 2||fruit_x == head_pos_x||fruit_y == head_pos_y||fruit_x>=Height||fruit_y>=Width);//cases to respawn the fruit
    score = 0;
}
