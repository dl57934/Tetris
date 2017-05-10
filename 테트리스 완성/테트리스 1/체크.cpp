#include ".h.cpp"
void check::check2(int blx[4], int bly[4])
{
	for (int i = 0; i < 4; i++)
	{
		int xxxx = blx[i] - 56;
			board1[xxxx][bly[i]] = 1;
	}
}
int check::svcheck(int blx1[4], int bly1[4])
{
	int tmpx, tmpy;
	for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 21; j++)
		{
			if (board1[i][j] == 1)
			{
				tmpx = i + 56, tmpy = j;
				for (int i = 0; i < 4; i++)
				{
						if (tmpx == blx1[i]  && tmpy == bly1[i]+1 )
						{
							if (bly1[i] == 1)
							{
								return 2;
							}
							else
							{
								check2(blx1, bly1);
								return 1;
								break;
							}
					}
				}
			}
		}
	}
}
void check::disappear()
{
	char block2 = 1;
	int count1 = 0,count2=0;
	for (int yy = 20; yy > 0; yy--)
	{
		if (board1[1][yy] == 1 && board1[2][yy] == 1 && board1[3][yy] == 1 && board1[4][yy] == 1 && board1[5][yy] == 1 && board1[6][yy] == 1 && board1[7][yy] == 1 && board1[8][yy] == 1 && board1[9][yy] == 1 && board1[10][yy] == 1)
		{
			for (int xx = 10; xx > 0; xx--)
			{
				gotoxy(xx+56, yy);
				cout << " ";
				count1++;
			}
			for (int i = 1; i < 11; i++)
				board1[i][yy] = 0;
			count2 = count1 / 10 + count2;
					if (board1[xx][yy] == 1)
					{
						if (yy> yy)
						{
							gotoxy(56 + xx, yy);
							cout << ' ';
							board1[xx][yy] = 0;
							gotoxy(56 + xx, yy + count2);
							cout << block2;
							board1[xx][yy + count2] = 1;
						}
					}
				}
			}
		}