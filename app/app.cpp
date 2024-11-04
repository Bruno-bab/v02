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
        red = std::clamp(r, 0., 1.);
    }

    void color::set_green(double g)
    {
        green = std::clamp(g, 0., 1.);
    }

    void color::set_blue(double b)
    {
        blue = std::clamp(b, 0., 1.);
    }

    double color::get_red() const { return red; }
    double color::get_green() const { return green; }
    double color::get_blue() const { return blue; }
    
    uint32_t color::get_color_ref() const
    {
        return RGB((int)(red * 255), (int)(green * 255), (int)(blue * 255));
    }

    double color::get_luminance() const
    {
        return (0.2126 * red + 0.7152 * green + 0.0722 * blue);
    }

} // namespace
