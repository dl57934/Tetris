#include ".h.cpp"
int block::show2()
{
	int z, j;
for (z = 0; z < 4; z++)
{
	for (j = 0; j < 4; j++)
	{
			gotoxy(20 + j, z);
			cout << bl[j][z];
			fflush(stdin);
	}
	fflush(stdin);
} 
return color1;
}