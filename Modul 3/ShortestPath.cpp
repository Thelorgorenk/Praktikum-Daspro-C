#include <bits/stdc++.h>
using namespace std;

// Dijkstra’s Algorithm
#define maxi 15

void printPath(int row, int col);
void pathSave(int initDenah[maxi][maxi], char denah[maxi][maxi], int row, int column, int rowN, int columnN, int min_dist);
int shortestPath(int iter, int initDenah[maxi][maxi], char denah[maxi][maxi], int rowN, int columnN);

char denah[maxi][maxi];
int initDenah[maxi][maxi];

int main()
{
    int rowN, columnN, min_dist, rowTarget, columnTarget;
    cin >> rowN >> columnN;
    for (int i = 0; i < columnN; i++) for (int j = 0; j < rowN; j++)
    {
        cin >> denah[j][i];
        if (denah[j][i] == '#') initDenah[j][i] = 0;
        else if (denah[j][i] == 'A') initDenah[j][i] = 1;
        else if (denah[j][i] == 'B')
        {
            rowTarget = j;
            columnTarget = i;
        }
    }
    min_dist = shortestPath(1, initDenah, denah, rowN, columnN);
    pathSave(initDenah, denah, rowTarget, columnTarget, rowN, columnN, min_dist);
    printPath(rowN, columnN);
}

void printPath(int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++) cout << denah[j][i];
        cout << endl;
    }
}

void pathSave(int initDenah[maxi][maxi], char denah[maxi][maxi], int row, int column, int rowN, int columnN, int min_dist)
{
    if (min_dist == 1) return; // sampe habis
    if (initDenah[row-1][column] == min_dist && row > 0)
    {
        denah[row-1][column] = 'x';
        pathSave(initDenah, denah, row - 1, column, rowN, columnN, min_dist - 1);
    }
    if (initDenah[row][column-1] == min_dist && column > 0)
    {
        denah[row][column-1] = 'x';
        pathSave(initDenah, denah, row, column - 1, rowN, columnN, min_dist - 1);
    }
    if (initDenah[row+1][column] == min_dist && row <= rowN)
    {
        denah[row+1][column] = 'x';
        pathSave(initDenah, denah, row + 1, column, rowN, columnN, min_dist - 1);
    }
    if (initDenah[row][column+1] == min_dist && column <= columnN)
    {
        denah[row][column+1] = 'x';
        pathSave(initDenah, denah, row, column + 1, rowN, columnN, min_dist - 1);
    }
}

int shortestPath(int iter, int initDenah[maxi][maxi], char denah[maxi][maxi], int rowN, int columnN)
{
    for (int col = 0; col < columnN; col++) for (int row = 0; row < rowN; row++)
    {
        if (initDenah[row][col] == iter)
        {
            if (row > 0)
            {
                if (denah[row-1][col] == 'B') return iter;
                else if (initDenah[row-1][col] == 0 && denah[row-1][col] == '.') initDenah[row-1][col] = iter + 1;
            }
            if (col > 0)
            {
                if (denah[row][col-1] == 'B') return iter;
                else if (initDenah[row][col-1] == 0 && denah[row][col-1] == '.') initDenah[row][col-1] = iter + 1;
            }
            if (rowN >= row)
            {
                if (denah[row+1][col] == 'B') return iter;
                else if (initDenah[row+1][col] == 0 && denah[row+1][col] == '.') initDenah[row+1][col] = iter + 1;
            }
            if (columnN >= col)
            {
                if (denah[row][col+1] == 'B') return iter;
                else if (initDenah[row][col+1] == 0 && denah[row][col+1] == '.') initDenah[row][col+1] = iter + 1;
            }
        }
    }
    iter++;
    return shortestPath(iter, initDenah, denah, rowN, columnN);
}
