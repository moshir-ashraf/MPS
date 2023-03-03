#ifndef MAINMAP_H
#define MAINMAP_H
#include <QMainWindow>
#include "graph.h"
#include <QPushButton>
#include<QVector>
#include <QFile>
#include <QTextStream>
QT_BEGIN_NAMESPACE
namespace Ui { class MainMap; }
QT_END_NAMESPACE

class MainMap : public QMainWindow
{
    Q_OBJECT
    Graph graph = Graph(82);
    float total =0 ;
    QFile *MF = new QFile("MF0.txt");
    QFile *PF = new QFile("PF0.txt");
    QFile *SF = new QFile("SF0.txt");
    QFile *NF = new QFile("NF0.txt");
    QFile *RF = new QFile("RF0.txt");
    QFile *SM = new QFile("SM.txt");
    QFile *OM = new QFile("OM.txt");

public:
    MainMap(QWidget *parent = nullptr);
    void display(QString name,QString ID,bool exists);
    ~MainMap();
public slots:
    void on_Main_clicked();
    void on_sideMain_clicked();
    void on_Gyro_clicked();
    void on_Sbarro_clicked();
    void on_TBS_clicked();
    void on_BasketBallCourt_clicked();
    void on_BatatesandZalabya_clicked();
    void on_Booth_clicked();
    void on_Cinnabon_clicked();
    void on_Clinic_clicked();
    void on_CoffeeBoy_clicked();
    void on_Entry_clicked();
    void on_Exit_clicked();
    void on_Faraghly_clicked();
    void on_FootballField_clicked();
    void on_K__clicked();
    void on_LaFraise_clicked();
    void on_Manousha_clicked();
    void on_MiniMarket_clicked();
    void on_Mosque_clicked();
    void on_N__clicked();
    void on_OpposeMain_clicked();
    void on_Pharamacy_clicked();
    void on_R2GO_clicked();
    void on_R__clicked();
    void on_Reception_clicked();
    void on_S__clicked();
    void on_SideS_clicked();
    void on_StaffEntry_clicked();
    void on_Shabrawy_clicked();
    void on_p1_clicked();
    void on_p2_clicked();
    void on_p3_clicked();
    void on_p4_clicked();
    void on_p5_clicked();
    void on_p6_clicked();
    void on_p7_clicked();
    void on_p8_clicked();
    void on_p9_clicked();
    void on_p1_0_clicked();
    void on_p1_1_clicked();
    void on_p1_2_clicked();
    void on_p1_3_clicked();
    void on_p1_4_clicked();
    void on_p1_5_clicked();
    void on_p1_6_clicked();
    void on_p1_7_clicked();
    void on_p1_8_clicked();
    void on_p1_9_clicked();
    void on_p2_0_clicked();
    void on_p2_1_clicked();
    void on_p2_2_clicked();
    void on_p2_3_clicked();
    void on_p2_4_clicked();
    void on_p2_5_clicked();
    void on_p2_6_clicked();
    void on_p2_7_clicked();
    void on_p2_8_clicked();
    void on_p2_9_clicked();
    void on_p3_0_clicked();
    void on_p3_1_clicked();
    void on_p3_2_clicked();
    void on_p3_3_clicked();
    void on_p3_4_clicked();
    void on_p3_5_clicked();
    void on_p3_6_clicked();
    void on_p3_7_clicked();
    void on_p3_8_clicked();
    void on_p3_9_clicked();
    void on_p4_0_clicked();
    void on_p4_1_clicked();
    void on_p4_2_clicked();
    void on_p4_3_clicked();
    void on_p4_4_clicked();
    void on_p4_5_clicked();
    void on_p4_6_clicked();
    void on_p4_7_clicked();
    void on_p4_8_clicked();
    void on_p4_9_clicked();
    void on_p5_0_clicked();
    void on_p5_1_clicked();
    void showStart();
    void showpath();
    void on_pushButton_clicked();
    void reset();
private slots:
    void on_p5_2_clicked();

    void on_out_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::MainMap *ui;
};
#endif // MAINMAP_H
