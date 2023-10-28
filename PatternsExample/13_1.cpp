/*
Легенда
Рассмотрим индикатор выполнения – это окно, которое приложение может использовать для
индикации хода длительности операции (например, процесса установки). Обычно это
прямоугольное окно, которое постепенно заполняется слева направо цветом выделения по
мере выполнения операции. У него есть диапазон и текущая позиция. Диапазон представляет
собой всю продолжительность операции, а текущая позиция представляет прогресс,
достигнутый приложением в завершении операции. Диапазон и текущая позиция используются
для определения процента индикатора выполнения, который нужно заполнить цветом выделения.
Существуют различные направления заполнения, такие как справа налево, сверху вниз и снизу
вверх, также с заданным направлением заливки можно использовать различные типы заливок,
такие как непрерывная заливка, прерывистая заливка или заливка на основе узора.
Задание.
Для пользовательского приложения реализовать возможность настройки индикатора выполнения
с конкретным классом-заполнителем.
*/

class IFiller
{
	virtual ~IFiller();
	virtual useColor() = 0;
	virtual useDirection = 0;
};

//Left Right variations
class LeftRight_Continuous : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

class LeftRight_intermittent : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

class LeftRight_PatternBased : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

//UpDown variations
class UpDown_Continuous : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

class UpDown_intermittent : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

class UpDown_PatternBased : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

//DownUp variations
class DownUp_Continuous : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

class DownUp_intermittent : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};

class DownUp_PatternBased : public Filler
{
public:
	useColor() {/*Реализация*/}
	useDirection()  {/*Реализация*/}
};


class I_Indicator{

protected:
	Filler* filler;
public:
	virtual void setFiller() = 0;
	virtual void useFiller(Filler* filler) = 0;
	std::pair<int,int> diapason;
	int position;
};

class Indicator : piblic I_Indicator
{
public:
	void setFiller(Filler* filler){this->filler=filler; }
	void useFiller(){ filler->useColor; filler->setSirection }
};

class UserApplication()
{
	Indicator* indicator = new Indicator();
public:
	UseIndicator(){
		DownUp_PatternBased  colorDirection;
		this->indicator.setFiller(& colorDirection);
		this->insicator.useFiller();
	}
};

