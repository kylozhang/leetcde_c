#include <stdio.h>

int romanToInt(char* s) {
    char value;
    int i = 0;
    int int_value = 0;
    char* p = s;

	while ((value = *(p++)) != 0) {
	//	printf("%d %c\n",int_value,value);
		if (value == 'M') {
			int_value += 1000;
			continue;
		}

		if (value == 'C' && *p == 'M') {
			int_value += 900;
			p++;
			continue;
		}
		
		if (value == 'C' && *p == 'D') {
			int_value += 400;
			p++;
			continue;
		}
		
		if (value == 'D') {
			int_value += 500;
			continue;
		}
		
		if (value == 'C') {
			int_value += 100;
			continue;
		}
		
		if (value == 'X' && *p == 'C') {
			int_value += 90;
			p++;
			continue;
		}
		
		if (value == 'L') {
			int_value += 50;
			continue;
		}
		
		if (value == 'X' && *p == 'C') {
			int_value += 90;
			p++;
			continue;
		}

		if (value == 'X' && *p == 'L') {
			int_value += 40;
			p++;
			continue;
		}
		
		if (value == 'X') {
			int_value += 10;
			continue;
		}
		
		if (value == 'I' && *p == 'X') {
			int_value += 9;
			p++;
			continue;
		}

		if (value == 'I' && *p == 'V') {
			int_value += 4;
			p++;
			continue;
		}
		
		if (value == 'I') {
			int_value += 1;
			continue;
		}
		
		if (value == 'V') {
			int_value += 5;
			continue;
		}
	}    
    return int_value;    
} 
  


int main(int argc, char *argv[])
{
	printf("%d\n",romanToInt("MCMXCIV"));
	printf("%d\n",romanToInt("LVIII"));       
	printf("%d\n",romanToInt("IX"));       
	return 0;
}
