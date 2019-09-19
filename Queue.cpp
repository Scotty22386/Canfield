/*********************************************************************
  Author:        Scott Wickline, IUSB, CS
  Class:         C243 Data Structures
  File name:     Stack.cc
  Last updated:  September 2019
  Description:   Implementation of a class stack derived from a list.
**********************************************************************/
#include <iostream>
#include <cstdlib>
using namespace std;

#include "Queue.h"

Queue::Queue() : List() // Constructor for the que.
{   
}

void Queue::enqueue(int data) // Adds an element to the end of the que.
{
    insertBack(data);
}

int Queue::dequeue() // Removes and element from the front of the que and returns the value
{
    int result = front();
    removeFront();
    return result;
}

int Queue::front() //Inspect the value of the first object.
{
    if (!isEmpty())
        return *begin();
    else
    {
        cout << "attempt to access the front of an empty que" << endl;
        exit(1);
    }
   
}

void Queue::makeEmpty() // Empties the que
{
    List::makeEmpty();
}

bool Queue::isEmpty()  // Checks to see if que is empty
{
    // return !(List)(*this); 
    return List::isEmpty();
}

void Queue::concatenate(Queue& other) // Combines to ques together
{
    List::concatenate(other);
}

int Queue::stored() //Counts elements in the que and returns that number as size
{
    return getSize();
}


 
