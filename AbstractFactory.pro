QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    factory.cpp \
    main.cpp \
    mainwindow.cpp \
    reishabu-salad-factory.cpp \
    salad.cpp \
    vegetable-salad-factory.cpp

HEADERS += \
    factory.h \
    mainwindow.h \
    reishabu-salad-factory.h \
    salad.h \
    vegetable-salad-factory.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    assets/assets.qrc

DISTFILES += \
    assets/reishabu-salad.png
