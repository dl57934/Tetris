#include ".h.cpp"
void block::blank(int blax[4], int blay[4],char bl[4][4])
{
	int tmp1 = 0, tmp2 = 0;
	for (int z = 0; z < 4; z++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (bl[j][z] == 1)//1�� ����ϴ� x��ǥ�� y��ǥ�� �����ش�.
			{
						gotoxy(blax[tmp1],blay[tmp2]);
						cout<<" ";
						tmp1++, tmp2++;
					}
				}
	}
	tmp1 = tmp1 - 4, tmp2 = tmp2 - 4;
}

