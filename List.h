template<class T>
class List
{
    T* arr;
	int size, count;
    public:
List();
	int Length(); // FOLA
	void Append(T); // fola
	void Expand(); // fola
	void Delete();
	~List(void);
	
};