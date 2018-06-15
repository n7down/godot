#include "../core/math/vector3.h"
#include "../thirdparty/misc/pcg.h"
#include <gtest/gtest.h>

TEST(Vector3Tests, SetVector3)
{
	Vector3 v;
	v.x = 1;
	v.y = 2;
	v.z = 3;
	ASSERT_TRUE(v.x == 1) << "expected value is 1";
	ASSERT_TRUE(v.y == 2) << "expected value is 2";
	ASSERT_TRUE(v.z == 3) << "expected value is 3";
}
