#include ".h.cpp"
board::board()//주변 벽 2 허공 0 블럭 1 
{
	for (int x = 0; x < BW + 2; x++)
	{
		for (int y = 0; y < BH + 2; y++)
		{
			board1[x][y] = (y == 0 || y == BH + 1 || x == 0 || x == BW + 1) ? WALL : EMPTY;
		}
	}
	gamescreen();
}
void board::gamescreen()
{
	for (int x = 0; x < BW + 2; x++)
	{
		for (int y = 0; y < BH + 2; y++)
		{
			if (board1[x][y] == 2)
			{
				gotoxy(56 + x, y);
				cout << "*";
				fflush(stdin);
			}
		}
	}
}