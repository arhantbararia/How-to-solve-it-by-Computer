#include<iostream>
#include<stdlib.h>


void twopointone()
{
    system("CLS");
    // EXCHANGING VALUES OF VARIABLES
    int choice;
    std::cout<<"1. PROBLEM"<<std::endl;
    std::cout<<"2. supplement problem 2.1.1"<<std::endl;
    std::cout<<"3. supplement problem 2.1.2"<<std::endl;
    std::cout<<"4. supplement problem 2.1.3"<<std::endl;
    std::cout<<"5. supplement problem 2.1.4"<<std::endl;
    std::cout<<"6. supplement problem 2.1.5"<<std::endl;
    std::cout<<"\n Enter your Choice : ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
        {
            // BASE PROBLEM
            system("CLS");
            int a , b;
            std::cout<<"enter value of A: ";
            std::cin>>a;
            std::cout<<"enter value of B: ";
            std::cin>>b;
            std::cout<<"Values before the swap \n ";
            std::cout<<"A = "<<a<<" B = "<<b;
            
            int temp;
            temp =a ;
            a = b;
            b = temp;

            std::cout<<"Values after the swap\n";
            std::cout<<"A = "<<a<<" B = "<<b;

            
        }
        break;

        case 2:
        {   //supplement problem 2.1.1
            system("CLS");
            std::cout<<"Bring a third glass";

        }
        break;

        case 3:
        {
            //supplement problem 2.1.2
            system("CLS");
            int a, b, c ;
            std::cout<<"enter value of A: ";
            std::cin>>a;
            std::cout<<"enter value of B: ";
            std::cin>>b;
            std::cout<<"enter the value of C: ";
            std::cin>>c;
        
            std::cout<<"Values before the swap \n ";
            std::cout<<"A = "<<a<<" B = "<<b<<" C = "<<c ;
            
            int temp;
            temp = c;
            c = b;
            b =a ;
            a = temp;

            std::cout<<"A = "<<a<<" B = "<<b<<" C = "<<c ;

        }
        break;
        case 4:
        {
            //supplement problem 2.1.3
            int a , b ,c , d;
            std::cout<<"enter value of A: ";
            std::cin>>a;
            std::cout<<"enter value of B: ";
            std::cin>>b;
            std::cout<<"enter the value of C: ";
            std::cin>>c;
            std::cout<<"Enter the value of D: ";
            std::cin>>d;

            std::cout<<"Values before the swap \n ";
            std::cout<<"A = "<<a<<" B = "<<b<<" C = "<<c<<" D = "<<d;

            int temp;
            temp =a ;
            a = b;
            b = c ;
            c = d;
            d = temp;

            std::cout<<"Values after the swap \n ";
            std::cout<<"A = "<<a<<" B = "<<b<<" C = "<<c<<" D = "<<d;

        }
        break;
        
        case 5:
        {
            //supplement problem 2.1.4
            
            int a , b;
            std::cout<<"enter value of A: ";
            std::cin>>a;
            std::cout<<"enter value of B: ";
            std::cin>>b;
            std::cout<<"Values before the swap \n ";
            std::cout<<"A = "<<a<<" B = "<<b;


            a = a+b;
            b = a-b;
            a = a-b;

            std::cout<<"Values after the swap\n";
            std::cout<<"A = "<<a<<" B = "<<b;

        }
        break;

        case 6:
        {
            //supplement problem 2.1.5
            int some_num[] = {1 ,3 ,5 ,7 ,9 ,11 , 13};
            int i = 3;
            std::cout<<std::endl;
            for(int j =  0 ; j <7 ; j++ )
            {
                std::cout<<some_num[j]<<"\t";
            }
            std::cout<<std::endl;
            std::cout<<"i = "<<i<<std::endl;
            std::cout<<"Exchanging i with a[i]";

            int temp;
            temp = i;
            i = some_num[i];
            some_num[i] = temp ;

            std::cout<<std::endl;
            for(int j =  0 ; j <7 ; j++ )
            {
                std::cout<<some_num[j]<<"\t";
            }
            std::cout<<std::endl;
            std::cout<<"i = "<<i<<std::endl;
        }
        break;

        default:
        std::cout<<"wrong choice "<<std::endl;
        break;
    }

}
void twopointtwo()
{
    system("CLS");
    
}

void twopointthree()
{
    system("CLS");
    
}

void twopointfour()
{
    system("CLS");
    
}

void twopointfive()
{
    system("CLS");
    
}

void twopointsix()
{
    system("CLS");

}

void twopointseven()
{
    system("CLS");

}
void twopointeight()
{
    system("CLS");

}

void twopointnine()
{
    system("CLS");

}
void UI()
{
    int choice;
    std::cout<<"2.1 Exchanging the values"<<std::endl;
    
    std::cout<<"2.2 Counting"<<std::endl;
    

    std::cout<<"2.3 Summation of set of numbers"<<std::endl;
    
    std::cout<<"2.4 Factorial Computation"<<std::endl;
    
    std::cout<<"2.5 Sine Function computation"<<std::endl;
    
    std::cout<<"2.6 Generating Fibbonacci Sequence"<<std::endl;
    
    std::cout<<"2.7 Reversing the digits of a number "<<std::endl;
    
    std::cout<<"2.8 Base conversion "<<std::endl;
    
    std::cout<<"2.9 Character to number conversion "<<std::endl;
    std::cout<<"Enter your choice: 2.";
    std::cin>>choice;


    switch(choice)
    {
        case 1: twopointone();
        break;

        case 2: twopointtwo();
        break;

        case 3: twopointthree();
        break;

        case 4: twopointfour();
        break;

        case 5: twopointfive();
        break;

        case 6: twopointsix();
        break;

        case 7: twopointseven();
        break;

        case 8: twopointeight();
        break;

        case 9: twopointnine();
        break;

    }
}


int main()
{
    UI();
    

    
    return 0;


}