#include <iostream>
#include"Point.h"
#include"Line.h"
#include"Circle.h"
#include"Square.h"
#include"Rectangle.h"
#include"Cube.h"
#include"Simplex.h"
#include"Triangle.h"
#include"Container.h"
#include"Shapes.h"


using namespace std;


int main()
{
	Container Cont;
	Point<char> point;
	Line<char> line(8, '-');
	Circle<char> circle(3, '@');
	Square<int> square(6, 0);
	Rectangle<int> rectangle(3, 10, 1);
	Cube<char> cube(5, '&');
	Simplex<char> simplex(4, '^');
	Triangle<char> triangle(4, '*');

	Cont.Add(point);
	Cont.Add(line);
	Cont.Add(square);
	Cont.Add(rectangle);
	Cont.Add(circle);
	Cont.Add(cube);
	Cont.Add(simplex);
	Cont.Add(triangle);


	cout << "point:" << endl;
	Cont.Off(point);
	cout << endl;
	cout << endl;
	cout << "line:" << endl;
	Cont.Off(line);
	cout << endl;
	cout << "circle:" << endl;
	Cont.Off(circle);
	cout << endl;
	cout << "square:" << endl;
	Cont.Off(square);
	cout << endl;
	cout << "rectangle:" << endl;
	Cont.Off(rectangle);
	cout << endl;
	cout << "simplex projection:" << endl;
	Cont.Off(simplex);
	cout << endl;
	cout << "cube projection:" << endl;
	Cont.Off(cube);
	cout << endl;
	cout << "triangle:" << endl;
	Cont.Off(triangle);
	cout << endl;



	if (square.Perimeter() > cube.Perimeter())
		Cont.Delete(cube);
	if (square.Perimeter() < cube.Perimeter())
		Cont.Delete(square);

	cout << "_______CONTAINER_______   : " << endl << Cont;
	return 0;
}