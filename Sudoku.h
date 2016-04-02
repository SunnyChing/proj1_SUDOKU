//
//  sudoku.h
//  
//
//  Created by ching on 2016/3/23.
//
//


#include <cstdio>
#include<iostream>
#include<cstdlib>




//#define SUDOKU_SIZE 81
class Sudoku{
    public:
        Sudoku();
        Sudoku(const int init_map[]);
        void SetMap(const int init_map[]);
        void giveQuestion();// no input / output 81 digits
        void readIn(); //input 81 digits / no output
        void solve(); //no input (use the one in `readIn()`) / output your answer
        bool solver(Sudoku ques, Sudoku &ans);
	bool solver2(Sudoku ques, Sudoku &ans);
        bool isCorrect(); //check each row, column, and cell
        bool isCorrect_single(int firstZero); //check related row, column, and cell
        void setElement(int index,int value);
        void transform(); //no input (use the one in `readIn()`) / output 81 digits
        void changeNum(int a, int b); //no input / no output
        void changeRow(int a, int b); //no input / no output
        void changeCol(int a,int b); //no input / no output
        void rotate(int n); //no input / no output
        void flip(int n) ;//no input / no output
        static const int SUDOKU_SIZE = 81;
        void printout();
bool checkUnity(int arr[]);
    
    
    private:
    	bool sameAns(Sudoku ans,Sudoku ans2);
        //bool checkUnity(int arr[]);
        int getFirstZeroIndex(); //find the first zero 
        int Map[Sudoku::SUDOKU_SIZE];
    
};

