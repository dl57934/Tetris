#include ".h.cpp"
int blax[4];
int blay[4];
check please;//체크 객체 선언 
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
int block::show1(int &i)//블럭 출력 함수 
{
	int a, b = -1, j = 0, z = 0,tmp1=0,tmp2=0;
	prebl = i;
	i = rand() % 7;
	color2 = color1;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color1 = rand() % 5 + 2);
	board game;
	block1[i].show2();//미래에 뭐가 나올지 보여준다.
	if (count1 == 0)//처음에 무슨색깔이 나올지 상관없으니깐 첫번째 출력블럭 색  
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), rand() % 5 + 2);
	else
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color2);
	while (b < 18)//b는 y좌표 배열크기가 4니깐 b가 17이면 17,18,19,20 y좌표로 출력 결국 20이 바닥이다. 
	{
		tmp1 = 0, tmp2 = 0;
		for ( z = 0; z < 4; z++)
		{
			for (j = 0; j < 4; j++)
			{
				if (bl[j][z] == 1)//배열값이 1일때만 출력 
				{
					gotoxy(60 + xx, b);
					cout << bl[j][z];
					gotoxy(24, 3);
					cout << " ";
					blax[tmp1] = 60 + xx;//출력되는 배열값의 x좌표저장
					blay[tmp2] = b;//출력되는 배열값의 y좌표 저장
					tmp1++, tmp2++;
				}
				xx++;//출력 시켜주며 x좌표를 한칸씩 늘려 줘야한다.
				change1(tmp3,tmp, prebl, o, xx);//블럭 돌아가기, 
			}
			cout << endl;
			xx = xx - 4;
			b++;
		}
		smallest(blax);//x좌표중 가장 작은 것 가져오기
		biggest(blax);//x좌표중 가장 큰것 가져오기
		Sleep(200);//속도 0.2초
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
			blank(blax, blay, bl);//출력하고 지우기
		if (b == 18)//바닥에 저장되는 블럭을 판에 저장하는 함수
		{
			please.check2(blax, blay);
		}
		please.disappear();
	}
	xx = 0;
}



