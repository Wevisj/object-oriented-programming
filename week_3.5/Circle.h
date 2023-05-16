class Circle { // 클래스의 선언부
private:
	int radius; // 멤버 변수
public:
	double getArea(); // 멤버 함수, 다른 객체를 위함
	Circle(); // 생성자 함수
	Circle(int r); // 생성자 함수
	~Circle();
};
