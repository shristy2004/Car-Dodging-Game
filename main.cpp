#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <string>
#include "PlayerCar.h"
#include "EnemyCar.h"

int main() {
 RenderWindow window(VideoMode(800, 600), "Car Game");
 Texture roadTex, playerTex, red1, red2, yellow1, yellow2, yellow3;
 playerTex.loadFromFile("Assets/WhiteCar.png");
 red1.loadFromFile("Assets/RedCar1.png");
 red2.loadFromFile("Assets/RedCar2.png");
 yellow1.loadFromFile("Assets/YellowCar1.png");
 yellow2.loadFromFile("Assets/YellowCar2.png");
 yellow3.loadFromFile("Assets/YellowCar3.png");
 roadTex.loadFromFile("Assets/road.png");
Sprite roadSprite;
 roadSprite.setTexture(roadTex);
 roadSprite.setScale(
800.0f / roadTex.getSize().x,
 600.0f / roadTex.getSize().y
 );
 std::vector<Texture*> enemyTextures = {
 &red1, &red2, &yellow1, &yellow2, &yellow3
 };
 PlayerCar player(playerTex);
 std::vector<EnemyCar> enemies;
 std::vector<float> lanes = {150, 400, 650};
Clock clock;
 float spawnTimer = 0;
 float speedMultiplier = 1.0f;
bool gameOver = false;
 bool paused = false;
 bool gameStarted = false
int difficulty = 2;
 float spawnDelay = 1.0f;
 float speedGrowth = 0.05f;
Font font;
 font.loadFromFile("Assets/arial.ttf");
 float score = 0;
 Text scoreText, speedText, speedText2, gameOverText, pauseText;
 Text startText, diffText;
scoreText.setFont(font);
 scoreText.setCharacterSize(30);
 scoreText.setPosition(10,10);
  
speedText.setFont(font);
 speedText.setCharacterSize(25);
 speedText.setPosition(550,40);
speedText2.setFont(font);
 speedText2.setCharacterSize(20);
 speedText2.setPosition(550, 40);
