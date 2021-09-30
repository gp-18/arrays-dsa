// way one  normal way where all is inside the class 
// #include<bits/stdc++.h>
// using namespace std;

// class Rectangle{
//     private:
//     int length;
//     int breath;
//     public:
//     Rectangle()
// {
//     length =0;
//     breath =0;
// }
//     void initalize(int l,int b)
//     {
//         length=l;
//         breath=b;
//     }

//     int area()
//     {
//         return length*breath;
//     }

//     int perimeter()
//     {
//         int p;
//         p= 2*(length+breath);
//         return p;
//     }

//     ~Rectangle()
//     {

//     }
// };

// int main()
// {
// Rectangle r;
// int l,b;
// cout<<"enter length and breath :\n";
// cin>>l>>b;

// r.initalize(l,b);
// int a=r.area();
// int p=r.perimeter();
// cout<<a<<" "<<p;

// return 0;
// } 

// way two where the functions are outside the class this is called template method 
// #include<bits/stdc++.h>
// using namespace std;

// class Rectangle{
//     private:
//     int length;
//     int breath;
//     public:
//     Rectangle();
//     void initalize(int l,int b);
//     int area();
//     int perimeter();
//       ~Rectangle();
// };
//     Rectangle :: Rectangle()
// {
//     length =0;
//     breath =0;
// }
//     void Rectangle::initalize(int l,int b)
//     {
//         length=l;
//         breath=b;
//     }

//     int Rectangle::area()
//     {
//         return length*breath;
//     }

//     int Rectangle::perimeter()
//     {
//         int p;
//         p= 2*(length+breath);
//         return p;
//     }

//     Rectangle :: ~Rectangle()
//     {

//     }


// int main()
// {
// Rectangle r;
// int l,b;
// cout<<"enter length and breath :\n";
// cin>>l>>b;

// r.initalize(l,b);
// int a=r.area();
// int p=r.perimeter();
// cout<<a<<" "<<p;

// return 0;
// } 
// #include<bits/stdc++.h>
// using namespace std;
// class Car
// {
//     int data;
// public:    
// Car()
// {
//     cout<<"Hello i am Constructor"<<endl;
// }
// int inside()
// {
//     cout<<"hey i am calling from inside the function";
// }
// int speed();
// ~Car()
// {
//     cout<<"Hello i am desctructor"<<endl;
// }
// };
// int Car::speed()
// {
//     cout<<"hello i am function calling outside the function"<<endl;
// }
// int main()
// {
// Car op;
// op.inside();
// op.speed();
// return 0;
// }

// inheritance
// #include<bits/stdc++.h>
// using namespace std;
// class scienceteacher
// {
// public:
// scienceteacher()
// {
//     cout<<"constructor from science teacher "<<endl;
// }
// };
// class teacher
// {
//     public:
//     teacher()
//     {
//         cout<<"hello i am constructor from teacher"<<endl;
//     }

// };
// class principal :  public teacher,public scienceteacher
// {
//     public:
//     principal()
//     {
//         cout<<"hello i am constructor from principal"<<endl;
//     }
// };
// int main()
// {
// principal hi;
// return 0;
// }

// polymorishim
#include<bits/stdc++.h>
using namespace std;
class Add
{
    public:

    int sum(int a,int b)
    {
        return a+b;
    }

        int sum(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
Add hello;
cout<< hello.sum(5,10)<<endl;
cout<< hello.sum(5,10,5)<<endl;

return 0;
}