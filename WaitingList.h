template <class T>
class WaitingList
{
	T* arr;
	long long count, size, front, back;
public:
	WaitingList();
	void enqueue(T);
	void dequeue();
	void expand();
	bool empty();
	int sizez();
	~WaitingList();
};