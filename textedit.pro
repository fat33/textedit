QT += widgets dbus
requires(qtConfig(filedialog))
qtHaveModule(printsupport): QT += printsupport

TEMPLATE        = app
TARGET          = textedit

HEADERS         = textedit.h \
    texteditadaptor.h \
    texteditinterface.h
SOURCES         = textedit.cpp \
                  main.cpp \
    texteditadaptor.cpp \
    texteditinterface.cpp

RESOURCES += textedit.qrc

#build_all:!build_pass {
#    CONFIG -= build_all
#    CONFIG += release
#}

#EXAMPLE_FILES = textedit.qdoc

DBUS_ADAPTORS += org.example.textedit.xml
DBUS_INTERFACES += org.example.textedit.xml

# install
target.path = /opt/textedit/bin
INSTALLS += target

DISTFILES += \
    org.example.textedit.xml
