#ifndef TEXTEDITINTERFACE_H
#define TEXTEDITINTERFACE_H

#include <QObject>
#include <QDBusAbstractInterface>


class TextEditInterface : public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.example.textedit"; }

public:
    TextEditInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~TextEditInterface();

Q_SIGNALS: // SIGNALS
    void message(int pid, int cursor, const QString &text);
    void modified(int pid, const QString &file, bool flag);
    void action(int pid);
};

namespace org {
  namespace example {
    typedef ::TextEditInterface textedit;
  }
}
#endif // TEXTEDITINTERFACE_H
