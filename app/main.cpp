// app/main.cpp

#include <development_markers.hpp>
#include <print>

[[nodiscard]] auto some_func(mut int& x) noexcept -> int
{
    return x + 1;
}

auto main() -> int
{
    std::println(
        "Hello, Template! Don't forget to adjust the project name in the CMakeLists.txt "
        "and the namespace in src/*.cpp files"
    );
}
