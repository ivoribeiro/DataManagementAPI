/* 
 * File:   Cast.h
 * Author: ivo
 *
 * Created on 11 de Dezembro de 2015, 18:22
 */

#ifndef CAST_H
#define	CAST_H

#ifdef	__cplusplus
extern "C" {
#endif



    char * castString(const void *s);
    char castChar(const void *c);
    int castInt(const void *i);
    short castShort(const void *sh);
    unsigned int castUnsignedInt(const void *ui);
    float castFloat(const void *f);






#ifdef	__cplusplus
}
#endif

#endif	/* CAST_H */

