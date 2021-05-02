#include <gtest/gtest.h>
#include "../../LeetCode_Solutions/Medium/AddTwoNumbers.h"

TEST(AddTwoNumbersTest, same_length)
{
	ListNode* l1 = new ListNode(2, 
						new ListNode(4,
							new ListNode(3)));
	ListNode* l2 = new ListNode(5,
						new ListNode(6,
							new ListNode(4)));
	AddTwoNumbers inst;
	ListNode* ans = inst.addTwoNumbers(l1, l2);
	ListNode* tmp = ans;
	// 7 0 8 (342 + 465 = 807)

	ASSERT_EQ(tmp->val, 7);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 8);
	tmp = tmp->next;
	ASSERT_EQ(tmp, nullptr);

	delete l1;
	delete l2;
	//delete ans;
}

TEST(AddTwoNumbersTest, zeros)
{
	ListNode* l1 = new ListNode(0);
	ListNode* l2 = new ListNode(0);
	AddTwoNumbers inst;
	ListNode* ans = inst.addTwoNumbers(l1, l2);
	ListNode* tmp = ans;
	// 0 (0 + 0 = 0)


	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp, nullptr);

	delete l1;
	delete l2;
	//delete ans;
}

TEST(AddTwoNumbersTest, different_length)
{
	/*
	Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
	Output: [8,9,9,9,0,0,0,1]
	*/

	ListNode* l1 = new ListNode(9,
						new ListNode(9,
							new ListNode(9,
								new ListNode(9,
									new ListNode(9,
										new ListNode(9,
											new ListNode(9)))))));
	ListNode* l2 = new ListNode(9,
						new ListNode(9,
							new ListNode(9,
								new ListNode(9))));
	AddTwoNumbers inst;
	ListNode* ans = inst.addTwoNumbers(l1, l2);
	ListNode* tmp = ans;
	

	ASSERT_EQ(tmp->val, 8);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 9);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 9);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 9);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 1);
	tmp = tmp->next;
	ASSERT_EQ(tmp, nullptr);

	delete l1;
	delete l2;
	//delete ans;
}


TEST(AddTwoNumbersTest, bigger)
{
	/*
	Input: [9]
			[1,9,9,9,9,9,9,9,9,9]
	Output: [0,0,0,0,0,0,0,0,0,0,1]
	*/

	ListNode* l1 = new ListNode(1,
						new ListNode(9,
							new ListNode(9,
								new ListNode(9,
									new ListNode(9,
										new ListNode(9,
											new ListNode(9,
												new ListNode(9,
													new ListNode(9,
														new ListNode(9))))))))));
	ListNode* l2 = new ListNode(9);
	AddTwoNumbers inst;
	ListNode* ans = inst.addTwoNumbers(l1, l2);
	ListNode* tmp = ans;


	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 0);
	tmp = tmp->next;
	ASSERT_EQ(tmp->val, 1);
	tmp = tmp->next;
	ASSERT_EQ(tmp, nullptr);

	delete l1;
	delete l2;
	//delete ans;
}
