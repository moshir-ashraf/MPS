#include "MPS.h"
#include "ui_MPS.h"
#include<iostream>
#include<cstring>
#include "graph.h"

MPS::MPS(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MPS),file(NULL)

{
    ui->setupUi(this);
    graph.nodes[0]->setname("Main"); graph.nodes[0]->setcoordinates(ui->Main->pos().x(), ui->Main->pos().y()); graph.nodes[0]->buttons(ui->Main); graph.nodes[0]->type = 1;
    graph.nodes[79]->setname("Gyro"); graph.nodes[79]->setcoordinates(ui->Gyro->pos().x(), ui->Gyro->pos().y()); graph.nodes[79]->buttons(ui->Gyro); graph.nodes[79]->type = 2;
    graph.nodes[80]->setname("Sbarro"); graph.nodes[80]->setcoordinates(ui->Sbarro->pos().x(), ui->Sbarro->pos().y()); graph.nodes[80]->buttons(ui->Sbarro); graph.nodes[80]->type = 2;
    graph.nodes[1]->setname("Side Main"); graph.nodes[1]->setcoordinates(ui->sideMain->pos().x(), ui->sideMain->pos().y()); graph.nodes[1]->buttons(ui->sideMain); graph.nodes[1]->type = 1;
    graph.nodes[2]->setname("TBS"); graph.nodes[2]->setcoordinates(ui->TBS->pos().x(), ui->TBS->pos().y()); graph.nodes[2]->buttons(ui->TBS); graph.nodes[2]->type = 2;
    graph.nodes[3]->setname("BasketBall Court"); graph.nodes[3]->setcoordinates(ui->BasketBallCourt->pos().x(), ui->BasketBallCourt->pos().y()); graph.nodes[3]->buttons(ui->BasketBallCourt);
    graph.nodes[4]->setname("Batates & Zalabya"); graph.nodes[4]->setcoordinates(ui->BatatesandZalabya->pos().x(), ui->BatatesandZalabya->pos().y()); graph.nodes[4]->buttons(ui->BatatesandZalabya); graph.nodes[4]->type = 2;
    graph.nodes[5]->setname("Booth"); graph.nodes[5]->setcoordinates(ui->Booth->pos().x(), ui->Booth->pos().y()); graph.nodes[5]->buttons(ui->Booth);
    graph.nodes[6]->setname("Cinnabon"); graph.nodes[6]->setcoordinates(ui->Cinnabon->pos().x(), ui->Cinnabon->pos().y()); graph.nodes[6]->buttons(ui->Cinnabon); graph.nodes[6]->type = 2;
    graph.nodes[7]->setname("Clinic"); graph.nodes[7]->setcoordinates(ui->Clinic->pos().x(), ui->Clinic->pos().y()); graph.nodes[7]->buttons(ui->Clinic);
    graph.nodes[8]->setname("Coffee Boy"); graph.nodes[8]->setcoordinates(ui->CoffeeBoy->pos().x(), ui->CoffeeBoy->pos().y()); graph.nodes[8]->buttons(ui->CoffeeBoy); graph.nodes[8]->type = 2;
    graph.nodes[9]->setname("Entry"); graph.nodes[9]->setcoordinates(ui->Entry->pos().x(), ui->Entry->pos().y()); graph.nodes[9]->buttons(ui->Entry);
    graph.nodes[10]->setname("Exit"); graph.nodes[10]->setcoordinates(ui->Exit->pos().x(), ui->Exit->pos().y()); graph.nodes[10]->buttons(ui->Exit);
    graph.nodes[11]->setname("Farghaly"); graph.nodes[11]->setcoordinates(ui->Faraghly->pos().x(), ui->Faraghly->pos().y()); graph.nodes[11]->buttons(ui->Faraghly); graph.nodes[11]->type = 2;
    graph.nodes[12]->setname("Football Field"); graph.nodes[12]->setcoordinates(ui->FootballField->pos().x(), ui->FootballField->pos().y()); graph.nodes[12]->buttons(ui->FootballField);
    graph.nodes[13]->setname("K Building"); graph.nodes[13]->setcoordinates(ui->K_->pos().x(), ui->K_->pos().y()); graph.nodes[13]->buttons(ui->K_); graph.nodes[13]->type = 1;
    graph.nodes[14]->setname("LaFraise"); graph.nodes[14]->setcoordinates(ui->LaFraise->pos().x(), ui->LaFraise->pos().y()); graph.nodes[14]->buttons(ui->LaFraise); graph.nodes[14]->type = 2;
    graph.nodes[15]->setname("Manousha"); graph.nodes[15]->setcoordinates(ui->Manousha->pos().x(), ui->Manousha->pos().y()); graph.nodes[15]->buttons(ui->Manousha); graph.nodes[15]->type = 2;
    graph.nodes[16]->setname("Mini Market"); graph.nodes[16]->setcoordinates(ui->MiniMarket->pos().x(), ui->MiniMarket->pos().y()); graph.nodes[16]->buttons(ui->MiniMarket); graph.nodes[16]->type = 2;
    graph.nodes[17]->setname("Mosque"); graph.nodes[17]->setcoordinates(ui->Mosque->pos().x(), ui->Mosque->pos().y()); graph.nodes[17]->buttons(ui->Mosque);
    graph.nodes[18]->setname("N Building"); graph.nodes[18]->setcoordinates(ui->N_->pos().x(), ui->N_->pos().y()); graph.nodes[18]->buttons(ui->N_); graph.nodes[18]->type = 1;
    graph.nodes[19]->setname("Oppose Main"); graph.nodes[19]->setcoordinates(ui->OpposeMain->pos().x(), ui->OpposeMain->pos().y()); graph.nodes[19]->buttons(ui->OpposeMain); graph.nodes[19]->type = 1;
    graph.nodes[20]->setname("Pharmacy"); graph.nodes[20]->setcoordinates(ui->Pharamacy->pos().x(), ui->Pharamacy->pos().y()); graph.nodes[20]->buttons(ui->Pharamacy); graph.nodes[20]->type = 1;
    graph.nodes[21]->setname("R2GO"); graph.nodes[21]->setcoordinates(ui->R2GO->pos().x(), ui->R2GO->pos().y()); graph.nodes[21]->buttons(ui->R2GO); graph.nodes[21]->type = 2;
    graph.nodes[22]->setname("R Building"); graph.nodes[22]->setcoordinates(ui->R_->pos().x(), ui->R_->pos().y()); graph.nodes[22]->buttons(ui->R_); graph.nodes[22]->type = 1;
    graph.nodes[23]->setname("Reception"); graph.nodes[23]->setcoordinates(ui->Reception->pos().x(), ui->Reception->pos().y()); graph.nodes[23]->buttons(ui->Reception); graph.nodes[23]->type = 2;
    graph.nodes[24]->setname("S Building"); graph.nodes[24]->setcoordinates(ui->S_->pos().x(), ui->S_->pos().y()); graph.nodes[24]->buttons(ui->S_); graph.nodes[24]->type = 1;
    graph.nodes[25]->setname("Side Dentistry"); graph.nodes[25]->setcoordinates(ui->SideS->pos().x(), ui->SideS->pos().y()); graph.nodes[25]->buttons(ui->SideS);
    graph.nodes[26]->setname("Staff Entry"); graph.nodes[26]->setcoordinates(ui->StaffEntry->pos().x(), ui->StaffEntry->pos().y()); graph.nodes[26]->buttons(ui->StaffEntry);
    graph.nodes[27]->setname("Shabrawy"); graph.nodes[27]->setcoordinates(ui->Shabrawy->pos().x(), ui->Shabrawy->pos().y()); graph.nodes[27]->buttons(ui->Shabrawy); graph.nodes[27]->type = 2;
    graph.nodes[28]->setcoordinates(ui->p1->pos().x(), ui->p1->pos().y()); graph.nodes[28]->buttons(ui->p1);
    graph.nodes[29]->setcoordinates(ui->p2->pos().x(), ui->p2->pos().y()); graph.nodes[29]->buttons(ui->p2);
    graph.nodes[30]->setcoordinates(ui->p3->pos().x(), ui->p3->pos().y()); graph.nodes[30]->buttons(ui->p3);
    graph.nodes[31]->setcoordinates(ui->p4->pos().x(), ui->p4->pos().y()); graph.nodes[31]->buttons(ui->p4);
    graph.nodes[32]->setcoordinates(ui->p5->pos().x(), ui->p5->pos().y()); graph.nodes[32]->buttons(ui->p5);
    graph.nodes[33]->setcoordinates(ui->p6->pos().x(), ui->p6->pos().y()); graph.nodes[33]->buttons(ui->p6);
    graph.nodes[34]->setcoordinates(ui->p7->pos().x(), ui->p7->pos().y()); graph.nodes[34]->buttons(ui->p7);
    graph.nodes[35]->setcoordinates(ui->p8->pos().x(), ui->p8->pos().y()); graph.nodes[35]->buttons(ui->p8);
    graph.nodes[36]->setcoordinates(ui->p9->pos().x(), ui->p9->pos().y()); graph.nodes[36]->buttons(ui->p9);
    graph.nodes[37]->setcoordinates(ui->p1_0->pos().x(), ui->p1_0->pos().y()); graph.nodes[37]->buttons(ui->p1_0);
    graph.nodes[38]->setcoordinates(ui->p1_1->pos().x(), ui->p1_1->pos().y()); graph.nodes[38]->buttons(ui->p1_1);
    graph.nodes[39]->setcoordinates(ui->p1_2->pos().x(), ui->p1_2->pos().y()); graph.nodes[39]->buttons(ui->p1_2);
    graph.nodes[40]->setcoordinates(ui->p1_3->pos().x(), ui->p1_3->pos().y()); graph.nodes[40]->buttons(ui->p1_3);
    graph.nodes[41]->setcoordinates(ui->p1_4->pos().x(), ui->p1_4->pos().y()); graph.nodes[41]->buttons(ui->p1_4);
    graph.nodes[42]->setcoordinates(ui->p1_5->pos().x(), ui->p1_5->pos().y()); graph.nodes[42]->buttons(ui->p1_5);
    graph.nodes[43]->setcoordinates(ui->p1_6->pos().x(), ui->p1_6->pos().y()); graph.nodes[43]->buttons(ui->p1_6);
    graph.nodes[44]->setcoordinates(ui->p1_7->pos().x(), ui->p1_7->pos().y()); graph.nodes[44]->buttons(ui->p1_7);
    graph.nodes[45]->setcoordinates(ui->p1_8->pos().x(), ui->p1_8->pos().y()); graph.nodes[45]->buttons(ui->p1_8);
    graph.nodes[46]->setcoordinates(ui->p1_9->pos().x(), ui->p1_9->pos().y()); graph.nodes[46]->buttons(ui->p1_9);
    graph.nodes[47]->setcoordinates(ui->p2_0->pos().x(), ui->p2_0->pos().y()); graph.nodes[47]->buttons(ui->p2_0);
    graph.nodes[48]->setcoordinates(ui->p2_1->pos().x(), ui->p2_1->pos().y()); graph.nodes[48]->buttons(ui->p2_1);
    graph.nodes[49]->setcoordinates(ui->p2_2->pos().x(), ui->p2_2->pos().y()); graph.nodes[49]->buttons(ui->p2_2);
    graph.nodes[50]->setcoordinates(ui->p2_3->pos().x(), ui->p2_3->pos().y()); graph.nodes[50]->buttons(ui->p2_3);
    graph.nodes[51]->setcoordinates(ui->p2_4->pos().x(), ui->p2_4->pos().y()); graph.nodes[51]->buttons(ui->p2_4);
    graph.nodes[52]->setcoordinates(ui->p2_5->pos().x(), ui->p2_5->pos().y()); graph.nodes[52]->buttons(ui->p2_5);
    graph.nodes[53]->setcoordinates(ui->p2_6->pos().x(), ui->p2_6->pos().y()); graph.nodes[53]->buttons(ui->p2_6);
    graph.nodes[54]->setcoordinates(ui->p2_7->pos().x(), ui->p2_7->pos().y()); graph.nodes[54]->buttons(ui->p2_7);
    graph.nodes[55]->setcoordinates(ui->p2_8->pos().x(), ui->p2_8->pos().y()); graph.nodes[55]->buttons(ui->p2_8);
    graph.nodes[56]->setcoordinates(ui->p2_9->pos().x(), ui->p2_9->pos().y()); graph.nodes[56]->buttons(ui->p2_9);
    graph.nodes[57]->setcoordinates(ui->p3_0->pos().x(), ui->p3_0->pos().y()); graph.nodes[57]->buttons(ui->p3_0);
    graph.nodes[58]->setcoordinates(ui->p3_1->pos().x(), ui->p3_1->pos().y()); graph.nodes[58]->buttons(ui->p3_1);
    graph.nodes[59]->setcoordinates(ui->p3_2->pos().x(), ui->p3_2->pos().y()); graph.nodes[59]->buttons(ui->p3_2);
    graph.nodes[60]->setcoordinates(ui->p3_3->pos().x(), ui->p3_3->pos().y()); graph.nodes[60]->buttons(ui->p3_3);
    graph.nodes[61]->setcoordinates(ui->p3_4->pos().x(), ui->p3_4->pos().y()); graph.nodes[61]->buttons(ui->p3_4);
    graph.nodes[62]->setcoordinates(ui->p3_5->pos().x(), ui->p3_5->pos().y()); graph.nodes[62]->buttons(ui->p3_5);
    graph.nodes[63]->setcoordinates(ui->p3_6->pos().x(), ui->p3_6->pos().y()); graph.nodes[63]->buttons(ui->p3_6);
    graph.nodes[64]->setcoordinates(ui->p3_7->pos().x(), ui->p3_7->pos().y()); graph.nodes[64]->buttons(ui->p3_7);
    graph.nodes[65]->setcoordinates(ui->p3_8->pos().x(), ui->p3_8->pos().y()); graph.nodes[65]->buttons(ui->p3_8);
    graph.nodes[66]->setcoordinates(ui->p3_9->pos().x(), ui->p3_9->pos().y()); graph.nodes[66]->buttons(ui->p3_9);
    graph.nodes[67]->setcoordinates(ui->p4_0->pos().x(), ui->p4_0->pos().y()); graph.nodes[67]->buttons(ui->p4_0);
    graph.nodes[68]->setcoordinates(ui->p4_1->pos().x(), ui->p4_1->pos().y()); graph.nodes[68]->buttons(ui->p4_1);
    graph.nodes[69]->setcoordinates(ui->p4_2->pos().x(), ui->p4_2->pos().y()); graph.nodes[69]->buttons(ui->p4_2);
    graph.nodes[70]->setcoordinates(ui->p4_3->pos().x(), ui->p4_3->pos().y()); graph.nodes[70]->buttons(ui->p4_3);
    graph.nodes[71]->setcoordinates(ui->p4_4->pos().x(), ui->p4_4->pos().y()); graph.nodes[71]->buttons(ui->p4_4);
    graph.nodes[72]->setcoordinates(ui->p4_5->pos().x(), ui->p4_5->pos().y()); graph.nodes[72]->buttons(ui->p4_5);
    graph.nodes[73]->setcoordinates(ui->p4_6->pos().x(), ui->p4_6->pos().y()); graph.nodes[73]->buttons(ui->p4_6);
    graph.nodes[74]->setcoordinates(ui->p4_7->pos().x(), ui->p4_7->pos().y()); graph.nodes[74]->buttons(ui->p4_7);
    graph.nodes[75]->setcoordinates(ui->p4_8->pos().x(), ui->p4_8->pos().y()); graph.nodes[75]->buttons(ui->p4_8);
    graph.nodes[76]->setcoordinates(ui->p4_9->pos().x(), ui->p4_9->pos().y()); graph.nodes[76]->buttons(ui->p4_9);
    graph.nodes[77]->setcoordinates(ui->p5_0->pos().x(), ui->p5_0->pos().y()); graph.nodes[77]->buttons(ui->p5_0);
    graph.nodes[78]->setcoordinates(ui->p5_1->pos().x(), ui->p5_1->pos().y()); graph.nodes[78]->buttons(ui->p5_1);
    graph.nodes[81]->setcoordinates(ui->p5_2->pos().x(), ui->p5_2->pos().y()); graph.nodes[81]->buttons(ui->p5_2);
    graph.nodes[81]->setname("N Library"); graph.nodes[81]->type = 2;

    QVector<Graph::NodePointer> adding;
    adding.push_back(graph.nodes[24]);
    adding.push_back(graph.nodes[18]);
    graph.addneighbor(adding, graph.nodes[81]);
    adding.clear();
    adding.push_back(graph.nodes[9]);
    adding.push_back(graph.nodes[28]);
    graph.addneighbor(adding, graph.nodes[10]);
    adding.clear();
    adding.push_back(graph.nodes[19]);
    adding.push_back(graph.nodes[23]);
    adding.push_back(graph.nodes[77]);
    adding.push_back(graph.nodes[31]);
    adding.push_back(graph.nodes[28]);
    graph.addneighbor(adding, graph.nodes[32]);
    adding.clear();
    graph.addneighbor(graph.nodes[21], graph.nodes[77]);
    adding.push_back(graph.nodes[26]);
    adding.push_back(graph.nodes[30]);
    graph.addneighbor(adding, graph.nodes[29]);
    adding.clear();
    adding.push_back(graph.nodes[0]);
    adding.push_back(graph.nodes[30]);
    graph.addneighbor(adding, graph.nodes[31]);
    adding.clear();
    adding.push_back(graph.nodes[32]);
    adding.push_back(graph.nodes[34]);
    adding.push_back(graph.nodes[35]);
    adding.push_back(graph.nodes[38]);
    adding.push_back(graph.nodes[0]);
    adding.push_back(graph.nodes[13]);
    graph.addneighbor(adding, graph.nodes[33]);
    adding.clear();
    adding.push_back(graph.nodes[44]);
    adding.push_back(graph.nodes[27]);
    adding.push_back(graph.nodes[15]);
    adding.push_back(graph.nodes[8]);
    graph.addneighbor(adding, graph.nodes[34]);
    adding.clear();
    adding.push_back(graph.nodes[0]);
    adding.push_back(graph.nodes[38]);
    adding.push_back(graph.nodes[36]);
    adding.push_back(graph.nodes[42]);
    graph.addneighbor(adding, graph.nodes[35]);
    adding.clear();
    adding.push_back(graph.nodes[40]);
    adding.push_back(graph.nodes[37]);
    adding.push_back(graph.nodes[38]);
    graph.addneighbor(adding, graph.nodes[39]);
    adding.clear();
    adding.push_back(graph.nodes[40]);
    adding.push_back(graph.nodes[43]);
    graph.addneighbor(adding, graph.nodes[41]);
    adding.clear();
    adding.push_back(graph.nodes[1]);
    adding.push_back(graph.nodes[37]);
    adding.push_back(graph.nodes[43]);
    adding.push_back(graph.nodes[47]);
    adding.push_back(graph.nodes[6]);
    graph.addneighbor(adding, graph.nodes[42]);
    adding.clear();
    adding.push_back(graph.nodes[43]);
    adding.push_back(graph.nodes[46]);
    adding.push_back(graph.nodes[78]);
    adding.push_back(graph.nodes[6]);
    adding.push_back(graph.nodes[2]);
    adding.push_back(graph.nodes[5]);
    adding.push_back(graph.nodes[48]);
    graph.addneighbor(adding, graph.nodes[47]);
    adding.clear();
    adding.push_back(graph.nodes[11]);
    adding.push_back(graph.nodes[78]);
    adding.push_back(graph.nodes[50]);
    adding.push_back(graph.nodes[49]);
    graph.addneighbor(adding, graph.nodes[48]);
    adding.clear();
    adding.push_back(graph.nodes[78]);
    adding.push_back(graph.nodes[46]);
    adding.push_back(graph.nodes[49]);
    graph.addneighbor(adding, graph.nodes[14]);
    adding.clear();
    adding.push_back(graph.nodes[43]);
    adding.push_back(graph.nodes[51]);
    adding.push_back(graph.nodes[49]);
    graph.addneighbor(adding, graph.nodes[46]);
    adding.clear();
    adding.push_back(graph.nodes[57]);
    adding.push_back(graph.nodes[51]);
    adding.push_back(graph.nodes[45]);
    graph.addneighbor(adding, graph.nodes[56]);
    adding.clear();
    adding.push_back(graph.nodes[43]);
    adding.push_back(graph.nodes[20]);
    adding.push_back(graph.nodes[45]);
    graph.addneighbor(adding, graph.nodes[44]);
    adding.clear();
    adding.push_back(graph.nodes[49]);
    adding.push_back(graph.nodes[17]);
    adding.push_back(graph.nodes[52]);
    graph.addneighbor(adding, graph.nodes[50]);
    adding.clear();
    adding.push_back(graph.nodes[16]);
    adding.push_back(graph.nodes[58]);
    graph.addneighbor(adding, graph.nodes[45]);
    adding.clear();
    adding.push_back(graph.nodes[59]);
    adding.push_back(graph.nodes[60]);
    adding.push_back(graph.nodes[57]);
    graph.addneighbor(adding, graph.nodes[58]);
    adding.clear();
    adding.push_back(graph.nodes[60]);
    adding.push_back(graph.nodes[61]);
    graph.addneighbor(adding, graph.nodes[57]);
    adding.clear();
    adding.push_back(graph.nodes[59]);
    adding.push_back(graph.nodes[60]);
    adding.push_back(graph.nodes[61]);
    adding.push_back(graph.nodes[64]);
    adding.push_back(graph.nodes[63]);
    adding.push_back(graph.nodes[24]);
    adding.push_back(graph.nodes[18]);
    graph.addneighbor(adding, graph.nodes[62]);
    adding.clear();
    adding.push_back(graph.nodes[24]);
    adding.push_back(graph.nodes[64]);
    adding.push_back(graph.nodes[65]);
    graph.addneighbor(adding, graph.nodes[63]);
    adding.clear();
    adding.push_back(graph.nodes[18]);
    adding.push_back(graph.nodes[66]);
    adding.push_back(graph.nodes[65]);
    graph.addneighbor(adding, graph.nodes[64]);
    adding.clear();
    adding.push_back(graph.nodes[67]);
    adding.push_back(graph.nodes[65]);
    adding.push_back(graph.nodes[4]);
    graph.addneighbor(adding, graph.nodes[66]);
    adding.clear();
    adding.push_back(graph.nodes[18]);
    adding.push_back(graph.nodes[55]);
    adding.push_back(graph.nodes[54]);
    graph.addneighbor(adding, graph.nodes[53]);
    adding.clear();
    adding.push_back(graph.nodes[55]);
    adding.push_back(graph.nodes[54]);
    adding.push_back(graph.nodes[79]);
    adding.push_back(graph.nodes[67]);
    graph.addneighbor(adding, graph.nodes[68]);
    adding.clear();
    adding.push_back(graph.nodes[69]);
    adding.push_back(graph.nodes[65]);
    adding.push_back(graph.nodes[74]);
    adding.push_back(graph.nodes[80]);
    adding.push_back(graph.nodes[70]);
    graph.addneighbor(adding, graph.nodes[67]);
    adding.clear();
    adding.push_back(graph.nodes[75]);
    adding.push_back(graph.nodes[74]);
    adding.push_back(graph.nodes[73]);
    adding.push_back(graph.nodes[25]);
    graph.addneighbor(adding, graph.nodes[65]);
    adding.clear();
    adding.push_back(graph.nodes[24]);
    adding.push_back(graph.nodes[75]);
    graph.addneighbor(adding, graph.nodes[25]);
    adding.clear();
    adding.push_back(graph.nodes[74]);
    adding.push_back(graph.nodes[71]);
    graph.addneighbor(adding, graph.nodes[70]);
    adding.clear();
    adding.push_back(graph.nodes[70]);
    adding.push_back(graph.nodes[74]);
    adding.push_back(graph.nodes[79]);
    adding.push_back(graph.nodes[75]);
    graph.addneighbor(adding, graph.nodes[73]);
    adding.clear();
    adding.push_back(graph.nodes[71]);
    adding.push_back(graph.nodes[3]);
    graph.addneighbor(adding, graph.nodes[72]);
    adding.clear();
    adding.push_back(graph.nodes[71]);
    adding.push_back(graph.nodes[75]);
    graph.addneighbor(adding, graph.nodes[12]);
    adding.clear();
    adding.push_back(graph.nodes[22]);
    adding.push_back(graph.nodes[76]);
    graph.addneighbor(adding, graph.nodes[75]);
    adding.clear();
    graph.addneighbor(graph.nodes[76], graph.nodes[7]);
    ui->comboBox->addItem(" ");
    QTextStream* s;
    int n = 0;
    MF->open(QIODevice::ReadOnly);
    s = new QTextStream(MF);
    while (!s->atEnd()) {
        graph.floors.push_back(new Graph::Floor(s->readLine()));
        graph.floors.at(n)->setnode(graph.nodes[0]);
        n++;
    }
    MF->close();
    NF->open(QIODevice::ReadOnly);
    s = new QTextStream(NF);
    while (!s->atEnd()) {
        graph.floors.push_back(new Graph::Floor(s->readLine()));
        graph.floors[n]->setnode(graph.nodes[18]);
        n++;
    }
    NF->close();
    SF->open(QIODevice::ReadOnly);
    s = new QTextStream(SF);
    while (!s->atEnd()) {
        graph.floors.push_back(new Graph::Floor(s->readLine()));
        graph.floors[n]->setnode(graph.nodes[24]);
        n++;
    }
    SF->close();
    RF->open(QIODevice::ReadOnly);
    s = new QTextStream(RF);
    while (!s->atEnd()) {
        graph.floors.push_back(new Graph::Floor(s->readLine()));
        graph.floors[n]->setnode(graph.nodes[22]);
        n++;
    }
    RF->close();
    PF->open(QIODevice::ReadOnly);
    s = new QTextStream(PF);
    while (!s->atEnd()) {
        graph.floors.push_back(new Graph::Floor(s->readLine()));
        graph.floors[n]->setnode(graph.nodes[20]);
        n++;
    }
    PF->close();
    SM->open(QIODevice::ReadOnly);
    s = new QTextStream(SM);
    while (!s->atEnd()) {
        graph.floors.push_back(new Graph::Floor(s->readLine()));
        graph.floors[n]->setnode(graph.nodes[1]);
        n++;
    }
    SM->close();
    OM->open(QIODevice::ReadOnly);
    s = new QTextStream(OM);
    while (!s->atEnd()) {
        graph.floors.push_back(new Graph::Floor(s->readLine()));
        graph.floors[n]->setnode(graph.nodes[19]);
        n++;
    }
    OM->close();
    for (int i = 0; i < 28; i++) ui->comboBox->addItem(graph.nodes[i]->name);
    ui->comboBox->addItem(graph.nodes[79]->name);
    ui->comboBox->addItem(graph.nodes[80]->name);
    ui->comboBox->addItem(graph.nodes[81]->name);
    for (int i = 0; i < graph.floors.size(); i++) {
        for (int j = 0; j < graph.floors[i]->rooms.size(); j++) ui->comboBox->addItem(graph.floors[i]->rooms[j]);
    }
    ui->rs->setChecked(true);

}



