/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    int start,end,mid;
    start=0;end=n-1;
    while(start<=end){
        mid=(start+end)/2;
        if(values[mid]<value){
            start=mid+1;
        }
        else if(values[mid]>value){
            end=mid-1;
        }
        else return true;
    }
    //failure
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    
}
