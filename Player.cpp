#ifndef Cpp
#define Cpp
#include <SFML/Audio.hpp>
#include <QRadioButton>
#include "Player.h"

Player::Player(QRadioButton *ptr){
  Music=new sf::Music();
  MusicPlaying=ptr;
}


void Player::Play(){
  if ((Playng=!Playng))
    Music->play();
  else
    Music->pause();

  MusicPlaying->setChecked(true); //Почему то не работает
}

void Player::SetMusicFile(const QString &s)
{Music->openFromFile(s.toStdString());}
#endif
