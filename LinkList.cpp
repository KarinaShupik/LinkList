
#include <iostream>
using namespace std;

struct link{//один елемент списку
	int data;//деякі дані
	link* next;//вказівник на наступну структуру
};

class linkList {//список
private:
	link* first;
public:
	linkList() {//конструктор без параметрів
		first = NULL;//першого елементу поки нема
	}
	void addItem(int d);//додавання елементу
	void display();//показ даних
};

void linkList::addItem(int d) {//додавання елементу
	link* newLink = new link;//виділяємо пам'ять
	newLink->data = d;//запам'ятовуємо дані
	newLink->next = first;//запам'ятовуємо значення first
	first = newLink;//first тепер вказує на новий елемент
}

void linkList::display() {
	link* current = first;//починаємо з першого елементу

	while (current) {//поки є дані
		cout << current->data << endl;//печатаєм дані
		current = current->next;//рушаємо до наступного елементу
	}
}

int main()
{
	linkList li;

	li.addItem(25);
	li.addItem(2);
	li.addItem(5);
	li.addItem(35);
	li.addItem(45);

	li.display();

	return 0;
}


