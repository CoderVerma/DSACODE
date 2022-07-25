// C++ program of above implementation
#include<iostream>
using namespace std;

// structure is used to return
// two values from minMax()
struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[],int n)
{
	struct Pair minmax;	
	int i;
	
	// If there is only one element
	if(n%2==0)
    {
        if(arr[0]>arr[1])
        {
            minmax.max=arr[0];
            minmax.min=arr[1];
        }
        else
        {
            minmax.max=arr[1];
            minmax.min=arr[0];
        }
        i=2;
    }
    else
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
        i=1;
    }

    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>minmax.max)
            minmax.max=arr[i];
            if(arr[i+1]<minmax.min)
            minmax.min=arr[i+1];
        }
        else
        {
            if(arr[i+1]>minmax.max)
            minmax.max=arr[i+1];
            if(arr[i]<minmax.min)
            minmax.min=arr[i];
        }
        i+=2;
    }
    return minmax;
}

// Driver code
int main()
{
	int arr[] = { 4,8,1,2};
	int arr_size = 4;
	
	struct Pair minmax = getMinMax(arr,arr_size);
							
	cout << "Minimum element is "
		<< minmax.min << endl;
	cout << "Maximum element is "
		<< minmax.max;
		
	return 0;
}

// This code is contributed by nik_3112
