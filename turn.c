#include"turn.h"
void tu()
{
	e = cube[4];
	f = cube[5];
	g = cube[8];
	h = cube[9];
	i = cube[12];
	j = cube[13];
	k = cube[16];
	l = cube[17];
	a = cube[0];
	b = cube[1];
	c = cube[2];
	d = cube[3];
	cube[4] = g;
	cube[5] = h;
	cube[8] = i;
	cube[9] = j;
	cube[12] = k;
	cube[13] = l;
	cube[16] = e;
	cube[17] = f;
	cube[0] = d;
	cube[1] = a;
	cube[2] = b;
	cube[3] = c;
	printf("U ");
}
void tui()
{
	e = cube[4];
	f = cube[5];
	g = cube[8];
	h = cube[9];
	i = cube[12];
	j = cube[13];
	k = cube[16];
	l = cube[17];
	a = cube[0];
	b = cube[1];
	c = cube[2];
	d = cube[3];
	cube[4] = k;
	cube[5] = l;
	cube[8] = e;
	cube[9] = f;
	cube[12] = g;
	cube[13] = h;
	cube[16] = i;
	cube[17] = j;
	cube[0] = b;
	cube[1] = c;
	cube[2] = d;
	cube[3] = a;
	printf("U' ");
}
void tl()
{
	e = cube[17];
	f = cube[18];
	g = cube[0];
	h = cube[3];
	i = cube[8];
	j = cube[11];
	k = cube[20];
	l = cube[23];
	a = cube[4];
	b = cube[5];
	c = cube[6];
	d = cube[7];
	cube[17] = l;
	cube[18] = k;
	cube[0] = f;
	cube[3] = e;
	cube[8] = g;
	cube[11] = h;
	cube[20] = i;
	cube[23] = j;
	cube[4] = d;
	cube[5] = a;
	cube[6] = b;
	cube[7] = c;
	printf("L ");
}
void tli()
{
	e = cube[17];
	f = cube[18];
	g = cube[0];
	h = cube[3];
	i = cube[8];
	j = cube[11];
	k = cube[20];
	l = cube[23];
	a = cube[4];
	b = cube[5];
	c = cube[6];
	d = cube[7];
	cube[17] = g;
	cube[18] = h;
	cube[0] = i;
	cube[3] = j;
	cube[8] = k;
	cube[11] = l;
	cube[20] = f;
	cube[23] = e;
	cube[4] = b;
	cube[5] = c;
	cube[6] = d;
	cube[7] = a;
	printf("L' ");
}
void tf()
{
	e = cube[5];
	f = cube[6];
	g = cube[2];
	h = cube[3];
	i = cube[12];
	j = cube[15];
	k = cube[20];
	l = cube[21];
	a = cube[8];
	b = cube[9];
	c = cube[10];
	d = cube[11];
	cube[5] = k;
	cube[6] = l;
	cube[2] = e;
	cube[3] = f;
	cube[12] = h;
	cube[15] = g;
	cube[20] = j;
	cube[21] = i;
	cube[8] = d;
	cube[9] = a;
	cube[10] = b;
	cube[11] = c;
	printf("F ");
}
void tfi()
{
	e = cube[5];
	f = cube[6];
	g = cube[2];
	h = cube[3];
	i = cube[12];
	j = cube[15];
	k = cube[20];
	l = cube[21];
	a = cube[8];
	b = cube[9];
	c = cube[10];
	d = cube[11];
	cube[5] = g;
	cube[6] = h;
	cube[2] = j;
	cube[3] = i;
	cube[12] = l;
	cube[15] = k;
	cube[20] = e;
	cube[21] = f;
	cube[8] = b;
	cube[9] = c;
	cube[10] = d;
	cube[11] = a;
	printf("F' ");
}
void tr()
{
	e = cube[9];
	f = cube[10];
	g = cube[1];
	h = cube[2];
	i = cube[16];
	j = cube[19];
	k = cube[21];
	l = cube[22];
	a = cube[12];
	b = cube[13];
	c = cube[14];
	d = cube[15];
	cube[9] = k;
	cube[10] = l;
	cube[1] = e;
	cube[2] = f;
	cube[16] = h;
	cube[19] = g;
	cube[21] = j;
	cube[22] = i;
	cube[12] = d;
	cube[13] = a;
	cube[14] = b;
	cube[15] = c;
	printf("R ");
}
void tri()
{
	e = cube[9];
	f = cube[10];
	g = cube[1];
	h = cube[2];
	i = cube[16];
	j = cube[19];
	k = cube[21];
	l = cube[22];
	a = cube[12];
	b = cube[13];
	c = cube[14];
	d = cube[15];
	cube[9] = g;
	cube[10] = h;
	cube[1] = j;
	cube[2] = i;
	cube[16] = l;
	cube[19] = k;
	cube[21] = e;
	cube[22] = f;
	cube[12] = b;
	cube[13] = c;
	cube[14] = d;
	cube[15] = a;
	printf("R' ");
}
void tb()
{
	e = cube[13];
	f = cube[14];
	g = cube[0];
	h = cube[1];
	i = cube[4];
	j = cube[7];
	k = cube[22];
	l = cube[23];
	a = cube[16];
	b = cube[17];
	c = cube[18];
	d = cube[19];
	cube[13] = k;
	cube[14] = l;
	cube[0] = e;
	cube[1] = f;
	cube[4] = h;
	cube[7] = g;
	cube[22] = j;
	cube[23] = i;
	cube[16] = d;
	cube[17] = a;
	cube[18] = b;
	cube[19] = c;
	printf("B ");
}
void tbi()
{
	e = cube[13];
	f = cube[14];
	g = cube[0];
	h = cube[1];
	i = cube[4];
	j = cube[7];
	k = cube[22];
	l = cube[23];
	a = cube[16];
	b = cube[17];
	c = cube[18];
	d = cube[19];
	cube[13] = g;
	cube[14] = h;
	cube[0] = j;
	cube[1] = i;
	cube[4] = l;
	cube[7] = k;
	cube[22] = e;
	cube[23] = f;
	cube[16] = b;
	cube[17] = c;
	cube[18] = d;
	cube[19] = a;
	printf("B' ");
}
void td()
{
	e = cube[6];
	f = cube[7];
	g = cube[10];
	h = cube[11];
	i = cube[14];
	j = cube[15];
	k = cube[18];
	l = cube[19];
	a = cube[20];
	b = cube[21];
	c = cube[22];
	d = cube[23];
	cube[6] = k;
	cube[7] = l;
	cube[10] = e;
	cube[11] = f;
	cube[14] = g;
	cube[15] = h;
	cube[18] = i;
	cube[19] = j;
	cube[20] = d;
	cube[21] = a;
	cube[22] = b;
	cube[23] = c;
	printf("D ");
}
void tdi()
{
	e = cube[6];
	f = cube[7];
	g = cube[10];
	h = cube[11];
	i = cube[14];
	j = cube[15];
	k = cube[18];
	l = cube[19];
	a = cube[20];
	b = cube[21];
	c = cube[22];
	d = cube[23];
	cube[6] = g;
	cube[7] = h;
	cube[10] = i;
	cube[11] = j;
	cube[14] = k;
	cube[15] = l;
	cube[18] = e;
	cube[19] = f;
	cube[20] = b;
	cube[21] = c;
	cube[22] = d;
	cube[23] = a;
	printf("D' ");
}


	
void twist()
{
	tr();
	tu();
	tri();
	tui();
}