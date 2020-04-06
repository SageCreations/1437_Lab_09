#include <iostream>
#include "orderedArrayListType.hpp"

using namespace std;  

orderedArrayListType::orderedArrayListType(int size)
{
    if (size <= 0) {
        cout << "The array size must be positive. Creating "
             << "an array of the size 100." << endl;

        maxSize = 100;
    } else
        maxSize = size;

    length = 0;

    list = new int[maxSize];

}
 
void orderedArrayListType::insertAt(int location, int insertItem)
{
    if(maxSize < location || location < 0) 
    {
        cout << "\n\nThis location does not exist";
    }                  
    else if (length == maxSize)
    {
        cout << "Cannot insert in a full list." << endl; 
    }          
    else 
    {
        int temp;
        for(int i = location; i < length-1; i++)
        {
            temp = list[i];
            list[i++] = temp;
        }
        list[location] = insertItem;
        length++; //increment length
    }
} //end insertAt

void orderedArrayListType::insertEnd(int insertItem)
{
    list[length++] = insertItem; //insert item at the end and increment length
} //end insertEnd

void orderedArrayListType::replaceAt(int location, int repItem)
{
    if(maxSize < location || location < 0) 
    {
        cout << "\n\nThis location does not exist";
    }                  
    else if (length < location)
    {
        cout << "The length of the array has not reached this location yet." << endl; 
    }          
    else 
    {
        list[location] = repItem; //replaces the item in the list.
    }
} //end replaceAt

int orderedArrayListType::seqSearch(int searchItem) const
{
    //I assume this stands for sequential search and 
    //when I googled it it claims to be just a regular linear search algorithm.
    int find = -1;
    if (length == 0)
    {
        cout << "There is nothing in this list yet" << endl;
    }
    else
    {
        //linear search
        for (int i = 0; i < length; i++)
        {
            if (searchItem == list[i])
            {
                find = i;
                break;
            }
        }

    }
    return find;
} //end seqSearch

void orderedArrayListType::insert(int insertItem)
{
    if (length == 0)          //list is empty
        list[length++] = insertItem;  //insert insertItem
                                      //and increment length
    else if (length == maxSize)
        cout << "Cannot insert in a full list." << endl;
    else
    {
          //Find the location in the list where to insert 
          //insertItem.
        int loc;

        bool found = false;

        for (loc = 0; loc < length; loc++)
        {
            if (list[loc] >= insertItem)
            {
                found = true;
                break;
            }
        }

        for (int i = length; i > loc; i--)
             list[i] = list[i - 1];  //move the elements down

        list[loc] = insertItem;  //insert insertItem
        length++;   //increment the length
    }
} //end insert

void orderedArrayListType::remove(int removeItem)
{
    if (length == 0)
    {
        cout << "There is nothing in this list yet" << endl;
    }
    else
    {
        int loc = seqSearch(removeItem);
        if (loc == -1)
        {
            cout << "This item does not exist." << endl;
        }
        else 
        {
            for (int i = loc; i < length-1; i++)
            {
                list[i] = list[i+1];
            }
            length--; // decrerment length
        }
    }
} //end remove



  //Write the definitions of the remaining functions. See Programming
  //Exercise 11.