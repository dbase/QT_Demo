#ifndef STRING_LIST_MODEL_FORM_H
#define STRING_LIST_MODEL_FORM_H

#include <QWidget>
#include <QStringListModel>

namespace Ui {
class string_list_model_form;
}

class string_list_model_form : public QWidget
{
    Q_OBJECT

public:
    explicit string_list_model_form(QWidget *parent = nullptr);
    ~string_list_model_form();

private slots:
    void on_btnAppendItem_clicked();

    void on_btnInsertItem_clicked();

    void on_btnDeleteCurrentItem_clicked();

    void on_btnClearList_clicked();

    void on_btnShowStringList_clicked();

    void on_btnCleartText_clicked();

    void on_listView_clicked(const QModelIndex &index);

private:
    Ui::string_list_model_form *ui;

    // 数据模型
    QStringListModel* theModel;
};

#endif // STRING_LIST_MODEL_FORM_H
