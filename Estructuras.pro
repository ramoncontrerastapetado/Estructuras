TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

#INCLUDEPATH+= $$PWD\lib\ARMA

#LIBS+=&&PWD\bin\win32 release\liblapack.lib
#LIBS+=&&PWD\bin\win32 release\libblas.lib


SOURCES += main.cpp \
    matrizrigidez.cpp \
    nudo.cpp \
    barra.cpp

HEADERS += \
    matrizrigidez.h \
    nudo.h \
    barra.h \
    tipos.h
