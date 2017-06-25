TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

#INCLUDEPATH+= $$PWD\lib\ARMA

#LIBS+=&&PWD\bin\win32 release\liblapack.lib
#LIBS+=&&PWD\bin\win32 release\libblas.lib

INCLUDEPATH+=D:\Programas\Estructuras\libs\eigen-eigen-5a0156e40feb
#INCLUDEPATH+=&&PWD\libs\eigen-eigen-5a0156e40feb

SOURCES += main.cpp \
    matrizrigidez.cpp \
    nudo.cpp \
    barra.cpp

HEADERS += \
    matrizrigidez.h \
    nudo.h \
    barra.h \
    tipos.h
