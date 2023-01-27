#pragma once


class Animals{
public:
    
    Animals();
    ~Animals(){}
    
    virtual void speak() = 0;
    
    
    
};


class Dogs : public Animals {
public:
    Dogs();
    ~Dogs(){}
    
    void speak();
};


class Cats : public Animals {
public:
    Cats();
    ~Cats(){}
    
    void speak();
};


class Budgies : public Animals {
    
public:
    
    Budgies();
    ~Budgies(){}
    
    void speak();
};


