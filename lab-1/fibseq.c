#include <stdio.h>
#include <time.h>

extern int fibonacci(int x,int y,int z);

int main(int argc, char **argv)
{
  int number=0;
  int result=0;
  
  int start, finish;
  double duration;
  FILE *outfile;

  scanf("%d",&number);
  start = clock();
  result = fibonacci(number,0,1);   
  finish = clock();
  duration = (double)(finish - start)/CLOCKS_PER_SEC;
  printf("The fibonacci sequence at %d is: %d\n", number, result);
  
  outfile = fopen("result.txt","a");  
  fprintf(outfile, "%d\t%f\n",number, duration);
  fclose(outfile); 
}

