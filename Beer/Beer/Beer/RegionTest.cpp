#include "WinUnit.h"
#include "Region.h"


Region newRegion = Region(1,2,3,4);

BEGIN_TEST(RegionGetXTest) 
{

	WIN_ASSERT_EQUAL(newRegion.getX(),1);


}
END_TEST
BEGIN_TEST(RegionGetYTest) 
{
	WIN_ASSERT_EQUAL(newRegion.getY(),2);
}
END_TEST

	BEGIN_TEST(RegionGetWidthTest) 
{
	WIN_ASSERT_EQUAL(newRegion.getWidth(),3);
}
END_TEST

	BEGIN_TEST(RegionGetHeightTest) 
{
	WIN_ASSERT_EQUAL(newRegion.getHeight(),4);
}
END_TEST

BEGIN_TEST(RegionIsInsideRegionTest1) 
{

	WIN_ASSERT_TRUE(newRegion.isInsideRegion(2,3));
}
END_TEST

BEGIN_TEST(RegionIsInsideRegionTest2) 
{

	WIN_ASSERT_FALSE(newRegion.isInsideRegion(15,23));
}
END_TEST

BEGIN_TEST(RegionIsInsideRegionTest3) 
{

	WIN_ASSERT_FALSE(newRegion.isInsideRegion(2,100));
}
END_TEST

BEGIN_TEST(RegionIsInsideRegionTest4) 
{

	WIN_ASSERT_FALSE(newRegion.isInsideRegion(100,3));
}
END_TEST