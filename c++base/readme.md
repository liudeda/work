## 一、类的学习

### 1. **类的定义**

```c++
class ClassName {
public:
    // 公有成员
protected:
    // 受保护成员
private:
    // 私有成员
};
```

- `class` 关键字用于声明一个新的类。
- `ClassName` 是你要定义的类的名称，应遵循C++的标识符命名规则。
- 类的内部分为三个访问权限部分：`public`、`protected` 和 `private`。这些关键字决定了类外部或派生类对类成员的访问级别。

### 2. **成员（数据成员和成员函数）**

- **数据成员**：类中定义的变量，代表对象的状态。

```c++
class Person {
public:
    string name; // 公有数据成员
private:
    int age; // 私有数据成员
};
```

- **成员函数**：定义在类内部的函数，用于操作或查询对象的状态。

```c++
class Person {
public:
    void setName(string newName) { name = newName; } // 设置姓名的方法
    string getName() const { return name; } // 获取姓名的方法
private:
    string name;
};
```

### 3. **访问修饰符**

- **public**：公有成员可以在任何地方被访问，包括类外部和派生类。
- **protected**：受保护成员仅能在类的内部及其派生类中访问。
- **private**：私有成员只能在类的内部访问，派生类和类外部均无法直接访问。

### 4. **实例化对象**

**实例化**是指根据类的定义创建一个具体的对象的过程。在C++中，实例化对象通常通过以下方式完成：

```c++
Person p1;
```

这里：

- `Person` 是要实例化的类的名称。
- `p1` 是创建的新对象的名称，即对象的实例。它是该类类型的变量，可以在程序中像操作其他变量一样使用。

### 5. **使用对象**

实例化对象后，可以通过`.`运算符访问其公有成员（数据成员和成员函数）：

```c++
p1.setName("zhangsan");
p1.print();
```

在这段代码中：

- `setName("zhangsan")` 调用了对象 `p1` 的 `setName` 成员函数，传入字符串 `"zhangsan"` 作为参数，设置对象的 `name` 数据成员。
- `print()` 调用了对象 `p1` 的 `print` 成员函数，输出对象的 `name`。

## 继承

继承是面向对象编程中的一个核心概念，它使得代码复用和设计模式实现变得更加简单和高效。在本教程中，我们将深入探讨继承的定义、作用、基类与派生类的概念、继承的语法，以及访问控制和继承类型。让我们开始吧！

### 1. 继承的定义和作用

继承是一种允许我们创建一个类（派生类）来继承另一个类（基类）属性和方法的机制。这意味着可以在不修改原有类的情况下，扩展其功能。继承的主要好处包括：

- **代码复用**：通过继承，可以复用基类中的代码，减少重复代码编写。
- **设计灵活性**：继承使得修改和扩展功能变得更加容易，有助于构建灵活的系统架构。

### 2. 基类与派生类

- **基类**：也称为父类，是其他类继承的类。
- **派生类**：也称为子类，继承自基类的类。

派生类继承基类的公有和保护成员，但私有成员不可直接访问。派生类可以添加新的属性和方法，也可以重写（override）基类的方法。

### 3. 继承的语法

在C++中，继承的语法如下：

```cpp
class BaseClass {
    // 基类的成员
};

class DerivedClass : public BaseClass {
    // 派生类的成员
};
```

这里，`DerivedClass`继承了`BaseClass`。关键字`public`指定了继承类型，我们稍后会讲解。

#### 示例

```cpp
#include <iostream>
using namespace std;

// 基类
class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

// 派生类
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!" << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); // 调用基类的方法
    myDog.bark(); // 调用派生类的方法
    return 0;
}
```

### 4. 访问控制和继承类型

继承类型决定了基类成员在派生类中的访问权限。C++支持三种继承类型：

- **公有继承（Public）**：基类的公有成员和保护成员在派生类中保持其访问级别。
- **保护继承（Protected）**：基类的公有成员和保护成员在派生类中都成为保护成员。
- **私有继承（Private）**：基类的公有成员和保护成员在派生类中都成为私有成员。

#### 示例

