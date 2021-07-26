#ifndef Cpp
#define Cpp
#include <SFML/Audio.hpp>
#include <QRadioButton>
#include <iostream>
#include "Player.h"

Player::Player()
{Music=new sf::Music();}

//              slots
void Player::Play()
{
    if ((Playng=!Playng))
        Music->play();
    else
        Music->pause();
}

void Player::SetMusicFile(const QString &s)
{Music->openFromFile(s.toStdString());}

void Player::SetVolum(const int vol=100)
{Music->setVolume(float(vol));}

Player::~Player()
{delete Music;}
#endif
