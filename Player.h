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
  void Play();
private:
  bool Playng=false;
};

#endif
