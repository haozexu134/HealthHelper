QT       += core gui
QT       += multimedia  multimediawidgets
QT       += multimedia
QT       += widgets
QT       +=core widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


# QMAKE_LFLAGS += /MANIFESTUAC:\"level=\'requireAdministrator\' uiAccess=\'false\'\"

SOURCES += \
    dialog.cpp \
    dialog_2.cpp \
    main.cpp \
    mainwindow.cpp \
    timer.cpp


HEADERS += \
    defbase.h \
    dialog.h \
    dialog_2.h \
    mainwindow.h \
    timer.h \
    ui_dialog.h \
    ui_dialog_2.h \
    ui_mainwindow2.h \
    ui_timer.h

FORMS += \
    dialog.ui \
    dialog_2.ui \
    mainwindow.ui \
    timer.ui
RC_FILE+= adminis.rc
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../Desktop/437506822-1-64.mp4 \
    ../../Desktop/videolib_repo_2107_20_7isx7trc0gc_SD_7isx7trc0gc-mobile_Trim.mp4 \
    resource/QQ图片20220729084515.jpg \
    resource/QQ图片20220729084515.jpg \
    resource/video1.mp4 \
    resource/video2.mp4 \
    uac.manifest

RESOURCES +=
