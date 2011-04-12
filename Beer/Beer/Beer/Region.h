class Region {
	public: 
		Region (int x, int y, int width, int height);
		int getX();
		int getY();
		int getWidth();
		int getHeight();
		bool isInsideRegion(int x, int y);
	private:
		int x;
		int y;
		int width;
		int height;
};