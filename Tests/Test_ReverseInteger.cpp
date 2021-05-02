#include <gtest/gtest.h>
#include "../LeetCode_Solutions/Easy/ReverseInteger.h"

struct ReverseIntegerTestResult
{
	int input;
	int result;

};

ostream& operator<<(ostream& stream, ReverseIntegerTestResult& rhs)
{
	stream << "input: " << rhs.input << std::endl
		<< "expected result: " << rhs.result << std::endl;
	return stream;
}

struct ReverseIntegerTest : testing::TestWithParam<ReverseIntegerTestResult>
{
	ReverseIntegerTest() : reverse{}
	{
	}

	ReverseInteger reverse;
};

TEST_P(ReverseIntegerTest, all_cases) {
	auto params = GetParam();
	int res = reverse.reverse(params.input);
	ASSERT_EQ(res, params.result);
}

INSTANTIATE_TEST_SUITE_P(Default, ReverseIntegerTest,
	testing::Values(
		ReverseIntegerTestResult{ INT_MAX, 0 },
		ReverseIntegerTestResult{ INT_MIN, 0 },
		ReverseIntegerTestResult{ 0, 0 },
		ReverseIntegerTestResult{ 120, 21 },
		ReverseIntegerTestResult{ -123, -321 },
		ReverseIntegerTestResult{ 123, 321 }
));


