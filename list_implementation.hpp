//default constructor
template <typename T>
Linked_List<T>::Linked_List()
{
	head = nullptr;
	m_size = 0;
}

//copy constructor
template <typename T>
Linked_List<T>::Linked_List(const Linked_List<T>& obj)
{
		this->head = nullptr;
		this->m_size = 0;
		if (obj.head)
		{
			this->head = new  Node(obj.head->value);
			Node* tmp1 = this->head;
			Node* tmp2 = obj.head->next;
			m_size++;
			while (tmp2)		
			{
					tmp1 = tmp1->next;
					tmp1 = new Node(tmp2->value);
					tmp2 = tmp2->next;
					++m_size;
			}
		}
}

//destructor
template <typename T>
Linked_List<T>::~Linked_List()
{
    Node* current = head;
    while (current) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr; // Optional: Set head to nullptr after deleting all nodes.
}

//Parametrized constructor of Node class
template <typename T>
Linked_List<T>::Node::Node(const T& val)
{
	value = val;
	next = nullptr;
}
//checks weather container is empty
template <typename T>
bool Linked_List<T>::empty() const 
{
		return m_size == 0;
}

//returns the number of elements 
template <typename T>
size_t Linked_List<T>::size()const
{
		return this->m_size;
}

//returns the maximum possible number of elements
template <typename T>
size_t Linked_List<T>::max_size()const
{
		return 768614336404564650; 
}

//adds an element to the end 
template <typename T>
void Linked_List<T>::push_back(const T& val)
{
	if (!head)
	{
			head = new Node(val);
	} else {
			Node* tmp = head;
			while(tmp->next)
			{
					tmp = tmp->next;
			}
			tmp->next = new Node(val);
	}
	++m_size;
		
}
// inserts an element to the beginning 
template <typename T>
void Linked_List<T>::push_front(const T& val)
{
		Node* tmp = new Node(val);
		tmp->next = head;
		head = tmp;
		++m_size;
}

//prints all the elements of the container
template <typename T>
void Linked_List<T>::print_list()
{
		Node* tmp = head;
		while(tmp)
		{
				std::cout << tmp->value << " ";
				tmp = tmp->next;

		}
		std::cout << std::endl;
}

//removes the last element 
template <typename T>
void Linked_List<T>::pop_back()
{
    if (m_size == 0 || !head ) // if it doesn't contain any element
    {
        std::cout << "Undefined reference." << std::endl;
        return;
    }

    if (!head->next) //if it contains a single element
    {
        delete head;
        head = nullptr;
        m_size = 0;
        return;
    }

    Node* tmp = head;
    Node* prev = nullptr;

    while (tmp->next)
    {
        prev = tmp;
        tmp = tmp->next;
    }

    delete tmp;
    prev->next = nullptr;

    --m_size;
}

//removes the first element 
template <typename T>
void Linked_List<T>::pop_front()
{
    if (m_size == 0 || !head ) // if it doesn't contain any element
    {
        std::cout << "Undefined reference." << std::endl;
        return;
    }

    if (!head->next) //if it contains a single element
    {
        delete head;
        head = nullptr;
        m_size = 0;
        return;
    }
	Node* tmp = head;
	head = head->next;
	delete tmp;
	tmp = nullptr;
	--m_size;
		
}
//clears the contents 
template <typename T>
void Linked_List<T>::clear()
{
		if (head)
		{
			Node* current = head;
			
			while (current) {
				 Node* tmp = current->next;
        	     delete current;
        	     current = tmp;
			}

			head = nullptr; 
			m_size = 0;
				
		}
}
// inserts elements 
template <typename T>
void Linked_List<T>::insert(size_t index, const T& val)
{
	if (index > m_size) {
		std::cout << "Undefined reference. " << std::endl;
		return;
	}
		if(index == 0){
				push_front(val);
		} else if (index == m_size) {
				push_back(val);
		} else {
				size_t tmp_index = 0;
				Node* tmp = head;
				Node* previous = nullptr;
				while(tmp_index != index)
				{	
						previous = tmp;
						tmp = tmp->next;
						++tmp_index;
				}
				previous->next = new Node(val);
				previous->next->next = tmp;
		}
		++m_size;
}
//Erases the specified elements from the container
template <typename T>
void Linked_List<T>::erase(size_t index)
{
		if(index )
}


/*	void assign(size_t count, const T& value);
	    T& front();
	    T& back();
	    void erase(size_t index);
		void resize(size_t new_size);
	    void swap(Linked_List<T>& other);
	    void reverse();
		void sort();
};
*/
