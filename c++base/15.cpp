#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "I can eat!" << endl; // 显示一条消息，表示动物可以吃东西
    }
};

class Musician
{
public:
    void playMusic()
    {
        cout << "I can play music!" << endl;
    }
};

/**
 * @brief 派生类：会演奏的动物
 * 这是Animal类与Musician类的多继承派生类，表示一个既能吃东西又能演奏音乐的生物。
 */
class MusicalAnimal : public Animal, public Musician
{
public:
    /**
     * @brief 展示才艺
     * 先吃东西，再演奏音乐，展示该生物的双重能力。
     */
    void showcaseTalent()
    {
        eat();
        playMusic();
    }
};

int main()
{
    MusicalAnimal musicalAnimal;    // 创建一个MusicalAnimal对象
    musicalAnimal.eat();            // 调用Animal基类的方法
    musicalAnimal.playMusic();      // 调用Musician基类的方法
    musicalAnimal.showcaseTalent(); // 调用MusicalAnimal派生类的方法
    return 0;
}