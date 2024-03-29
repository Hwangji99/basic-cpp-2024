// date : 2024-03-08
// file : test07_Homework.cpp
// desc :

/*
	* Parent class
	  class Product : id, price, producer
	* Child class
	  class Book : ISBN, author, title			// 978-89-001-0001-1
	  class Handphone : model, RAM
	  class Computer : model, cpu, RAM
	* 객체포인터 배열 사용: product[100]
	* string 클래스 사용 가능
*/


/*
	* 메인화면
	-----상품관리 프로그램------
	1 상품추가 2 상품출력 3 상품검색 0 종료
	>

	1 또는 2 또는 3을 선택한 경우
	1 책 2 핸드폰 3 컴퓨터
	선택 목록을 띄워 해당 상품을 선택한 후에 추가, 출력 또는 검색이 실행된다
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 제품의 기본 클래스 정의
class Product {
protected:
    int id;
    double price;
    string producer;
public:
    // 생성자
    Product(int _id, double _price, string _producer) : id(_id), price(_price), producer(_producer) {}

    // 가상 함수를 통해 다형성을 지원하여 파생 클래스에서 재정의 가능한 출력 함수
    virtual void printInfo() const {
        cout << "ID: " << id << ", Price: " << price << ", Producer: " << producer << endl;
    }

    // ID 반환 함수
    int getID() const {
        return id;
    }

    // 가상 소멸자
    virtual ~Product() {} // 가상 소멸자 추가
};

// 책 클래스 정의 - 제품 클래스를 상속받음
class Book : public Product {
private:
    string ISBN;
    string author;
    string title;
public:
    // 생성자
    Book(int _id, double _price, string _producer, string _ISBN, string _author, string _title)
        : Product(_id, _price, _producer), ISBN(_ISBN), author(_author), title(_title) {}


    // 재정의된 출력 함수
    void printInfo() const override {
        Product::printInfo();
        cout << "ISBN: " << ISBN << ", Author: " << author << ", Title: " << title << endl;
    }
};

// 핸드폰 클래스 정의 - 제품 클래스를 상속받음
class Handphone : public Product {
private:
    string model;
    int ram;
public:
    // 생성자
    Handphone(int _id, double _price, string _producer, string _model, int _ram)
        : Product(_id, _price, _producer), model(_model), ram(_ram) {}

    // 재정의된 출력 함수
    void printInfo() const override {
        Product::printInfo();
        cout << "Model: " << model << ", RAM: " << ram << "GB" << endl;
    }
};

// 컴퓨터 클래스 정의 - 제품 클래스를 상속받음
class Computer : public Product {
private:
    string model;
    string cpu;
    int ram;
public:

    // 생성자
    Computer(int _id, double _price, string _producer, string _model, string _cpu, int _ram)
        : Product(_id, _price, _producer), model(_model), cpu(_cpu), ram(_ram) {}

    // 재정의된 출력 함수
    void printInfo() const override {
        Product::printInfo();
        cout << "Model: " << model << ", CPU: " << cpu << "GB" << ", RAM: " << ram << "GB" << endl;
    }
};

// 함수 선언
void addProduct(vector<Product*>& products);
void printProducts(const vector<Product*>& products);
void searchProduct(const vector<Product*>& products);

// 메인 함수
int main() {
    vector<Product*> products;  // 제품들을 보관하는 벡터

    int choice;
    while (true) {
        cout << "상품관리 프로그램" << endl;
        cout << "1. 상품추가 2. 상품출력 3. 상품검색 0. 종료" << endl;
        cout << "선택: ";
        cin >> choice;

        switch (choice) {
        case 0:
            // 동적 할당한 객체들 삭제
            for (auto& product : products) {
                delete product;
            }
            return 0;
        case 1:
            addProduct(products);       // 상품 추가 함수 호출
            break;
        case 2:
            printProducts(products);    // 상품 출력 함수 호출
            break;
        case 3:
            searchProduct(products);    // 상품 검색 함수 호출
            break;
        default:
            cout << "잘못된 선택입니다. 다시 선택해주세요." << endl;
            break;
        }
    }

    return 0;
}

// 상품 추가 함수 정의
void addProduct(vector<Product*>& products) {
    int productType;
    cout << "1. 책 2. 핸드폰 3. 컴퓨터" << endl;
    cout << "상품 종류 선택: ";
    cin >> productType;

    int id;
    double price;
    string producer;
    cout << "ID: ";
    cin >> id;
    cout << "Price: ";
    cin >> price;
    cout << "Producer: ";
    cin >> producer;

    if (productType == 1) {
        string ISBN, author, title;
        cout << "ISBN: ";
        cin >> ISBN;
        cout << "Author: ";
        cin >> author;
        cout << "Title: ";
        cin >> title;
        products.push_back(new Book(id, price, producer, ISBN, author, title)); // 책 객체 추가
    }
    else if (productType == 2) {
        string model;
        int ram;
        cout << "Model: ";
        cin >> model;
        cout << "RAM: ";
        cin >> ram;
        products.push_back(new Handphone(id, price, producer, model, ram));
    }
    else if (productType == 3) {
        string model, cpu;
        int ram;
        cout << "Model: ";
        cin >> model;
        cout << "CPU: ";
        cin >> cpu;
        cout << "RAM: ";
        cin >> ram;
        products.push_back(new Computer(id, price, producer, model, cpu, ram));
    }
}

void printProducts(const vector<Product*>& products) {
    cout << "상품 출력" << endl;
    for (const auto& product : products) {
        product->printInfo();
    }
}

void searchProduct(const vector<Product*>& products) {
    cout << "상품 검색" << endl;
    int searchId;
    cout << "검색할 상품의 ID를 입력하세요: ";
    cin >> searchId;


    bool found = false;
    for (const auto& product : products) {
        if (product->getID() == searchId) {
            product->printInfo();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "해당 ID의 상품을 찾을 수 없습니다." << endl;
    }
}
