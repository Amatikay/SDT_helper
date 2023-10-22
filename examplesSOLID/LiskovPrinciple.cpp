// Пример нарушения принципа подстановки Лискова
class Rectangle {
protected:
    int width;
    int height;
public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    int getArea() {
        return width * height;
    }
};

class Square : public Rectangle {
public:
    void setWidth(int w) {
        width = w;
        height = w;
    }
    void setHeight(int h) {
        width = h;
        height = h;
    }
};

void printArea(Rectangle& rect) {
    rect.setWidth(5);
    rect.setHeight(4);
    cout << "Area: " << rect.getArea() << endl;
}

int main() {
    Rectangle rect;
    Square square;
    printArea(rect);   // Ожидаемый результат: Area: 20
    printArea(square); // Неожиданный результат: Area: 16
    return 0;
}

// Разрешение нарушения в прицнипе Лискова


class Shape{
public:
	virual getArea() = 0;
};

class Rectangle : public Shape {
protected:
    int width;
    int height;
public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
    int getArea() {
        return width * height;
    }
};

class Square : public Shape {
public:
    void setWidth(int w) {
        width = w;
        height = w;
    }
    void setHeight(int h) {
        width = h;
        height = h;
    }
};
