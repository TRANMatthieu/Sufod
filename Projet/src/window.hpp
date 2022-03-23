#pragma once

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <QMainWindow>

#include "render_area.hpp"

//Forward declaration of Ui::mainWindow and render_area
namespace Ui{
class MainWindow;
}
class render_area;

//Declaraction of the class Window
class window: public QMainWindow
{
    Q_OBJECT
    graphe mon_graphe;

public:

    window(graphe& mon_graphe,QWidget *parent=nullptr);
    ~window();

private slots:

    void action_quit();
    void action_draw();
    void action_parcours();
    void action_wall();
    void action_init();

private:

    Ui::MainWindow *ui;
    render_area *render;
};

#endif
