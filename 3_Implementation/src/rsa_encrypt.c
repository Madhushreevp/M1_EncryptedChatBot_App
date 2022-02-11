#include<stdio.h>

void rsa_encrypt(){
  long int plaintext,p,q,n,fn,e=2,temp,d,ciphertext;
  printf("Enter your message to encrypt:\n");
  scanf("%ld",&plaintext);
  printf("Enter two prime numbers p and q:\n");
  scanf("%ld %ld",&p,&q);
  n=p*q;
  fn=(p-1)*(q-1);
  temp=findGCD(e,fn);
  while(temp!=1) {
    e++;
    temp=findGCD(e,fn);
    //printf("e=%ld\ttemp=%d\t",e,temp);
  }
  //printf("\ne=%ld\n",e);
  d=multipicative_inverse(fn,e);
  if(d==0) {
    printf("\nrsa is not possible for given p and q.\n");
    exit(0);
  }
  ciphertext=fmod(pow(plaintext,e),n);
  key_pair(e,n,d);
  printf("\nencrypted text:\t%ld\n",ciphertext);
  
}