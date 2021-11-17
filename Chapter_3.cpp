#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
#include<random>



void threepointone()
{
    system("CLS");
    // EXCHANGING VALUES OF VARIABLES
    int choice;
    std::cout<<"1. PROBLEM"<<std::endl;
    for(int i = 2 ; i < 7; i++)
    {
        std::cout<<i<<". supplement problem 3.1."<<i-1<<std::endl;

    }
    std::cout<<"\n Enter your Choice : ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
        {
                // Base problem
                int m; std::cin>>m;

                int g1= 0;

                int g2 = m/2;

                int error = 0.0005;

                // using newton ralphson's method


                while(abs(g1-g2) > error)
                {
                    g1 = g2;
                    g2 = (g1 + m/g1)/2;

                }

        }
        break;


        case 2:
        {
            float m; std::cin>>m;

                std::random_device rd;// obtain a random number from hardware // object
                std::mt19937 gen(rd());// seed the generator

                std::uniform_real_distribution<> distr(0 , m);// define the range

                float n = distr(gen); // generate
                
                while(n*n > m)
                {
                    n--;
                }
                while(n*n < m)
                {
                    n += 0.1f;

                }
                while(n*n > m)
                {
                    n-= 0.01f;

                }
                std::cout<<n;
        }
        break;

        case 3
        {
                
                    float power(float a , int b )
                    {
                                float result = 1;
                                if(a == 0 || b == 0)
                                {
                                    return 1.0f;
                                }
                                for(int i = 1 ; i <= b ; i++)
                                {
                                    result *=a;
                                }
                                return result;

                    }

                   
                        #include<vector>
                        std::vector<float> vec;
                        int m;

                        while( m != 0)
                        {
                            std::cin>>m;
                            if(m != 0)
                            {
                                vec.push_back(m);
                            }
                        }

                        float result = 1;

                        for(auto it = vec.begin() ; it !=  vec.end() ; it++)
                        {
                            result *= *it;
                        }

                        std::cout<<result<<std::endl;
                        int n = vec.size();
                        float g1= 0;
                        float g2 = result/2;

                        while(abs(g1 - g2) > 0.00005)
                        {
                            g1 = g2;
                            g2 = g1 - (power(g1 , n) - result)/(n* power(g1 , (n-1))); //newton ralphson's method  
                        
                            std::cout<<g2<<std::endl;


                        }

                        std::cout<<g2;

                    

        }
        break;

        case 4:
        {
            

        }
        break;


    }
}


