#include <mbed.h>
#include "AS5600.h"

Serial pc(USBTX, USBRX);
AS5600 encoder;

int ang, lang = 0;
int main()
{

  // put your setup code here, to run once:
  pc.printf("Hello World\n");
  while (1)
  {
    // put your main code here, to run repeatedly:
    ang = encoder.getAngle();

    if (ang != lang)
    {
      pc.printf("%d\n", ang);
      lang = ang;
    }
  }
}