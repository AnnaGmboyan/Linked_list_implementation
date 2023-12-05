template <typename T>
class Linked_List{

	public:
		Linked_List();
		Linked_List(const Linked_List<T>&);
		Linked_List(Linked_List<T>&&);

	public:
		~Linked_List();

	private:
		class Node{
			public:
				T value;
				Node* next;
				Node(const T& val);
		};

	public:
		Node* head;
		size_t m_size;

	public:
		void assign(size_t count, const T& value);
	    T& front();
	    T& back();
	    bool empty() const;
	    size_t size() const;
	    size_t max_size() const;
		void print_list();
		void clear();
	    void insert(size_t index, const T& value);
	    void erase(size_t index);
	    void push_back(const T& elem);
		void push_front(const T& elem);
	    void pop_back();
	    void pop_front();
		void resize(size_t new_size);
	    void swap(Linked_List<T>& other);
	    void reverse();
		void sort();
};
#include "list_implementation.hpp"