MPS::~MPS()
{
    delete ui;
}
void  MPS::showStart() {
    if (!graph.start->name.isNull()) {
        ui->START->clear();
        ui->START->appendPlainText(graph.start->name);
    }
    else {
        ui->START->clear();
        ui->START->appendPlainText("Co-ordinates (" + QString::number(graph.start->x) + "," + QString::number(graph.start->y) + ")");
    }
}
void MPS::on_Main_clicked() {
    graph.setstart(graph.nodes[0]);
    showStart();
}
void MPS::on_sideMain_clicked() {
    graph.setstart(graph.nodes[1]);
    showStart();
}
void MPS::on_Gyro_clicked() {
    graph.setstart(graph.nodes[79]);
    showStart();
}
void MPS::on_Sbarro_clicked() {
    graph.setstart(graph.nodes[80]);
    showStart();
}
void MPS::on_TBS_clicked() {
    graph.setstart(graph.nodes[2]);
    showStart();
}
void MPS::on_BasketBallCourt_clicked() {
    graph.setstart(graph.nodes[3]);
    showStart();
}
void MPS::on_BatatesandZalabya_clicked() {
    graph.setstart(graph.nodes[4]);
    showStart();
}
void MPS::on_Booth_clicked() {
    graph.setstart(graph.nodes[5]);
    showStart();
}
void MPS::on_Cinnabon_clicked() {
    graph.setstart(graph.nodes[6]);
    showStart();
}
void MPS::on_Clinic_clicked() {
    graph.setstart(graph.nodes[7]);
    showStart();
}
void MPS::on_CoffeeBoy_clicked() {
    graph.setstart(graph.nodes[8]);
    showStart();
}
void MPS::on_Entry_clicked() {
    graph.setstart(graph.nodes[9]);
    showStart();
}
void MPS::on_Exit_clicked() {
    graph.setstart(graph.nodes[10]);
    showStart();
}
void MPS::on_Faraghly_clicked() {
    graph.setstart(graph.nodes[11]);
    showStart();
}
void MPS::on_FootballField_clicked() {
    graph.setstart(graph.nodes[12]);
    showStart();
}
void MPS::on_K__clicked() {
    graph.setstart(graph.nodes[13]);
    showStart();
}
void MPS::on_LaFraise_clicked() {
    graph.setstart(graph.nodes[14]);
    showStart();
}
void MPS::on_Manousha_clicked() {
    graph.setstart(graph.nodes[15]);
    showStart();
}
void MPS::on_MiniMarket_clicked() {
    graph.setstart(graph.nodes[16]);
    showStart();
}
void MPS::on_Mosque_clicked() {
    graph.setstart(graph.nodes[17]);
    showStart();
}
void MPS::on_N__clicked() {
    graph.setstart(graph.nodes[18]);
    showStart();
}
void MPS::on_OpposeMain_clicked() {
    graph.setstart(graph.nodes[19]);
    showStart();
}
void MPS::on_Pharamacy_clicked() {
    graph.setstart(graph.nodes[20]);
    showStart();
}
void MPS::on_R2GO_clicked() {
    graph.setstart(graph.nodes[21]);
    showStart();
}
void MPS::on_R__clicked() {
    graph.setstart(graph.nodes[22]);
    showStart();
}
void MPS::on_Reception_clicked() {
    graph.setstart(graph.nodes[23]);
    showStart();
}
void MPS::on_S__clicked() {
    graph.setstart(graph.nodes[24]);
    showStart();
}
void MPS::on_SideS_clicked() {
    graph.setstart(graph.nodes[25]);
    showStart();
}
void MPS::on_StaffEntry_clicked() {
    graph.setstart(graph.nodes[26]);
    showStart();
}
void MPS::on_Shabrawy_clicked() {
    graph.setstart(graph.nodes[27]);
    showStart();
}
void MPS::on_p1_clicked() {
    graph.setstart(graph.nodes[28]);
    showStart();
}
void MPS::on_p2_clicked() {
    graph.setstart(graph.nodes[29]);
    showStart();
}
void MPS::on_p3_clicked() {
    graph.setstart(graph.nodes[30]);
    showStart();
}
void MPS::on_p4_clicked() {
    graph.setstart(graph.nodes[31]);
    showStart();
}
void MPS::on_p5_clicked() {
    graph.setstart(graph.nodes[32]);
    showStart();
}
void MPS::on_p6_clicked() {
    graph.setstart(graph.nodes[33]);
    showStart();
}
void MPS::on_p7_clicked() {
    graph.setstart(graph.nodes[34]);
    showStart();
}
void MPS::on_p8_clicked() {
    graph.setstart(graph.nodes[35]);
    showStart();
}
void MPS::on_p9_clicked() {
    graph.setstart(graph.nodes[36]);
    showStart();
}
void MPS::on_p1_0_clicked() {
    graph.setstart(graph.nodes[37]);
    showStart();
}
void MPS::on_p1_1_clicked() {
    graph.setstart(graph.nodes[38]);
    showStart();
}
void MPS::on_p1_2_clicked() {
    graph.setstart(graph.nodes[39]);
    showStart();
}
void MPS::on_p1_3_clicked() {
    graph.setstart(graph.nodes[40]);
    showStart();
}
void MPS::on_p1_4_clicked() {
    graph.setstart(graph.nodes[41]);
    showStart();
}
void MPS::on_p1_5_clicked() {
    graph.setstart(graph.nodes[42]);
    showStart();
}
void MPS::on_p1_6_clicked() {
    graph.setstart(graph.nodes[43]);
    showStart();
}
void MPS::on_p1_7_clicked() {
    graph.setstart(graph.nodes[44]);
    showStart();
}
void MPS::on_p1_8_clicked() {
    graph.setstart(graph.nodes[45]);
    showStart();
}
void MPS::on_p1_9_clicked() {
    graph.setstart(graph.nodes[46]);
    showStart();
}
void MPS::on_p2_0_clicked() {
    graph.setstart(graph.nodes[47]);
    showStart();
}
void MPS::on_p2_1_clicked() {
    graph.setstart(graph.nodes[48]);
    showStart();
}
void MPS::on_p2_2_clicked() {
    graph.setstart(graph.nodes[49]);
    showStart();
}
void MPS::on_p2_3_clicked() {
    graph.setstart(graph.nodes[50]);
    showStart();
}
void MPS::on_p2_4_clicked() {
    graph.setstart(graph.nodes[51]);
    showStart();
}
void MPS::on_p2_5_clicked() {
    graph.setstart(graph.nodes[52]);
    showStart();
}
void MPS::on_p2_6_clicked() {
    graph.setstart(graph.nodes[53]);
    showStart();
}
void MPS::on_p2_7_clicked() {
    graph.setstart(graph.nodes[54]);
    showStart();
}
void MPS::on_p2_8_clicked() {
    graph.setstart(graph.nodes[55]);
    showStart();
}
void MPS::on_p2_9_clicked() {
    graph.setstart(graph.nodes[56]);
    showStart();
}
void MPS::on_p3_0_clicked() {
    graph.setstart(graph.nodes[57]);
    showStart();
}
void MPS::on_p3_1_clicked() {
    graph.setstart(graph.nodes[58]);
    showStart();
}
void MPS::on_p3_2_clicked() {
    graph.setstart(graph.nodes[59]);
    showStart();
}
void MPS::on_p3_3_clicked() {
    graph.setstart(graph.nodes[60]);
    showStart();
}
void MPS::on_p3_4_clicked() {
    graph.setstart(graph.nodes[61]);
    showStart();
}
void MPS::on_p3_5_clicked() {
    graph.setstart(graph.nodes[62]);
    showStart();
}
void MPS::on_p3_6_clicked() {
    graph.setstart(graph.nodes[63]);
    showStart();
}
void MPS::on_p3_7_clicked() {
    graph.setstart(graph.nodes[64]);
    showStart();
}
void MPS::on_p3_8_clicked() {
    graph.setstart(graph.nodes[65]);
    showStart();
}
void MPS::on_p3_9_clicked() {
    graph.setstart(graph.nodes[66]);
    showStart();
}
void MPS::on_p4_0_clicked() {
    graph.setstart(graph.nodes[67]);
    showStart();
}
void MPS::on_p4_1_clicked() {
    graph.setstart(graph.nodes[68]);
    showStart();
}
void MPS::on_p4_2_clicked() {
    graph.setstart(graph.nodes[69]);
    showStart();
}
void MPS::on_p4_3_clicked() {
    graph.setstart(graph.nodes[70]);
    showStart();
}
void MPS::on_p4_4_clicked() {
    graph.setstart(graph.nodes[71]);
    showStart();
}
void MPS::on_p4_5_clicked() {
    graph.setstart(graph.nodes[72]);
    showStart();
}
void MPS::on_p4_6_clicked() {
    graph.setstart(graph.nodes[73]);
    showStart();
}
void MPS::on_p4_7_clicked() {
    graph.setstart(graph.nodes[74]);
    showStart();
}
void MPS::on_p4_8_clicked() {
    graph.setstart(graph.nodes[75]);
    showStart();
}
void MPS::on_p4_9_clicked() {
    graph.setstart(graph.nodes[76]);
    showStart();
}
void MPS::on_p5_0_clicked() {
    graph.setstart(graph.nodes[77]);
    showStart();
}
void MPS::on_p5_1_clicked() {
    graph.setstart(graph.nodes[78]);
    showStart();
}
void MPS::on_p5_2_clicked() {
    graph.setstart(graph.nodes[81]);
    showStart();
}
void MPS::showpath() {
    total = 0;
    float distance = 0; int minutes, seconds;
    for (int j = 0; j < graph.path.size(); j++) {
        srand(time(0) + j);
        if (graph.path[j]->congestion()) {
            graph.path[j]->button->setStyleSheet("background-color: rgb(170, 0, 0)");
            total += 120;
        }
        else graph.path[j]->button->setStyleSheet("background-color: rgb(33, 81, 142)");
        distance += graph.path[j]->shortestsl(graph.path[static_cast<qsizetype>(j) + 1]);
    }
    total += (distance / graph.start->shortestsl(graph.end)) * 0.7;
    minutes = total / 60;
    seconds = (int)total % 60;
    minutes = minutes % 60;
    ui->label_4->setText(ui->label_4->text() + " \nYou'll arrive in " + QString::number(minutes) + " : " + QString::number(seconds));
}
void MPS::reset() {
    for (int i = 0; i < graph.path.size(); i++)
        graph.path[i]->button->setStyleSheet("QPushButton{background:transparent;}");
}


