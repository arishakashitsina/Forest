cmake_minimum_required(VERSION 3.13)

project(Forest)

find_package(SFML COMPONENTS window graphics REQUIRED)

add_executable(Forest
	Animal.cpp
	Carnivore.cpp
	Cat.cpp
	Cow.cpp
	Creature.cpp
	Fish.cpp
	Herbivore.cpp
	Lion.cpp
	Forest.cpp
	Flower.cpp
	Mushroom.cpp
	Penguin.cpp
	Plant.cpp
	Sparrow.cpp
	Sundew.cpp
	main.cpp
)
target_link_libraries(Forest PRIVATE sfml-window sfml-graphics)
install(TARGETS Forest)
