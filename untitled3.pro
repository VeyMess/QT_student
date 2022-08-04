QT += gui
QT += widgets

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        descipline.cpp \
        main.cpp \
        mainwindow.cpp \
        quarteldate.cpp \
        student.cpp \
        studentviewlist.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    descipline.h \
    mainwindow.h \
    quarteldate.h \
    student.h \
    studentviewlist.h

FORMS += \
    mainwindow.ui \
    studentviewlist.ui
