# 🎨 Design Patterns in C++
> A collection of implemented design patterns with examples in C++

## 📖 Contents
- [Creational Patterns](#-creational-patterns)
- [Structural Patterns](#-structural-patterns)
- [Behavioral Patterns](#-behavioral-patterns)

## 🏗️ Creational Patterns

### ✅ Simple Factory
> In object-oriented programming (OOP), a factory is an object for creating other objects – formally a factory is a function or method that returns objects of a varying prototype or class from some method call, which is assumed to be "new".

💡 **When to use**:
- When creating an object involves more than just simple assignments
- When you want to centralize object creation logic in one place

### ✅ Factory Method
> In class-based programming, the factory method pattern is a creational pattern that uses factory methods to deal with the problem of creating objects without having to specify the exact class of the object that will be created.

💡 **When to use**:
- When there is some generic processing in a class but the required sub-class is dynamically decided at runtime
- When the client doesn't know what exact sub-class it might need

### ✅ Abstract Factory
> The abstract factory pattern provides a way to encapsulate a group of individual factories that have a common theme without specifying their concrete classes.

💡 **When to use**:
- When there are interrelated dependencies with complex creation logic
- When you need to ensure that created products are compatible with each other

### ✅ Builder
> The builder pattern is an object creation software design pattern with the intentions of finding a solution to the telescoping constructor anti-pattern.

💡 **When to use**:
- When you need to create complex objects step by step
- When you want to avoid telescoping constructors
- When you need different ways to create an object

### ✅ Prototype
> The prototype pattern is a creational design pattern in software development. It is used when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects.

💡 **When to use**:
- When you need to create objects similar to existing ones
- When direct object creation is costly compared to cloning

### ✅ Singleton
> In software engineering, the singleton pattern is a software design pattern that restricts the instantiation of a class to one object.

💡 **When to use**:
- When exactly one instance of a class is needed globally
- ⚠️ Use with caution as it's considered an anti-pattern

## 🔧 Structural Patterns

### ✅ Adapter
> Adapter pattern lets you wrap an otherwise incompatible object in an adapter to make it compatible with another class.

💡 **When to use**:
- When you want to use an existing class with an incompatible interface
- When you need to integrate new and legacy code

### ✅ Bridge
> Bridge pattern is about preferring composition over inheritance. Implementation details are pushed from a hierarchy to another object with a separate hierarchy.

💡 **When to use**:
- When you want to separate an abstraction from its implementation
- When you need to extend a class in several independent dimensions

### ⏳ Composite
> Composite pattern lets clients treat the individual objects in a uniform manner.

💡 **When to use**:
- When you want to represent part-whole hierarchies of objects
- When clients need to treat all objects in the composite structure uniformly

### ⏳ Decorator
> Decorator pattern lets you dynamically change the behavior of an object at run time by wrapping them in an object of a decorator class.

💡 **When to use**:
- When you need to add responsibilities to objects dynamically
- When extension by subclassing is impractical

### ⏳ Facade
> Facade pattern provides a simplified interface to a complex subsystem.

💡 **When to use**:
- When you need a simplified interface to a complex system
- When you want to layer your subsystems

### ⏳ Flyweight
> It is used to minimize memory usage or computational expenses by sharing as much as possible with similar objects.

💡 **When to use**:
- When you need to support a large number of similar objects efficiently
- When memory usage becomes a critical issue

### ⏳ Proxy
> Using the proxy pattern, a class represents the functionality of another class.

💡 **When to use**:
- When you need to control access to an object
- When you need lazy initialization
- When you need to implement logging or access control

## 🔄 Behavioral Patterns

### ⏳ Chain of Responsibility
> It helps building a chain of objects. Request enters from one end and keeps going from object to object till it finds the suitable handler.

💡 **When to use**:
- When you want to decouple a request's sender and receiver
- When multiple objects may handle a request
- When you want to issue a request to one of several objects without specifying the receiver explicitly

### ⏳ Command
> Allows you to encapsulate actions in objects. The key idea behind this pattern is to provide the means to decouple client from receiver.

💡 **When to use**:
- When you need to parameterize objects with operations
- When you need to queue operations, schedule their execution, or execute them remotely
- When you need to implement reversible operations

### ⏳ Iterator
> It presents a way to access the elements of an object without exposing the underlying presentation.

💡 **When to use**:
- When you want to access a collection's contents without exposing its internal representation
- When you want to support multiple traversals of a collection
- When you want to provide a uniform interface for traversing different collections

### ⏳ Mediator
> Mediator pattern adds a third party object (called mediator) to control the interaction between two objects (called colleagues).

💡 **When to use**:
- When you want to reduce coupling between classes that communicate with each other
- When you have a set of objects that must communicate in well-defined but complex ways

### ⏳ Memento
> Memento pattern is about capturing and storing the current state of an object in a manner that it can be restored later on.

💡 **When to use**:
- When you need to create snapshots of an object's state
- When you need to implement undo/redo operations
- When direct interface to obtaining the state would expose implementation details

### ⏳ Observer
> Defines a dependency between objects so that whenever an object changes its state, all its dependents are notified.

💡 **When to use**:
- When changes to one object require changing others, and you don't know how many objects need to be changed
- When an object should be able to notify other objects without making assumptions about who these objects are

### ⏳ State
> It lets you change the behavior of a class when the state changes.

💡 **When to use**:
- When an object's behavior depends on its state and it must change its behavior at runtime
- When operations have large, multipart conditional statements that depend on the object's state

### ⏳ Strategy
> Strategy pattern allows you to switch the algorithm or strategy based upon the situation.

💡 **When to use**:
- When you want to define a family of algorithms
- When you need to vary an algorithm according to context
- When you have a lot of similar classes that only differ in their behavior

### ⏳ Template Method
> Template method defines the skeleton of how a certain algorithm could be performed, but defers the implementation of those steps to the children classes.

💡 **When to use**:
- When you want to let clients extend only particular steps of an algorithm
- When you have several classes that contain almost identical algorithms with some minor differences

### ⏳ Visitor
> Visitor pattern lets you add further operations to objects without having to modify them.

💡 **When to use**:
- When you need to perform operations across a disparate collection of objects
- When you want to add new operations to existing object structures without modifying them

## 📝 Legend
- ✅ Implemented
- ⏳ Pending Implementation
- 💡 Usage Guide
- ⚠️ Warning/Note

---
<p align="center">
Made with ❤️ for better software architecture
</p>