#include "WinUnit.h"
#include "Beer\Beer\Region.h"


Region newRegion = Region(1,2,3,4);

BEGIN_TEST(getXTest) 
{

	WIN_ASSERT_EQUAL(newRegion.getX(),1);


}
END_TEST
BEGIN_TEST(getYTest) 
{
	WIN_ASSERT_EQUAL(newRegion.getY(),2);
}
END_TEST

	BEGIN_TEST(getWidthTest) 
{
	WIN_ASSERT_EQUAL(newRegion.getWidth(),3);
}
END_TEST

	BEGIN_TEST(getHeightTest) 
{
	WIN_ASSERT_EQUAL(newRegion.getHeight(),4);
}
END_TEST

BEGIN_TEST(isInsideRegionTest1) 
{

	WIN_ASSERT_TRUE(newRegion.isInsideRegion(2,3));
}
END_TEST

BEGIN_TEST(isInsideRegionTest2) 
{

	WIN_ASSERT_FALSE(newRegion.isInsideRegion(15,23));
}
END_TEST

BEGIN_TEST(isInsideRegionTest3) 
{

	WIN_ASSERT_FALSE(newRegion.isInsideRegion(2,100));
}
END_TEST

BEGIN_TEST(isInsideRegionTest4) 
{

	WIN_ASSERT_FALSE(newRegion.isInsideRegion(100,3));
}
END_TEST