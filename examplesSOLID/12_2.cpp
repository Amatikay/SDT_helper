//Нарущение прицнипа открытости\закрытости
#include <iostream>
#include <list>
#include <vector>
// Структура описывающая точку
struct Point
{
	int x;
	int y;
	Point(int _x = 0, int _y = 0) { x = _x; y = _y; }
};
// Базовый класс фигура
class Shape
{
public:
	//Здесь конструкторы, геттеры и сеттеры Get / Set
	Shape(Point c) { center = c; type = "BaseFigure"; }
	std::string GetType() const { return type; }
protected:
	Point center;
	std::string type;
};
          
          
class Circle : public Shape
{
public:
	//Здесь конструкторы, геттеры и сеттеры Get / Set
	Circle(Point cnt, int r) :Shape(cnt) { radius = r; type = "Circle"; }
private:
	int radius;
};
  
  
class Square : public Shape
{
public:
	//Здесь конструкторы, геттеры и сеттеры Get / Set
	Square(Point cnt, int r) :Shape(cnt) { side = r; type = "Square"; }
private:
	int side;
};

  
class DrwManager
{
private:
	std::list<Shape> shapeList;
public:
	// Здесь различные конструкторы
	DrwManager()
	{
	//Такая инициализация только для примера
	Point p(0,0);
	std::list<Shape> sh = { Square(p,3),Circle(p,3) };
	};
	// Метод рисует все фигуры из списка shapeList
	void drawShapes()
	{
		for (const auto &elem : shapeList)
		{
			if (elem.GetType() =="Circle")
			{
				drawCirle(elem);
			}
			else if (elem.GetType() == "Square")
			{
				drawSquare(elem);
			}
		}
	}
private:
	void drawCirle(const Shape c) { std::cout << "Draw Cirle!\n"; };
	void drawSquare(const Shape c) { std::cout << "Draw Square!\n"; };
};
  
// Решение нарушения принципа открытости\закрытости
class IDrawManager
{
      private:
  std::list<Shape> shapeList;
  public:
  virtual drawShape() = 0;
}

class DrawManagerCircle : private IDrawManager{
override void drawShape(){};	
}

class DrawManagerSquare : private IDrawManager{
override void drawShape(){};	
}
                        