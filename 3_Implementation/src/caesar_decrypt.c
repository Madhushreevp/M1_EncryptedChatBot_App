#include<stdio.h>

void caesar_decrypt(char message_array[])
{
      int i;
      for(i = 0; i < strlen(message_array); i++)
      {
            message_array[i] = message_array[i] + 10;
      }
}