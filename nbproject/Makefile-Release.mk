#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Cast.o \
	${OBJECTDIR}/Compare.o \
	${OBJECTDIR}/DataManagement.o \
	${OBJECTDIR}/Get.o \
	${OBJECTDIR}/List.o \
	${OBJECTDIR}/Memory.o \
	${OBJECTDIR}/Print.o \
	${OBJECTDIR}/Read.o \
	${OBJECTDIR}/ReadADT.o \
	${OBJECTDIR}/Search.o \
	${OBJECTDIR}/Time.o \
	${OBJECTDIR}/TipoUtilizadorController.o \
	${OBJECTDIR}/TipoUtilizadorModel.o \
	${OBJECTDIR}/UtilizadorController.o \
	${OBJECTDIR}/UtilizadorModel.o \
	${OBJECTDIR}/Utils.o \
	${OBJECTDIR}/ViagemController.o \
	${OBJECTDIR}/ViagemModel.o \
	${OBJECTDIR}/file.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/main_teste.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/datamanagementapi

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/datamanagementapi: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/datamanagementapi ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Cast.o: Cast.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Cast.o Cast.c

${OBJECTDIR}/Compare.o: Compare.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Compare.o Compare.c

${OBJECTDIR}/DataManagement.o: DataManagement.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DataManagement.o DataManagement.c

${OBJECTDIR}/Get.o: Get.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Get.o Get.c

${OBJECTDIR}/List.o: List.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/List.o List.c

${OBJECTDIR}/Memory.o: Memory.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Memory.o Memory.c

${OBJECTDIR}/Print.o: Print.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Print.o Print.c

${OBJECTDIR}/Read.o: Read.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Read.o Read.c

${OBJECTDIR}/ReadADT.o: ReadADT.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ReadADT.o ReadADT.c

${OBJECTDIR}/Search.o: Search.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Search.o Search.c

${OBJECTDIR}/Time.o: Time.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Time.o Time.c

${OBJECTDIR}/TipoUtilizadorController.o: TipoUtilizadorController.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TipoUtilizadorController.o TipoUtilizadorController.c

${OBJECTDIR}/TipoUtilizadorModel.o: TipoUtilizadorModel.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TipoUtilizadorModel.o TipoUtilizadorModel.c

${OBJECTDIR}/UtilizadorController.o: UtilizadorController.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UtilizadorController.o UtilizadorController.c

${OBJECTDIR}/UtilizadorModel.o: UtilizadorModel.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/UtilizadorModel.o UtilizadorModel.c

${OBJECTDIR}/Utils.o: Utils.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Utils.o Utils.c

${OBJECTDIR}/ViagemController.o: ViagemController.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ViagemController.o ViagemController.c

${OBJECTDIR}/ViagemModel.o: ViagemModel.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ViagemModel.o ViagemModel.c

${OBJECTDIR}/file.o: file.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/file.o file.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/main_teste.o: main_teste.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_teste.o main_teste.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/datamanagementapi

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
