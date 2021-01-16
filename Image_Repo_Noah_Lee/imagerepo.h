#ifndef IMAGEREPO_H
#define IMAGEREPO_H

#include <QMainWindow>
#include "mainapp.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ImageRepo; }
QT_END_NAMESPACE

class ImageRepo : public QMainWindow
{
    Q_OBJECT

public:
    ImageRepo(QWidget *parent = nullptr);
    ~ImageRepo();

private slots:
    void on_login_clicked();

private:
    Ui::ImageRepo *ui;
    mainApp *mainApp;
};
#endif // IMAGEREPO_H
