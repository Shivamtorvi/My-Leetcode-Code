#include <iostream>
using namespace std;

template<class T>
class Queue
{
public:
    int front, rear;
    T arr[10];

    Queue()
    {
        front = rear = -1;
    }

    void Enqueue(T data)
    {
        if (rear == 9)
        {
            cout << "Queue is full\n";
            return;
        }
        if (front == -1)
            front = 0;

        arr[++rear] = data;
    }

    void Dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        front++;
        if (front > rear)
            front = rear = -1;
    }

    void Display()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Queue<int> qi;
    Queue<char> qc;
    Queue<double> qd;
    Queue<string> qs;

    int choice, type;

    do
    {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n0.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 0) break;

        cout << "\nSelect Type:\n1.Int\n2.Char\n3.Double\n4.String\n";
        cin >> type;

        switch (choice)
        {
        case 1:
            if (type == 1) { 
                int x; 
                cin >> x; 
                qi.Enqueue(x); 
            }
            else if (type == 2) { 
                char x; 
                cin >> x; 
                qc.Enqueue(x);
            }
            else if (type == 3) { 
                double x; 
                cin >> x; 
                qd.Enqueue(x);
            }
            else if (type == 4) { 
                string x; 
                cin >> x; 
                qs.Enqueue(x);
            }
            break;

        case 2:
            if (type == 1) 
                qi.Dequeue();
            else if (type == 2) 
                qc.Dequeue();
            else if (type == 3) 
                qd.Dequeue();
            else if (type == 4) 
                qs.Dequeue();
            break;

        case 3:
            if (type == 1) 
                qi.Display();
            else if (type == 2) 
                qc.Display();
            else if (type == 3) 
                qd.Display();
            else if (type == 4) 
                qs.Display();
            break;
        }
    } while (choice != 0);

    return 0;
}
