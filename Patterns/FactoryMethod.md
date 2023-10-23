# Фабричный метод 

```mermaid
classDiagram
direction LR

ConcreteProduct <.. ConcreteCreator : Creates
Product <|-- ConcreteProduct
 ConcreteCreator --|> Creator

  class Creator {
    +FactoryMethod()
  }

  class ConcreteCreator{
    +FactoryMethod()
  }
class ConcreteProduct{

  }
  class Product{
  }
```
