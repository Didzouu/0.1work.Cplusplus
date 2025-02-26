#include<iostream>

using namespace std;

void main()
{

    //float side1;
    //cout << "Enter side1 : ";
    //cin >> side1;
    //float side2;
    //cout << "Enter side2 : ";
    //cin >> side2;
    //float side3;
    //cout << "Enter side3 : ";
    //cin >> side3;

    //if (side1 == side2 && side2 ==side3 && side3 == side1)
    //{
    //    cout << "right triangle";
    //}
    //else if ((side1 * side1 + side2 * side2 == side3 * side3) || (side2 * side2 + side3 * side3 == side3 * side1 )|| (side1 * side1 + side3 * side3 == side3 * side3))
    //{
    //    cout << "right rectangular";
    //}
    //else if ((side1 == side2 != side3) || (side3 == side2 != side1) || (side3 == side1 !=side2))
    //{
    //    cout << "right isosceles";
    //}



    float height_brick;
    cout << "Enter height_brick : ";
    cin >>height_brick;
    float width_brick;
    cout << "Enter width_brick : ";
    cin >> width_brick;

    float height_a_hole;
    cout << "Enter height_a hole : ";
    cin >> height_a_hole;
    float width_a_hole;
    cout << "Enter width_a_hole : ";
    cin >> width_a_hole;


    if (height_brick * width_brick < height_a_hole * width_a_hole)
    {
        cout << "the brick will fit into the hole";
    }
    if (height_brick * width_brick > height_a_hole * width_a_hole)
    {
        cout << "the brick will not fit into the hole";
    }


}
