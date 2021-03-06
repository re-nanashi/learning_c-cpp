#include <iostream>

using namespace std;

enum BREED
{
    GOLDEN,
    CAIRN,
    DANDIE,
    SHETLAND,
    DOBERMAN,
    LAB
};

class Mammal
{
public:
    Mammal() : its_age_(2), its_weight_(5) {}
    ~Mammal() {}

    int GetAge() const { return its_age_; }
    void SetAge(int age) { its_age_ = age; }
    int GetWeight() const { return its_weight_; }
    void SetWeight(int weight) { its_weight_ = weight; }

    void Speak() const { cout << "Mammal sound!\n"; }
    void Sleep() const { cout << "shhh. I'm sleeping.\n"; }

protected:
    int its_age_;
    int its_weight_;
};

class Dog : public Mammal
{
public:
    Dog() : its_breed_(GOLDEN) {}
    ~Dog() {}

    BREED GetBreed() const { return its_breed_; }
    void SetBreed(BREED breed) { its_breed_ = breed; }

    void WagTail() const { cout << "Tail wagging...\n"; }
    void BegForFood() const { cout << "Begging for food... \n"; }

private:
    BREED its_breed_;
};

int main()
{
    Dog Momo;
    Momo.Speak();
    Momo.WagTail();

    cout << "Momo is " << Momo.GetAge() << " years old" << endl;

    return 0;
}