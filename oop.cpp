#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum difficulty
{
    easy,
    medium,
    hard
};
class FootballClub
{
private:
    string name;
    vector<FootbalPlayer *> footballPlayers; // ‘FootbalPlayer’ was not declared in this scope

public:
    void addFootballPlayer(FootbalPlayer *footballPlayer)
    {
        footballPlayers.push_back(footballPlayer);
    };
    void play(string anotherTeam)
    {
        cout << "The match is about to begin between " << name << " and " << anotherTeam << endl;
    }
};

class FootbalPlayer : public FootballClub
{
private:
    string name;
    int speed;
    string position;
    float height;
    float weight;
    int energy;
    string team;
    FootballClub *club;

public:
    FootbalPlayer(string name, int speed, string position, float height, float weight);

    void getPlayerInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Speed: " << speed << endl;
        cout << "Position: " << position << endl;
        cout << "Height: " << height << "m" << endl;
        cout << "Weight: " << weight << "kg" << endl;
    };
};

int main(int argc, char const *argv[])
{
    FootballClub manchesterUnited;
    FootbalPlayer casemiro("casemiro", 90, "DMF", 180, 70);
    manchesterUnited.addFootballPlayer(&casemiro);

    return 0;
}
