//      Eric Johnson
//      Assignment 5 - #2

//  Write a function that takes a linked list of items and deletes
//  all repetitions from the list. In your implementation, assume
//  that items can be compared for equality using ==.


//      Eric Johnson
//      Assignment 5 - #6

//  Write a function that starts with a single linked list of items and a
//  special value called the splitting value. Two item values can be compared
//  using the < operator --- but the items of the original linked list are in
//  no particular order. The procedure divides the nodes into two linked lists:
//  one containing all the nodes that contain an item less than the splitting value,
//  and one that contains all the other nodes. If the original linked list had
//  any repeated integers (i.e., any two or more nodes with the same item in them)
//  then the new linked list that has this item should have the same number of nodes
//  that repeated this item. It does not mater whether you preserve the original
//  linked list or destroy it in the process of building the two new lists,
//  but your comments should document what happens to the original linked list.


//      Eric Johnson
//      Assignment 5 - #7

//  Write a function that takes a linked list of integers and rearranges the nodes
//  so that the integers stored are sorted into the order smallest to largest, with
//  the smallest integer in the node at the head of hte list. If the original list
//  had any integers occurring more than once, then the changed list will have the
//  same number of each integer. For concreteness you will use lists of integers,
//  but your function should still work if you replace the integer type with any
//  other type for which the less-than operator is part ,of a total order semantics.
//  Use the following function prototype and specification.
//          void sort_list(node*& head_ptr);
//      Precondition: Head_ptr is a head pointer of a linked list of items,
//                    and these items can be compared with a less-than operator.
//      Postcondition: head_ptr points to the head of a linked list with exactly
//                     the same entries (including repetitions if any), but the
//                     entries in this list are sorted from smallest to largest.
//                     The original linked list is no longer available.
//  Your procedure will implement the following algorithm which is often called
//  selection sort): the algorithm removes nodes one at a time from the original
//  list and adds the nodes toa  second list until all the nodes hae been moved
//  to the second list. The second list will then be sorted.
//  //Pseudocode for selection sort
//      while (the first list still has some nodes){
//          1. Find the node with the largest item of all the nodes in the first list.
//          2. Remove the node from the first list
//          3. Insert this node at the end of the second list.
//      }
//  After all the nodes are moved to the second list, the pointer, head_ptr, can be
//  moved to point to the head of the second list. Note that your function will move
//  entire nodes, not just items, to the second list. Thus, the first list will get
//  shorter and shorter until it is an empty list. Your function should not need to
//  call the new operator since it is just moving nodes from one list to another (not creating new nodes).

#include <iostream>
#include "node.h"

using namespace std;


//Assignment 5 - 2
void remove_duplicates(main_savitch_5::node *head_ptr) {
    //Precondition: head_ptr must be valid
    //Postcondition: Removes duplicate values within a linked list starting at head_ptr.

    main_savitch_5::node *cursor1, *cursor2;

    cursor1 = head_ptr;

    while (cursor1 != NULL && cursor1->link() != NULL) {
        cursor2 = cursor1;

        while (cursor2->link() != NULL) {
            //Removing Duplicates
            if (cursor1->data() == cursor2->link()->data()) {
                main_savitch_5::list_remove(cursor2);
            } else
                cursor2 = cursor2->link();
        }
        cursor1 = cursor1->link();
    }
}

//Assignment 5 - 6
void split_by_value(main_savitch_5::node **head_ptr, main_savitch_5::node::value_type splitting_value,
                    main_savitch_5::node **new_head_ptr) {
    //Precondition: head_ptr must be valid
    //Postcondition: Splits the linked list passed in from head_ptr in two using the splitting value to determine the split.
    //               Anything within the Linked List that is less than the splitting value is moved to a new Linked List named lessThanList
    //              while anything greater than the splitting value is kept in the original list

    main_savitch_5::node *cursor, *parent;
    parent = *head_ptr;
    cursor = *head_ptr;
    while (cursor != NULL && cursor->link() != NULL) {
        if (cursor == *head_ptr && cursor->data() < splitting_value) {
            main_savitch_5::node *move_node = cursor;

            *head_ptr = cursor->link();
            parent = *head_ptr;

            cursor = cursor->link();

            move_node->set_link(*new_head_ptr);
            *new_head_ptr = move_node;
        } else if (cursor->data() < splitting_value) {
            parent->set_link(cursor->link());
            cursor->set_link(*new_head_ptr);
            *new_head_ptr = cursor;
            cursor = cursor->link();
        } else
            cursor = cursor->link();
    }


}

