#ifndef TEXTEDITADAPTOR_H
#define TEXTEDITADAPTOR_H

#include <QObject>
#include <QDBusAbstractAdaptor>

class TextEditAdaptor : public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.example.textedit")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.example.textedit\">\n"
"    <signal name=\"message\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"pid\"/>\n"
"      <arg direction=\"out\" type=\"i\" name=\"cursor\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"text\"/>\n"
"    </signal>\n"
"    <signal name=\"action\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"pid\"/>\n"
"    </signal>\n"
"    <signal name=\"modified\">\n"
"      <arg direction=\"out\" type=\"i\" name=\"pid\"/>\n"
"      <arg direction=\"out\" type=\"s\" name=\"file\"/>\n"
"      <arg direction=\"out\" type=\"b\" name=\"flag\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    TextEditAdaptor(QObject *parent);
    virtual ~TextEditAdaptor();
Q_SIGNALS: // SIGNALS
    void message(int pid, int cursor, const QString &text);
    void modified(int pid, const QString &file, bool flag);
    void action(int pid);
};

#endif // TEXTEDITADAPTOR_H