```cpp
class Base {
public:
    int publicMember;
protected:
    int protectedMember;
private:
    int privateMember;
};

class DerivedPublic : public Base {
    // publicMember 是公有的
    // protectedMember 是保护的
    // privateMember 不可访问
};

class DerivedProtected : protected Base {
    // publicMember 是保护的
    // protectedMember 是保护的
    // privateMember 不可访问
};

class DerivedPrivate : private Base {
    // publicMember 是私有的
    // protectedMember 是私有的
    // privateMember 不可访问
};
```

通过这个教程，你应该对C++中的继承有了一个全面的了解，包括它的定义、作用、基类与派生类的概念、语法，以及不同类型的继承和它们的访问控制。继承是面向对象编程的一个强大工具，它促进了代码的复用和灵活的设计。希望你能在你的项目中有效地利用继承来构建高效和易于维护的代码。



## 多继承

### 简介

多重继承是面向对象编程语言中的一个特性，它允许一个类同时从多个基类继承属性和行为。C++ 支持多重继承，这意味着一个派生类可以有多个直接基类。

### 基本概念

在 C++ 中，类可以从多个类中继承成员变量和成员函数。这样的继承称为多重继承。例如，如果有两个基类 `Base1` 和 `Base2`，则可以创建一个同时继承这两个类的派生类 `Derived`。

多重继承可能导致一些复杂的设计问题，如菱形问题（钻石继承问题），其中两个基类继承自同一个类，然后又有一个类从这两个基类继承，形成一个菱形结构。这可能导致派生类继承了来自同一基类的多个副本。

### 语法

以下是使用多重继承的基本语法：

```cpp
cppclass Base1 {
public:
    void functionBase1() {
        //...
    }
};

class Base2 {
public:
    void functionBase2() {
        //...
    }
};

class Derived : public Base1, public Base2 {
public:
    void functionDerived() {
        functionBase1();
        functionBase2();
    }
};
```

在这个例子中，`Derived` 类从 `Base1` 和 `Base2` 类继承。`Derived` 类的对象可以调用这两个基类中定义的任何公共成员。

### 菱形继承问题

菱形继承是多重继承中的一个典型问题。考虑下面的类结构：

```cpp
cppclass Base {
public:
    int baseData;
};

class Derived1 : public Base {
    //...
};

class Derived2 : public Base {
    //...
};

class DerivedDerived : public Derived1, public Derived2 {
    //...
};
```

在这种情况下，`DerivedDerived` 会从 `Base` 类中继承两个 `baseData` 成员的副本，一个来自 `Derived1`，另一个来自 `Derived2`。这会导致歧义，因为编译器不知道应该使用哪个副本。

#### 解决方案：虚拟继承

为了解决菱形继承问题，C++ 提供了虚拟继承。通过使用虚拟基类，可以确保在继承层次结构中只有一个基类的实例。语法如下：

```cpp
cppclass Base {
public:
    int baseData;
};

class Derived1 : virtual public Base {
    //...
};

class Derived2 : virtual public Base {
    //...
};

class DerivedDerived : public Derived1, public Derived2 {
    //...
};
```

使用虚拟继承后，`DerivedDerived` 类将只有一个 `baseData` 成员的副本。

### 注意事项

- 多重继承应谨慎使用，因为它会增加复杂性，并可能导致代码不易理解和维护。
- 在使用多重继承之前，应考虑其他设计方案，如组合或接口（纯虚基类）。
- 当使用虚拟继承时，需要特别注意构造函数和析构函数的调用顺序。



## **多态、抽象类、虚函数**



### 抽象类的作用

抽象类是一种特殊的类，其主要目的是为其他类提供一个基本的框架或模板。它定义了一组接口，这些接口必须由任何继承该抽象类的子类来实现。抽象类通常用来表示一个概念上的类别，它自身并不对应于具体的实例。例如，如果我们有一个“图形”这样的概念，它可以是圆形、矩形或三角形等，那么我们可以定义一个名为“图形”的抽象类，而具体的图形类型则可以通过继承这个抽象类来实现。

