//
//  main.cpp
//  recordsAssignmentOne
//
//  Created by Pierce Findlay on 2/7/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//Function prototypes

struct  PERSON
{
    char  name[20];
    float balance;
    
};

int recordSizeCounter()
{
    int index;
    index = 0;
    int N = 0;
    string firstName = "ERROR";
    string lastName;
    string fullName;
    double moneyAmount;
    ifstream inFile;
    inFile.open("data.txt");
    if (inFile.is_open())
        cout <<"This is open.";
    else
        cout << "NOT OPEN";
    
    while(!inFile.eof())
    {
        inFile >> firstName >> lastName;
        inFile >> moneyAmount;
        N++;
        cout << endl << N;
        //cout << endl << firstName << endl;
    }
    inFile.close();
    cout << endl << "N is : " << N << endl;
    return N;
}
 int fillArray()
{
    int N = 0;
    string firstName = "ERROR";
    string lastName;
    double moneyAmount;
    ifstream inFile;
    inFile.open("data.txt");
    if (inFile.is_open())
        cout <<"This is open.";
    else
        cout << "NOT OPEN";
    cout << endl << "This is in fillArray : " << endl;
    while(!inFile.eof())
    {
        for(int i = 0; i < N+1; i++) {
        inFile >> firstName >> lastName;
        inFile >> moneyAmount;
        cout << endl << firstName << " " << lastName << endl;
        if(i == 5)
            break;
        }
        //cout << endl << N;
        //break;
        //cout << endl << firstName << " " << lastName << endl;
        //break;
    }
    inFile.close();
    cout << endl << "fillArray file is closed" << endl;
    
    return 0;
}

int displayArray()
{
    return 0;
}

int findRichest()
{
    return 0;
}

int deposit()
{
    return 0;
}

int newCopy()
{
    return 0;
}
/*
 i. We don’t know exactly how many records are in the file. You will have to go through the file a first time and count the number of records (N).
 
 ii . Once you have this information, you can create an array that is large enough to hold all of the records in the file PERSON P[N];
 
iii. Remember that c_strings or character arrays must be null terminated, so you will either need to set every element to ‘/0’ before writing the name, or make sure you put one after you have written the name.
 */
/*
findSize of file function
return the N to use P[N]
 PERSON P[N];
Function to fill the array
 display all records function
 FindRichest function
 Deposit Function
 NewCopy function
*/

int main(int argc, const char * argv[])
{
    int index;
    int N =0;
    index = 0;
    //N =
    recordSizeCounter();
    fillArray();
//    PERSON[N];


    
    //Display(a, N);
    //FindRichest(a, N); (ex output: The customer with maximum balance is Kimberly Macias)
    //Deposit(CustName, a, N); where CustName is the name of the customer who wants to deposit money
    /*Ex Output for Deposit
     Enter your full name to deposit money: Maria  Brown
     Maria Brown, how much would you like to deposit?  100
     Now your new balance is 2200.90
     */
    // NewCopy(“data.txt”, a, N);
    
    //get size function
    //fillArray function
    
    return 0;
}
/*
 
 
 char *fname = "input.txt";
 fstream f;
 f.open(fname, ios::in);
 for(int i = 0; i<4; i++) {
 f >> a[i];
 }
 f.close();
 
 Pointers:
 double *my_pointer;
 double f = 3.14;
 my_pointer = &f;
 cout << f << endl; prints 3.14
 cout << *my_pointer << endl; prints 3.14
 *my_pointer = 0;
 
 
 void ReadFromFileToArrays(const int AR_SIZE,     // IN - Array size
 record personRecord[])  //IN & OUT - struct
 // array containing
 // sets of names, ids, and
 // balances
 {
 string fileName;        // IN   - name of file to be used as input
 ifstream InFile;        // PROC - input variable name
 int index;                // CALC - index of array
 
 //INITIALIZATION
 index = 0;
 
 // USER PROMPT for file name
 cout << "What input file would you like to use? ";
 getline(cin, fileName);
 
 InFile.open(fileName.c_str());
 
 // This while loop will read in the appropriate members from a file
 while (InFile && index < AR_SIZE)
 {
 getline(InFile, personRecord[index].name);
 InFile  >> personRecord[index].id;
 InFile >> personRecord[index].bal;
 
 InFile.ignore(1000,'\n');
 
 index++;
 }
 }
 HOW TO READ FROM TEXT FILE 4DOUBLES AND A STRING
 
 file >> double1;
 
 while(!file.eof()) {
 
 file >> double2 >> double3 >> double4;
 
 getline(file, stdString);
 
 file >> double1;
 
 }
 
 
 
 
 
 
 
 
 
 in main:
 get n
 function(remember to close the file)
 declare array
 function to fill array
    -pass n, array(ptr)
 
 
 Once you have this information, you can create an array that is large enough to hold all of the records in the file PERSON P[N];
 
 */
