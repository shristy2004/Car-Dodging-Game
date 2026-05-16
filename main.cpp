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