void threepointtwo()
{


system("CLS");
    // EXCHANGING VALUES OF VARIABLES
    int choice;
    std::cout<<"1. PROBLEM"<<std::endl;
    for(int i = 2 ; i < 7; i++)
    {
        std::cout<<i<<". supplement problem 3.1."<<i-1<<std::endl;

    }
    std::cout<<"\n Enter your Choice : ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
        {
            // BAse problem
            int n;std::cin>>n;
            int sdivisor = 1;

            if(n%2 == 0)
            {
                sdivisor = 2;
            }
            else
            {
                for(int i = 3 ; i < std::sqrt(n) ; i += 2 )
                {
                    if(n%i == 0)
                    {
                        sdivisor = i;
                        break;
                    }
                }
            }
            std::cout<<sdivisor;
        }
        break;

        case 2:
        {
            int n;std::cin>>n;
            int sdivisor = 1;

            if(n%2 == 0)
            {
                sdivisor = 2;
            }
            else
            {
                for(int i = 3 ; i*i < n ; i += 2 )
                {
                    if(n%i == 0)
                    {
                        sdivisor = i;
                        break;
                    }
                }
            }
            std::cout<<sdivisor;
        }
        break;

        case 3:
        {
           int n;std::cin>>n;
    

   
    
        for(int i = 3 ; i < n ; i += 2 )
        {
            if(n%i == 0)
            {
                std::cout<<i<<"\n";
                sdivisor = i;
            
            }
        }
        }
        break;

        case 4:
        {
                        int n;cin>>n;
                

                int j = 2;
                
                int divisor_count ;
                
                while(true)
                {
                    divisor_count = 0;
                    for(int i = 1; i <= j ; i++)
                    {
                        if(j%i == 0)
                        {
                            divisor_count++;

                        }

                        
                    }
                    if(divisor_count >= n )
                        {
                            cout<<j<<endl;
                            cout<<divisor_count<<endl;
                            break;

                        }

                    j++;
                }
                

                

        }
        break;
        case 5:
        {
            using namespace std;

                int j = 2;
                
                int divisor_count ;
                int max_divisor_count = 1;
                int max = 2;
                
                while(j <= 100)
                {
                    divisor_count = 0;
                    for(int i = 1; i <= j ; i++)
                    {
                        if(j%i == 0)
                        {
                            divisor_count++;

                        }

                        
                    }
                    if(divisor_count >= max_divisor_count )
                        {
                            max_divisor_count = divisor_count;
                            max = j;
                            

                        }

                    j++;
                }
                cout<<max_divisor_count<<endl;
                cout<<max;

        }
        break;

        case 6:
        {
            int n;std::cin>>n;
            int sdivisor = 1;

            if(n%2 == 0)
            {
                sdivisor = 2;
            }
            else if(n%3 == 0)
            {
                sdivisor = 3;
            }
            else
            {
                for(int i = 5 ; i < std::sqrt(n) ; i += 2 )
                {
                    if(n%i == 0)
                    {
                        sdivisor = i;
                        break;
                    }
                }
            }
            std::cout<<sdivisor;
        }
        break;

        case 7:
        {
            /*
            
/*
n = a2 - b2 = (a+b)(a-b) 

where (a+b) and (a-b) are
the factors of the number n



            FermatFactor(N): // N should be odd
                a ← ceiling(sqrt(N))
                b2 ← a*a - N
                repeat until b2 is a square:
                    a ← a + 1
                    b2 ← a*a - N 
                // equivalently: 
                // b2 ← b2 + 2*a + 1 
                // a ← a + 1
                return a - sqrt(b2) // or a + sqrt(b2)
            */

           
                int a, b2 , b;


                int n;cin>>n;

                a = sqrt(n)+1;

                
                b2 = abs((a*a) - n);
                b = sqrt(b2);
                

                while(!isPerfectSqure(b2))  // is perfect square is self explanatory
                {
                    cout<<"a = "<<a<<endl;
                    cout<<"b = "<<b<<endl;
                    a += 1;
                    b = abs((a*a) - n);

                }

                cout<<"factors are: \n";
                cout<<a+b<<endl;
                cout<<a-b<<endl;

        }
        break;


        }


    }
}


