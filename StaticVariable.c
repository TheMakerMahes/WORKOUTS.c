//Static Variable in c programming
#include<stdio.h>
void mahes();

int main()
  {
      mahes();
      mahes();
      mahes();
      mahes();
      mahes();
  }
void mahes()
{
    static int i=1;
    i++;
    printf("\nA : %d ",i);
}

