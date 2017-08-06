class Vector {
private:
	int* _element;
	int _size;
	int _capacity;
public:
	//typedef T* item;
	const INCREASE = 5;
	Vector(int size);
	~Vector();

	bool empty();
	int size() const;
	int capacity() const;
	//void push(T* item)
	void push(int item);
	int pop();
};