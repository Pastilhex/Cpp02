#include <iostream>

struct Point {
    float x, y;
    Point(float x, float y) : x(x), y(y) {}
};

struct Triangle {
    Point p1, p2, p3;
    Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}
};

// Função para calcular coordenadas baricêntricas
void barycentricCoordinates(const Point& p, const Triangle& tri, float& alpha, float& beta, float& gamma) {
    float detT = (tri.p2.y - tri.p3.y) * (tri.p1.x - tri.p3.x) + (tri.p3.x - tri.p2.x) * (tri.p1.y - tri.p3.y);
    alpha = ((tri.p2.y - tri.p3.y) * (p.x - tri.p3.x) + (tri.p3.x - tri.p2.x) * (p.y - tri.p3.y)) / detT;
    beta = ((tri.p3.y - tri.p1.y) * (p.x - tri.p3.x) + (tri.p1.x - tri.p3.x) * (p.y - tri.p3.y)) / detT;
    gamma = 1.0f - alpha - beta;
}

// Função para verificar se um ponto está dentro de um triângulo
bool isPointInsideTriangle(const Point& p, const Triangle& tri) {
    float alpha, beta, gamma;
    barycentricCoordinates(p, tri, alpha, beta, gamma);
    return alpha >= 0.0f && beta >= 0.0f && gamma >= 0.0f;
}

int main() {
    Point pointToCheck(1.5f, 1.5f);
    Triangle triangle(Point(0.0f, 0.0f), Point(2.0f, 0.0f), Point(1.0f, 2.0f));

    if (isPointInsideTriangle(pointToCheck, triangle)) {
        std::cout << "O ponto está dentro do triângulo.\n";
    } else {
        std::cout << "O ponto está fora do triângulo.\n";
    }

    return 0;
}
