#include <stdio.h>
#include "unitTest1.c"
#include "unitTest2.c"
#include "unitTest3.c"
#include "unitTest4.c"


int firstPersonsInfo(void);
int secondPersonsInfo(void);
int thirdPersonsInfo(void);
int fourthPersonsInfo(void);


int main(void) {
  firstPersonsInfo();
  printf("Test Passed\n\n");
  secondPersonsInfo();
  printf("Test Passed\n\n");
  thirdPersonsInfo();
  printf("Test Passed\n\n");
  fourthPersonsInfo();
  printf("Test Passed\n\n");
  return 0;
}