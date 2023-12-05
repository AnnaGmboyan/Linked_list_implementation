#include <iostream>
#include "List_prototypes.hpp"

int main()
{
		Linked_List<int> list;
		list.push_back(3);
		list.push_back(5);
		list.push_back(5);
		list.push_back(5);
		list.push_back(4);
		list.push_front(2);
		list.push_back(4);
		list.push_front(2);
		list.push_front(3);
		list.push_front(8);
		list.print_list();

		
		list.pop_front();
		list.pop_front();
		list.pop_front();
		list.pop_front();
		list.pop_front();
		list.print_list();
		list.insert(7,111);
		list.print_list();

		std::cout << list.size() << std::endl;
	/*	list.pop_back();
		list.pop_back();
		list.pop_back();
		list.pop_back();
		list.pop_back();
		list.pop_back();
		list.pop_back();
		list.print_list();
//copy constructor deosnt work correctly
		Linked_List<int> list2(list);
		list2.print_list();
*/	
}
