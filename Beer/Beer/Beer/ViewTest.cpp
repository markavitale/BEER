#include "View.h"
#include <string>
#include "WinUnit.h"

Image m = Image(); //image stuffs here
View vList[] = null; 
Region rList[] = null; 
View v = View("main", m, v, rList);

BEGIN_TEST(ViewCreateTest1) 
{

WIN_ASSERT_EQUAL(v.getDescription(), "main")


}
END_TEST

BEGIN_TEST(ViewCreateTest2) 
{

WIN_ASSERT_EQUAL(v.clickableRegions(), rList)


}
END_TEST

BEGIN_TEST(ViewCreateTest3) 
{

WIN_ASSERT_EQUAL(v.getViews(),vList)


}
END_TEST

BEGIN_TEST(ViewCreateTest4) 
{

WIN_ASSERT_EQUAL(v.getImage, m)


}
END_TEST


BEGIN_TEST(addRegion1) 
{
Region r1 = Region(1,2,3,4);
v.addRegion(r1);
WIN_ASSERT_EQUAL(v.clickableRegions.exists(), r1); 


}
END_TEST

BEGIN_TEST(viewInsideRegion1) 
{
Region r1 = Region(1,2,3,4);
r1.
v.addRegion(r1);
WIN_ASSERT_TRUE(v.clickableRegions.get(r1).isInsideRegion(2,3));


}
END_TEST

BEGIN_TEST(viewInsideRegion2) 
{
Region r1 = Region(1,2,3,4);
r1.
v.addRegion(r1);
WIN_ASSERT_FALSSE(v.cickableRegions.get(r1).isInsideRegion(12,13);


}
END_TEST