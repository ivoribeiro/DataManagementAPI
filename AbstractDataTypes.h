/* 
 * File:   AbstractDataTypes.h
 * Author: ivo
 *
 * Created on 13 de Dezembro de 2015, 1:27
 */

#ifndef ABSTRACTDATATYPES_H
#define	ABSTRACTDATATYPES_H

#ifdef	__cplusplus
extern "C" {
#endif
#include "DataTypes.h"

    /*
     * @atribute name - Class name ( name of the table )
     * @atribute primaryKeyField - Number of primary key field
     * @atribute data - memory adress of the struct that contains all the class registries   
     * @atribute StructTypeSize - Bytes size of the data struct type
     * @atribute auxStruct - Memory adress of the struct that contains all the fields information
     * @atribute elements - Memory adress  of the variable that contains the actual number of data struct registries ( table registries number )
     * @atribute aliasField - Number of the auxStruct field that is going to be displayed if a foreign key requested
     */
    typedef struct {
        char name[20];
        unsigned short primaryKeyField;
        void *data;
        unsigned int StructTypeSize;
        void *auxStruct;
        unsigned short *elements;
        unsigned int fieldsNumber;
        unsigned int aliasField;
        char fileName[SHORT_STRING];
    } Model;

    /*
     *@atribute fieldName- Name of the field ( table field )
     *@atribute alias - Name that is going to be displayed on lists 
     *@atribute  type - Field data type
     *@atribute required - If the field is required or if can be leaved in white
     *@atribute unique - If the field can have replications( functionality not implemented ) 
     *@atribute autoIncrement - If the field is auto incremental 
     *@atribute primaryKey - If the field is a primary key of the table
     *@atribute foreignKey - If the field is a foreign key and have relation with other table
     *@atribute parentClass -Memory adress of the Class (table) that is related too
     *@atribute parentPrimaryKey - Number of the primary key field that is going to be relationated
     *@atribute step - Number of step if the field is auto incremental ex: step 1: 1,2,3,4 ; step 2 :1,3,5,7 ;
     *@atribute sizeBytes - Bytes size of the field type
     *@atribute minSize - Minimum size of the field ( functionality not implemented )
     *@atribute maxSize - Maximum size of the field ( functionality not implemented )   
     *@atribute substruct - Memory adress of the Class (case this field is a struct ) ( functionality not implemented )
     */
    typedef struct {
        char fieldName[MEDIUM_STRING];
        char alias[MEDIUM_STRING];
        DataType type;
        bool required;
        bool unique;
        bool autoIncrement;
        bool primaryKey;
        bool foreignKey;
        Model *parentClass;
        unsigned short parentPrimaryKey;
        unsigned int step;
        TypeSize sizeBytes;
        unsigned int minSize;
        unsigned int maxSize;
        void *substructClass;
        bool date;
    } FieldAux;

#ifdef	__cplusplus
}
#endif

#endif	/* ABSTRACTDATATYPES_H */

