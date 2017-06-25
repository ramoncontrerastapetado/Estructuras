TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH+= $$PWD\lib\ARMA

#LIBS+=&&PWD\bin\win32_release\liblapack
#LIBS+=&&PWD\bin\win32_release\libblas
LIBS += "&&PWD\bin\BLAS_LAPACK\Win32\debug\blas_win32_MTd.lib"
LIBS += "&&PWD\bin\BLAS_LAPACK\Win32\debug\lapack_win32_MTd"
LIBS += "&&PWD\bin\BLAS_LAPACK\Win32\debug\ojete"

SOURCES += main.cpp \
    matrizrigidez.cpp \
    nudo.cpp \
    barra.cpp

HEADERS += \
    matrizrigidez.h \
    nudo.h \
    barra.h \
    tipos.h

target.path = Compilados/$$TARGET
INSTALLS += target
