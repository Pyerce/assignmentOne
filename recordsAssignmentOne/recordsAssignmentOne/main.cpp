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


struct  PERSON
{
    char  Name[20];
    float Balance;
    
};

//Function prototypes 


int main(int argc, const char * argv[])
{
    ifstream inFile;
    inFile.open("data.txt");
    
    
    
    inFile.close();
    return 0;
}
