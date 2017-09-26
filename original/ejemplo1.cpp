#include "ejemplo1.h"

ejemplo1::ejemplo1(): Ui_Counter()
{
	setupUi(this);
	show();
	connect(button, SIGNAL(clicked()), this, SLOT(doButton()) );
    
    ///Prueba
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(doTimer()));
    timer->start(1000);
    //Bandera control
    activo = true;
}

ejemplo1::~ejemplo1()
{}

void ejemplo1::doButton()
{
	qDebug() << "click on button";
    if(activo){
        timer->stop();
        activo = false;
    }else{
        timer->start(1000);
        activo = true;
    }
        
}

void ejemplo1::doTimer()
{
	lcdNumber->display(lcdNumber->intValue() +1);
}




