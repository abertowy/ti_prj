// Task#1
struct GeneralException {
  virtual void print() { std::cout << "G"; }
};

struct SpecialException : public GeneralException {
  void print() override { std::cout << "S"; }
};

void f() { throw SpecialException(); }

int main() {
  try {
    f();
  }
  catch (GeneralException e) {
    e.print();
  }
}

// Task#1
// What will be the output of this program?
class A {
public:
  A() { std::cout << "1"; }
  virtual ~A() { std::cout << "2"; }
}

class B : public A {
public:
  B() { std::cout << "3"; }
  virtual ~B() { std::cout << "4"; }
};

int main() {
  B b; 
}

// Task#2
// What is the difference between lines A and B?
void foo(std::vector<int>& vec) {
  vec[0];      // A
  vec.at(0);   // B
}

// Task#3
// What will be the output of this program?
int main() {
  std::vector<int> vec;
  vec.reserve(2);
  vec[0] = 1;  
  vec[1] = 2;
  for(int i = 0; i < vec.size(); ++i) {
    std::cout << vec.at(i);
  }
} 

// Task#4
// Given a string s consisting of words and spaces, return the length of the last word in the string.
// Implement lastWordLength function
std::string s = "This is a string"
int lastWordLength(string s) {

}