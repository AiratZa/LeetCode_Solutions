#pragma once

/**
 * Definition for singly-linked list.
 */

using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
     ~ListNode()
     {
         if (next != nullptr)
             delete next;
     }
 };
 
class AddTwoNumbers {
public:
    ListNode* addTwoNumbers_limited(ListNode* l1, ListNode* l2) {
        unsigned long long nbr_1 = getNumbreFromList(l1);
        unsigned long long nbr_2 = getNumbreFromList(l2);
        unsigned long long nbr_res = nbr_1 + nbr_2;
        ListNode* res = new ListNode(nbr_res % 10);
        ListNode* cur = res;
        nbr_res /= 10;
        
        while (nbr_res != 0)
        {
            cur->next = new ListNode(nbr_res % 10);
            nbr_res /= 10;
            cur = cur->next;
        }
        return res;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* cl_1 = l1;
        ListNode* cl_2 = l2;

        ListNode* ans{ nullptr };
        ListNode* tmp = ans;
        int val1{};
        int val2{};
        int remainder{};

        while (cl_1 || cl_2)
        {
            getNextValue(val1, &cl_1);
            getNextValue(val2, &cl_2);
            val1 += val2 + remainder;
            remainder = val1 / 10;
            val1 %= 10;
            if (!ans)
            {
                ans = new ListNode(val1);
                tmp = ans;
            }
            else
            {
                tmp->next = new ListNode(val1);
                tmp = tmp->next;
            }
        }
        if (remainder)
            tmp->next = new ListNode(remainder);
        return ans;
    }


private:

    unsigned long long getNumbreFromList(const ListNode* list) const
    {
        unsigned long long nbr = 0;
        const ListNode * tmp = list;
        unsigned long long multiply = 1;
        while (list)
        {
            nbr += multiply * list->val;
            multiply *= 10;
            list = list->next;
        }
        return nbr;
    }

    void getNextValue(int& val, ListNode** node)
    {
        if (*node)
        {
            val = (*node)->val;
            *node = (*node)->next;
        }
        else
        {
            val = 0;
        }
    }

};