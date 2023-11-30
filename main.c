#include <stdio.h>
#include <stdlib.h>

//형식 선언 
struct point {
	int x;
	int y;
	
};


int main(int argc, char *argv[])
{
	struct point pl, p2;
	int xdiff, ydiff;
	double dist;
	
printf("input pl coordinate (x y) ; ");
scanf("%d %d", &pl.x, &pl.y);

printf("input pl coordinate (x y) : ");
scanf("%d %d", &p2.x, &p2.y);
//distance
xdiff = p2.x - pl.x;
ydiff = p2.y - pl.y;
dist = sqrt(xdiff*xdiff + ydiff*ydiff);

printf("distance : %fln", dist);

	
	system("PAUSE");
	return 0;
}
