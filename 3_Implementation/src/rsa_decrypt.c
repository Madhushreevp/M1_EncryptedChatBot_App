#include<stdio.h>

void rsa_decrypt()
{
  long int plaintext,d,ciphertext,n;
  printf("Enter message to decrypt:\n");
  scanf("%ld",&ciphertext);
  printf("Enter key pair(d,n):\n");
  scanf("%ld %ld",&d,&n);
  plaintext=fmod(pow(ciphertext,d),n);
  printf("Decrypted message:\t%ld",plaintext);
}