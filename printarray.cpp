#include<iostream>
//#include<limits.h>
using namespace std;

// void printarray(int arr[], int n)
// {
//     for(int i=0 ; i<n ; i++)
//     {
//        cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// int main()
// {
//    int arr[5]={1,2,3,4,5};
//    int size=5;
//    printarray(arr ,5);

// }

// int main(){
// int arr[10],n,i;
// int target;
// int flag=0;
// cin>>n;

// for(i=0 ;i<n ;i++)
// {
//     cout<<"enter the number at index"<<i<<" :";
//     cin>>arr[i];
// }
// cout<<endl;

// cout<<"printing array"<<endl;
// for(i=0 ; i<n ; i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// cout<<"enter your target number to be searched : "<<endl;
// cin>>target;
// cout<<"searching the number"<<endl;

// for(i=0 ; i<n ; i++)
// {
//     if(arr[i]==target)
//     {
//         flag=1;
//         break;
//     }
// }
// if(flag==1)
// {
//     cout<<"number found at index : "<<i<<endl;
// }

// else
// {
//     cout<<"number not found"<<endl;
// }
// }

// LINEAR SEARCH 
// bool search(int arr[],int size,int target)
// {
//     int i;
//     for(i=0 ; i<size ; i++)
//     {
//         if(arr[i]==target)
//         {
//             return true;
//         }
//     }
//     return false;
// }


// int main()
// {
//     int size,arr[10],target,i;

//     cout<<"enter the size of your array : "<<" : ";
//     cin>>size;

//     cout<<"enter your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;

//     cout<<"printing your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"enter number to be searched"<<":";
//     cin>>target;

//     bool ans= search(arr,size,target);



//     if(ans==true)
//     {
//         cout<<"found at index"<<": "<<i<<endl;
//     }
//     else
//     {
//         cout<<"not found"<<endl;
//     }

// }

// COUNTING 1'S AND 0'S
// void countzeroone(int arr[],int size)
// {
//     int i;
//     int onecount=0;
//     int zerocount=0;
//     for(i=0 ; i<size ; i++)
//     {
//         if(arr[i]==1)
//         {
//             onecount++;
//         }
//         if(arr[i]==0)
//         {
//             zerocount++;
//         }
//     }
//     cout<<"zero's are "<<":";
//     cout<<zerocount;
//     cout<<endl;

//     cout<<"one's are"<<":";
//     cout<<onecount;
//     cout<<endl;
// }


// int main()
// {
//      int size,arr[10],i;

//     cout<<"enter the size of your array : "<<" : ";
//     cin>>size;

//     cout<<"enter your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;

//     cout<<"printing your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     countzeroone(arr,size);

// }

// MINIMUM NUMBER USING INT_MAX AND <LIMITS.H>
// int main()
// {
//      int size,arr[10],i;
//      int minans;

//     cout<<"enter the size of your array : "<<" : ";
//     cin>>size;

//     cout<<"enter your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;

//     cout<<"printing your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     minans=INT_MAX;
//     for(i=0 ; i<size; i++)
//     {
//         if(arr[i]<minans)
//         {
//             minans=arr[i];
//         }
//     }
//     cout<<"minimum number is "<<":"<<minans;

    

// }

// REVERSE ARRAY
// int main()
// {
//      int size,arr[10],i;
     


//     cout<<"enter the size of your array : "<<" : ";
//     cin>>size;

//     cout<<"enter your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;

//     cout<<"printing your array"<<":";
//     for(i=0 ; i<size ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     int left=0;
//     int right =size-1;
//     while(left<=right)
//     {
//         swap(arr[left],arr[right]);
//         left++;
//         right--;
//     }

//     cout<<"reverse array"<<endl;
//     for(i=0 ; i<size ;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

    

    

// }



void shiftnegativeoneside(int arr[],int size)
{
    int j;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout<<

}

int main()
{
    int i,j;
    int size;

    size=7;
    int arr[]={23,-7,12,-10,-11,40,60};

    shiftnegativeoneside(arr,7);

    for(i=0 ;i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }


    
}



