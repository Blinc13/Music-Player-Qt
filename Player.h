#ifndef Playerl
#define Playerl
#include <SFML/Audio.hpp>
#include <QRadioButton>
#include <QObject>

class Player: public QObject
{
  Q_OBJECT
public:
  Player(QRadioButton*);

public slots:
  void Play()                      ;
  void SetMusicFile(const QString&);
private:
  bool Playng=false;
  sf::Music *Music;
  QRadioButton *MusicPlaying;
};

#endif
