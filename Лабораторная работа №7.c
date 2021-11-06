#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int sqr(int a)
{
	return a * a;
}
int main()
{
	printf("Task 1:\n");
	printf("\n");
	enum prints { книга, журнал, газета, тетрадь, альбом };
	enum prints c = газета;
	printf("%d", c);
	printf("\n");
	printf("\n");
	printf("Task 2:\n");
	printf("\n");
	struct rectangle
	{
		int a_x, a_y;
		int b_x, b_y;
		int c_x, c_y;
		int d_x, d_y;
		float a, b;
	} rec;
	scanf_s("%d %d", &rec.a_x, &rec.a_y);
	scanf_s("%d %d", &rec.b_x, &rec.b_y);
	scanf_s("%d %d", &rec.c_x, &rec.c_y);
	scanf_s("%d %d", &rec.d_x, &rec.d_y);
	rec.a = sqrt(sqr(rec.b_x - rec.a_x) + sqr(rec.b_y - rec.a_y));
	rec.b = sqrt(sqr(rec.c_x - rec.b_x) + sqr(rec.c_y - rec.b_y));
	printf("S = %f\n", rec.a * rec.b);
	printf("\n");
	printf("Task 3:\n");
	printf("\n");
	struct bitf
	{
		unsigned int replay : 1;
		unsigned int pause : 1;
		unsigned int record : 1;
		unsigned int charge : 1;
	};
	union myunion
	{
		struct bitf b;
		unsigned int i;
	};
	union myunion t;
	scanf_s("%x", &t.i);
	printf_s("%x\n", t.i);
	printf("Replay %s\n", (t.b.replay == 1) ? "On" : "off");
	printf("Pause %s\n", (t.b.pause == 1) ? "On" : "off");
	printf("Record %s\n", (t.b.record == 1) ? "On" : "off");
	printf("Charge %s\n", (t.b.charge == 1) ? "On" : "off");
}