//Assignment 5 - 7
void sort_list(main_savitch_5::node *&head_ptr) {
//      Precondition:  Head_ptr is a head pointer of a linked list of items,
//                     and these items can be compared with a less-than operator.
//      Postcondition: head_ptr points to the head of a linked list with exactly
//                     the same entries (including repetitions if any), but the
//                     entries in this list are sorted from smallest to largest.
//                     The original linked list is no longer available.
//
//    main_savitch_5::node *new_head_ptr, *cursor1, *hold;
//    hold = head_ptr;
//    cout << "\n\n" << hold->data(); //todo remove
//
//    cursor1 = head_ptr;
//    while (cursor1 != NULL && cursor1->link() != NULL){
//        hold = head_ptr;
//
//        if (hold->data() < cursor1->link()->data()){
//            hold = cursor1;
//        }
//
//        main_savitch_5::node *remove_ptr;
//
//        remove_ptr = hold;
//        hold->set_link( remove_ptr->link( ) );
//
//    }


//    for (cursor1 = head_ptr; cursor1 != NULL; cursor1 = cursor1->link()){
//        if (hold->data() < cursor1->data()){
//            hold = cursor1;
//            cout << " DEBUG " << hold->data() << "  "; //todo remove
//        }
////        main_savitch_5::list_remove(hold);
//    }

//    main_savitch_5::node *new_head_ptr, *cursor1, *hold, *cursor2;
//
//    hold = head_ptr;
//    for (cursor1 = head_ptr; cursor1 != NULL; cursor1 = cursor1->link()) {
//
//        for (cursor2 = cursor1; cursor2 != NULL; cursor2 = cursor2->link()) {
//            if (hold->data() < cursor1->data()) {
//                hold = cursor1;
//                cout << hold->data();
//            }
//        }
//        main_savitch_5::list_head_insert(new_head_ptr, hold->data());
//        main_savitch_5::list_remove(hold);
//
//    }
//    new_head_ptr = head_ptr;


//Not selection sort
    main_savitch_5::node *cursor1, *cursor2;
    main_savitch_5::node::value_type temp;
    for (cursor1 = head_ptr; cursor1 != NULL; cursor1 = cursor1->link()) {
        for (cursor2 = cursor1->link(); cursor2 != NULL; cursor2 = cursor2->link()) {
            if (cursor1->data() > cursor2->data()) {
                temp = cursor1->data();
                cursor1->set_data(cursor2->data());
                cursor2->set_data(temp);
            }
        }
    }
}

int main() {

    cout << "Creating 2 Linked Lists: 0-30 and 15-45: " << endl;
    main_savitch_5::node *head1;
    head1 = new main_savitch_5::node;

    main_savitch_5::node *cursor = head1;

    for (int i = 0; i <= 30; ++i) {
        cursor->set_data(i);
        cursor->set_link(new main_savitch_5::node);
        cursor = cursor->link();
    }


    main_savitch_5::node *head2;
    head2 = new main_savitch_5::node;
    cursor = head2;

    for (int i = 15; i <= 45; ++i) {
        cursor->set_data(i);
        cursor->set_link(new main_savitch_5::node);
        cursor = cursor->link();
    }


    cout << "List 1 length: " << main_savitch_5::list_length(*&head1) << endl;
    cout << "List 2 length: " << main_savitch_5::list_length(*&head2) << endl;

    cout << "Outputting values in the two lists: " << endl;
    cout << "List 1:";
    for (cursor = head1; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }
    cout << "\nList 2:";
    for (cursor = head2; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }



    //Assignment2 Remove duplicates from Linked List
    cout << "\n\nASSIGNMENT 5 - 2\nLinked List to remove duplicates: 10 10 11 11 12 12 13 13 14 14 15 15" << endl;
    main_savitch_5::node *testRemove;
    testRemove = new main_savitch_5::node;
    cursor = testRemove;

    for (int i = 10; i <= 15; ++i) {
        cursor->set_data(i);
        cursor->set_link(new main_savitch_5::node);
        cursor = cursor->link();
    }
    for (int i = 10; i <= 15; ++i) {
        cursor->set_data(i);
        cursor->set_link(new main_savitch_5::node);
        cursor = cursor->link();
    }


    cout << "Displaying linked list with duplicates intact:";
    for (cursor = testRemove; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }

    remove_duplicates(testRemove);
    cout << "\nDisplaying linked with with duplicates removed:";
    for (cursor = testRemove; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }
    main_savitch_5::list_clear(testRemove);

    //==========================================================================================================

    cout << "\n\nASSIGNMENT 5 - 6 \n" <<
         "Using the first list, split the list in two using the splitting value 18. Will display the less than list and then the greater than list"
         << endl;
    main_savitch_5::node *lessThanList = new main_savitch_5::node;
    split_by_value(&head1, 18, &lessThanList);

    cout << "New List Length " << main_savitch_5::list_length(lessThanList) << endl;
    cout << "Less than List:";
    for (cursor = lessThanList; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }
    cout << "\nGreater than List:";
    for (cursor = head1; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }

    main_savitch_5::list_clear(lessThanList);

//==============================================================================
//      Assignment 5 - 7
//         Selection Sort
    cout << "\n\nAssignment 5 - 7: Selection Sort\nStart with a new list of elements and then sort: "
         << endl;
    main_savitch_5::node *head3;
    head3 = new main_savitch_5::node;

    main_savitch_5::list_head_insert(head3, 18);
    main_savitch_5::list_head_insert(head3, 45);
    main_savitch_5::list_head_insert(head3, 23);
    main_savitch_5::list_head_insert(head3, 43);
    main_savitch_5::list_head_insert(head3, 15);
    main_savitch_5::list_head_insert(head3, 34);
    main_savitch_5::list_head_insert(head3, 43);
    main_savitch_5::list_head_insert(head3, 48);
    main_savitch_5::list_head_insert(head3, 41);
    main_savitch_5::list_head_insert(head3, 10);
    main_savitch_5::list_head_insert(head3, 12);


    cout << "Displaying unsorted linked list:";
    for (cursor = head3; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }

    sort_list(head3);
    cout << "\n\nDisplaying sorted linked list:";
    for (cursor = head3; cursor != NULL; cursor = cursor->link()) {
        cout << "  " << cursor->data();
    }


    main_savitch_5::list_clear(head1);
    main_savitch_5::list_clear(head2);
    main_savitch_5::list_clear(head3);

    return 0; //Exit Success

}

