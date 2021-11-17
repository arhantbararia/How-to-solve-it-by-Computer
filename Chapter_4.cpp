#include<iostream>
#include<math.h>
#include<vector>
#include<string>

void swap(int &a , int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    return;
}


void fourpointone()
{
    // base problem
    int arr[] = {1,2 ,3 ,4 ,5 ,6 ,7};
    for(int i = 0 ; i  < 7/2; i++)
    {
        swap(arr[i] , arr[7-i]);
    }


    int choice;
    std::cin>>choice;
    
    switch(choice)
    {
       case 1:
       {
           std::cout<<"array tends to become the orginal one"<<std::endl;

       }break;

       case 2:
       {
            int a[] = {1, 2 ,3 ,4 ,5 ,6 ,7};

            int i = 0; int j = 6;
            while((i < 7/2) && (j > 7 /2 ))
            {
                swap(a[i], a [j]);

                i++;
                j--;
            }
       }break;

       case 3
       {
           int a[] = {1, 2, 3 ,4 ,5 ,6 ,7 };
           int b[] = {1, 2, 3 ,4 ,5 ,6 ,7 };
           int k; 
           int n = 7;
           std::cin>>k;
           while(i < n)
           {
               swap(a[i], b[(k+i)%n]);
           }
           for(int i =0 ; i < n ;i++)
           {
               std::cout<<b[i]<<" ";
           }
       }break;

       case 4:
       {
           
       }
    }
    
}

void fourpointtwo()
{

}


void fourpointthree()
{
    //base problem
    {
        int a[10];
        int max = a[0];

        for(int i = 0 ; i< 10; i++)
        {
            if(max <= a[i])
            {
                max = a[i];
            }
        }
        std::cout<<max;

    }

    //4.3.1
    
    int a[10];
    int min = a[0];

    for(int i = 0; i < 10; i++)
    {
        if(a[i] <= min)
        {
            min = a[i];
        }
    }
    std::cout<<min;

    //4.3.2

    
    int a[10];
    int max = a[0];
    int countmax = 0;

    for(int i = 0; i < 10; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            countmax++;

        }
    }
    std::cout<<max;

    //4.3.3
    int a[10] = {1,3, 3, 5,5,5,5,5,4,4};
    int max = a[0];
    
    vector<int> pos;

    for(int i = 0; i < 10; i++)
    {
        if(a[i] >= max)
        {
            if(a[i] > max)
            {
                pos.clear();
            }
            max = a[i];
            pos.push_back(i);

        }
    }

    cout<<pos[0]<<" "<<pos[pos.size()-1];

    //4.3.4
    int a[10] = {1,3, 3, 5,5,5,5,5,4,4};
  
    
    vector<int> absdiff;

    for(int i = 0; i < 9; i++)
    {
        absdiff.push_back(abs(a[i]-a[i+1]));
        
    }

    int maxdiff = absdiff[0];
    for(int i = 0 ; i<absdiff.size() ; i++)
    {
        if(absdiff[i] >= maxdiff)
        {
           maxdiff= absdiff[i]; 
        }
    }
    cout<<maxdiff;

    //4.3.5
    

}


int main()