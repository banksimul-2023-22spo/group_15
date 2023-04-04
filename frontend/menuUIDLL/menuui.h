#ifndef MENUUI_H
#define MENUUI_H

#include <QDialog>
#include "menuUIDLL_global.h"

namespace Ui {
class menuUI;
}

class MENUUIDLL_EXPORT menuUI : public QDialog
{
    Q_OBJECT

public:
    explicit menuUI(QWidget *parent = nullptr);
    ~menuUI();

public slots:
    void saldoClickHandler();
    void nostoClickHandler();
    void tiliClickHandler();
    void kirjauduUloshandler();

private:
    Ui::menuUI *ui;
    //saldoUI * pSaldoUI;
    //nostoUI * pnostoUI;
    //tiliUI * ptiliUI;
};

#endif // MENUUI_H
