#include<iostream>
#include <bits/stdc++.h>
#include<cmath>

using namespace std;

class Calculator
{
    public:

    int Addition(int n,int arr[])
    {
        int sum;

        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];

        }
       cout<<"The Result Is : "<<sum<<endl;
    }

    int Subtraction(int x,int y)
    {
       cout<<"The Result Is : "<<(x-y)<<endl;
    }

    int Multiplication(int n,int arr[])
    {
        int mul=1;

        for(int i=0;i<n;i++)
        {
            mul=mul*arr[i];

        }
       cout<<"The Result Is : "<<mul<<endl;
    }

    int Division(int x,int y)
    {
       cout<<"The Result Is : "<<(x/y)<<endl;
    }

    int Modulo(int x,int y)
    {
       cout<<"The Result Is : "<<(x%y)<<endl;
    }
    int square(int x)
    {
       cout<<"The Result Is : "<<pow(x,2)<<endl;
    }
    int power(int x,int y)
    {
       cout<<"The Result Is : "<<pow(x,y)<<endl;
    }
    int square_root(int x)
    {
       cout<<"The Result Is : "<<sqrt(x)<<endl;
    }
    float sine(float x)
    {
        cout<<"The Result Is : "<<sin(x)<<endl;
    }
    float cosine(float x)
    {
        cout<<"The Result Is : "<<cos(x)<<endl;
    }
    float tangent(float x)
    {
        cout<<"The Result Is : "<<tan(x)<<endl;
    }
    float cotangent(float x)
    {
        cout<<"The Result Is : "<<(1/tan(x))<<endl;
    }
    float secent(float x)
    {
        cout<<"The Result Is : "<<(1/cos(x))<<endl;
    }
    float cosecent(float x)
    {
        cout<<"The Result Is : "<<(1/sin(x))<<endl;
    }
    double Log(double x,int n)
    {
        if(n==1)
        {
         cout<<"The Result Is : "<<log(x)<<endl;
        }

        else if(n==2)
        {
         cout<<"The Result Is : "<<log10(x)<<endl;
        }
    }


};



class Menu
{
    public:

        void Show()
        {
            cout<<"\t\t\t-----------------------"<<endl;
            cout<<"\t\t\t  Calculator Menu "<<endl;
            cout<<"\t\t\t-----------------------"<<endl<<endl;

            cout<<"\t\t\t  1.Addition."<<endl;
            cout<<"\t\t\t  2.Subtraction."<<endl;
            cout<<"\t\t\t  3.Multiplication."<<endl;
            cout<<"\t\t\t  4.Division."<<endl;
            cout<<"\t\t\t  5.Modulo."<<endl;
            cout<<"\t\t\t  6.Square."<<endl;
            cout<<"\t\t\t  7.Square_root."<<endl;
            cout<<"\t\t\t  8.Power Function."<<endl;
            cout<<"\t\t\t  9.Trigonometry. "<<endl;
            cout<<"\t\t\t 10.Logarithm. "<<endl;

            cout<<endl;

        }

        void tshow()
        {

            cout<<endl;
            cout<<"\t The Trigonometry oparation are: " <<endl;

            cout<<"\t\t  1.Sin Value."<<endl;
            cout<<"\t\t  2.Cos value."<<endl;
            cout<<"\t\t  3.tan value."<<endl;
            cout<<"\t\t  4.cot value."<<endl;
            cout<<"\t\t  5.sec value."<<endl;
            cout<<"\t\t  6.cosec value."<<endl;

             cout<<endl;

        }

        void lshow()
        {

            cout<<endl;
            cout<<"\t The Logarithm oparation are: " <<endl;

            cout<<"\t\t  1. e-base log."<<endl;
            cout<<"\t\t  2. 10-base log."<<endl;

             cout<<endl;

        }

};

class Option : public Calculator,public Menu
{
    public:

    int choose()
    {
        int value;

        cout<<"Enter a value(1/2/3...):";
        cin>>value;

        cout<<endl;

        if(value==1)
        {
            //int x,y;

            int arr[10000];
            int n;

            cout<<"Enter the total number for addition:";
           // cin>>x>>y;
           cin>>n;

            cout<<"Enter the numbers:";

           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }

            Addition(n,arr);

        }

        else if(value==2)
        {
            int x,y;

            cout<<"Enter Two Number:";
            cin>>x>>y;

            Subtraction(x,y);

        }

        else if(value==3)
        {

            int arr[10000];
            int n;

            cout<<"Enter the total number for Multiplication:";
           // cin>>x>>y;
           cin>>n;

            cout<<"Enter the numbers:";

           for(int i=0;i<n;i++)
           {
               cin>>arr[i];
           }

            Multiplication(n,arr);
        }

        else if(value==4)
        {
            int x,y;
            cout<<"Enter Two Number:";
            cin>>x>>y;

            Division(x,y);
        }

        else if(value==5)
        {

            int x,y;

            cout<<"Enter Two Number:";
            cin>>x>>y;

            Modulo(x,y);
         }

        else if(value==6)
        {
            int x;
            cout<<"Enter The Number:";
            cin>>x;

            square(x);
        }

        else if(value==7)
        {
            int x;
            cout<<"Enter The Number:";
            cin>>x;

            square_root(x);
         }

          else if(value==8)
        {
            int x,y;

            cout<<"Enter The Base Number:";
            cin>>x;

            cout<<"Enter The power Number:";
            cin>>y;

            power(x,y);
         }

        else if(value==9)
        {
            tshow();

            int val;
            cout<<"Enter a value(1/2/3..):";
            cin>>val;

            double x,y;
            cout<<"Enter The Degree:";
            cin>>x;

            y=(x*3.1416)/180;

            switch(val)
            {
                case 1:
                    sine(y);
                    break;
                case 2:
                    cosine(y);
                    break;
                case 3:
                    tangent(y);
                    break;
                case 4:
                    cotangent(y);
                    break;
                case 5:
                    secent(y);
                    break;
                case 6:
                    cosecent(y);
                    break;

            }
         }
         else if(value==10)
        {
            lshow();

            int val;
            cout<<"Enter a value(1/2):";
            cin>>val;

            double x;
            cout<<"Enter The power of logarithm:";
            cin>>x;

            Log(x,val);

         }


    }

};

int main()
{
    Calculator ob;
    Menu obj;
    Option object;

    obj.Show();
    object.choose();

    return 0;
}
