# Наблюдатель
![UML](./uml_pictures/Observer.png)

```C++
class IObserver
{
public:
	virtual void Update(string data /*Любые другие данные*/) = 0;
};

class ConcreteObserver
{
	//Поля и методы
	void Update(string data);
};

void ConcreteObserver::Update(string data){
	std::cout << "data updated!" <<std::endl;
}

class IObservable
{
	std::vector<IObserver*> list;
public:
	void AddObserver(IObserver *object); // Реализация: list.push_back(object);
  void RemoveObserver(IObserver *object); // Реализация: list.erase(std::remove(начало,конец, object), list.end());
	void NotifyObserver();
};

void IObservable::NotifyObserver(){
	for(auto observer : list){
		i->Update(data);
	}
}

class ConcreteObservable : public IObservable
{
public
	void UpdateData(string data); // Реализация: NotifyObserver(data);
};


int main(){
	ConcreteObservable observable;
	ConcreteObserver observer1;
	
	observable.AddObseerver(&observer1);

	observable.MakeSomeChange();
	

	return 0;	
}
```
