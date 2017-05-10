#include ".h.cpp"
int key::key1(int x1, int x2)
{
	while (1)
	{
		gotoxy(x1, x2);
		cout << "¢¸";
		if (_kbhit()) {
			gotoxy(x1, x2);
			printf("      ");
			switch (_getch())
			{
			case UP:
				if (x2 > 10)
					--x2;
				break;
			case DOWN:
				if (x2 < 12)
				{

					++x2;
				}
				break;
			case ENTER:
				system("cls");
				if (x2 == 10)
					return 1;
				if (x2 == 12)
					system("cls");
					return 3;
				break;
			}
		}
	}
}

