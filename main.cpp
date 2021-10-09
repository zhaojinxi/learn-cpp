#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:


    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *tmp;
        bool cond;

        tmp = l1;
        vector<int> a;
        do
        {
            cout << tmp->val << endl;
            a.push_back(tmp->val);
            cond = tmp->next != nullptr;
            tmp = tmp->next;
        } while (cond);

        tmp = l2;
        vector<int> b;
        do
        {
            cout << tmp->val << endl;
            b.push_back(tmp->val);
            cond = tmp->next != nullptr;
            tmp = tmp->next;
        } while (cond);

        cout << "haha";

        ListNode r;
        return &r;
    }
};

int main()
{
    ListNode a1{4};
    ListNode a{2, &a1};

    ListNode b1{2};
    ListNode b{1, &b1};

    Solution s;
    ListNode *r = s.addTwoNumbers(&a, &b);
}