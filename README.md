# Design Pattern - Abstract Factory Pattern

## Description

![abstract factory](https://github.com/jiji-thecat/dp-abstract-factory/assets/104809324/6d57cbeb-71fc-49a2-972d-3b728f1ed3b9)

The Abstract Factory pattern is a design pattern that provides a way to create families of related or dependent objects without specifying their concrete classes. This ensures that a set of objects requiring consistency are correctly generated.

### Class Diagram

![class diagram](https://github.com/jiji-thecat/dp-abstract-factory/assets/104809324/164c9271-07b7-4771-ad05-480458d45b24)
[wiki](https://ja.wikipedia.org/wiki/Abstract_Factory_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

The client class will use the `ConcreteFactory` class, which inherits from the `AbstractFactory` class.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![abstract factory](https://github.com/jiji-thecat/dp-abstract-factory/assets/104809324/6d57cbeb-71fc-49a2-972d-3b728f1ed3b9)

This app generates various kinds of salads. Currently, only two salads are supported. Each salad has its own class (`ConcreteFactory` class) that inherits from the `Factory` class (`AbstractFactory` class).

## Difference between Factory Method Pattern and Abstract Factory Pattern

The Factory Method pattern enables a subclass to generate instances flexibly, thus enhancing the reusability of the class. On the other hand, the Abstract Factory pattern generates a class whose sole purpose is to create instances, ensuring that instances are always generated correctly.

Additionally, the Factory Method pattern has a class-level relationship, while the Abstract Factory pattern has an object-level relationship.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

**THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.**
