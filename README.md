# Tetris Game Using Raylib

Welcome to the Tetris game project built with Raylib! This project is a classic Tetris game implemented using the Raylib library for graphics and game development. Enjoy the nostalgic gameplay of Tetris with a modern touch.
## Made By:
Fatimaa Khan (CT-23024),
Rania Imran (CT-23005),
Musfirah Waseem (CT-23014),
Amna Adnan (CT-23020)


![Tetris Image](https://ychef.files.bbci.co.uk/624x351/p0102gs2.jpg)

## Table of Contents

- [Design Document](#design-document)
- [How to Play](#how-to-play)
- [Features](#features)
- [Controls](#controls)
- [For Additional Inquiries](#for-additional-inquiries)

## Design Document

## Chapter 1 - Introduction 

1.1 Purpose of the document:
This System Design Document (SDD) specifies the high-level architecture, object-oriented design, functional decomposition, and behavioral models for the proposed Tetris Game System. It serves as the primary technical blueprint for development and implementation.
1.2 Scope of the Project:
A desktop Tetris clone built with raylib C++ that supports block movement, rotation, line clearing, scoring, and simple game loop.
The Tetris Game System will implement the core mechanics of the classic game, including:
Gameplay: Generating random pieces (tetrominoes), handling player input (movement, rotation, soft/hard drop), and collision detection.
Game State: Managing the main playing grid, scoring, level progression, and line clearing logic.
User Interface: Displaying the game grid, current score, next piece, and game-over screen.
Persistence: Storing the high score.
1.3 Definitions / Abbreviations:
-	SRS: System Requirement Specification 
-	UML: Unified Modelling Language
-	SDD: System Design Document
-	Tetromino: A geometric shape composed of four squares (the falling pieces in Tetris).
-	UI: User Interface
1.4 References:
- Project source code in the provided ZIP.
-Tetris Game Rules (The standard ruleset).
- Raylib documentation.
-Organizational Standards for Software Development, Document ID: SD-STD-001.
1.5 Overview of remainder of document:
Chapter 2 details the Object-Oriented Design (Classes). Chapter 3 covers Functional Modeling (Game Loop/DFDs). Chapter 4 presents Behavioral Modeling (Game State). Chapter 5 illustrates Interaction Modeling (Input/Gameplay Sequence).

## Chapter 2 - Class Diagram 
<img width="576" height="486" alt="image" src="https://github.com/user-attachments/assets/34b24c2a-eae0-4a52-bd12-bbbbc0862dfd" />

## Chapter 3 - Functional Modeling
DFD Level 0:
The entire system is modeled as a single process interacting with the external Player.
•	Process: Tetris Game System
•	External Entity: Player
•	Data Flows:
o	Player  System: Input Commands (KEY_LEFT, KEY_RIGHT, KEY_UP, KEY_DOWN, Restart Key)
o	System  Player: Visual Game State (Grid, Score, Next Piece, Game Over Text)
o	System  Player: Audio Feedback (Music, Rotate Sound, Clear Sound)
<img width="525" height="543" alt="image" src="https://github.com/user-attachments/assets/51de5813-e8ad-49b5-bd74-350b16f0b1da" />
3.2 DFD Level 1 (Major Subsystems)
The system is divided into three major functional processes executed within the game loop.
<img width="576" height="351" alt="image" src="https://github.com/user-attachments/assets/94dfa860-710d-442c-953d-e5b0069afd94" />
3.3 DFD Level 2 (Core Game Logic Decomposition)
This diagram decomposes Process 2.0 (Core Game Logic) to show the detailed steps involved in a single gravity tick or block-locking sequence, primarily driven by Game::MoveBlockDown().
<img width="655" height="462" alt="image" src="https://github.com/user-attachments/assets/17f9083b-8130-4d87-880d-f6ded1720142" />
## Chapter 4: Behavioral Modeling
This chapter specifies the State Transition Diagram (STD) for the Game object, defining how its high-level state changes in response to triggers.
4.1 State Transition Diagram (STD) Specification
The State Transition Diagram models the lifecycle of the central Game object, showing how the system reacts to user input and internal timers
<img width="473" height="772" alt="image" src="https://github.com/user-attachments/assets/9dc0d756-4bce-4471-998b-6e1d36760292" />

## Chapter 5: Interaction Modeling
5.1 Use Case Diagram
The user interaction is simple, primarily focused on controlling the falling piece.
•	Actor: Player
•	Use Cases:
o	Start/Restart Game (Handles game setup and reset)
o	Control Horizontal Movement (Includes MoveBlockLeft, MoveBlockRight)
o	Apply Soft Drop (Fast manual descent: KEY_DOWN)
o	Rotate Piece
o	Observe Game State (Passive: Score, Grid, Next Piece)
o	Observe Audio Feedback (Passive: Music, Sounds)

Use Case Diagram:
<img width="517" height="611" alt="image" src="https://github.com/user-attachments/assets/81473f47-1b8a-46ec-acc7-4f15f64dbc5d" />

5.2 Sequence Diagram (Rotating a Piece)
This models the synchronous interaction triggered by the player pressing the "Rotate" key (KEY_UP).
<img width="574" height="706" alt="image" src="https://github.com/user-attachments/assets/424196d6-b3d0-4855-b7fc-bd3249627f52" />

## How to Play

The objective of Tetris is to manipulate the falling tetrominoes to create horizontal lines of blocks without any gaps. When a line is completed, it disappears, and the blocks above it move down. The game ends when the stack of tetrominoes reaches the top of the playing field.

## Features

- Classic Tetris gameplay
- Modern graphics with Raylib
- Score tracking
- Responsive controls

## Controls

- **Left Arrow**: Move tetromino left
- **Right Arrow**: Move tetromino right
- **Down Arrow**: Hard drop
- **Up Arrow**: Rotate tetromino
- **Left Arrow** (after the game ends): Restarting the game

## Acknowledgments

- [Raylib](https://www.raylib.com/) - A simple and easy-to-use library to enjoy videogames programming.
- Tetris concept and design originally by Alexey Pajitnov.
- Dr Murk Marvi (Lecturer at NEDUET, Karachi) for her guidance and valuable feedback throughout the project.


## For Additional Inquiries:
email: fatimazherk@gmail.com

Enjoy playing Tetris!

