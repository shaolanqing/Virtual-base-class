/*6�� �����
����vehicle�࣬���ݳ�Ա����˽�е�weight�����еĹ��캯���������������������dispaly��
��vehicle�๫������car�࣬�������ݳ�Ա������personnum�����еĹ��캯��,�������������display��
��vehicle�๫������truck�࣬�������ݳ�Ա�ػ���laod,���еĹ��캯���������������������display��
��car���truck�๲ͬ����������pickup�࣬�������еĹ��캯�������������
��main�����У�����pickup����󣬲�����������Ϣ��*/
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
class Car:virtual public Vehicle   //Car�̳�Vehicle���в��� ������CarΪ����� 
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
class Truck:virtual public Vehicle     //��Truck����Ϊ����� 
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
class Pickup:public Car,public Truck    //pickup�̳�Car��Truck��public���� 
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
		Car::display();        //ͨ�������������Լ��ĳ�Ա���� 
		Truck::display ();
	}
};
int main()
{
	Pickup p1(10,40,30,60);
	p1.display();
	return 0;
}


