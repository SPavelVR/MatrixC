cmake_minimum_required(VERSION 4.0.0 FATAL_ERROR)

project(matrixU VERSION 0.1 LANGUAGES C)


set(FILES   src/matrixMath.c
            src/initMatrix.c
            src/matrixTransform.c

            src/vectorMath.c

            src/VMMath.c
            src/matrixOpenGL.c
            )

# Создаем библиотеку
add_library(${PROJECT_NAME} STATIC ${FILES})  # STATIC для статической, SHARED для динамической

# Указываем где искать заголовочные файлы
target_include_directories(${PROJECT_NAME} PUBLIC include)