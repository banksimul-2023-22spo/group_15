#ifndef SINGOUTTIMERINTERFACE_H
#define SINGOUTTIMERINTERFACE_H

#include "signoutTimerDLL_global.h"
#include "signouttimerengine.h"

#include <QDebug>
#include <QDialog>

namespace Ui {
class SingoutTimerInterface;
}

class SIGNOUTTIMERDLL_EXPORT SingoutTimerInterface : public QDialog
{
    Q_OBJECT

public:
    explicit SingoutTimerInterface(QWidget *parent = nullptr);
    ~SingoutTimerInterface();
public slots:
    void agreeButtonHandler();
    void disagreeButtonHandler();

private:
    Ui::SingoutTimerInterface *ui;
    SignoutTimerEngine *Engine;
};

#endif // SINGOUTTIMERINTERFACE_H
