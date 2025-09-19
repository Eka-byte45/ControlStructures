
//#include <iostream>
//using namespace std;
//
//const int maxNameLength=20;
//const int markCount = 3;
//
//struct Student
//{
//	char name[maxNameLength];
//	int marks[markCount];
//};
//
//void initStudent(Student& student, const char* name, const int marks[])
//{
//	strcpy_s(student.name, maxNameLength, name);
//		for (int i = 0; i < markCount; ++i)
//		{
//			student.marks[i] = marks[i];
//
//		}
//}
//
//double averMark(Student student)
//{
//	double sum = 0.0;
//	for (int i = 0; i < markCount; ++i)
//	{
//		sum += student.marks[i];
//	}
//	return sum / markCount;
//}
//
//void printStudent(Student student)
//{
//	cout << student.name << endl;
//	cout << "Оценки: ";
//	for (int i = 0; i < markCount; ++i)
//	{
//		cout<<student.marks[i]<<" ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	system("chcp 1251 > NUL");
//
//	Student student;
//
//	const char* studentName{ "Голицын Л.П" };
//	int studentMarks[]{ 5,3,3 };
//
//	initStudent(student, studentName, studentMarks);
//	printStudent(student);
//	cout << "Средняя оценка: "<< averMark(student);
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//const int maxNameLength = 20;
//const int markCount = 3;
//
//class Student
//{
//	char name[maxNameLength];
//	int marks[markCount];
//	public:
//	Student(const char* name, const int* marks)
//	{
//		strcpy_s(Student::name, maxNameLength, name);
//		for (int i = 0; i < markCount; ++i)
//		{
//			Student::marks[i] = marks[i];
//		}
//	}
//
//	double getAver()
//	{
//		double sum = 0.0;
//		for (int i = 0; i < markCount; ++i)
//		{
//			sum += marks[i];
//		}
//
//		return sum / markCount;
//	}
//
//	void print()
//	{
//		cout << name << endl;
//		cout << "Оценки: ";
//		for (int i = 0; i < markCount; ++i)
//		{
//			cout << marks[i] << " ";
//		}
//		cout << endl;
//	}
//
//	void printAver()
//	{
//		cout <<"Средняя оценка: "<< getAver() << endl;
//	}
//
//
//};
//
//int main()
//{
//	system("chcp 1251 > NUL");
//
//	Student student{ "Сидоров С.С",new int[3] { 4,4,3 } };
//	student.print();
//	student.printAver();
//
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Student
//{
//public:
//	char name[21];
//	int marks[3];
//
//	double getAver()
//	{
//		double sum = 0.0;
//		for (int i = 0; i < 3; ++i)
//		{
//			sum += marks[i];
//		}
//		return sum / 3;
//	}
//
//};
//
//int main()
//{
//	system("chcp 1251 > NUL");
//
//	cout << "Успеваемость студента." << endl;
//
//	Student student;
//	strcpy_s(student.name, 20, "Петров Е.Е");
//	
//	student.marks[0] = 5;
//	student.marks[1] = 3;
//	student.marks[2] = 3;
//
//	double aver = student.getAver();
//
//	cout << "ФИО: " << student.name << " средний балл: " << aver;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Student
//{
//private:
//	/*char name[21];
//	int marks[3];*/
//	char* name;
//	int markCount;
//	int* marks;
//public:
//	/*Student()
//	{
//		cout << "Конструктор Student" << endl;
//	}*/
//	Student(const char* studentName)
//	{
//		setName(studentName);
//	}
//	void setName(const char* studentName)
//	{
//		strcpy_s(name, 20, studentName);
//	}
//	void setMark(int mark,int index)
//	{
//		if (mark < 1 || mark>12)
//		{
//			mark = 0;
//		}
//		marks[index] = mark;
//	
//	}
//	const char* getName()
//	{
//		return name;
//	}
//
//	int getMark(int index)
//	{
//		return marks[index];
//	}
//
//	double getAver()
//	{
//		double sum = 0.0;
//		for (int i = 0; i < 3; ++i)
//		{
//			sum += marks[i];
//		}
//		return sum / 3;
//	}
//
//};
//
//int main()
//{
//	system("chcp 1251 > NUL");
//
//	cout << "Успеваемость студента." << endl;
//
//	Student student("Иванов И.И");
//	
//	//student.setName("Иванов И.И");
//	student.setMark(10, 0);
//	student.setMark(11, 1);
//	student.setMark(12, 2);
//
//	cout <<"Имя студента:"<<student.getName() << endl;
//	cout << "Средний балл: " << student.getAver() << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A 
//{
//	int a;
//public:
//	A(int x)
//	{
//		a = x;
//		cout << "A(" << a << ")\n";
//	}
//	~A()
//	{
//		cout << "~A(" << a << ")\n";
//	}
//	void show()
//	{
//		cout << a << "\n";
//	}
//
//};
//void f(A a)
//{
//	a.show();
//}
//int main() {
//
//	A a1(123);
//	f(a1);
//
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class A {
//	int a;
//public:
//	A(int x)
//	{
//		a = x;
//		cout << "A(" << a << ")\n";
//	}
//
//	~A()
//	{
//		cout << "~A(" << a << ")\n";
//	}
//};
//A f()
//{
//	A a1(123);
//	return a1;
//}
//int main() {
//	f();
//	return 0;
//}

//Домашка класс Кирпич

//#include <iostream>
//
//class Break
//{
//	int length;
//	int width;
//	int heigth;
//	char brand[21];
//public:
//	Break()
//	{
//		length = {};
//		width = {};
//		heigth = {};
//		brand[0] = '\0';
//	}
//
//	Break(int lengthP, int widthP, int heigthP,const char* brandP)
//	{
//		length = lengthP;
//		width = widthP;
//		heigth = heigthP;
//		strcpy_s(brand, 21, brandP);
//	}
//
//	void setLength(int lengthP)
//	{
//		length = lengthP;
//	}
//
//	void setWidth(int widthP)
//	{
//		width = widthP;
//	}
//
//	void setHeigth(int heigthP)
//	{
//		heigth = heigthP;
//	}
//
//	void setBrand(const char* brandP)
//	{
//		strcpy_s(brand, strlen(brandP + 1), brandP);
//	}
//
//	int getLength() const
//	{
//		return length;
//	}
//
//	int getWidth() const
//	{
//		return width;
//	}
//
//	int getHeigth() const
//
//	{
//		return heigth;
//	}
//
//	const char* getBrand() const
//	{
//		return brand;
//	}
//
//	void ShowBreak()
//	{
//		std::cout<<"Длина: " << length<<" Ширина: " << width<<" Высота: " << heigth <<" Марка кирпича: "  << brand<<std::endl;
//	}
//
//	void ShowBrand()
//	{
//		std::cout<<"Марка кирпича: " << brand << std::endl;
//	}
//
//
//};
//int main()
//{
//	system("chcp 1251 > NUL");
//
//	Break break1;
//
//	break1.ShowBreak();
//	break1.setLength(5);
//	break1.ShowBreak();
//
//	std::cout << std::endl;
//
//	Break break2(5,4,3,"красный");
//	break2.ShowBrand();
//	break2.ShowBreak();
//
//	std::cout << std::endl;
//
//	Break break3{ 5, 5, 5, "белый" };
//	break3.ShowBrand();
//	break3.ShowBreak();
//
//	return 0;
//}

//#include <iostream>
//
//class Point
//{
//	//int X;
//	//int Y;
//	//int Z;
//
//	int X, Y, Z;
//
//public:
//
//	//Point():X{0},Y{0},Z{0}
//	Point() :X{}, Y{}, Z{}
//	{
//		std::cout << "Конструктор по умолчанию!!!" << std::endl;
//	}
//
//	/*Point(int x, int y, int z)
//	{
//		X = x;
//		Y = y;
//		Z = z;
//		std::cout << "Конструктор с термя параметрами!!!"<<std::endl;
//
//	}*/
//
//	Point(int x,int y,int z) : X{x}, Y{y},Z{z}
//	{
//		std::cout << "Конструктор с термя параметрами!!!" << std::endl;
//	}
//
//	/*Point(int x, int y, int z=0) : X{ x }, Y{ y }, Z{ z }
//	{
//		std::cout << "Конструктор с термя параметрами!!!" << std::endl;
//	}*/
//
//	/*Point(int x=0, int y=0, int z = 0) : X{ x }, Y{ y }, Z{ z }
//	{
//		std::cout << "Конструктор с термя параметрами!!!" << std::endl;
//	}*/
//
//	Point(int x, int z) :Point{ x,0,z }
//	{
//		std::cout << "Конструктор с двумя параметрами и делегированием!!!" << std::endl;
//	}
//	 
//	Point(): Point{0,0,0}
//	{
//		std::cout << "Конструктор по умолчанию с делегированием!!!" << std::endl;
//	}
//};
//
//int main()
//{
//	system("chcp 1251 >NUL");
//
//	Point A(5, 3, 4);
//
//	Point B{};
//
//	Point C{ 1,2};
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	system("chcp 1251 > NUL");
//
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	
//	std::cout << "Введите два числа: "<<std::endl;
//	std::cin >> a >> b;
//	do
//	{
//	   c = a % b;
//	   a = b;
//	   b = c;
//	
//	} while (b!= 0);
//	
//	std::cout << "НОД = " << a << std::endl;
//
//	return 0;
//}

#include <iostream>

class Fraction
{
	int Numerator;
	int Denominator;
public:
	Fraction(int numerator, int denominator) :Numerator{ numerator }, Denominator{ denominator } {}

	void Show()
	{
		std::cout << "Дробь: " << Numerator << "/" << Denominator << std::endl;
	}

	int NOD(int numerator, int denominator)
	{
		do
		{
			int remainder = Numerator % Denominator;
			Numerator = Denominator;
			Denominator = remainder;

		} while (Denominator != 0);
		
		return Numerator;
	}

	void ReducingFraction()
	{
		int nod = NOD(Numerator, Denominator);
		Numerator /= nod;
		Denominator /= nod;

	}





};
int main()
{
	system("chcp 1251 > NUL");

	Fraction fraction{ 48,18 };
	fraction.Show();

	fraction.ReducingFraction();
	
	fraction.Show();
	return 0;
}