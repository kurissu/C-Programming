#include <iostream>
#include <fstream>

using namespace std;

int *Input();    //returns array by pointer
void Arrange(int *);//arrange the file properly
int Length(int *k);    //return array indecies
void Output(int *,int);    //takes array by pointer
void NewFile(int *);    //make new dat file and write to it
int Insert(int *,int,int,int);

int main()
{
    int studentId, studentValue;
    cout<<"insert student ID"<<endl;
    cin>>studentId;
    cout<<"insert student Value"<<endl;
    cin>>studentValue;
    int *array=(int *)malloc(3*sizeof(int));
    array=Input();
    Arrange(array);
    int L=Length(array);
    int capacity =sizeof(array)/sizeof(array[0]);
    cout<<capacity<<endl;
    Insert(array,L,studentValue,capacity);
    L=Length(array);
    Output(array,L);
    //NewFile(array);
    return 0;
}

int *Input(void)
{
    int *arr=(int *)malloc(3*sizeof(int));
    //SIZE=malloc_size(arr); //malloc() will allocat SIZE bytes
    //cout<<"SIZE="<<SIZE<<endl;
    //cout<<"Array size ="<<SIZE/sizeof(int)<<endl;
    int size = 0;
    string filename="extra project.dat";
    int i=0;
    fstream myFile;
    myFile.open(filename, fstream::in);
    while (!myFile.eof())
    {
        myFile>>arr[i];
        i++;
    }
    size=i;
    cout<<size<<" elements read from the file."<<endl;
    
    return arr;
}

void Arrange(int *arr){
    int countNext=0;
    for(int i=0;i<20;i++){
        countNext++;
        arr[i]=arr[i+countNext];
    }
}
void Output(int *arr,int length)
{
    cout<<"length is "<<length<<endl;
    for (int i=0; i<length; i++)
        cout<<arr[i]<<endl;
    cout<<"-------------------------"<<endl;
}
int Length(int *k)
{
    int length=0;
    for (int i=0; k[i]!='\0'; i++)
    {
        length++;
        cout<<"element"<<"["<<i<<"]"<<"="<<k[i]<<endl;
        //cout<<*i<<endl;
    }
    return length;
}
void NewFile(int *arr){
    ofstream myfile ("example.dat");
    if (myfile.is_open())
    {
        for(int i=0;i<10;i++)
            myfile<< i+1 << "\t" <<arr[i]<<endl;
        //myfile << "This is a line.\n";
        //myfile << "This is another line.\n";
        myfile.close();
    }else{
        cout << "Unable to open file";
    }
}
int Insert(int *arr,int n, int value, int capacity){
    if (n >= capacity)
    return n;
    
    int i;
    for (i=n-1; ( i >= 0  && arr[i] > value); i--)
        arr[i+1] = arr[i];
    
    arr[i+1] = value;
    
    return (n+1);
        
}
