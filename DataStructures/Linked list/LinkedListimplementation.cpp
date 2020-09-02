//
// Created by Mrigank Anand on 02/09/20.
//

//shuru apni marzi se kiye the ab fhodne ka man kar raha hai
#include<bits/stdc++.h>

#define ll long long
#define sq(a) (a)*(a)
#define endl "\n"
#define pb push_back
#define v vector
#define mp make_pair
#define boost ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define w() ll t; cin >> t; while(t--)
using namespace std;

class node {
public:

    int data;

    node(int d) {
        data = d;
        next = NULL;
    }

    node *next;
};

void insertion_at_head(node *&head, int d) {
    if (head == NULL) {
        head = new node(d);
    } else {
        node *temp = new node(d);
        temp->next = head;
        head = temp;
    }
}

void insertion_at_tail(node *&head, int d) {
    if (head == NULL) {
        head = new node(d);
    } else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        node *temp2 = new node(d);
        temp->next = temp2;
    }
}

void print_Linked_List(node *head) {
    if (head == NULL) {
        cout << "No elements present";
    }
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int size_of_linked_list(node *head) {
    int size = 0;
    while (head != NULL) {
        size++;
        head = head->next;
    }
    return size;
}

int sum_of_ll_elements(node *head) {
    int sum = 0;
    while (head != NULL) {
        sum += head->data;
        head = head->next;
    }
    return sum;
}

int max_element(node *head) {
    int max = INT_MIN;
    while (head != NULL) {
        if (max < head->data) {
            max = head->data;
        }
        head = head->next;
    }
    return max;
}

int min_element(node *head) {
    int min = INT_MAX;
    while (head != NULL) {
        if (min > head->data) {
            min = head->data;
        }
        head = head->next;
    }
    return min;
}

void deletion_at_head(node *&head) {
    if (head == NULL) {
        cout << "No elements to be deleted";
    } else {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

void deletion_at_end(node *head) {
    while (head->next->next != NULL) {
        head = head->next;
    }
    node *temp = head->next;
    head->next = NULL;
    delete temp;
}

void reverse_linked_list(node *&head) {
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
}

bool search(node *head, int ele) {
    while (head != NULL) {
        if (head->data == ele) {
            return true;
        }
        head = head->next;
    }
    return false;
}

int kth_element_from_last(node *head, int k) {
    int size = size_of_linked_list(head);
    if (k > size)
        return -1;
    else {
        int s = size - k;
        while (s) {
            s--;
            head = head->next;
        }
        return head->data;
    }
}

int main() {
    node *head = NULL;
    for (int i = 0; i < 5; ++i) {
        insertion_at_head(head, 5 * i);
    }
    for (int i = 0; i < 5; ++i) {
        insertion_at_tail(head, 5 * i);
    }
    deletion_at_head(head);
    print_Linked_List(head);
    cout << "Size of Linked List :- " << size_of_linked_list(head) << endl;
    if (size_of_linked_list(head) > 0) {
        cout << "Min element in Linked List :- " << min_element(head) << endl;
        cout << "Max element in Linked List :- " << max_element(head) << endl;
        cout << "Sum of elements of Linked List :- " << sum_of_ll_elements(head) << endl;
    }
    deletion_at_end(head);
    deletion_at_end(head);
    deletion_at_head(head);
    print_Linked_List(head);
    cout << "Size of Linked List :- " << size_of_linked_list(head) << endl;
    if (size_of_linked_list(head) > 0) {
        cout << "Min element in Linked List :- " << min_element(head) << endl;
        cout << "Max element in Linked List :- " << max_element(head) << endl;
        cout << "Sum of elements of Linked List :- " << sum_of_ll_elements(head) << endl;
    }
    for (int i = 0; i < 5; ++i) {
        insertion_at_tail(head, 5 * i);
    }
    print_Linked_List(head);
    reverse_linked_list(head);
    cout << "Linked list after getting reversed" << endl;
    print_Linked_List(head);
    cout << "Is 20 present or not " << search(head, 20) << endl;
    delete head;
    cout << kth_element_from_last(head, 10) << endl;
    cout << kth_element_from_last(head, 5) << endl;

    return 0;
}