void MPS::on_pushButton_clicked()
{
    reset();
    if ((graph.start != NULL) && (graph.end != NULL)) {
        graph.AStarAlgorithm();
        ui->label_4->setText("You're on the fastest route");
        showpath();
        for (int i = 0; i < graph.nodes.size(); i++) {
            graph.nodes[i]->Parent = NULL;
            graph.nodes[i]->global = graph.nodes[i]->local = 9999999;
        }
    }
    else ui->label_4->setText("Please specify your start and end locations");
}
void MPS::display(QString name, QString ID, bool exists)
{
    if (exists)
        ui->WelcomeTag->setText("Welcome back, " + name + "\n Your ID: " + ID);
    else
        ui->WelcomeTag->setText("Welcome to MPS, " + name + "\n Your ID: " + ID);
}

void MPS::on_out_clicked()
{
    ui->label_4->setText("Area is out of range");
}


void MPS::on_comboBox_currentIndexChanged(int index)
{
    reset();
    graph.setend(graph.getNode(ui->comboBox->itemText(index)));
}
void MPS::on_AddFav_clicked()
{
    if (graph.start != NULL) {
        bool favFound = false;
        for (int i = 0; i < ui->Favs->count(); i++)
        {
            if (ui->Favs->itemText(i) == ui->START->toPlainText())
            {
                favFound = true; break;
            }
        }
        if (!favFound)
            ui->Favs->addItem(ui->START->toPlainText());
        if (file->open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append))
        {
            stream->operator<<(QString::number(graph.nodes.indexOf(graph.start)) + "  " + ui->START->toPlainText() + "   ");
        }
        file->close();
    }
}
void MPS::on_Change_clicked()
{
    if (!ui->Editor->text().isEmpty()) {
        graph.nodes[(int)graph.nodes.indexOf(graph.getNode(ui->Favs->currentText()))]->setname(ui->Editor->text());
        ui->Favs->removeItem(ui->Favs->currentIndex());
        ui->Favs->addItem(ui->Editor->text());
        file->open(QIODevice::ReadWrite | QIODevice::Text);
        file->resize(0);
        for (int i = 0; i < ui->Favs->count(); i++)
            stream->operator<<((QString::number((int)graph.nodes.indexOf(graph.getNode(ui->Favs->itemText(i))))) + "  " + graph.getNode(ui->Favs->itemText(i))->name + "   ");
        file->close();
    }
}
void MPS::setUser(User user)
{
    this->users = &user;
    file = new QFile(user.username + ".txt");
    stream = new QTextStream(file);
    if (file->open(QIODevice::ReadWrite | QIODevice::Text | QIODevice::Append)) {
        file->reset();
        if (file->size() != 0) {
            QStringList s = stream->readLine().split("   ");
            for (int i = 0; i < s.size() - 1; i++) {
                QStringList d = s[i].split("  ");
                graph.nodes[d[0].toInt()]->setname(d[1]);
                ui->Favs->addItem(d[1]);
            }
        }
    }
    file->close();
}
void MPS::on_Favs_currentIndexChanged(int index)
{
    reset();
    if (ui->rs->isChecked()) {
        ui->re->setChecked(false);
        graph.getNode(ui->Favs->itemText(index))->button->click();

    }
    if (ui->re->isChecked()) {
        ui->rs->setChecked(false);
        graph.setend(graph.getNode(ui->Favs->itemText(index)));
        ui->comboBox->setCurrentIndex(0);
    }


}



