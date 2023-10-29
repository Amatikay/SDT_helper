/*
Паттерн «Абстрактная фабрика». Рассмотреть назначение и архитектуру абстрактной фабрики. Применить
к предложенной легенде рассматриваемый паттерн. Решение представить в виде кода с подробными
объяснениями в онлайн компиляторе, также предоставить UML диаграмму для предложенного решения.
Легенда
Предположим, что на складе хранятся мобильные телефоны различных производителей. Будем
рассматривать два типа телефонов
1. Смартфон;
2. Простой телефон;
Для простоты предположим, что у нас есть 3 производителя:
1. Nokia;
2. Samsung;
3. HTC;
Необходимо реализовать программу, которая будет выдавать информацию о телефонах заданного
производителя.
Например:
Производитель – Samsung;
Смартфон - Galaxy2;
Простой телефон - Primo
*/

//IProducts
class ISmatrtphone
{
public:
	virtual returnDataAboutSmartphoneType() = 0;
};

class ISimplePhone
{
	virtual returnDataAboutSimplePhoneType() = 0;
};


//ConcreteProducts

class NokiaSmartphone: ISmartphone{
	returnDataAboutSmartphoneType(){ /*Realization*/}
};
class SamsungSmartphone: ISmartphone{
	returnDataAboutSmartphoneType(){ /*Realization*/}
};
class HtcSmartphone: ISmartphone{
	returnDataAboutSmartphoneType(){ /*Realization*/}
};


class NokiaSimplePhone: ISImplePhone{
	returnDataAboutSmartphoneType(){ /*Realization*/}
};
class SamsungSimplePhone: ISimplePhone{
	returnDataAboutSmartphoneType(){ /*Realization*/}
};
class HtcSimplePhone: ISimplePhone{
	returnDataAboutSmartphoneType(){ /*Realization*/}
};



//IAbstractFactory
class PhoneCompany
{
public:
	virtual  ISmartphone* createSmartphone() = 0;
	virtual ISimplePhone* createSimplePhone() = 0;
};


class Nokia : public PhoneCompany
{
public
	ISmartphone* createSmartphone() { return new NokiaSmartphone() }
	ISimplePhone* createSimplePhone() { return new NokiaSimplePhone() }
};
class Samsung : public PhoneCompany
{
public
	ISmartphone* createSmartphone() { return new SamsingSmartphone() }
	ISimplePhone* createSimplePhone() { return new SamsungSimplePhone() }
};
class Htc : public PhoneCompany
{
public
	ISmartphone* createSmartphone() { return new HtcSmartphone() }
	ISimplePhone* createSimplePhone() { return new HtcSimplePhone() }
};

class DataReturner
{
	PhoneCompay* phoneCompany;
public:
	DataReturner (PhoneCompany* _phoneCompany) { phoneCompany = _phoneCompany; }
	MakeData(){
		ISmartphone* smartphone = phoneCompany.createSmartphone();
		ISimplePhone* simplePhone = phoneCompany.createSimplePhone();
		simplePhone->returnDataAboutSimplePhone();
		smartphone->returnDataAboutSmartphone();
	}
};

int main(){
	PhoneCompany* phoneCompany = new SamsungSmartphone();
	DataReturner* dataReturner = new DataReturner(phoneCompany);
	dataReturner->MakeData();
	return 0;
}
