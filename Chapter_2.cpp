#include<iostream>
#include<stdlib.h>


void twopointone()
{
    system("CLS");
    // EXCHANGING VALUES OF VARIABLES
    int choice;
    std::cout<<"1. PROBLEM"<<std::endl;
    for(int i = 2 ; i < 7; i++)
    {
        std::cout<<i<<". supplement problem 2.1."<<i-1<<std::endl;

    }
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
    // COUNTING
    std::cout<<"1. Base Problem "<<std::endl;
    for(int i = 2 ; i < 5 ; i++)
    {
        std::cout<<i<<". supplement problem 2.2."<<i-1<<std::endl;
        
    }
    int choice;
    std::cin>>choice;
    
    switch(choice)
    {
        case 1: 
        {
            std::cout<<"Enter number of students : ";
            int n = 5;
            std::cin>>n;

            int marks[n];
            for(int i = 0 ; i < n ; i++)
            {
                std::cout<<"Enter marks of student "<<i+1<<" : "<<std::endl;
                std::cin>>marks[i];

            }
            int pass = 0;
            for(int i = 0 ;  i < n ; i++)
            {
                if(marks[i] >= 50)
                {
                    pass++;

                }
            }
            std::cout<<"Number of passed students: "<<pass<<std::endl;


            
        }
        break;

        case 2:
        {
            std::cout<<"Enter number of students : ";
            int n = 5;
            std::cin>>n;

            int marks[n];
            for(int i = 0 ; i < n ; i++)
            {
                std::cout<<"Enter marks of student "<<i+1<<" : "<<std::endl;
                std::cin>>marks[i];

            }
            int pass = 0;
            for(int i = 0 ;  i < n ; i++)
            {
                if(marks[i] >= 50)
                {
                    pass++;

                }
            }
            std::cout<<"Number of passed students: "<<pass<<std::endl;

            float percentage_pass_rate;
            percentage_pass_rate = (pass/n)*100;
            std::cout<<"Percentage pass rate= "<<percentage_pass_rate<<"%\n";

        }
        case 3:
        {
            /*
            if fail count--;
            this is better when pass students are more than fail students;
            
            */
                
        }
    }
}

