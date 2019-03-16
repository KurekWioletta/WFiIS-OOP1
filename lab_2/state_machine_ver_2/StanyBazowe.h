#pragma once

#include "Stan.h"
#include <iostream> 
#include <string>
#include <vector>

class DostepneSystemy : public Stan{
	public:
		// Nie róbcie tego w domu...
		DostepneSystemy(const std::string * tab, unsigned int counter)
			: m_counter(counter)
		{ 
			m_systList = new std::string[ m_counter ];
			for( unsigned int i = 0; i<m_counter; ++i )
			{
				m_systList[i] = tab[i];
			}
		}
		
		~DostepneSystemy()
		{
			delete[] m_systList;
		}

		virtual void operator()() {
			std::cout << "Program mozna uruchomic na nastepujacych systemach: " << std::endl;
			for ( unsigned int i= 0; i < m_counter; i++ )
				std::cout << "   " << i+1 << ". " << m_systList[i] << std::endl;
		}
		
		virtual const char* nazwa() const { 
			return "DostepneSystemy";
		}
		
		virtual void podsumowanie() const {
			return;
		}
		
	private:
		std::string * m_systList;
		unsigned int m_counter;
};

class Instalacja : public Stan {
	public:
		virtual void operator()() {
			std::cout << "Instalacja w toku... " << std::endl;
			std::cout << "OK!" << std::endl;
		}
		
		virtual const char* nazwa() const { 
			return "Instalacja";
		}
		
		virtual void podsumowanie() const {
			return;
		};
};

class ZbieranieDanych : public Stan {
	public:
		ZbieranieDanych(std::string param) {
			Stan::m_email = "Nowak@mail.com";
			Stan::m_param = param;
		};
		
		virtual void operator()() {
			std::cout << "Prosze podac dana: " << Stan::m_param << 
			" = ?, podano " << Stan::m_email << std::endl;
		}
		
		virtual const char* nazwa() const { 
			return "ZbieranieDanych";
		}
};

class Podsumowanie : public Stan {
	public:
		Podsumowanie(){};

		virtual void operator()() {
			std::cout << "Podsumowanie: " << std::endl;
 			std::cout << "* " << Stan::m_param << " = " << Stan::m_email << std::endl;
		}

		virtual const char* nazwa() const { 
			return "Podsumowanie";
		}
};