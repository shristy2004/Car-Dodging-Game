# 🚗 Car Dodging Game

A fast-paced **2D Car Dodging Game** built using **C++** and the **SFML (Simple and Fast Multimedia Library)** framework.

The game challenges players to survive as long as possible by dodging incoming enemy vehicles while the game speed continuously increases.

---

# 🎮 Gameplay

The objective of the game is simple:

- 🚘 Control your car
- ⚡ Dodge enemy vehicles
- 🏆 Score points by surviving longer
- 🔥 Face increasing difficulty over time

The gameplay is smooth, responsive, and designed to provide an engaging arcade-style experience.

---

# ✨ Features

- 🚗 Smooth player movement
- ⚡ Increasing game speed and difficulty
- 🎯 Real-time score tracking
- 💥 Collision detection system
- 🔊 Sound effects integration
- ⏸ Pause and resume functionality
- 🎨 Multiple enemy car designs
- 🛣 Lane-based movement system

---

# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| **C++** | Core game development |
| **SFML** | Graphics, rendering, audio, and event handling |
| **Object-Oriented Programming** | Modular game architecture |

---

# 🧠 OOP Concepts Implemented

This project demonstrates important Object-Oriented Programming concepts such as:

- Inheritance
- Abstraction
- Polymorphism
- Class-based design

## Main Classes

```text
Car        → Base Class
PlayerCar  → Handles player movement
EnemyCar   → Controls enemy vehicle behavior
Main/Game  → Game loop and rendering
```

---

# 🎮 Controls

| Key | Action |
|---|---|
| ⬅ Left Arrow | Move Left |
| ➡ Right Arrow | Move Right |
| P | Pause / Resume |
| ENTER | Start / Restart |
| ESC | Exit Game |

---

# ⚙️ Installation & Setup

## 1️⃣ Clone the Repository

```bash
git clone https://github.com/your-username/car-dodging-game.git
cd car-dodging-game
```

---

## 2️⃣ Install SFML

Download and install SFML from:

https://www.sfml-dev.org/

---

## 3️⃣ Compile the Project

```bash
g++ main.cpp -o game -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
```

---

## 4️⃣ Run the Game

```bash
./game
```

---

# 📂 Project Structure

```text
📦 Car-Dodging-Game
 ┣ 📂 Assets
 ┃ ┣ 🚘 Car Sprites
 ┃ ┣ 🛣 Road Texture
 ┃ ┗ 🔊 Sound Effects
 ┣ 📜 main.cpp
 ┣ 📜 Car.h
 ┣ 📜 PlayerCar.h
 ┣ 📜 EnemyCar.h
 ┗ 📜 README.md
```

---

# 🚀 Game Logic Overview

The game follows a continuous game loop:

1. Process player input
2. Spawn enemy vehicles randomly
3. Update object positions
4. Detect collisions
5. Update score and speed
6. Render graphics on screen

---

# 📈 Future Improvements

- 🏆 Leaderboard system
- 🎮 Multiplayer support
- 🚦 Advanced difficulty levels
- ✨ Better graphics and animations
- 📱 Mobile compatibility
- 🤖 AI-controlled enemy traffic

---

# 📚 Learning Outcomes

This project helped in understanding:

- Real-time game development
- Collision handling
- Frame-based animation
- Event handling using SFML
- Game loop architecture
- Practical implementation of OOP concepts

---

# 🤝 Contribution

Contributions and improvements are welcome.

```bash
Fork 🍴 → Improve ✨ → Pull Request 🚀
```

---

# 📄 License

This project is developed for educational and learning purposes.

---

<p align="center">
  ⭐ If you liked this project, consider giving it a star on GitHub!
</p>
