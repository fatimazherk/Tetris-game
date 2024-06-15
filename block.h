#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"
#include "raylib.h"

class Block{
    public:
    Block();
    void Draw();
    void Move(int rows,int columns);
    std::vector<Position> GetCellPositions();
    void Rotate();
    int id;
    std::map<int,std::vector<Position>> cells;

    private:
    int cellSize;
    int rotationSize;
    std::vector<Color> colors;
    int rowOffset;
    int columnOffset;
    
};