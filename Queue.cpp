//ZhafirahNurShadrinaPutri
//G1A021028
//Queue

#include <iostream>
#define MAX 5
using namespace std;

struct Queue {
	int head; 
	int tail; 
	int data[MAX];
}
Q;

bool isFull() {
	return Q.tail == MAX;
}

bool isEmpty() {
	return Q.tail == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Queue is empty"<<endl;
	}
	else {
		cout << "Queue : ";
		for (int i = Q.head; i < Q.tail; i++)
			cout << Q.data[i] << ((Q.tail-1 == i) ? "" : ",");
		cout << endl;
  }
}

void addqueue() {
	if (isFull())
	{
		cout << "Queue is full!"<<endl;
	}
	else {
		int data;
		cout << "Add data to queue : ";cin >> data;
		Q.data[Q.tail] = data;
		Q.tail++;
		cout << "Data is added\n";
		printQueue();
	}
}

void deletequeue() {
	if (isEmpty())
	{
		cout << "Queue is empty"<<endl;
	}
	else{
		cout << "delete data from queue \"" << Q.data[Q.head] << "\"..." << endl;
		for (int i = Q.head; i < Q.tail; i++)
			Q.data[i] = Q.data[i + 1];
		Q.tail--;
		printQueue();
	}
}

int main() {
	int choose;
	do
	{
		cout << "<<<<<<<<Queue>>>>>>>>\n"
			<< " 1. Add Data to Queue\n"
			<< " 2. Delete data from Queue\n"
			<< " 3. Exit \n\n"
			<< "----------------------------------\n"
			<< "Your Option : "; cin >> choose;
		switch (choose)
		{
		case 1:
			addqueue();
			break;
		case 2:
			deletequeue();
			break;
		default:
			cout << "Invalid option";
			break;
		}
	} while (choose !=3);
	return 0;
}