#include <string>
#include "Region.h"
//#include <ImageHlp.h> need to check on this
class View {
	public:
		//View (std::string desc, Image background, View possibleMoves[], Region clickableRegions[]); // need to check on imamge
	private:
		std::string description;
	//	Image background;
		static View possibleMoves[];
		static Region clickableRegions[];
};