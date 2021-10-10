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
        }break;

        case 3{
                
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

                    namespace main
                    {
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

        }break;

        case 4:
        {
            

        }


    }
}



void UI()
{
    int choice;
    std::cout<<"3.1 Finding the square root of a number "<<std::endl;
    
    std::cout<<"3.2 Counting"<<std::endl;
    

    std::cout<<"3.3 Summation of set of numbers"<<std::endl;
    
    std::cout<<"3.4 Factorial Computation"<<std::endl;
    
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

        case 2: threepointthree();
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