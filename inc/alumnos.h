/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

/**
 * @brief Se definie el tipo de campos de la estrutura alumnos_s
 * 
 */

typedef struct alumno_s {
    char apellidos[30];     //!< Instancia de apellidos.
    char nombres[30];       //!< Instancia de nombres.  
    char documento[11];     //!< Instancia de DNI (Arg) o CC (Col).
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
 * @brief Funcion SerializarAlumno
 * Crea cadena de caractares con datos del alumno
 * @param cadena    Puntero string en donde se almacenan los datos de alumno.  
 * @param espacio   Entero sin signo.
 * @param alumno    Variable de la estructura alumno_s
 * @return true 
 * @return false 
 */
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
 * @brief Funcion SerializarAlumno
 * imprime cadena de caractares con datos del alumno
 * @param cadena    Puntero string en donde se almacenan los datos de alumno.  
 * @param espacio   Entero sin signo.
 * @return true 
 * @return false 
 */
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
