#ifndef ejemplo1_H
#define ejemplo1_H

#include <QtGui>
#include "ui_counterDlg.h"

class ejemplo1 : public QWidget, public Ui_Counter
{
Q_OBJECT
public:
    ejemplo1();
    virtual ~ejemplo1();
    QTimer *timer;
    bool activo;
    
public slots:
	void doButton();
    void doTimer();
};

#endif // ejemplo1_H
