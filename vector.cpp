#include <iostream>
#include<math.h>
using namespace std;
typedef double tipo;

class Point
{
    private:
	tipo x;
	tipo y;
    public:
	Point()
	{
		x=0.0;
		y=0.0;
	}
	Point(tipo nx, tipo ny)
	{
		x=nx;
		y=ny;
	}
	tipo get_x()
	{
		return x;
	}
	tipo get_y()
	{
		return y;
	}
	void printpoint()
	{
		cout<<"La coordenada x del punto es :" <<get_x()<<endl;
		cout<<"La coordenada y del punto es :" <<get_y()<<endl;
	}
};

class Vector
{
    private:
	Point start;
	Point end;
    public:
	Vector(Point a, Point b)
	{
		start=a;
		end=b;
	}
	Point get_start()
	{
		return start;
	}
	Point get_end()
	{
		return end;
	}
	tipo distance()
	{
		return sqrt(pow((get_start().get_x() - get_end().get_x()),2) + pow((get_start().get_y() - get_end().get_y()),2) );
	}
	void print()
	{
		cout<<"Punto de origen:"<<"\n";	
		start.printpoint();
		cout<<"Punto de llegada:"<<"\n";
		end.printpoint();
	}
};


int main()
{
	Point x (7.0, 5.0);
	Point y (4.0, 1.0);
	Vector v1 (x, y);
	double distance = v1.distance();
	cout<<"La distancia del vector es: "<< distance << endl;
	v1.print();
}
