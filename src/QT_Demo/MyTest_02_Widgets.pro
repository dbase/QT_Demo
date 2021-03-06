#-------------------------------------------------
#
# Project created by QtCreator 2019-09-30T13:25:52
#
#-------------------------------------------------

QT       += core gui
QT       += charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyTest_02_Widgets
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        chart_form.cpp \
        combobox_plaintextedit_form.cpp \
        custom_dialog_form.cpp \
        date_time_form.cpp \
        entry_form.cpp \
        form1.cpp \
        listwidgets_form.cpp \
        main.cpp \
        multiwindow.cpp \
        qwdialogheaders.cpp \
        qwdialogsize.cpp \
        slider_scrollbar_form.cpp \
        spinbox_form.cpp \
        stacked_form1.cpp \
        stacked_form2.cpp \
        stacked_form3.cpp \
        stacked_widget_form.cpp \
        standard_dialog_form.cpp \
        string_list_model_form.cpp \
        timer_form.cpp \
        toolbutton_action_form.cpp \
        widget.cpp

HEADERS += \
        chart_form.h \
        combobox_plaintextedit_form.h \
        custom_dialog_form.h \
        date_time_form.h \
        entry_form.h \
        form1.h \
        listwidgets_form.h \
        multiwindow.h \
        qwdialogheaders.h \
        qwdialogsize.h \
        slider_scrollbar_form.h \
        spinbox_form.h \
        stacked_form1.h \
        stacked_form2.h \
        stacked_form3.h \
        stacked_widget_form.h \
        standard_dialog_form.h \
        string_list_model_form.h \
        timer_form.h \
        toolbutton_action_form.h \
        widget.h

FORMS += \
        chart_form.ui \
        combobox_plaintextedit_form.ui \
        custom_dialog_form.ui \
        date_time_form.ui \
        entry_form.ui \
        form1.ui \
        listwidgets_form.ui \
        multiwindow.ui \
        qwdialogheaders.ui \
        qwdialogsize.ui \
        slider_scrollbar_form.ui \
        spinbox_form.ui \
        stacked_form1.ui \
        stacked_form2.ui \
        stacked_form3.ui \
        stacked_widget_form.ui \
        standard_dialog_form.ui \
        string_list_model_form.ui \
        timer_form.ui \
        toolbutton_action_form.ui \
        widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../../lib/

INCLUDEPATH += $$PWD/../../include
DEPENDPATH += $$PWD/../../include
