// Day 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//=======================================================================================================
//                                                                                                      =
//......................................array of chracters..............................................=
//                                                                                                      =
//=======================================================================================================

int cha() {

    // if we decleare array of character simple in double cote then 
    // we print it out we will get a grbage value with that array
    // this is due to the reason that we have to terminate that array

    //{'w','a','r','d','a'} just like this array we have to terminate this as  {'w','a','r','d','a', '\0'} 

    //........................................this program is showing the output with garbage value......................................

    cout << "====================================================================================================" << endl;

    char message[5]{ 'w','a','r','d','a' };

    cout << "messagre is " << message << endl;

    //...........................This program showing value without garbage value ...........................................................

    cout << "====================================================================================================" <<endl;


    char msg[6]{ 'w','a','r','d','a', '\0'};

    cout << "messagre is " << msg<< endl;

    // the array is null terminated with get all the values and also will printt them all


    cout << "====================================================================================================" << endl;

    char msg1[]{ 'w','a','r','d','a', '\0' };

    cout << "messagre is " << msg1 << endl;

    cout << "size is  " << sizeof(msg1) << endl;


    // and if we initilized an array with 6 value and we enter 5 values it will terminate itselt by using null value

    cout << "====================================================================================================" << endl;


    char msg2[6]{ 'w','a','r','d','a'  };

    cout << "messagre is " << msg2 << endl;

    cout << "size is  " << sizeof(msg2) << endl;

    // without giving c string value to the compiler or terminating value we will get a repeated value such ass

    cout << "====================================================================================================" << endl;

    char msg3[]{ 'w','a','r','d','a' };

    cout << "messagre is " << msg3 << endl;

    cout << "size is  " << sizeof(msg3) << endl;

    //..........................................String litrals.......................................

    cout << "====================================================================================================" << endl;

    char msg4[]{ "warda"};  // its size will be 6 in this double coute will tell the compiler that 
                            // it will trminated with the value of c string 0

    cout << "messagre is " << msg4 << endl;

    cout << "size is  " << sizeof(msg4) << endl;

    // we cannot print array of other then character other wise it will give you a werid value 

    cout << "====================================================================================================" << endl;

    int number[]{ 1,2,3,4,5 };  // it will going to print a value that we will not under stand

    cout << "number is : " << number << endl;

    return 0;

}
//======================================================================================================
//                                                                                                     =
// ........................................Bounds of an array......................................... =
//                                                                                                     =
//======================================================================================================

int bounds() {
    

    cout << "====================================================================================================" << endl;
    int number[]{ 1,2,3,4,5,6,7,8,9,0 };

    //will read garbage or crash your program 

    /*
    cout << " number is in bpounds : " << number[12] << endl;

    */


    // so the message here is dont go over the beyounds that it will give you the value you dont want

    // noe if we itilize it with value
    // compiler is not giving an error and 
    //it will run ok but letter may b the value will croupt dowm
    //croupt data used by the other part of program 



    /*
    number[12] = 1000;

    cout << " number is in bpounds : " << number[12] << endl;


    */


    //....................................................


    /*
    number[1234766] = 1000; // int his program the compiler is knowing that we are going beyound the value
                            // it willl crach the program as if we declare another satement here it will 
                            // not going to print it due to byounds values as it crash the program 

    cout << " number is in bpounds : " << number[1234766] << endl;

    */

    cout << "Ending the program ........" << endl;// it will not going to print at here program will just stop.

    return 0;
}
int main()
{
    cha();
    bounds();
}

