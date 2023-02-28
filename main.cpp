#include <iostream>


#include "funcs.h"



int main()
{
    //is divisible test true
    std::cout<<"isDivisibleby(50,25)"<<std::endl;
    bool t = isDivisibleby(9,3);
    if ( t == true)
    {
        std::cout<<"yes"<<std::endl;
    }
    if(t == false)
    {
        std::cout<<"No"<<std::endl;
    }
    
    std::cout << "\n------------------\n"; // seperator

    std::cout<<"isDivisibleby(9,3)"<<std::endl;
    bool t1 = isDivisibleby(9,3);
    if ( t1 == true)
    {
        std::cout<<"yes"<<std::endl;
    }
    if(t1 == false)
    {
        std::cout<<"No"<<std::endl;
    }
 
    std::cout << "\n------------------\n"; // seperator 

//is divisble false tests
    std::cout<<"isDivisibleby(35,17)"<<std::endl;
    bool t3 = isDivisibleby(35,17);
    if ( t3 == true)
    {
        std::cout<<"yes"<<std::endl;
    }
    if(t3 != true)
    {
        std::cout<<"No"<<std::endl;
    }

std::cout << "\n------------------\n"; // seperator 

    std::cout<<"isDivisibleby(3,2)"<<std::endl;
    bool t4 = isDivisibleby(3,2);
    if ( t4 == true)
    {
        std::cout<<"yes"<<std::endl;
    }
    if(t4 != true)
    {
        std::cout<<"No"<<std::endl;
    }

    std::cout << "\n------------------\n"; // seperator 

//is prime true tests
    std::cout<<"isprime(2)"<<std::endl;
    bool p = isprime(2);
    if(p== true)
    {
        std::cout<<"true"<<std::endl;
    }
    if(p==false)
    {
        std::cout<<"false"<<std::endl;
    }
    std::cout << "\n------------------\n"; // seperator 

    std::cout<<"isprime(3)"<<std::endl;
    bool p1 = isprime(3);
    if(p1== true)
    {
        std::cout<<"true"<<std::endl;
    }
    if(p1==false)
    {
        std::cout<<"false"<<std::endl;
    }

    std::cout << "\n------------------\n"; // seperator 
//is prime false test
    std::cout<<"isprime(4)"<<std::endl;
    bool p2 = isprime(4);
    if(p2== true)
    {
        std::cout<<"true"<<std::endl;
    }
    if(p2==false)
    {
        std::cout<<"false"<<std::endl;
    }

    std::cout << "\n------------------\n"; // seperator 

    std::cout<<"isprime(20)"<<std::endl;

    bool p3 = isprime(20);
    if(p3== true)
    {
        std::cout<<"true"<<std::endl;
    }
    if(p3==false)
    {
        std::cout<<"false"<<std::endl;
    }

    std::cout << "\n------------------\n"; // seperator 
//next prime test
    std::cout<<"nextPrime(4)"<<std::endl;
    std::cout<<nextPrime(4)<<std::endl;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"nextPrime(5)"<<std::endl;
    std::cout<<nextPrime(5)<<std::endl;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"nextPrime(112)"<<std::endl;
    std::cout<<nextPrime(112)<<std::endl;

//prime count test
    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"countPrimes(2,7)"<<std::endl;
    std::cout<<countPrimes(2,7)<<std::endl;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"countPrimes(10,25)"<<std::endl;
    std::cout<<countPrimes(10,25)<<std::endl;

//is twin prime
    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"isTwinPrime(3)"<<std::endl;
    std::cout<<std::boolalpha<<isTwinPrime(3)<<std::endl;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"isTwinPrime(4)"<<std::endl;
    std::cout<<std::boolalpha<<isTwinPrime(4)<<std::endl;

//prime number not a twin prime example
    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"isTwinPrime(23)"<<std::endl;
    std::cout<<std::boolalpha<<isTwinPrime(23)<<std::endl;

    std::cout << "\n------------------\n"; // seperator 
    std::cout<<"isTwinPrime(97)"<<std::endl;
    std::cout<<std::boolalpha<<isTwinPrime(97)<<std::endl;
    

//next twin prime
    std::cout << "\n------------------\n"; // seperator
    std::cout<<"nextTwinPrime(3)"<<std::endl;
    std::cout<<nextTwinPrime(3)<<std::endl;

    std::cout << "\n------------------\n"; // seperator
    std::cout<<"nextTwinPrime(10)"<<std::endl;
    std::cout<<nextTwinPrime(10)<<std::endl;
    std::cout << "\n------------------\n"; // seperator
    std::cout<<"nextTwinPrime(23)"<<std::endl;
    std::cout<<nextTwinPrime(23)<<std::endl;

//largest twin prime from range 
    std::cout << "\n------------------\n"; // seperator
    std::cout<<"largestTwinPrime(5,17)"<<std::endl;
    std::cout<<largestTwinPrime(5,17)<<std::endl;

    std::cout << "\n------------------\n"; // seperator
    std::cout<<"largestTwinPrime(10,23)"<<std::endl;
    std::cout<<largestTwinPrime(10,23)<<std::endl;

    
    return 0;
}
