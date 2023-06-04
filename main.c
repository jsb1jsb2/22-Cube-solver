#pragma warning(disable:4996)
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include"turn.h"
int main()
{
	//Scanning
	int tmpa, a = 0, color = 0;
	puts("");
	puts("Welcome to 2X2 CSP(Cube Solver Program)                  Made by J.S.b");
	puts("Please enter the cube colers");
	puts("RED    -> 1");
	puts("ORANGE -> 2");
	puts("YELLOW -> 3");
	puts("GREEN  -> 4");
	puts("BLUE   -> 5");
	puts("WHITE  -> 6");
	puts("In the order of U, L, F, R, B, D faces ");

	for (tmp = 0; tmp < 24; tmp++)
	{
		scanf("%d", &cube[tmp]);
	}
	a = cube[23];
	printf("\n");
	// Scanning method = a
	printf("Solving");
	Sleep(500);
	printf(". ");
	Sleep(500);
	printf(". ");
	Sleep(500);
	puts(". \n");

	//1-1 step
	if (cube[23] == a && cube[20] != a && cube[22] != a)
	{
		do
		{
			if (cube[15] != a && cube[14] != a && cube[8] != a && cube[9] != a && cube[0] != a && cube[21] != a)
			{
				tu();
			}

			if (cube[15] == a)
			{
				tf();
			}
			else if (cube[14] == a)
			{
				tr();
				tf();

			}
			else if (cube[8] == a)
			{
				tui();
				tri();
				tf();

			}
			else if (cube[9] == a)
			{
				td();
				tri();
				tdi();

			}
			else if (cube[0] == a)
			{
				tui();
				tui();
				tf();
				tf();

			}
			else if (cube[21] == a)
			{
				tfi();
				tri();
				tf();

			}
		} while (cube[20] != a && cube[22] != a);
	}
	if (cube[23] == a && cube[22] == a && cube[21] != a && cube[20] != a)  
	{
		td();
	}
	if (cube[23] != a && cube[22] != a && cube[21] == a && cube[20] == a)  
	{
		tdi();
	}
	if (cube[23] != a && cube[22] == a && cube[21] == a && cube[20] != a)
	{
		tdi();
		tdi();
	}
	//1-2 step
	if (cube[23] == a && cube[22] != a && cube[21] != a && cube[20] == a)
	{
		do
		{
			if (cube[2] != a && cube[10] != a && cube[8] != a && cube[9] != a && cube[15] != a && cube[14] != a && cube[19] != a)
			{
				tu();
			}
			if (cube[2] == a)
			{
				tri();
				tri();

			}
			else if (cube[10] == a)
			{
				tri();
			}
			else if (cube[8] == a)
			{
				tui();
				tr();
				tu();
				tri();
				tdi();

			}
			else if (cube[9] == a)
			{
				tu();
				tr();
				tui();
				tri();
				tdi();

			}
			else if (cube[10] == a)
			{
				tri();
			}
			else if (cube[15] == a)
			{
				twist();
				twist();
				tdi();
			}
			else if (cube[14] == a)
			{
				tri();
				tu();
				tri();
				tdi();
			}
			else if (cube[19] == a)
			{
				tr();
				tdi();
			}
		} while (cube[20] != a);
	}
	if (cube[23] == a && cube[22] != a && cube[21] == a && cube[20] == a)
	{
		tdi();
	}
	else if (cube[23] == a && cube[22] == a && cube[21] == a && cube[20] != a)
	{
		td();
	}
	else if (cube[23] != a && cube[22] == a && cube[21] == a && cube[20] == a)
	{
		tdi();
		tdi();
	}
	//1-3 step

	if (cube[23] == a && cube[22] == a && cube[21] != a && cube[20] == a)
	{
		do
		{
			if (cube[2] != a && cube[8] != a && cube[9] != a && cube[10] != a && cube[15] != a)
			{
				tu();

			}
			if (cube[2] == a)
			{
				for (tmpa = 0; tmpa < 3; tmpa++)
				{
					twist();
				}

			}
			else if (cube[8] == a)
			{
				tui();
				tr();
				tu();
				tri();

			}
			else if (cube[9] == a)
			{
				tu();
				tr();
				tui();
				tri();

			}
			else if (cube[10] == a)
			{
				for (tmpa = 0; tmpa < 3; tmpa++)
				{
					twist();
				}

			}
			else if (cube[15] == a)
			{
				for (tmpa = 0; tmpa < 2; tmpa++)
				{
					twist();
				}

			}
		} while (cube[21] != a);
	}
	puts(" - step 1");
	puts("");
	//step 2
	if (cube[6] != cube[7] && cube[11] != cube[10] && cube[15] != cube[14] && cube[19] != cube[18])
	{
		tr();
		tdi();
		tri();
		tdi();
		tb();
		tb();
		tdi();
		tr();
		td();
		tri();
		td();
		tb();
		tb();
	}
	else if (cube[6] != cube[7] || cube[11] != cube[10] || cube[15] != cube[14] || cube[19] != cube[18])
	{
		while (cube[6] != cube[7])
		{
			td();
		}
		tr();
		td();
		td();
		tri();
		tdi();
		tr();
		td();
		td();
		tri();
		tb();
		tri();
		tbi();
		tr();
	}
	puts(" - step 2");
	puts("");

	//step 3
	switch (a)
	{
	case 1:
		color = 2;
		break;
	case 2:
		color = 1;
		break;
	case 3:
		color = 6;
		break;
	case 4:
		color = 5;
		break;
	case 5:
		color = 4;
		break;
	case 6:
		color = 3;
		break;


	}


	do
	{
		if (cube[4] == color && cube[5] == color && cube[1] == color && cube[2] == color)
		{
			tf();
			twist();
			tfi();
			break;
		}
		else if (cube[8] == color && cube[17] == color && cube[1] == color && cube[2] == color)
		{
			twist();
			tri();
			tf();
			tr();
			tfi();
			break;
		}
		else if (cube[8] == color && cube[13] == color && cube[0] == color && cube[2] == color)
		{
			tf();
			tri();
			tfi();
			tr();
			tu();
			tr();
			tui();
			tri();
			break;
		}
		else if (cube[4] == color && cube[5] == color && cube[16] == color && cube[9] == color)
		{
			tf();
			twist();
			twist();
			tfi();
			break;
		}
		else if (cube[8] == color && cube[9] == color && cube[16] == color && cube[17] == color)
		{
			tf();
			for (tmpa = 0; tmpa < 3; tmpa++)
				twist();
			tfi();
			break;
		}
		else if (cube[3] == color && cube[9] == color && cube[13] == color && cube[17] == color)
		{
			tr();
			tu();
			tri();
			tu();
			tr();
			tu();
			tu();
			tri();
			break;
		}
		else if (cube[8] == color && cube[12] == color && cube[16] == color && cube[0] == color)
		{
			tri();
			tui();
			tr();
			tui();
			tri();
			tu();
			tu();
			tr();
			break;
		}
		else if (cube[0] != color || cube[1] != color || cube[2] != color || cube[3] != color)
		{
			tu();
		}
	} while (cube[0] != color || cube[1] != color || cube[2] != color || cube[3] != color);
	puts(" - step 3");
	puts("");
	//step 4
	if (cube[4] != cube[5] && cube[8] != cube[9] && cube[12] != cube[13] && cube[16] != cube[17])
	{
		tui();
		tr();
		tui();
		tri();
		tui();
		tf();
		tf();
		tui();
		tr();
		tu();
		tri();
		tu();
		tf();
		tf();
	}
	else if (cube[4] != cube[5] || cube[8] != cube[9] || cube[12] != cube[13] || cube[16] != cube[17])
	{
		while (cube[4] != cube[5])
		{
			tu();
		}
		tr();
		tu();
		tu();
		tri();
		tui();
		tr();
		tu();
		tu();
		tri();
		tf();
		tri();
		tfi();
		tr();

	}
	//error
	while (cube[8] != cube[11])
	{
		tu();
	}

	puts(" - step 4");
	puts("");
	puts("Completed Finding the solution");
	printf("(Result is : ");
	for (tmp = 0; tmp < 24; tmp++)
	{
		printf("%d ", cube[tmp]);
	}
	printf(")");
	puts("\n");
	puts("If you have any question or Feedback about CSP, please post with the input number! \n CSP always WELCOME!\n\n");
	system("pause");
}
	

	

	
	