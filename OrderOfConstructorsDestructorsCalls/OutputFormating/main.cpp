#include <iostream>
#include <iomanip>


int main() {
    
    //std:endl place a new line character on the outpu stream.
    //      This is identical to placing '\n' on the output stream.

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "-------------" << std::endl;

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    //========================================================
    std::cout << std::endl;

    //std::flush : flushes the output buffer to its final destination.
    std::cout << "This is a nice message...." << std::endl << std::flush;
    // After this std::flush, we're sure that at this line, the message has been sent
    // to the stream. This may be important in some applications.

    //========================================================
    std::cout << std::endl;

    std::cout << "Unformatted table : " << std::endl;
    std::cout << "Daniel" << " " << " Grey " << " 25 " << std::endl;
    std::cout << "Stanley" << " " << " Woods " << " 33 " << std::endl;
    std::cout << "Jordan" << " " << " Parker " << " 45 " << std::endl;
    std::cout << "Joe" << " " << " Ball " << " 27 " << std::endl;
    std::cout << "Josh" << " " << " Carr " << " 27 " << std::endl;
    std::cout << "Izaiah" << " " << " Robinson " << " 29 " << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table : " << std::endl;

    std::cout << std::setw(10) << "Lastname" << std::setw(10) << " Firstname " << std::setw(5) << " Age " << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << " Grey " << std::setw(5) << " 25 " << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << " Woods " << std::setw(5) << " 33 " << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << " Parker " << std::setw(5) << " 45 " << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << " Ball " << std::setw(5) << " 27 " << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << " Carr " << std::setw(5) << " 27 " << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << " Robinson " << std::setw(5) << " 29 " << std::endl;

    //======================================================

    std::cout << std::endl;
    std::cout << "Right justified table(default) : " << std::endl;

    int col_width {20};

    std::cout << std::right;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << " Firstname " << std::setw(col_width) << " Age " << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << " Grey " << std::setw(col_width) << " 25 " << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << " Woods " << std::setw(col_width) << " 33 " << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << " Parker " << std::setw(col_width) << " 45 " << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << " Ball " << std::setw(col_width) << " 27 " << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << " Carr " << std::setw(col_width) << " 27 " << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << " Robinson " << std::setw(col_width) << " 29 " << std::endl;

    //======================================================

    std::cout << std::endl;
    std::cout << "Left justified table(default) : " << std::endl;

    std::cout << std::left;
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << " Firstname " << std::setw(col_width) << " Age " << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << " Grey " << std::setw(col_width) << " 25 " << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << " Woods " << std::setw(col_width) << " 33 " << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << " Parker " << std::setw(col_width) << " 45 " << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << " Ball " << std::setw(col_width) << " 27 " << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << " Carr " << std::setw(col_width) << " 27 " << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << " Robinson " << std::setw(col_width) << " 29 " << std::endl;


    //======================================================

    std::cout << std::endl;
    std::cout << "fill table(default) : " << std::endl;

    std::cout << std::left;
    std::cout << std::setfill('-');
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << " Firstname " << std::setw(col_width) << " Age " << std::endl;
    std::cout << std::setw(col_width) << "Daniel" << std::setw(col_width) << " Grey " << std::setw(col_width) << " 25 " << std::endl;
    std::cout << std::setw(col_width) << "Stanley" << std::setw(col_width) << " Woods " << std::setw(col_width) << " 33 " << std::endl;
    std::cout << std::setw(col_width) << "Jordan" << std::setw(col_width) << " Parker " << std::setw(col_width) << " 45 " << std::endl;
    std::cout << std::setw(col_width) << "Joe" << std::setw(col_width) << " Ball " << std::setw(col_width) << " 27 " << std::endl;
    std::cout << std::setw(col_width) << "Josh" << std::setw(col_width) << " Carr " << std::setw(col_width) << " 27 " << std::endl;
    std::cout << std::setw(col_width) << "Izaiah" << std::setw(col_width) << " Robinson " << std::setw(col_width) << " 29 " << std::endl;

    //======================================================

    int pos_num {34};
    int neg_num {-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;

    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;


    //======================================================
    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout << std::endl;
    std::cout << "default base format : " << neg_num << std::endl;  
    std::cout << "pos_int : " << pos_int << std::endl;
    std::cout << "neg_int : " << neg_int << std::endl;
    std::cout << "double_var : " << double_var << std::endl;

    std::cout << std::endl;
    std::cout << "pos_int in different bases : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_int << std::endl;

    //======================================================

    std::cout << std::endl;
    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex): " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct): " << std::oct << pos_int << std::endl;

    std::cout << std::endl;
    std::cout << "neg_int in different bases : " << std::endl;
    std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int (hex): " << std::hex << neg_int << std::endl;
    std::cout << "neg_int (oct): " << std::oct << neg_int << std::endl;


    //======================================================

    double a { 3.141592653535893238426433832795 };
    double b { 2006.0 };
    double c { 1.34e-10 };

    std::cout << std::endl;
    std::cout << "double values (default : use scientific where necessary) : " << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (fixed) : " << std::endl;
    std::cout << std::fixed;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (scientific) : " << std::endl;
    std::cout << std::scientific;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    std::cout << std::endl;
    std::cout << "double values (back to defaults) : " << std::endl;
    std::cout.unsetf(std::ios::scientific | std::ios::fixed); // Hack
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    std::cout << "c : " << c << std::endl;

    //======================================================
    //setprecision() : the number of digits printed out for a floating point. Default

    a = 3.141592653535893238426433832795;

    std::cout << std::endl;
    std::cout << "a (default precision(6)) : " << std::endl;
    std::cout << std::setprecision(10);
    std::cout << "a (precision(10)) : " << a << std::endl;
    std::cout << std::setprecision(20);
    std::cout << "a (precision(20)) : " << a << std::endl;


    //======================================================
    // Force output of the decimal point

    double d {34.1};
    double e {101.99};
    double f {12.0};
    double g {45};

    std::cout << std::endl;
    std::cout << "noshowpoint (default) : " << std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    std::cout << std::endl;
    std::cout << "showpoint (default) : " << std::endl;
    std::cout << std::showpoint;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;
    std::cout << "g : " << g << std::endl;

    return 0;
}