#include <iostream>

class  Abstraction {
  private:
    // Counter of class objects
    static int counter;
    int number;
    char character;
    // Private method - Used to perform inner logic
    void ProcessAttributes(void);
  public:
    Abstraction() {
        counter++;
    }
    void SetMyValues(int n, char c);
    void GetMyValues(void);
    int GetCounter(void);
};

// It is required to specify the initial value in 
// the global scope of the program
// If you use declaration and initialization in class body 
// it viewed as declaration of const static member;

int Abstraction::counter = 0;

void Abstraction::ProcessAttributes() {
    Abstraction::number *= 6;
    Abstraction::character++;
}

void Abstraction::SetMyValues(int n, char c) {
    Abstraction::number = n; Abstraction::character = c;
}

void Abstraction::GetMyValues() {
    Abstraction::ProcessAttributes();
    std::cout << "Numbers is: " << Abstraction::number << "\n";
    std::cout << "Character is: " << Abstraction::character << "\n";
}

int Abstraction::GetCounter() {
    return Abstraction::counter;
}

int main() {
    Abstraction abstract;
    abstract.SetMyValues(100, 'X');
    abstract.GetMyValues();
    std::cout << "Counter is: " << abstract.GetCounter() << "\n";
    Abstraction abstract2;
    abstract2.SetMyValues(10, 'A');
    abstract2.GetMyValues();
    std::cout << "Counter is: " << abstract2.GetCounter() << "\n";
}