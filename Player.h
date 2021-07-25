#ifndef Playerl
#define Playerl
#include <SFML/Audio.hpp>
#include <QObject>

class Player: public QObject
{
  Q_OBJECT
public:
  Player();

public slots:
  void Play()                      ;
  void SetMusicFile(const QString&);
private:
  bool Playng=false;
  sf::Music *Music;
};

#endif
