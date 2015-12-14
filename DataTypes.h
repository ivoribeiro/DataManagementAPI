/* 
 * File:   DataTypes.h
 * Author: ivo
 *
 * Created on 13 de Dezembro de 2015, 1:26
 */

#ifndef DATATYPES_H
#define	DATATYPES_H

#ifdef	__cplusplus
extern "C" {
#endif
    typedef int bool;
#define true 1
#define false 0

    typedef unsigned short TypeSize;
#define CHAR_SIZE sizeof(char)
#define FLOAT_SIZE sizeof(float)
#define INT_SIZE sizeof(int)
#define SHORT_SIZE sizeof(short)
#define UNSIGNED_SHORT_SIZE sizeof(unsigned short)
#define UNSIGNED_INT_SIZE sizeof(unsigned int)
#define BOOL_SIZE sizeof(bool)
#define DATE_SIZE sizeof(Date)

#define NO_VALUE -1

#define SHORT_STRING 28
#define MEDIUM_STRING 80
#define LONG_STRING 260 

#define MAX_RESULTS 50

    /*
     * Data Types
     */
    typedef enum {
        INT,
        SHORT,
        UNSIGNED,
        STRING,
        CHAR,
        VOID,
        FLOAT,
        UNSIGNED_SHORT,
        UNSIGNED_INT,
        STRUCT,
        BOOL,
        DATE
    } DataType;

    /*
     * Type of request ( functionality not implemented )
     */
    typedef enum {
        CREATE,
        UPDATE,
        LIST,
        DELETE
    } RequestType;


#ifdef	__cplusplus
}
#endif

#endif	/* DATATYPES_H */

