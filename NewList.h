template<class T>
class List
{
    T* arr;
	int size, count;
    public:
List();
	int Length(); 
	void Append(T); 
	void Expand(); 
	void Delete();
	int pos(T);
	void DeleteObj(T);
	void DeleteAt(int);
	~List(void);
	
};
