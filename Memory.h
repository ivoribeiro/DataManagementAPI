/* 
 * File:   Memory.h
 * Author: ivo
 *
 * Created on 12 de Dezembro de 2015, 0:13
 */

#ifndef MEMORY_H
#define	MEMORY_H

#ifdef	__cplusplus
extern "C" {
#endif

void * elementMemoryAdress(void * list, const unsigned int structTypeSize, const unsigned int elementNumber);


#ifdef	__cplusplus
}
#endif

#endif	/* MEMORY_H */

