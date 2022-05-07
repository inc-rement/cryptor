#include <stdio.h>
#include <stdlib.h>
//#include <assert.c>
int main(int argc, char *argv[])
{
  char output[1024], y[1024];
  char key[8];
  printf ("input key:");
  scanf("%s", &key);
  printf("input phrase:");
  scanf("%s", &y);

for (int i = 0; i<10;i++) 
	 output[i]=y[i]^key[i%(sizeof(key)/sizeof(char))];

  printf("%s\n",output);	  
  return 0;
}
