//
// Created by whip on 2026/6/1.
//
int main()
{
    circle *p;
    circle c;
    p = &c;
    p->area_message("The area of circle is ");

    sphere s;
    p = &s;
    p->area_message("The area of sphere is ");
}