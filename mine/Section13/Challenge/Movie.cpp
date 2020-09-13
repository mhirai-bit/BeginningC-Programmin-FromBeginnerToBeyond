// Section 13
#include <iostream>
#include "Movie.h"

// Implementation of the Constructor

Movie::Movie(std::string name, std::string rating, int watched)
  : name(name), rating(rating), watched(watched){
  }

// Implemetation of the copy Constructor
Movie::Movie(const Movie &source)
  : Movie{source.name, source.rating, source.watched}{
}

// Implementation of the Destructor
Movie::~Movie(){
}

// Implementation of the display method
// should just insert the movie sttributes to cout

void Movie::display() const{
  std::cout << name << ", " << rating << ", " << watched << std::endl;
}
