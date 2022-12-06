QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gpa.cpp \
    login_register.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    gpa.h \
    login_register.h \
    mainwindow.h

FORMS += \
    login_register.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc \
    Resource2.qrc

DISTFILES += \
    stationery-icons-2022-11-22-22-38-16-utc/png/001-paper clip.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/002-scissors.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/003-pencil.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/004-sharpener.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/005-envelope.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/006-compass.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/007-push pin.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/008-cutter.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/009-stapler.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/010-paper holder.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/011-eraser.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/012-envelope.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/013-calendar.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/014-protactor.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/015-ruler.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/016-pinned notes.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/017-adhesive tape.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/018-suitcase.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/019-glue stick.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/020-printer.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/021-folder.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/022-inkwell.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/023-clipboard.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/024-crayon.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/025-paper.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/026-marker.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/027-fountain pen.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/028-highlighter.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/029-paint brush.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/030-pen.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/031-tape.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/032-calculator.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/033-hot glue gun.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/034-corrector.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/035-clock.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/036-clip.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/037-color.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/038-stamp.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/039-color palette.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/040-glue.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/041-flash disk.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/042-corrector.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/043-book.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/044-stapler remover.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/045-stationery.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/046-notebook.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/047-stationery.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/048-organizer.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/049-stationery.png \
    stationery-icons-2022-11-22-22-38-16-utc/png/050-stationery.png
