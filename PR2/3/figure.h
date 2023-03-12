#pragma once
class figure {
private:
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float S;
    float P;
    float a, b, c, d, d1, d2;
    float distance(float x1, float y1, float x2, float y2);
    float angleBetweenVectors(float x1, float x2, float y1, float y2);
public:
    figure(float _x1 = 0, float _x2 = 0, float _x3 = 0, float _x4 = 0, float _y1 = 0, float _y2 = 0, float _y3 = 0, float _y4 = 0);
    void show();
    bool is_prug();
    bool is_square();
    bool is_romb();
    bool is_in_circle();
    bool is_out_circle();
};