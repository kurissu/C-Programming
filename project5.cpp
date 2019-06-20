#include<iostream>
#include<fstream>
using namespace std;

int *Input(void);	//returns array by pointer
int Min(int,int,int);	//takes array and index of 1st element subarray
int Swap(int,int);	//takes indices of array elements to swap
void Sort(int,int);	//takes array by pointer
int Length(int);	//return array indecies 
void Output(int*,int);	//takes array by pointer

int main()
{
	int array[10];
    for(int size=0; size<10; size++){
        cout<<"input student "<<size+1<<" value."<<endl;
        cin>>array[size];
    }
    Output(array, 10);

    
return 0;
}
/*
int *Input(void) 
{
	int arr[20];
	//SIZE=malloc_size(arr); //malloc() will allocat SIZE bytes
	//cout<<"SIZE="<<SIZE<<endl;
	//cout<<"Array size ="<<SIZE/sizeof(int)<<endl;
	int size = 1;
	while(size!=NULL){
		cout<<"input student "<<arr[size]<<" value.";
		cin>>arr[size];
		size++;
	}
	//string filename="array.txt";
	//fstream myFile;
	//myFile.open(filename, fstream::in);
	while (!myFile.eof())
	{
		myFile>>arr[i];
		i++;
	}
	size=i-1;
	cout<<size<<" elements read from the file."<<endl;

return arr;
}

void Swap(int arr, int indexMin, int j)
{
	int temp = arr[indexMin];
	arr[indexMin]=arr[j];
	arr[j]=temp;
}
int Min(int arr, int start, int length)
{
	int min = arr[start]; //initialize min as 1st subarray element
	int indexMin; //declare the index of min
	for(int i=start; i<length; i++)
	{
		if(arr[i]<=min)
		{
			indexMin = i; //update the index of min 
			min = arr[i]; //update the min
		}
	}
return indexMin; //return index of min 
}
void Sort(int arr,int length)
{
	int indexMin;
	for (int i=0; i<length; i++)
	{
		indexMin=Min(arr, i, length); //finds index of min from i onwards
		Swap(arr, indexMin, i);
	}
}
int Length(int k)
{
        int length=0;
        for (int i=0; k[i]!=nullptr; i++)
        {
                length++;
		cout<<"element"<<"["<<i<<"]"<<"="<<k[i]<<endl;
                //cout<<*i<<endl;
        }
return length;
}*/
void Output(int *arr,int length)
{
	cout<<"length is "<<length<<endl;
	for (int i=0; i<length; i++)
		cout<<arr[i]<<endl;
	cout<<"-------------------------"<<endl;
}

