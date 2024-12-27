#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
                    printf("Playing Sound: ");
                    double base_frequency = 440;
                    double time_ms = 1000;
                    double factor = pow(2, 1.0/12.0);
                    int i;
                    for(i = 0; i <= 12; i++)
                    {
                        double note = base_frequency * pow(factor,i);
                        Beep(note, time_ms);
                    
                    }

                   

}
