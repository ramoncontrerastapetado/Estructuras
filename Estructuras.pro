TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH+= $$PWD\lib\ARMA

#LIBS+=&&PWD\bin\win32_release\liblapack
#LIBS+=&&PWD\bin\win32_release\libblas
# += &&PWD\bin\BLAS_LAPACK\blas_win32_MTd

SOURCES += main.cpp \
    matrizrigidez.cpp \
    nudo.cpp \
    barra.cpp

HEADERS += \
    matrizrigidez.h \
    nudo.h \
    barra.h \
    tipos.h



win32:CONFIG(release, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -lblas_win32_MT
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -lblas_win32_MTd

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -llapack_win32_MT
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -llapack_win32_MTd


#win64:CONFIG(release, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -lblas_win64_MT
#else:win64:CONFIG(debug, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -lblas_win64_MTd

#win64:CONFIG(release, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -llapack_win64_MT
#else:win64:CONFIG(debug, debug|release): LIBS += -L$$PWD/bin/BLAS_LAPACK/ -llapack_win64_MTd

target.path = Compilados/$$TARGET
INSTALLS += target
