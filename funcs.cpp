#include <iostream>
#include "funcs.h"

// add functions here

//divisible by
bool isDivisibleby(int n, int j)
{
    bool d;

    if(n % j == 0)
    {
        return true;
    }

    return false;
}

//is prime
bool isprime(int n)
{
    bool f = false;
    bool t = true;
    for (int i = 2; i <= n-1; i++) 
    {
        if (n % i == 0) 
        {
            return f;
        }
    }
    return t;
    
}
//next prime
int nextPrime(int n)
{
    n = n+1;
    while(isprime(n) == false)
    {
        n= n+1;
    }
    return n;
     
}
//Count primes in range 
int countPrimes(int a, int b)
{
    int prime_count = 0;

    for(int i = a; i <= b; i++) //from a to b 
    {
        bool isprime = true; //bool set inside loop so it restarts after each number is checked whether they're prime or not
        for(int j = 2; j <= i-1; j++) //from 2 to i-1 cehck if it's prime 
        {
            if(i % j == 0) //if it's not prime 
            {
                isprime = false; //bool is false so it don't add 
                break; //stops the loop since it's alread proven not prime 
            }  
            else
            {
                isprime = true; //else then prime is true 
            }
        }
        if(isprime == true) //is the loop returns that prime is true 
        {
            prime_count +=1; //add it to prime count
        }

    }
    return prime_count;
}

// is a twin prime
bool isTwinPrime(int n)
{
    bool prime;
    bool primen1;
    bool primen2;
    std::string istwin;
    //check if it's a prime number
    isprime(n);

    if(isprime(n) == false)
    {
        return false;
    }


    //check if it's a twin prime 
    int n1 = n-2;
    int n2 = n+2;

    if(isprime(n1)== true || isprime(n2)== true)
    {
        prime = true;
    }
    else
    {
        prime = false;
    }
        
    return prime;
}

int nextTwinPrime(int n)
{
    n = n+1;
    while(isTwinPrime(n) == false)
    {
        n= n+1;
    }
    

    return n;
}

//largestTwinPrime

int largestTwinPrime(int a, int b)
{
    int count = countPrimes(a,b); //counts how many prime numbers there are from a to b 
    int primes[count]; //sets the size of the array to the number of prime numbers there are
 
    //from a to b find the twin primes 

    for(int i = a; i <= b; i++)
    {
        isTwinPrime(i); //check if the number is a twin prime 

        //if it's a twin prime add to array
        if(isTwinPrime(i)==true)
        {
        
            for(int j = 0; j < count ; j++)
            {
                primes[j]= i;
            }
            
        }  
    }

    for(int g = 1; g < count; g++)
    {
        if(primes[0]<primes[g])
        {
            primes[0] = primes[g];
        }
    }
    return primes[0];

}
