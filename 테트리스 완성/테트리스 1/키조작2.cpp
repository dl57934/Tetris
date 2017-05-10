#include ".h.cpp"
board b;
void block::change1(int left,int right,int i, int o,int &xx)
{
	int temp1,temp2,temp3;
	if (_kbhit()) {
		switch (_getch())
		{
		case Right:
		{
			if(xx<5)
			xx++;
			break;
		}
		case Left:
		{
			if(right>57)
			xx--;
			break;
		}
		case change:
		{
			 if (i == 0)
			{
				if (left == 57)
					xx = xx + 3;
				else if (left == 58)
					xx = xx + 2;
				else if (left == 59)
					xx = xx + 1;
					temp = bl[3][0];
					bl[3][0]=bl[0][3];
					bl[0][3] = temp;
					temp1 = bl[3][1];
					bl[3][1] =bl[1][3];
					bl[1][3] = temp1;
				 temp2 =bl[3][2];
			bl[3][2] = bl[2][3];
		bl[2][3] = temp2;
			}
			 if (i == 1)
			{
				if (k == 0)
				{
					bl[3][2]=bl[2][3];
					bl[3][1] = bl[1][3];
					bl[2][3] = 0, bl[1][3] = 0;
					k++;
				}
				else if (k == 1)
				{
					if (left == 58)
						xx = xx + 1;
					bl[1][2] = bl[3][1];
					bl[2][3] = bl[3][3];
					 bl[3][3]=0,bl[3][1]=0;
					k++;
				}
				else if (k == 2)
				{
					bl[2][1] = bl[1][2];
					bl[1][2] = 0;
					k++;
				}
		 else if (k == 3)
				 {
					 if (left == 58)
						 xx = xx + 1;
					 bl[1][3] = bl[2][1];
					 bl[3][3] = bl[3][2];
					 bl[2][1] = 0, bl[3][2] = 0;
					 k= k - 3;
				 }
			}
			 if (i == 2)
			{
				if (c == 0)
				{
					bl[3][2]=bl[1][3];
					bl[3][1]=bl[1][2];
					bl[1][3] = 0,bl[1][2]=0;
					c++;
				}
				else 	 if (c == 1)
				{
					if (left == 58)
						xx = xx + 1;
					bl[2][2] = bl[2][3];
					bl[1][2] = bl[3][1];
					bl[3][1] = 0, bl[2][3] = 0;
					c++;
				}
				else if (c == 2)
				{
					bl[2][3]=bl[3][2];
					bl[2][1] = bl[1][2];
					bl[3][1]=bl[3][3];
					c++;
					bl[3][2] = 0, bl[1][2] = 0, bl[3][3] = 0;
				}
				else if (c == 3)
				{
					if (left == 58)
						xx = xx + 1;
					bl[1][2] = bl[2][1];
					bl[1][3]=bl[2][2];
					bl[3][3] = bl[3][1];
					bl[2][1] = 0, bl[2][2] = 0, bl[3][1] = 0;
					c= c - 3;
				}
			}
			 if (i == 3)
			{
				if (n == 0)
				{
					bl[3][1] = bl[1][3];
					bl[2][1] = bl[2][3];
					bl[1][3] = 0, bl[2][3] = 0;
					n++;
				}
				else	 if (n == 1)
				{
					if (left == 58)
						xx = xx + 1;
					bl[1][2] = bl[2][1];
					bl[1][3] = bl[3][1];
					bl[2][2] = bl[3][3];
					bl[3][1] = 0, bl[2][1] = 0, bl[3][3]=0;
					n++;
				}
				else if (n == 2)
				{
					bl[2][1] = bl[1][2];
					bl[2][3] = bl[1][3];
					bl[3][3] = bl[3][2];
					n++;
					bl[3][2] = 0, bl[1][2] = 0, bl[1][3] = 0;
				}
               else if (n == 3)
				{
					if (left == 58)
						xx = xx + 1;
					bl[1][3] = bl[2][1];
					bl[3][2] = bl[2][2];
					bl[2][1] = 0, bl[2][2] = 0;
					n = n - 3;
				}
			}
			 if (i == 5)
			{
				if (left == 58)
					xx = xx + 1;
				temp1 = bl[2][1];
				bl[2][1] = bl[1][3];
				bl[1][3] = temp1;
				temp2 = bl[3][3];
				bl[3][3] = bl[2][3];
				bl[2][3] = temp2;
			}
			 if (i == 6)
			 {
				 if (left == 58)
					 xx = xx + 1;
				temp1 = bl[3][2];
				bl[3][2] = bl[3][3];
				bl[3][3] = temp1;
				temp2 = bl[3][1];
				bl[3][1] = bl[1][2];
				bl[1][2] = temp2;
			}
			 break;
		}
		}
	}
}