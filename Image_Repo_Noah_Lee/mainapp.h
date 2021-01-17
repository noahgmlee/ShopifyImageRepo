#ifndef MAINAPP_H
#define MAINAPP_H

#include "user.h"
#include <vector>
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
    void updateProducts(int index, bool ctl, vector<product> pr);

private slots:
    void on_add_clicked();

    void on_next_user_clicked();

    void on_next_prod_clicked();

    void on_delete_2_clicked();

    void on_deposit_clicked();

    void on_pushButton_clicked();

    void on_search_clicked();

    void on_logout_clicked();

private:
    Ui::mainApp *ui;
    vector<product> inSearch;
    int indexUSR;
    int indexDB;
};

#endif // MAINAPP_H
