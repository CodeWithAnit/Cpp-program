//first program to print Anit Shrestha from cpp
/*
#include<iostream>
using namespace std;
 
 int main()
 {
 cout<<"Anit Shrestha"<<endl;
 return 0;
 }

// Printing some random sentences

#include<iostream>
using namespace std;

int main()
{
    cout<<"I am learning C++ program"<<endl;
    cout<<"Hey! How are you?"<<endl;
    cout<<"My birthday is comming soon"<<endl;
    cout<<"I want to be a programmer"<<endl;
    return 0;
}

//area  and perimeter of rectangle
#include<iostream>
using namespace std;

class rectangle{
    private:
    int length, breadth;

    public:
    void setdata(int l, int b);
    void showdata();
    int findarea();
    int findperimeter();
};

void rectangle::setdata(int l, int b){
    length=l;
    breadth=b;
}

void rectangle::showdata()
{
    cout<<"length=" << length << endl <<"Breadth=" << breadth<<endl;
}

int rectangle::findarea()
{
    return length*breadth;
}

int rectangle::findperimeter()
{
    return 2*(length+breadth);
}

//main function section

int main()
{
    rectangle r;
    r.setdata(2,3);
    r.showdata();
    cout<<"Area = " << r.findarea() << endl;
    cout<<"Perimeter = " << r.findperimeter() << endl;
}



// adding and subtracting two numbers

#include<iostream>
using namespace std;

class number{
    private:
    int num1, num2;
    public:
    void setdata(int n1, int n2);
    void showdata();
    int findsum();
    int finddifference();
};

void number::setdata(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
}

void number::showdata()
{
    cout<<"Enter two numbers:"<<endl;

}

int number::findsum()
{
    return num1+num2;
}

int number::finddifference()
{
    return num1-num2;
}

int main()
{
    number n;
    n.setdata(4,2);
    n.showdata();
    cout << "Sum = " << n.findsum() << endl;
    cout << "Difference = " << n.finddifference() << endl;
    return 0;
}
*/

//square and cube of a number
#include<iostream>
using namespace std;
class nest
{
	int a;
	int square_num()
	{
		return a*a;
	}
	public:
		void input_num()
		{
			cout<<"Enter a number:"<<endl;
			cin>>a;
		}
	int cube_num()
	{
		return a*a*a;
	}
	void disp_num()
	{
		int sq=square_num();
		int cu=cube_num();
		cout<<"The square of " <<a << " is "<<sq<<endl;
		cout<<"The cube of "<< a << " is "<<cu;
	}
};

int main()
{
	nest n1;
	n1.input_num();
	n1.disp_num();
	return 0;
}















