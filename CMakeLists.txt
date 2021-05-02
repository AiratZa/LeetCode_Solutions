# CMakeList.txt: файл проекта CMake верхнего уровня; проведите глобальную конфигурацию
# и включите сюда подпроекты.
#
cmake_minimum_required (VERSION 3.8)

project ("LeetCode_Solutions")

# Включите подпроекты.
add_subdirectory ("LeetCode_Solutions")

enable_testing()
add_subdirectory ("Tests")