抽象类的主要作用有：
- 提供一个通用的接口，强制继承它的子类实现特定的方法。
- 促进代码的复用，因为抽象类可以包含一些子类共有的方法实现。
- 有助于实现多态性，允许在运行时通过指向抽象类的指针或引用来操作不同的子类对象。

### 如何使用纯虚函数来定义接口

在C++中，纯虚函数是一种特殊的虚函数，它在抽象类中声明但不提供实现。纯虚函数的声明以`= 0`结尾，表示该函数必须在任何继承该抽象类的子类中被重写。

#### 定义纯虚函数

```cpp
class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0; // 纯虚函数
};
```

#### 使用纯虚函数

1. **定义一个抽象类**：首先，定义一个包含至少一个纯虚函数的类。这个类就成为了一个抽象类。

2. **继承抽象类**：创建一个新的类，从抽象类继承。

3. **实现纯虚函数**：在派生类中，必须为基类中的每个纯虚函数提供实现。如果不这样做，派生类也将成为抽象类，无法实例化。

```cpp
class DerivedClass : public AbstractClass {
public:
    void pureVirtualFunction() override {
        // 实现纯虚函数
        std::cout << "实现了抽象类的纯虚函数。" << std::endl;
    }
};
```

4. **使用多态**：你可以通过抽象类的指针或引用来调用实现了的纯虚函数，实现多态。

```cpp
AbstractClass* obj = new DerivedClass();
obj->pureVirtualFunction(); // 调用DerivedClass中的实现
delete obj;
```

### 总结

抽象类和纯虚函数是C++中实现抽象化和多态性的重要工具。通过定义抽象类和纯虚函数，程序员可以创建一个清晰的接口，强制继承该接口的类实现特定的行为，同时也促进了代码的复用和灵活性。

**大德：** 给个好理解的，完整的例子

**c++：** 当然可以。让我们通过一个简单的例子来深入理解抽象类和纯虚函数的概念。我们将创建一个名为`Shape`的抽象类，它将作为所有几何形状的基类。这个抽象类将定义一个纯虚函数`draw()`，要求所有派生的几何形状类实现这个方法来绘制自己。

#### 步骤 1: 定义抽象类和纯虚函数

首先，我们定义`Shape`抽象类和一个纯虚函数`draw()`。

```cpp
#include <iostream>

// 抽象类
class Shape {
public:
    // 纯虚函数
    virtual void draw() const = 0;
};
```

#### 步骤 2: 创建派生类

接下来，我们定义两个从`Shape`派生的类：`Circle`和`Rectangle`。每个类都必须实现`draw()`方法。

```cpp
// Circle类
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Inside Circle::draw()" << std::endl;
    }
};

// Rectangle类
class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Inside Rectangle::draw()" << std::endl;
    }
};
```

#### 步骤 3: 使用多态性

最后，我们通过`Shape`类的指针来调用各个形状的`draw()`方法，展示多态性的工作原理。

```cpp
int main() {
    // 创建Shape指针数组
    Shape* shapes[2];

    // 分配Circle和Rectangle对象
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();

    // 通过Shape指针调用draw()，展示多态性
    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
    }

    // 释放资源
    delete shapes[0];
    delete shapes[1];

    return 0;
}
```

#### 输出结果

运行上述程序，将产生以下输出：

```
Inside Circle::draw()
Inside Rectangle::draw()
```

#### 总结

通过这个例子，我们展示了如何使用抽象类和纯虚函数来定义一个通用接口，以及如何通过继承该接口来实现特定类的行为。这种方式不仅有助于代码的复用，还能通过多态性来提高程序的灵活性。

**大德：** 完整的例子，我要运行，别分步

**c++：** 当然，这里有一个完整的例子，包括了之前讨论的所有组件：抽象类`Shape`，两个派生类`Circle`和`Rectangle`，以及一个使用这些类来展示多态性的`main`函数。您可以直接复制这段代码到您的C++编译器中运行。

