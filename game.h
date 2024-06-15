#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game{
public:
Game();
Block GetRandomBlock();
std::vector<Block> GetAllBlocks();
void Draw();
void HandleInput();
void MoveBlockLeft();
void MoveBlockRight();
void MoveBlockDown();
Grid grid;

private:
Block GetRandomBlock();
bool IsBlockOutside();
void RotateBlock();
std::vector<Block> blocks;
Block currentBlock;
Block nextBlock;
};