void threepointthree()
{
    system("CLS");
    // EXCHANGING VALUES OF VARIABLES
    int choice;
    std::cout<<"1. PROBLEM"<<std::endl;
    for(int i = 2 ; i < 7; i++)
    {
        std::cout<<i<<". supplement problem 3.1."<<i-1<<std::endl;

    }
    std::cout<<"\n Enter your Choice : ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
        {
            int gcd(int largenum , int smallnum)
            {
                if(largenum%smallnum == 0)
                {
                    return smallnum;
                }
                else
                {
                    gcd(smallnum , largenum%smallnum);
                }
            }
            int a ; std::cin>>a;
            int b; std::cin>>b;

            int result = gcd(a, b);

            std::cout<<result;
         }
        break;

        case 2:
        {
            // using while loop
             int largenum;cin>>largenum;
            int smallnum;cin>>smallnum;

            int rem = largenum%smallnum;

            while(rem != 0)
            {

                int temp = smallnum;
                
                smallnum = largenum%smallnum;
            
                largenum = temp;
                
                rem = largenum%smallnum;

            }

            cout<<smallnum;
        }
        break;

        case 3:
        {
            // replace mod with minus
             int largenum;cin>>largenum;
            int smallnum;cin>>smallnum;

            int rem = largenum-smallnum;

            while(rem != 0)
            {

                int temp = smallnum;
                
                smallnum = largenum-smallnum;
            
                largenum = temp;
                
                rem = largenum-smallnum;

            }

            cout<<smallnum;   
        }
        break;

        case 4:
        {
             int arr[] = {45 , 67 , 89 , 93};
    
    
            int gcd = findgcd(arr[1] , arr[0]);
            
            for(int i = 2 ; i < 4 ; i++)
            {
                gcd = findgcd(arr[i] , gcd ); //findgcd , as defined in base problem
            }

            cout<<gcd;
        }
        break;

        case 5:
        {
            int largenum;cin>>largenum;
            int smallnum;cin>>smallnum;

            int rem = largenum%smallnum;
            int result =1 ;

            while((largenum%2 == 0) && (smallnum%2 == 0))
            {
                largenum /= 2;
                smallnum /= 2;

                result *= 2;

            }

            while(rem != 0)
            {

                int temp = smallnum;
                
                smallnum = largenum%smallnum;
            
                largenum = temp;

                
                rem = largenum%smallnum;

            }
            result *= smallnum;

            cout<<result;
        }
        break;

        case 6
        {
            // will do after doing algorithm 3.5
        }
        break;

        case 7:
        {
            


                // generating isFibonacci numbers and testing their gcd
                
            int  a  = 1 , b = 1;

                        while(n > 0)
                        {
                        cout<<"gcd of: "<<a<<' '<<b<<"is "<<findgcd(b , a)<<"\n";
                            a = a+b ;
                            b = a+b;
                            n--;
                        }        
        }
        break;

        case 8:
        {
             // The product of the two numbers is the product of the LCM and the GCD.
            
            int gcd(int largenum , int smallnum)
            {
                if(largenum%smallnum == 0)
                {
                    return smallnum;
                }
                else
                {
                    gcd(smallnum , largenum%smallnum);
                }
            }

            // under main
            int a ; std::cin>>a;
            int b; std::cin>>b;
            int mul = a*b;

            int gcd  = gcd(a, b);

            int lcm = mul/gcd;
            cout<<lcm;

        }break;

        case 9:
        {
            int a;cin>>a;
            int b;cin>>b;
            
            int scd;
            if(a%2 == 0  && b%2 == 0 )
            {
                scd = 2;
            }
            else{
                for(int i = 3 ; i < sqrt(b) ; i+= 2 )
                {
                    if(a%i == 0  && b%i == 0)
                    {
                        scd = i;
                        break;

                    }    
                 
                }
            }
        }break;

        case 10:
        {
            int findgcd(int a , int b)
            {
                if(a%b == 0)
                {
                    return b;
                }
                else
                {
                    return findgcd(b , a%b);
                }
            }

        int findlcm(int gcd , int mul)
        {
            return mul/gcd;
        }

        class fraction
        {
        public:

            int numerator;
            int denominator;

            fraction(int a , int b ){
                numerator = a ;
                denominator = b;

            }

            void display()
            {
                cout<<numerator<<"/"<<denominator;
            }

            fraction& operator+(const fraction& rhs)
            {
                int denom = findlcm( findgcd(denominator , rhs.denominator), denominator*rhs.denominator);
                cout<<denom<<endl;
                numerator = (numerator*((int)denom/denominator)) + (rhs.numerator*((int)denom/rhs.denominator));
                denominator = denom;

                return *this;

            }


        };
        }
        break;




        
    }
}

void threepointfour()
{
        system("CLS");
        // EXCHANGING VALUES OF VARIABLES
        int choice;
        std::cout<<"1. PROBLEM"<<std::endl;
        for(int i = 2 ; i < 7; i++)
        {
            std::cout<<i<<". supplement problem 3.1."<<i-1<<std::endl;

        }
        std::cout<<"\n Enter your Choice : ";
        std::cin>>choice;
        switch(choice)
        {
            case 1:
            {
                int n; std::cin>>n;
                
                vector<int> primes;
                vector<int> multiples;

                primes.push_back(2);
                primes.push_back(3);
                primes.push_back(5);

                    int limit = 2;
                    int plimsq = 25;
                    bool prime = false;
                    int x = 1;
                    if(x < 5)
                    {
                        for(int i= 0 ; i < limit+1 ; i++)
                        {
                            cout<<"prime: "<<primes[i]<<endl;

                        }
                    }
                    x =5; // initialise dx to 5 
                    int dx = 2;
                    
                    for(int i = 2 ; i <= 5  ; i++)
                            {
                                
                                multiples.push_back(primes[limit] * i);
                            }
                    while(x < n)
                    {
                        x += dx;
                        dx = abs(dx - 6);
                        cout<<"x is:"<<x<<endl;

                        prime = true;


                        if(x >= plimsq)
                        {

                            limit += 1;
                            plimsq = primes[limit] * primes[limit];

                        }
                            for(int i = 0 ; i < multiples.size() ; i++)
                            {
                                cout<<multiples[i]<<" ";

                            }
                            cout<<endl;
                        // test x against multiples
                        for(int i = 0 ; i < multiples.size() ; i++)
                            {
                                
                                
                                if(multiples[i] == x )
                                {
                                    prime = false;
                                    break;

                                }
                            }
                            

                        

                        if(prime)
                        {
                            cout<<"prime: "<<x<<endl;
                            primes.push_back(x);
                            limit += 1;


                        }
                        if(prime)
                        {
                            for(int i = 2 ; i <= primes.back()  ; i++)
                            {
                                
                                multiples.push_back(primes[limit] * i);
                            }
                        }  
                        
                        // increasing x skipping multiples of 2 and 3;

        
                    }
            }break;


        }

}


