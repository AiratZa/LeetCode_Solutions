# CMakeList.txt: проект CMake для LeetCode_Solutions; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)


# Добавьте источник в исполняемый файл этого проекта.
add_executable (LeetCode_Solutions "LeetCode_Solutions.cpp" "LeetCode_Solutions.h" "May_2021/WordFilter.h" "May_2021/CourseSchedule_3.h" 
				"Easy/ReverseInteger.h" "Medium/AddTwoNumbers.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
