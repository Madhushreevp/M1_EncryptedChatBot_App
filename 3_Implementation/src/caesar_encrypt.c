#include<stdio.h>

void caesar_encrypt(char message_array[])
{
      int i;
      for(i = 0; i < strlen(message_array); i++)
      {
            message_array[i] = message_array[i] - 10;
      }
}
 