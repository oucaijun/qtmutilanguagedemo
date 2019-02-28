#-------------------------------------------------
#
# Project created by QtCreator 2019-02-28T00:11:21
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app

TARGET = bin/multilanguage
OBJECTS_DIR = bin
MOC_DIR = bin
UI_DIR = bin

SOURCES +=  src/main.cpp\
         src/mainwindow.cpp \
    src/dialog.cpp

HEADERS  += src/mainwindow.h \
    src/dialog.h

FORMS    += src/mainwindow.ui \
    src/dialog.ui

OTHER_FILES += \
    src/lanlib/my_zh.ts \
    src/lanlib/my_zh2.ts

#TRANSLATIONS+=  便于指导lupdate  untitled23.pro 自动生成ts文件, 如果不想自动生成就要去掉这句。
TRANSLATIONS += src/lanlib/my_zh.ts
TRANSLATIONS += src/lanlib/my_zh2.ts

#lupdate  multilanguage.pro  -ts src/lanlib/my_zh.ts  ; TRANSLATIONS 指定了这里就不需要了。
#lupdate  multilanguage.pro  -ts src/lanlib/my_zh2.ts ; TRANSLATIONS 指定了这里就不需要了。
#linguist src/lanlib/my_zh.ts   ; save release
#linguist src/lanlib/my_zh2.ts  ; save release
