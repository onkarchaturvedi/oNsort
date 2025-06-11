/*
This is a sorting algorithm which sorts in O(n) time complexity
works best with smaller min and max values
have a nice day;
follow the creator
www.github.com/onkarchaturvedi
*/

#include <iostream>
#include <climits>
using namespace std;
void oNsort(int arr[], int size)
{
    // finding maximum element of array
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // hashing it
    int *pos_hash = new int[max + 1]();
    int *neg_hash = new int[1 - min]();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            pos_hash[arr[i]]++;
        }
        else
        {
            neg_hash[0 - arr[i]]++;
        }
    }
    // assigning and print
    int j = 0;
    // negative numbers
    for (int i = 0; i <= 0 - min; i++)
    {
        int count;
        if (neg_hash[i])
        {
            if (neg_hash[i] > 1)
            {
                count = neg_hash[i];
            check:
                arr[j++] = 0 - i;
                cout << arr[j - 1] << " ";
                count--;
                if (count)
                    goto check;
            }
            else
            {
                arr[j++] = 0 - i;
                cout << arr[j - 1] << " ";
            }
        }
    }
    delete[] neg_hash;

    // positive number print
    for (int i = 0; i <= max; i++)
    {
        int count;
        if (pos_hash[i])
        {
            if (pos_hash[i] > 1)
            {
                count = pos_hash[i];
            checkpoint:
                arr[j++] = i;
                cout << arr[j - 1] << " ";
                count--;
                if (count)
                    goto checkpoint;
            }
            else
            {
                arr[j++] = i;
                cout << arr[j - 1] << " ";
            }
        }
    }
    delete[] pos_hash;
}
int main(int argc, char *argv[])
{
    // example usage
    int arr[5] = {7, -2, 0, 7, 9};
    oNsort(arr, 5);
}
