#include <iostream>
#include <exception>
#include <stdexcept>
#include <string>

// Define a custom exception class derived from std::exception
class CustomException : public std::exception {
public:
    explicit CustomException(const std::string& message) : msg_(message) {}
    const char* what() const noexcept override {
        return msg_.c_str();
    }
private:
    std::string msg_;
};

bool do_even_more_custom_application_logic()
{
    // TODO: Throw any standard exception
    throw std::runtime_error("Standard Exception: An error occurred in do_even_more_custom_application_logic.");

    std::cout << "Running Even More Custom Application Logic." << std::endl;

    return true;
}

void do_custom_application_logic()
{
    // TODO: Wrap the call to do_even_more_custom_application_logic()
    //  with an exception handler that catches std::exception, displays
    //  a message and the exception.what(), then continues processing
    std::cout << "Running Custom Application Logic." << std::endl;

    try {
        if (do_even_more_custom_application_logic()) {
            std::cout << "Even More Custom Application Logic Succeeded." << std::endl;
        }
    } catch (const std::exception& ex) {
        // Handle the standard exception and display its message
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    // TODO: Throw a custom exception derived from std::exception
    //  and catch it explicitly in main
    throw CustomException("Custom Exception: An error occurred in do_custom_application_logic.");

    std::cout << "Leaving Custom Application Logic." << std::endl;
}

float divide(float num, float den)
{
    // TODO: Throw an exception to deal with divide by zero errors using
    //  a standard C++ defined exception
    if (den == 0) {
        throw std::invalid_argument("Division by zero is not allowed.");
    }

    return (num / den);
}

void do_division() noexcept
{
    //  TODO: create an exception handler to capture ONLY the exception thrown
    //  by divide.

    float numerator = 10.0f;
    float denominator = 0;

    try {
        auto result = divide(numerator, denominator);
        std::cout << "divide(" << numerator << ", " << denominator << ") = " << result << std::endl;
    } catch (const std::invalid_argument& ex) {
        // Handle division by zero error
        std::cerr << "Error: " << ex.what() << std::endl;
    }
}

int main()
{
    try {
        std::cout << "Exceptions Tests!" << std::endl;

        // Call the functions that test exception handling
        do_division();
        do_custom_application_logic();

    } catch (const CustomException& ex) {
        // TODO: Create exception handlers that catch (in this order):
        //  your custom exception
        std::cerr << "Caught Custom Exception: " << ex.what() << std::endl;
    } catch (const std::exception& ex) {
        //  std::exception
        std::cerr << "Caught Standard Exception: " << ex.what() << std::endl;
    } catch (...) {
        //  uncaught exception
        std::cerr << "Caught an unknown exception!" << std::endl;
    }

    return 0;
}