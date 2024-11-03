#include "app.h"

namespace vsite::oop::v2
{
/*
* class member function implementations
*/

    std::string to_hex(int value)
    {
        return std::format("{:X}", value);
    }


    color::color() : red(0.0), green(0.0), blue(0.0) {}

    color::color(const color& other) : red(other.red), green(other.green), blue(other.blue) {}

    void color::set_red(double r) 
    {
        if (r < 0)
            red = 0.;
        else if (r > 1)
            red = 1.;
        else
            red = r;
    }

    void color::set_green(double g)
    {
        if (g < 0)
            green = 0.;
        else if (g > 1)
            green = 1.;
        else
            green = g;
    }

    void color::set_blue(double b)
    {
        if (b < 0)
            blue = 0.;
        else if (b > 1)
            blue = 1.;
        else
            blue = b;
    }

    double color::get_red() const { return red; }
    double color::get_green() const { return green; }
    double color::get_blue() const { return blue; }

    color& color::operator=(const color& other)
    {
        if (this != &other)
        {
            red = other.red;
            green = other.green;
            blue = other.blue;
        }
        return *this;
    }
    
    uint32_t color::get_color_ref() const
    {
        return RGB((int)(red * 255), (int)(green * 255), (int)(blue * 255));
    }

    double color::get_luminance() const
    {
        return (0.2126 * red + 0.7152 * green + 0.0722 * blue);
    }

} // namespace
