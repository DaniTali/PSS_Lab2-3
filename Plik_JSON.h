#pragma once
#include <iostream>
#include <fstream>
#include "ARX.h"
#include "json.hpp"

using json = nlohmann::json;

/**
 * @brief
 * Klasa odpowiedzialna za operacje na plikach JSON.
*/

class Plik_JSON
{


private:
	/**
	 * @brief Prywatne pole przechowujace nazwe pliku na ktorym
	 * odbywaja sie operacje plikowe klasy.
	*/
	std::string nazwaPliku;

public:
	/**
	 * @brief Konstruktor przyjmujacy domyslna nazwe pliku jako 
	 * data.json
	*/
	Plik_JSON();
	/**
	 * @brief Konstruktor przyjmujacy podana nazwe pliku .json
	 * @param nazwa podana nazwa pliku o rozszerzeniu .json
	*/
	Plik_JSON(std::string nazwa);
	/**
	 * @brief Metoda odczytujaca parametry obiektu ARX z pliku
	 * @param obiekt Obiekt ARX
	 * @param nazwa Nazwa wybranego obiektu znajdujacego sie w pliku
	 * @return 
	*/
	int odczytParametrow_Plik(ARX obiekt, std::string nazwa);
	/**
	 * @brief Metoda wpisujaca parametry podanego obiektu ARX do pliku.
	 * @param obiekt 
	 * @param nazwa Nazwa pod ktora zostana zapisane parametry obiektu w pliku.
	 * @return 
	*/
	int zapisParametrow_Plik(ARX obiekt, std::string nazwa);
	/**
	 * @brief Metoda zapisujaca symulacje do pliku
	 * @param obiekt 
	 * @param nazwa 
	 * @return 
	*/
	int zapisSymulacji(ARX obiekt, std::string nazwa);
	~Plik_JSON();

};

