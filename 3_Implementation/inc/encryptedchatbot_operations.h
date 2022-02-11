/** 
* @file encryptedchatbot_operations.h
* Chatbot application with  different operations
*
*/
#ifndef __ENCRYPTEDCHATBOT_OPERATIONS_H__
#define __ENCRYPTEDCHATBOT_OPERATIONS_H__

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


/**
*   takes plain text as input in form of string 
*   returns the cipher text as encrypted version 
* @param[in] message_array
* @return Result cipher text
*/
void caesar_encrypt();

/**
*   takes cipher text as input in form of string 
*   returns the plain text as decrypted version 
* @param[in] message_array
* @return Result plain text
*/
void caesar_decrypt();

/**
*   takes plain text as input in form of numbers
*   returns the ciphert text as encrypted version 
* @param[in] prime_numbers
* @param[in] numerics
* @return Result cipher text in form of numbers 
*/
void rsa_encrypt();

/**
*   takes cipher  text as input in form of numbers
*   returns the plain text as decrypted version 
* @param[in] kye_pair
* @param[in] numerics
* @return Result plain text in form of numbers 
*/
void rsa_decrypt();

/**
*   takes prime numbers as input
*   returns the gcd
* @param[in] prime_numbers
* @param[in] n
* @return Result the GCD of 2 numbers
*/
long int findGCD(long int,long int);

/**
*   takes e and n for generation of key pairs.
*   returns the public and private key
* @param[in] prime_numbers
* @return Result key pair of encryption and decryption
*/
void key_pair(long int,long int,long int);


#endif  /* #define __ENCRYPTEDCHATBOT_OPERATIONS_H__ */
