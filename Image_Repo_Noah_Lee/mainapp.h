#ifndef MAINAPP_H
#define MAINAPP_H

#include <QDialog>

namespace Ui {
class mainApp;
}

class mainApp : public QDialog
{
    Q_OBJECT

public:
    explicit mainApp(QWidget *parent = nullptr);
    ~mainApp();
    void updateProducts(int index);

private slots:
    void on_add_clicked();

    void on_next_user_clicked();

    void on_next_prod_clicked();

    void on_delete_2_clicked();

private:
    Ui::mainApp *ui;
    int index;
    int indUser;
    int indProd;
};

#endif // MAINAPP_H
