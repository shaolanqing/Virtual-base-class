/*6、 虚基类
定义vehicle类，数据成员包括私有的weight，公有的构造函数，析构函数和输出函数dispaly；
从vehicle类公有派生car类，增加数据成员载人数personnum，公有的构造函数,析构函数和输出display；
从vehicle类公有派生truck类，增加数据成员载货量laod,公有的构造函数，析构函数和输出函数display；
从car类和truck类共同公有派生出pickup类，包括公有的构造函数和输出函数。
在main函数中，定义pickup类对象，并输出其基本信息。*/
#include<iostream>
using namespace std;

class Vehicle
{
	private:
		double weight;
	public:
		Vehicle()
		{
			weight=0;
		}
		Vehicle(double w)
		{
			weight=w;
		}
		double getw()
		{
			return weight;
		}
	    ~Vehicle()
		{
			cout<<"Vehicle is construction!"<<endl;
		}
		void display()
		{
			cout<<"the Vehicle's weight:"<<weight<<endl;
		}
};
class Car:virtual public Vehicle   //Car继承Vehicle公有部分 ，定义Car为虚基类 
{
private:
	int personnum;
public:
	Car()
	{
		personnum=0;
	}
	Car(int p,double w):Vehicle(w)  
	{
		int Cweight=w;
		personnum=p;
		cout<<"the Car's weight:"<<Cweight<<endl;
	}
	 ~Car()
	{
		cout<<"the car be construction!!"<<endl;
	}
	void display()
	{

			cout<<"the Car's personnum:"<<personnum<<endl;
	}
};
class Truck:virtual public Vehicle     //将Truck定义为虚基类 
{
private:
	int load;
public:
	Truck()
	{
		load=0;
	}
	Truck(int l,double w):Vehicle(w)
	{
		int Tweight=w;
		load=l;
		cout<<"the Truck's weight:"<<Tweight<<endl;
	}
	~Truck()
	{
		cout<<"the Truck be construction!!"<<endl;
	}
	void display()
	{
			cout<<"the Truck's load:"<<load<<endl;
	}
};
class Pickup:public Car,public Truck    //pickup继承Car和Truck的public部分 
{
private:
public:
    pickup()
	{
	 } 
	Pickup(int p,double w,int l,double ww):Car(p,w),Truck(l,ww)
	{
	}
    ~Pickup()
	{
		cout<<"pickup is construction!!!"<<endl;
	}
	void display()
	{
		Car::display();        //通过类名来调用自己的成员函数 
		Truck::display ();
	}
};
int main()
{
	Pickup p1(10,40,30,60);
	p1.display();
	return 0;
}


