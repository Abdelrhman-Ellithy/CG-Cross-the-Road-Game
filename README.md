# 🚗🎮 **Cross the Road Game** 🛤️🌟

Welcome to the **Cross the Road Game**, an exciting 3D adventure where you navigate a ball to avoid cars and reach the end of the road! 🚀✨

---

## 📜 **Table of Contents**  
1. 🛠️ [Project Structure](#-project-structure)  
2. 🎯 [Game Features](#-game-features)  
3. 🎮 [Controls](#-controls)  
4. 🚀 [Setup and Run](#-setup-and-run)  
5. 🖼️ [Screenshots](#-screenshots)  
6. 🏗️ [Development Notes](#️-development-notes)  
7. 📜 [License](#-license)  

---

## 🛠️ **Project Structure**  

This project is organized to ensure clarity and maintainability by following the **Single Responsibility Principle**.

```plaintext
📁 Project Folder
├── main.c               # Program entry point 🏁
├── graphics.c           # Rendering and visuals ✨
├── graphics.h           # Header for graphics module 🎨
├── events.c             # Handles user input (keyboard/mouse) 🎹🖱️
├── events.h             # Header for events module 🖋️
├── game.c               # Game logic (collisions, levels, attempts) 🕹️
├── game.h               # Header for game module 🧠
├── texture.c            # Texture loading utilities 🖼️
├── texture.h            # Header for texture module 🌟
└── README.md            # This document 📖
```

---

## 🎯 **Game Features**  

- 🏞️ **Immersive 3D Environment**: Realistic textures and dynamic rendering.  
- 🚗 **Moving Obstacles**: Avoid fast-moving cars to reach the end!  
- 🕹️ **Progressive Difficulty**: Levels get harder as you advance.  
- 🎮 **User Input**: Smooth and responsive controls for a fun experience.  

---

## 🎮 **Controls**

| **Key**         | **Action**                              |
|------------------|-----------------------------------------|
| `W` / `A` / `S` / `D` | Move the ball (Up / Left / Down / Right)  |
| `Space`         | Start a new game 🎉                    |
| `ESC`           | Quit the game ❌                       |
| `P` / `O`       | Increase / Decrease brightness 🌞🌙      |
| `Arrow Keys`    | Adjust the camera view 🎥              |
| `M`             | Return to the main menu 🏠             |
| `L`             | Advance to the next level 🚀           |

---

## 🚀 **Setup and Run**

1. 🖥️ **Requirements**:
   - OpenGL  
   - GLUT  
   - `stb_image` library (included)  

2. 🔧 **Build and Run**:  
   ```bash
   gcc -o game main.c graphics.c events.c game.c texture.c -lGL -lGLU -lglut
   ./game
   ```  

3. 🎮 **Play the Game**! 🚗✨  

---

## 🖼️ **Screenshots**  

_(Include screenshots or images of the gameplay here.)_

---

## 🏗️ **Development Notes**

- 🧩 **Modularity**: Each file handles a single aspect of the game.  
- 🌟 **OpenGL**: Rendering and textures use OpenGL for smooth graphics.  
- 🏎️ **Physics**: Collision detection ensures realistic gameplay.  

---

## 📜 **License**

This project is licensed under the MIT License. 📝  
Feel free to modify and share the game!  

---

🚀 **Enjoy playing the Cross the Road Game!** 🌟🎮
