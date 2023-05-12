//これはvizで遊んだプログラム，今後実用的に実装していく

#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/viz.hpp>

int main(){
    cv::viz::Viz3d myWindow("IEEE");
    cv::viz::WSphere a(cv::Point3d(0, 0, 0), 3, 200, cv::viz::Color::red());
    myWindow.showWidget("IEEE", a);

    cv::viz::WCube sikaku(cv::Point3d(0, 0, 0), cv::Point3d(3, 3, 3), true, cv::viz::Color::green());
    myWindow.showWidget("IEE", sikaku);
    cv::viz::WCube sikak(cv::Point3d(0, 0, 0), cv::Point3d(3, 3, -3), true, cv::viz::Color::green());
    myWindow.showWidget("IE", sikak);
    cv::viz::WCube sika(cv::Point3d(0, 0, 0), cv::Point3d(3, -3, 3), true, cv::viz::Color::green());
    myWindow.showWidget("I", sika);
    cv::viz::WCube sik(cv::Point3d(0, 0, 0), cv::Point3d(3, -3, -3), true, cv::viz::Color::green());
    myWindow.showWidget("MYEEE", sik);
    cv::viz::WCube si(cv::Point3d(0, 0, 0), cv::Point3d(-3, 3, 3), true, cv::viz::Color::green());
    myWindow.showWidget("MYEE", si);
    cv::viz::WCube s(cv::Point3d(0, 0, 0), cv::Point3d(-3, 3, -3), true, cv::viz::Color::green());
    myWindow.showWidget("MYE", s);
    cv::viz::WCube kaku(cv::Point3d(0, 0, 0), cv::Point3d(-3, -3, 3), true, cv::viz::Color::green());
    myWindow.showWidget("MY", kaku);
    cv::viz::WCube ku(cv::Point3d(0, 0, 0), cv::Point3d(-3, -3, -3), true, cv::viz::Color::green());
    myWindow.showWidget("M", ku);

    myWindow.spin();

}
