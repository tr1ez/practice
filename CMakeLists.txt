cmake_minimum_required(VERSION 3.10)
project(ImageCompressor)

set(SFML_DIR "D:/projects/practice_aktualnaya/SFML/lib/cmake/SFML")

find_package(SFML COMPONENTS graphics window system REQUIRED)

#find_path(SFML_INCLUDE_DIR NAMES SFML/Graphics.hpp PATHS "D:/projects/practice_aktualnaya/SFML/include")
#find_library(SFML_GRAPHICS_LIBRARY NAMES sfml-graphics PATHS "D:/projects/practice_aktualnaya/SFML/lib")
#find_library(SFML_SYSTEM_LIBRARY NAMES sfml-system PATHS "D:/projects/practice_aktualnaya/SFML/lib")
#find_library(SFML_WINDOW_LIBRARY NAMES sfml-window PATHS "D:/projects/practice_aktualnaya/SFML/lib")

# Add source files
set(SOURCE_FILES
    main.cpp
    DCTCompression.cpp
    FractalCompression.cpp
    Huffman.cpp
    LZWCompressor.cpp
    RLECompressor.cpp)

# Add executable
add_executable(ImageCompressor ${SOURCE_FILES})

# Link SFML library
target_link_libraries(ImageCompressor PRIVATE sfml-graphics sfml-window sfml-system)