void twopointthree()
{
    system("CLS");
    std::cout<<"1. Base Problem "<<std::endl;
    for(int i = 2 ; i < 10 ; i++)
    {
        std::cout<<i<<". supplement problem 2.2."<<i-1<<std::endl;
        
    }
    
    int choice;
    std::cin>>choice;

    switch(choice)
    {
        case 1:
            {
                int n;
                std::cout<<"Enter number of inputs: ";
                std::cin>>n;

                float array[n];
                for(int i = 0  ; i < n; i++)
                {
                    std::cin>>array[i];

                }
                int sum = 0;

                for(int i = 0 ; i < n; i++)
                {
                    sum += array[i];

                }
                std::cout<<"sum is: "<<sum<<std::endl;


            }
            break;
            case 2
            {
                int n;
                std::cout<<"Enter number of inputs: ";
                std::cin>>n;

                float array[n];
                for(int i = 0  ; i < n; i++)
                {
                    std::cin>>array[i];

                }
                
                int sum =0 ;
                for(int i = 0 ; i < n; i++)
                {
                    sum += array[i];

                }
                float avg;
                avg = sum/n;
                std::cout<<"Average is: "<<avg<<std::endl;

            }
            break;

            case 3:
            {
                
                int n;
                std::cout<<"Enter number of inputs: ";
                std::cin>>n;
                int num;
                std::cin>>num;
                int sum = num;  // initialising it to first input , so the adding to zero is not required ;

                for(int i = 0  ; i < n; i++)
                {
                    std::cin>>num;
                    sum += num;
                    

                }
                std::cout<<"Sum is: "<<sum<<std::endl;

            }
            break;

            case 4:
            {
                int n;
                std::cout<<"Enter number of inputs: ";
                std::cin>>n;
                int num;
                std::cin>>num;
                int sum = num*num;
                
                for(int i = 0 ; i< n-1 ; i++)
                {
                    std::cin>>num;
                    sum += (num*num);

                }
                
            }
            break;

            case 5:
            {
                int n;
                std::cout<<"Enter number of inputs: ";
                std::cin>>n;
                float reciprocal_sum = 0.0f ;

                float Harmonic_mean;
                
                int num;
                std::cin>>num;
                reciprocal_sum = 1/num;

                for(int i= 0 ; i < n-1 ; i++)
                {
                    std::cin>>num;
                    reciprocal_sum += 1/num;

                }
                Harmonic_mean =n/reciprocal_sum;
                std::cin>>"Harmonic Mean of inputs"<<Harmonic_mean<<std::endl;
            }
            break;

            case 6:
            {
                int n;
                std::cout<<"Enter number of elements in series: ";
                std::cin>>n;
                float sum = 0.0f;
                std::cout<<"a) 1 + 2 + 3 + . . + n = ";
                for(int i = 1 ; i <= n ; i++ )
                {
                    sum += i;

                }
                std::cout<<sum<<std::endl;
                sum =0;

                std::cout<<"b) 1 + 3 + 5 +  . . n =";
                for(int i = 1 ; i <= n ; i++ )
                {
                    if(int i%2 != 0)
                    {
                        sum += i;
                    }
                    
                }
                std::cout<<sum<<std::endl;
                sum = 0 ;

                std::cout<<"b) 2 + 4 + 6 +  . . n =";
                for(int i = 1 ; i <= n ; i++ )
                {
                    if(int i%2 == 0)
                    {
                        sum += i;
                    }
                    
                }
                std::cout<<sum<<std::endl;

                sum = 0 ;

                std::cout<<"b) 1 + 1/2 + 1/3 +  . . n =";
                for(int i = 1 ; i <= n ; i++ )
                {
                    if(int i%2 == 0)
                    {
                        sum += 1/i;
                    }
                    
                }
                std::cout<<sum<<std::endl;

            }
            break;

            case 6:
            {
                int n;
                std::cout<<"Enter number of elements in series: ";
                std::cin>>n;
                float sum = 0.0f;
                for(int i = 0 ; i <= n; i++)
                {
                    sum += std::pow(2 ,i);

                }

                std::cout<<"1 + 2 + 4 + 8 + 16 + . .n  = "<<sum<<std::endl;
                
            }
            break;

            case 7:
            {
                int n;
                std::cout<<"Enter number of elements in series: ";
                std::cin>>n;

                int sum= 0 ;
                for(int i = 1; i <= n ; i++)
                {
                    sum += (i%2 == 0)*(-1) + (i%2 != 0)*(1)
                }
                
                std::cout<<"1 + -1 + 1 + -1 + 1 + . .n  = "<<sum<<std::endl;
            }
            break;

            case 8:
            {
                 int n;
                std::cout<<"Enter number of elements in series: ";
                std::cin>>n;

                int sum= 0 ;
                int num = 1;
                for(int i = 1; i <= n ; i++)
                {
                    sum += (i%2 == 0)*(-num) + (i%2 != 0)*(num);
                    num += 2;
                }
                
                std::cout<<"1 + -3 + 5 + -7 + 9 + . .n  = "<<sum<<std::endl;
            }
            break;

            default:
            {
                std::cout<<"wrong input"<<std::endl;
                
            }
    }
}