```cpp
#include <iostream>
using namespace std;

// 抽象类
class Shape {
public:
    // 纯虚函数
    virtual void draw() const = 0;
};

// Circle类
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Inside Circle::draw()" << endl;
    }
};

// Rectangle类
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Inside Rectangle::draw()" << endl;
    }
};

int main() {
    // 创建Shape指针数组
    Shape* shapes[2];

    // 分配Circle和Rectangle对象
    shapes[0] = new Circle();
    shapes[1] = new Rectangle();

    // 通过Shape指针调用draw()，展示多态性
    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
    }

    // 释放资源
    delete shapes[0];
    delete shapes[1];

    return 0;
}
```

这段代码定义了一个抽象类`Shape`和两个从`Shape`继承的具体类`Circle`和`Rectangle`。每个具体类都提供了`draw()`方法的实现。在`main`函数中，我们创建了一个`Shape`指针数组，并分别分配了`Circle`和`Rectangle`对象。然后，我们遍历这个数组，通过`Shape`类的指针调用`draw()`方法。由于`draw()`是一个纯虚函数，这里展示了多态性的工作原理：即在运行时确定应该调用哪个类的`draw()`方法。

运行此代码，您将看到输出：

```
Inside Circle::draw()
Inside Rectangle::draw()
```

这证明了我们成功地通过抽象类和纯虚函数实现了多态性。

## 基于范围的for循环

### 1. 什么是基于范围的for循环？

基于范围的for循环是一种特殊的for循环，它允许你直接遍历一个序列中的每个元素，而不是通过索引或迭代器。这样，代码不仅更加简洁，而且也减少了出错的机会。

### 2. 基本语法

基于范围的for循环的基本语法如下：

```cpp
for (declaration : range) {
    // 循环体
}
```

其中，`declaration`是用于接收序列中每个元素的变量声明，`range`是要遍历的序列。

### 3. 示例

让我们通过一些例子来详细了解。

#### 示例1：遍历数组

```cpp
#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};

    for (int number : numbers) {
        std::cout << number << " ";
    }

    return 0;
}
```

输出：

```
1 2 3 4 5
```

