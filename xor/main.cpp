#include <QApplication>
#include "EncoderWidget.h"


int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    EncoderWidget encoderWidget;
    encoderWidget.show();

    return app.exec();
}