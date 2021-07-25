#ifndef Cpp
#define Cpp
#include <iostream>
#include "Player.h"

Player::Player()
{}

void Player::Play(){
  if ((Playng=!Playng))
  {
    std::cout<<"Play"<<std::endl;
  }
}
#endif
