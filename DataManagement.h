/* 
 * File:   DataManagement.h
 * Author: ivo
 *
 * Created on 24 de Novembro de 2014, 18:15
 */

#ifndef DATAMANAGEMENT_H
#define	DATAMANAGEMENT_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "DataTypes.h"
#include "AbstractDataTypes.h"
#include "Cast.h"
#include "Print.h"
#include "Get.h"
#include "Compare.h"
#include "Search.h"
#include "Time.h"
#include "List.h"
#include "Memory.h"
#include "Read.h"
#include "Date.h" 


    /*
     *Interface implementation ( not completed )
     */

    //    typedef struct {
    //        void (*listRegistry)(void *, FieldAux *, unsigned);
    //        void (*fullList)(void *, const unsigned short, const unsigned int, FieldAux *, const unsigned int);
    //        void (*parsedList)(void *, const unsigned short, FieldAux *, int *, unsigned, int *, unsigned);
    //    } List;
    //
    //    typedef struct {
    //        void(*fullRead)(RequestType, const unsigned short, void *, const unsigned int, FieldAux *, const unsigned int);
    //        void(*parsedRead)(RequestType, void *, FieldAux *, int *, unsigned, int *, unsigned);
    //        void(*readRegistry)(RequestType, void *, FieldAux *, unsigned);
    //
    //    } Read;
    //
    //    typedef struct {
    //        void (*create)(Model * model) ;
    //        Read read;
    //        void (*update)();
    //        void (*delete)();
    //        List list;
    //    } crud;

    void create(Model * model);
    void update(Model * model, const unsigned short index);
    void delete(Model *model, const unsigned short index);


#ifdef	__cplusplus
}
#endif

#endif	/* DATAMANAGEMENT_H */

