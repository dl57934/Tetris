#include ".h.cpp"
int blax[4];
int blay[4];
check please;//üũ ��ü ���� 
void block::smallest(int blax1[4])
{
	tmp = blax1[0];
	for (int i = 1; i < 4; i++)
	{
		if (tmp > blax[i])
			tmp = blax[i];
	}
}
void block::biggest(int blax1[4])
{
	tmp3 = blax1[3];
	for (int i = 0; i < 3; i++)
	{
		if (tmp3 < blax[i])
			tmp3 = blax[i];
	}
}
int block::show1(int &i)//�� ��� �Լ� 
{
	int a, b = -1, j = 0, z = 0,tmp1=0,tmp2=0;
	prebl = i;
	i = rand() % 7;
	color2 = color1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color1 = rand() % 5 + 2);
	board game;
	block1[i].show2();//�̷��� ���� ������ �����ش�.
	if (count1 == 0)//ó���� ���������� ������ ��������ϱ� ù��° ��º� ��  
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 5 + 2);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color2);
	while (b < 18)//b�� y��ǥ �迭ũ�Ⱑ 4�ϱ� b�� 17�̸� 17,18,19,20 y��ǥ�� ��� �ᱹ 20�� �ٴ��̴�. 
	{
		tmp1 = 0, tmp2 = 0;
		for ( z = 0; z < 4; z++)
		{
			for (j = 0; j < 4; j++)
			{
				if (bl[j][z] == 1)//�迭���� 1�϶��� ��� 
				{
					gotoxy(60 + xx, b);
					cout << bl[j][z];
					gotoxy(24, 3);
					cout << " ";
					blax[tmp1] = 60 + xx;//��µǴ� �迭���� x��ǥ����
					blay[tmp2] = b;//��µǴ� �迭���� y��ǥ ����
					tmp1++, tmp2++;
				}
				xx++;//��� �����ָ� x��ǥ�� ��ĭ�� �÷� ����Ѵ�.
				change1(tmp3,tmp, prebl, o, xx);//�� ���ư���, 
			}
			cout << endl;
			xx = xx - 4;
			b++;
		}
		smallest(blax);//x��ǥ�� ���� ���� �� ��������
		biggest(blax);//x��ǥ�� ���� ū�� ��������
		Sleep(200);//�ӵ� 0.2��
		count1++;		
		b = b - 3;
		if (b != 18)
		{
			int hondoni = please.svcheck(blax, blay);
			if (hondoni == 1)
			{
				break;
			}
			else if (hondoni == 2)
			{
				return 2;
				break;
			}
		}
		if (b<18)
			blank(blax, blay, bl);//����ϰ� �����
		if (b == 18)//�ٴڿ� ����Ǵ� ���� �ǿ� �����ϴ� �Լ�
		{
			please.check2(blax, blay);
		}
		please.disappear();
	}
	xx = 0;
}