// 3.4 and 3.5 will do after some research. Book theory is not enough



void threepointsix()
{
     system("CLS");
        // Pseudo Random number generation 

        int choice;
        std::cout<<"1. PROBLEM"<<std::endl;
        for(int i = 2 ; i < 7; i++)
        {
            std::cout<<i<<". supplement problem 3.1."<<i-1<<std::endl;

        }
        std::cout<<"\n Enter your Choice : ";
        std::cin>>choice;
        switch(choice)
        {
            /* 
            a-> multiplier, b-> increment, m-> modulus
            a > roo(m) , a < m-root(m)
            b-> relatively prime to m
            sequence of pseud0 random generated numbers have a period of 'm'
            */ 
            case 1:
            {
                int m = 4096;
                int a = 109;
                int b = 853;
                int x = m/2;

                while(true)
                {
                    cout<<x<<endl;
                    x = (a*x + b)%m;
                    sum +=x ;
                    temp =x;
                }
            }break;

            case 2:
            {
                int x = m/2;
                int temp =(a*x + b)%m;
                long sum = 0;

                while(temp != m/2)
                {
                    cout<<x<<endl;
                    x = (a*x + b)%m;
                    sum +=x ;
                    temp =x;
                }

                cout<<"generation repeating"<<endl;
                cout<<"mean: "<<(float)(sum/m)<<endl;
                float mean = (float)(sum/m);

                float deviation_sum=0;
                int n = m;
                x = m/3;
                while(n >0)
                {
                    x = (a*x + b)%m;
                    deviation_sum += ((x - mean)*(x-mean));
                    
                    n--;
                }
                cout<<"deviation_sum: "<<deviation_sum<<endl;
                float variance = deviation_sum/(m-1);


                cout<<"variance : "<<variance<<endl;
            }break;

            case 3:
            {
                    
            }break;

        }
}
void UI()
{
    int choice;
    std::cout<<"3.1 Finding the square root of a number "<<std::endl;
    
    std::cout<<"3.2 The smallest divisor of an integer"<<std::endl;
    

    std::cout<<"3.3 Greatest common divisor of 2 numbers "<<std::endl;
    
    std::cout<<"3.4 Generating prime numbers"<<std::endl;
    
    std::cout<<"3.5 Sine Function computation"<<std::endl;
    
    std::cout<<"3.6 Generating Fibbonacci Sequence"<<std::endl;
    
    std::cout<<"3.7 Reversing the digits of a number "<<std::endl;
    
    std::cout<<"3.8 Base conversion "<<std::endl;                  
    
    std::cout<<"3.9 Character to number conversion "<<std::endl;
    std::cout<<"Enter your choice: 3.";
    std::cin>>choice;


    switch(choice)
    {
        case 1: threepointone();
        break;

        case 2: threepointtwo();
        break;

        case 3: threepointthree();
        break;

        case 4: threepointfour();
        break;

        case 5: threepointfive();
        break;

        case 6: threepointsix();
        break;

        case 7: threepointseven();
        break;

        case 8: threepointeight();
        break;

        case 9: threepointnine();
        break;

    }
}


int main()
{
    UI();
    

    
    return 0;


}