#### 示例2：遍历vector

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    for (int v : vec) {
        std::cout << v << " ";
    }

    return 0;
}
```

输出：

```
10 20 30 40 50
```

### 4. 使用auto关键字

在基于范围的for循环中，你还可以使用`auto`关键字来自动推导元素的类型，这样可以使代码更加简洁。

```cpp
for (auto v : vec) {
    std::cout << v << " ";
}
```

### 5. 修改元素值

如果你想在遍历过程中修改元素的值，你需要在元素的类型前加上`&`，以传递引用。

```cpp
for (auto &v : vec) {
    v *= 2; // 将每个元素的值翻倍
}
```



## 模板QList

### **QList的定义**:

`QList` 是Qt库中一个非常重要的模板类，用于实现动态数组的功能。它是对标准C++容器类（如`std::vector`）的一种补充和优化，特别是在某些特定应用场景下具有更高的效率和更好的性能表现。以下是`QList`的详细定义和特性说明：

```
template <typename T>
class QList : public QListData<T>, public QListIterator<T>
```

#### **模板参数**: 

`T` 是模板参数，表示`QList`将存储的元素类型。它可以是任何符合Qt元对象系统的类型（如QObject派生类），也可以是内置类型、自定义类型或其他兼容类型。`QList`通过模板化设计，使得用户可以根据需要存储不同类型的对象。

#### **继承关系**: `QList`继承自两个内部类：

- `QListData<T>`：负责底层数据结构的管理，如存储元素的实际内存分配、释放、大小调整等。`QListData`实现了类似于链表和数组混合的数据结构，使得在两端（头部和尾部）添加或删除元素时有较高的效率。
- `QListIterator<T>`：提供对`QList`中元素的迭代访问能力。`QListIterator`实现了`QList`的迭代器接口，使得用户可以使用迭代器或者C++11引入的范围-based for循环遍历列表中的元素。

#### **类成员（部分）**:

`QList`提供了丰富的成员函数来支持对列表的各种操作。以下是一些关键的成员：

- **构造函数**：
  - 默认构造函数：创建一个空列表。
  - 构造函数接受另一个容器（如`QList`、`QVector`、`std::vector`等）作为参数，复制其内容创建新列表。
  - 构造函数接受两个迭代器，复制两者之间的元素范围创建新列表。
- **容量管理**：
  - `size()`：返回列表中元素的数量。
  - `isEmpty()`：检查列表是否为空。
  - `reserve(size_t size)`：预分配足够存储指定数量元素的内存空间，以减少后续添加元素时的内存重新分配次数。
  - `squeeze()`：释放多余内存，使实际内存占用与当前元素数量相匹配。
- **元素访问**：
  - `operator[] (int i)`：通过索引访问元素，提供随机访问能力。
  - `at(int i)`：与`operator[]`类似，但会进行范围检查，超出范围时抛出异常。
  - `first()`和`last()`：返回列表的第一个和最后一个元素。
- **元素添加与删除**：
  - `append(const T &value)`、`prepend(const T &value)`：在列表尾部或头部添加元素。
  - `insert(int i, const T &value)`：在指定位置插入元素。
  - `removeAll(const T &value)`、`removeOne(const T &value)`：移除所有或第一个匹配的元素。
  - `takeAt(int i)`、`takeFirst()`、`takeLast()`：移除并返回指定位置或头部/尾部的元素。
  - `clear()`：移除列表中的所有元素。
- **查找操作**：
  - `indexOf(const T &value, int from = 0) const`：返回值首次出现的位置，从指定索引开始搜索，默认从头开始。
  - `lastIndexOf(const T &value, int from = -1) const`：返回值最后一次出现的位置，从指定索引开始反向搜索，默认从尾部开始。
  - `contains(const T &value) const`：检查列表是否包含指定值。
- **其他操作**：
  - `sort()`、`reverse()`：对列表进行排序或反转顺序。
  - `begin()`、`end()`、`constBegin()`、`constEnd()`：返回指向列表首尾元素的迭代器，用于遍历列表。
  - `erase(iterator begin, iterator end)`：移除指定范围内（由两个迭代器指定）的元素。

**内存管理**: `QList`负责其内部存储的元素的内存管理。当列表对象析构时，会自动释放所有元素的内存。对于Qt元对象系统支持的类型，`QList`会自动处理对象的生命期管理，包括增加和减少对象引用计数。对于非Qt元对象系统支持的类型，用户需要确保元素类型正确管理其资源，或者使用智能指针等机制确保资源释放。

**注意事项**: 尽管`QList`提供了类似数组的索引访问，但其底层实现并非连续内存，而是采用了链表和数组混合的数据结构。因此，虽然大部分情况下访问性能接近于数组，但在某些情况下（如大规模随机插入或删除元素后频繁访问中间元素），可能不如连续内存的`QVector`高效。选择使用`QList`还是`QVector`应根据实际应用的需求和数据操作模式来决定。

综上所述，`QList`是一个泛型、动态、高效且功能丰富的容器类，适合存储大量相同类型的数据，并提供了丰富的API来支持对列表的各种操作。它结合了链表和数组的优点，特别适合在两端进行频繁插入和删除的场景。同时，作为Qt的一部分，`QList`与Qt生态系统中的其他类和函数高度集成，提供了良好的互操作性和兼容性。

```c++
#include <QList>
#include <iostream>

int main()
{
    // **创建空列表**
    QList<int> numbers;

    // **添加元素**
    numbers << 1 << 2 << 3 << 4 << 5;

    // **打印原始列表**
    std::cout << "Original list: ";
    for (int number : numbers)
        std::cout << number << " ";
    std::cout << std::endl;

    // **查找元素**
    int index = numbers.indexOf(3); // 查找数字3的位置
    if (index != -1)
        std::cout << "Found 3 at index: " << index << std::endl;
    else
        std::cout << "Number 3 not found." << std::endl;

    // **删除元素**
    bool removed = numbers.removeOne(4); // 删除第一个出现的数字4
    if (removed)
        std::cout << "Removed 4 from the list." << std::endl;
    else
        std::cout << "Number 4 not found to remove." << std::endl;

    // **再次打印列表**
    std::cout << "Updated list: ";
    for (int number : numbers)
        std::cout << number << " ";
    std::cout << std::endl;

    return 0;
}
```

