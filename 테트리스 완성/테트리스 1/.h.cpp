#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
#define UP 72
#define Left 75
#define Right 77
#define DOWN 80
#define ENTER 13
#define change 112
#define BX 5
#define BY 1
#define BW 10
#define BH 20
static enum { EMPTY, BRICK, WALL };
using namespace std;
static int temp;
static int color1;
static int color2;
static int prebl;
static int count1=0;
static int o=0,i=0;
static int xx = 0;
static int n=0,c=0 ,k=0,ans;
static void SetColor(int color) { // 색상 변경 함수의 본체입니다
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
static void gotoxy(int x, int y)
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
static void design()
{
	gotoxy(50, 10);
	cout << "게임시작" << endl;
	gotoxy(50, 11);
	cout << "랭킹" << endl;
	gotoxy(50, 12);
	cout << "게임종료" << endl;
}
static void gamedesign()
{
	gotoxy(50, 10);
	cout << "테트리스" << endl;
	gotoxy(50, 11);
	cout << "뉴테트리스" << endl;
}
static class key {
private:
	int x1 , x2 ;
public:
	static int key1(int x1, int x2);
};
static class block {
public:
	char bl[4][4];
	int tmp,tmp3;
public:
	int show1(int  &i);
	void blank(int blax[4],int blay[4],char bl[4][4]);
	void change1(int left,int right,int i,int o,int &xx);
	int show2();
	void smallest(int blax1[4]);
	void biggest(int blax1[4]);
};
static  block block1[7]= {
	{ 0,0,0,0, 0,0,0,0, 0,0,0,0, 1,1,1,1 },
	{ 0,0,0,0, 0,0,0,1, 0,0,1,1, 0,0,0,1 },
	{ 0,0,0,0, 0,0,1,1, 0,0,0,1, 0,0,0,1 } ,
	{ 0,0,0,0, 0,0,0,1, 0,0,0,1, 0,0,1,1 },
	{ 0,0,0,0, 0,0,0,0, 0,0,1,1, 0,0,1,1 },
	{ 0,0,0,0, 0,0,0,0, 0,1,1,0, 0,0,1,1 },
	{ 0,0,0,0, 0,0,0,0, 0,0,1,1, 0,1,1,0 } };
static class board {
protected:
	int board1[BW + 2][BH + 2];
public:
	board();
	void gamescreen();
};
static class check:public board
{
public:
	void check2(int blx[4],int bly[4]);
	int  svcheck(int blx1[4], int bly1[4]);
	void disappear();
};

