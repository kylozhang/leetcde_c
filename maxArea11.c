#include <stdio.h>
#include <string.h>


int maxArea(int* height, int heightSize)
{
	int minr = 0;
	int maxl = heightSize-1;
	int maxarea = 0;
	int area;
	
	while (minr < maxl) {
		if (height[minr] < height[maxl])
			area = height[minr];
		else
			area = height[maxl];
		area *= (maxl - minr);
			
		if (area > maxarea) {
			maxarea = area;
		}
		
		if (height[minr] < height[maxl])
			minr++;
		else
			maxl--;
	}

	
    return maxarea;
}

int main(int argc, char *argv[])
{
	int data[] = {1,8,6,2,5,4,8,3,7};
	printf("%d\n",maxArea(data,9));
	return 0;
}
