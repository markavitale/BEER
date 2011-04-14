  #include "WinUnit.h"
 #include "Beer\Beer\Region.h"
BEGIN_TEST(RegionCreateTest) 
  {
	Region newRegion = Region(1,2,3,4);
   WIN_ASSERT_EQUAL(newRegion.getX(),1);
    WIN_ASSERT_EQUAL(newRegion.getWidth(),3);
    WIN_ASSERT_EQUAL(newRegion.getY(),2);
	 
  }
  END_TEST
