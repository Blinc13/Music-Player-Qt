#ifndef Cpp
#define Cpp
#include <iostream>
#include <SFML/Audio.hpp>
#include <string>
#include "Player.h"

Player::Player()
{
  Music=new sf::Music();
}


void Player::Play(){
  if ((Playng=!Playng))
    Music->play();
  else
    Music->stop();
}

void Player::SetMusicFile(const QString &s)
{Music->openFromFile(s.toStdString());}
#endif
