#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  FILE *S1, *S2;
  char output[10], y[10];
  char key[10];
  char g1[10];
  char g2[10];
  sprintf(g1, "%s", argv[1]);
  sprintf(g2, "%s", argv[2]);
  printf ("input key:");
  scanf("key: %s", &key);
  S1 = fopen(g1, "r");
  S2 = fopen(g2, "w");
  fscanf(S1, "%s", &y);
for (int i = 0; i<10;i++) 
	 output[i]=y[i]^key[i%(sizeof(key)/sizeof(char))];

  fclose(S1);
  fputs(output, S2);
  fclose(S2);
  return 0;
}
