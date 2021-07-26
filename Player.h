#ifndef Playerl
#define Playerl
#include <SFML/Audio.hpp>
#include <QRadioButton>
#include <QObject>

class Player: public QObject
{
    Q_OBJECT
public:
     Player();
    ~Player();
private:
    bool Playng=false;
    sf::Music *Music;
    QRadioButton *MusicPlaying;
public slots:
    void Play()                      ;
    void SetMusicFile(const QString&);
    //void SetTime(const int)          ;
    void SetVolum(const int)         ;
};

#endif
