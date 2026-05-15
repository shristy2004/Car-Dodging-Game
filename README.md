# Car-Dodging-Game
# 🚗 Car Dodging Game

<p align="center">
  <img src="https://images.unsplash.com/photo-1503376780353-7e6692767b70?q=80&w=1200&auto=format&fit=crop" width="800" alt="Car Dodging Game Banner">
</p>

<p align="center">
  <b>A fast-paced 2D arcade-style car dodging game built using C++ and SFML.</b>
</p>

---

# 🎮 Gameplay

The objective of the game is simple:

🚘 Control your car  
⚡ Dodge incoming enemy vehicles  
🏆 Survive as long as possible  
🔥 Beat your highest score  

As the game progresses, the speed continuously increases, making the gameplay more challenging and exciting.

---

# ✨ Features

- 🚗 Smooth player movement
- ⚡ Dynamic speed increase
- 🎯 Real-time score tracking
- 💥 Collision detection
- 🔊 Sound effects integration
- ⏸ Pause and resume system
- 🎨 Multiple enemy vehicle designs
- 🛣 Lane-based arcade gameplay

---

# 🖼 Screenshots

## 🏁 Main Menu

<p align="center">
  <img src="https://cdn.pixabay.com/photo/2017/01/06/19/15/highway-1957063_1280.jpg" width="700">
</p>

---

## 🚘 Gameplay Screen

<p align="center">
  <img src="https://cdn.pixabay.com/photo/2016/11/29/09/32/auto-1868726_1280.jpg" width="700">
</p>

---

## 💥 Game Over Screen

<p align="center">
  <img src="https://cdn.pixabay.com/photo/2016/03/27/19/32/auto-1283963_1280.jpg" width="700">
</p>

---

# 🛠 Technologies Used

| Technology | Purpose |
|---|---|
| **C++** | Core game logic |
| **SFML** | Graphics, audio, rendering |
| **OOP Concepts** | Modular game structure |

---

# 🧠 OOP Concepts Used

The project demonstrates:

- Inheritance
- Abstraction
- Polymorphism
- Class-based design

## Main Classes

```text
Car        → Base Class
PlayerCar  → Player movement and controls
EnemyCar   → Enemy vehicle behavior
Main/Game  → Game loop and rendering
```

---

# 🎮 Controls

| Key | Function |
|---|---|
| ⬅ Left Arrow | Move Left |
| ➡ Right Arrow | Move Right |
| P | Pause Game |
| ENTER | Start / Restart |
| ESC | Exit Game |

---

# ⚙️ Installation

## 1️⃣ Clone Repository

```bash
git clone https://github.com/your-username/car-dodging-game.git
cd car-dodging-game
```

---

## 2️⃣ Install SFML

Download SFML from:

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

1. Process user input
2. Spawn enemy vehicles
3. Update movement
4. Detect collisions
5. Update score and speed
6. Render graphics on screen

---

# 📈 Future Improvements

- 🏆 Leaderboard system
- 🎮 Multiplayer support
- 🚦 Advanced difficulty levels
- ✨ Better animations and effects
- 📱 Mobile compatibility
- 🤖 AI-based enemy traffic

---

# 📚 Learning Outcomes

This project helped in understanding:

- Real-time game development
- Collision handling
- Game loops
- Event handling using SFML
- Object-Oriented Programming
- Frame-based animation systems

---

# 🤝 Contribution

Contributions are welcome!

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