void twopointfour()
{
    
    system("CLS");
    std::cout<<"1. Base Problem "<<std::endl                               ;
    for(int i = 2 ; i < 10 ; i++)
    {
        std::cout<<i<<". supplement problem 2.2."<<i-1<<std::endl;
        
    }
    
    int choice;
    std::cin>>choice;

    switch(choice)
    {
        case 1:
        {
            //Base problem

            //could have used recursion but thats the pascal implementation given

            int n;
            std::cout<<"Enter number you want factorial of: ";
            std::cin>>n;

            int factor =1 ;
            for(int i = 1 ; i <= n ; i++)
            {
                factor *= i;

            }
            std::cout<<"Factor of "<<n<<" is "<<factor;

            // alternative solution 
            int factorial(int n )
            {
             (n == 0 )|| (n == 1 ) ? return 1 : return n*factorial(n-1);
            }
        }
        break;

        case 2:
        {
            //supplement problem 2.4.1
            int n;
            std::cout<<"Computing 1/n! for n :";
            std::cin>>n;

            int factor = 1;
            for(int i = 1 ; i <= n ; i++)
            {
                factor *= i;

            }
            
            float reciprocal = 1/factor;
            std::cout<<" 1/"<<n<<"! = "<<reciprocal<<std::endl;

            

            
        }
        break;

        case 3:
        {
            int n ,x;
            std::cout<<"Enter n = ";std::cin>>n;
            std::cout<<"Enter x = ";std::cin>>x;

            // computing x^n/n! ; using the fact from notes on design that computation of factorial uses n multiplications for n!
            // similar conclusion can be drawn for x^n

            float result =1; // it cant be 0, cause for result to be zero factorial must go infinite


            for(int i = 1 ; i <= n ; i++)
            {
                result *= ((float)x/(float)i);
            }
            std::cout<<x<<"^"<<n<<"/"<<n<<"! = "<<result;
            
            
        }
        break;

        case 4:
        {
            int n;
            bool isfact;
            int fact = 1;

            int i = 2;

            while(fact != n)
            {
                if(fact > n)
                {
                    isfact = false;
                    break;

                }
                fact *= i;
                i++;

            }

            isfact == true ? std::cout<<"Is Factorial " : std::cout<<"not a factorial ";
            
            
        }
        break;

        case 5:
        {
            int n;
            std::cin>>n;

            bool isFACTORIAL(int n)
            {
                bool isfact = true;
                int fact = 1;
                int i = 2;

                while(fact != n)
                {
                    if(fact > n)
                    {
                        isfact = false;
                        break;
                    }
                    fact *= i;
                    i++;

                }

                return isfact;

            }

             int n;
            std::cin>>n;
            bool found = false;

            for(int i = 1 ; i <= n/2 ; i++)     //dividing by 2 because 2 is the smallest possible factorial other than 1 
            {
                if( n%i == 0 )
                {
                    int quot = n/i;
                    if(isFACTORIAL(quot) && quot != 1)
                    {
                        found = true;
                        std::cout<<quot<<std::endl;

                    }
                }
                
            }
    
            found == true ? std::cout<<"factorial found! " : std::cout<<"not a factorial ";

        }
        break;

        case 6:
        {
            //Simulate multipication by addition

            int x, y;
            std::cin>>x;
            std::cin>>y;
            bool negative = false;
            int k = x;

            if(x == 0 || y == 0 ){
                k = 0;
                goto label;

            }
            if(y < 0)
            {
                negative = true;
                y *= -1;
            }
            for(int i = 0 ; i < y-1 ; i++)
            {
                k +=x;

            }
            
            if(negative)
            {
                k *= -1;
            }
            
            label:
            std::cout<<k;
        }
        break;

        case 7:
        {   // binary expansion of (1+x)^n
            int factorial(int a)
            {
                return (a == 1 || a == 0 ) ? 1 : a * factorial(a-1);
            }

            float Combination(int n , int r)
            {
                float C;
                C = factorial(n) / (factorial(r) * factorial(n-r));
                return C;
            }
            namespace main{
            int n;
    
            std::cin>>n;        // okay this is a mess now 

            for(int i = 0 ;  i <= n ; i += 1)
            {
                std::cout<<Combination(n , i)<<"x^"<<i<<"+ \t";

            }
                        }
        }
        break;

        default:
                {
                    std::cout<<"wrong option"<<std::endl;
                }
    }


}

