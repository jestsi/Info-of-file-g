QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    file_actions_window.cpp \
    main.cpp \
    about.cpp \
    info_of_file.cpp \
    warning.cpp \
    settings.cpp \

HEADERS += \
    about.h \
    file_actions_window.h \
    info_of_file.hpp \
    warning.h \
    settings.h

RESOURCES += qrc.qrc

FORMS += \
   file_actions_window.ui \
   warning.ui \
   settings.ui \
   about.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
