#include "Region.h"

Region::Region(int x1, int y1, int width1, int height1) {
	x = x1;
	y = y1;
	width = width1;
	height = height1;
}

int Region::getHeight() {
	return height;
};
int Region::getWidth() {
	return width;
};
int Region::getX() {
	return x;
};
int Region::getY() {
	return y;
};
bool Region::isInsideRegion(int x1, int y1){
	return (x1 > x && x1 < x +width && y1 > y && y1 < y + height);
}