void twopointfive()
{
    system("CLS");
    std::cout<<"1. Base Problem "<<std::endl                               ;
    for(int i = 2 ; i < 5 ; i++)
    {
        std::cout<<i<<". supplement problem 2.2."<<i-1<<std::endl;
        
    }
    
    int choice;
    std::cin>>choice;

    switch(choice)
    {

        case 1:
        {
            float x;
            float const error = 0.00006f;
            float const pi = 3.14f;
            std::cin>>x;

            x *=pi;

            float x2 = x*x;

            float term =x ;
            float sin = x;
            float sign =-1;
            int i = 1 ;
            
            while(abs(term) >= error )
            {
                

                i += 2;
                term = (sign) * term * (x2 / (i*(i-1))) ;       // check BODMASS rule here carefully!
                sin += term;
                
            

            }    
        
            std::cout<<sin;
        }
        break;

        case 2:
        {
            int n;
            std::cin>>n;
            // making fs

            int fs = 0;
            int term = 1;
            int i = 1;      //since 0! = 1 
            while(i < n)
            {
                term = i*term;
                fs += term;
                i++;
            }
        
        }
        break;

        case 3:
        { int n;
            std::cin>>n ;

            float e = 1.0f ;
            float term  =1.0f ;
            int i = 1;

            while(n > 0)        //  O(n)
            {
                term = term * ( 1 / (float)i );
                i++;

                std::cout<<term<<std::endl;
                e += term;
                n--;
            }
            std::cout<<e;

        }
        break;

        case 4:
        {
            float const error = 0.00006f;
                    float const pi = 3.14;
                    
                float x;
                std::cin>>x;
                    x *= pi;

                float x2 = x*x;
                
                    float term = 1;

                    float cos = term;
                    int sign = -1 ;
                    int i = 2;
                    while(abs(term) >= error)
                    {
                        term = (sign) * term * (x2 / (i * (i-1)) );
                        i += 2;
                        cos += term;

                    }
                    std::cout<<"\n\n"<<cos;

        }
        break;
        
        default:    std::cout<<"wrong option"<<std::endl;
       

    }

    
        
}

void twopointsix()
{
    system("CLS");
    std::cout<<"1. Base Problem "<<std::endl                               ;
    for(int i = 2 ; i < 5 ; i++)
    {
        std::cout<<i<<". supplement problem 2.2."<<i-1<<std::endl;
        
    }
    
    int choice;
    std::cin>>choice;

    switch(choice)
    {
        case 1:
        {   
            int n;
            std::cin>>n;

            
            //okay this is smart
            int a = 0 , b = 1 ;
            while(n > 0)
            {
                
                
                std::cout<<a;
                a = a+b;
                n--;
                if(n == 0)
                {
                    break;
                }
                std::cout<<"\t ";

                std::cout<<b;
                std::cout<<"\t ";

                b = a+b;
                n--;
            }
        }
        break;
        

        case 2:
        {
            bool isFibonacci(int d , int e)
                {
                    bool found = false;

            int  a  = 0 , b = 1;

            while(!found && a < e )
            {
                if((a == d && b == e) || (a == e && b == d) )
                {
                    found = true;
                }
                a = a+b ;
                b = a+b;
            }
            
            return found;
                }
            namespace main{
                
            int a , b;
            std::cin>>a>>b;

            if(isFibonacci(a ,b))
            {
                std::cout<< a+ b;
            }

            else std::cout<<a<<"and"<<b<<"are not fibbonacci numbers";


            }
            

        


        }
        break;


        case 3:
        {
            //Lucas sequence 
            int a = 1 , b = 3 ;
            while(n > 0)
            {
                
                
                std::cout<<a;
                a = a+b;
                n--;
                if(n == 0)
                {
                    break;
                }
                std::cout<<"\t ";

                std::cout<<b;
                std::cout<<"\t ";

                b = a+b;
                n--;
            }
            
        }
        break;
        
        case 4:
        {
            // 3 sum fibbonacci series
            
            int a = 0 , b = 1 , c = 1 ;
            int n = 1;

            while(n < 10)
            {   
                std::cout<<a<<" "<<b<<" "<<c<<" "<<std::endl;
                a = a+b+c;
                b = a+b+c;
                c = a+b+c;

            n++;

            }

        }
        break;

        case 5:
        {
                    
            int d ,e;

            std::cin>>d>>e;
            bool found = false;

            int  a  = 0 , b = 1;

            while(!found && a < e )
            {
                if((a == d && b == e) || (a == e && b == d) )
                {
                    found = true;
                }
                a = a+b ;
                b = a+b;
            }
            std::cout<<found;    
        }
        break;


        case 6:
        {

            int n ;
            std::cin>>n;

            while(n > 0)
            {

                for(int i = 1 ; i < n ; i++)
                {
                    if(n != 2 && (float)i/n == 0.5f)
                    {
                        continue;
                    }
                    std::cout<<"\t"<<i<<"/"<<n<<"\t";
                }
                n--;

            }

        }   
        break;

        case 7:
        {
            
        }
                
    }
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