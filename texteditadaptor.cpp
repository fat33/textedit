#include "texteditadaptor.h"

TextEditAdaptor::TextEditAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    setAutoRelaySignals(true);
}

TextEditAdaptor::~TextEditAdaptor()
{

}
