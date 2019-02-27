//
//  main.cpp
//  reverseArray
//
//  Created by Pierce Findlay on 2/7/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//

#include <iostream>
using namespace std;

void revereseArray(int array[], int start, int end)
{
    while (start < end)
    {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    
    cout << endl;
}

int main()
{
    int array[] = {1, 2, 3, 4};
    printArray(array, 4);
    revereseArray(array, 0, 3);
    cout << "Reversed array is" << endl;
    printArray(array, 4);
    
    return 0;
}
