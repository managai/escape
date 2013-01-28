/* Map class header file */

class Map: public Plane {
/* Map::Plane class define a 2-dimensional map where take notice of a number for every tile */
  public:
  // given (x,y) coordinates of a tile
  // increment stored value for given tile
  void upValue(int x, int y);

  // default constructor
  Map();

  // constructor passing size of map
  Map(int x_side, int y_side);

};

#include "Map.cpp" // implementation of Map class
