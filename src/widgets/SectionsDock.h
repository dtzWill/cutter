#ifndef SECTIONSDOCK_H
#define SECTIONSDOCK_H

#include <memory>

#include <QDockWidget>

class MainWindow;
class SectionsWidget;

namespace Ui
{
    class SectionsDock;
}

class SectionsDock : public QDockWidget
{
    Q_OBJECT

public:
    explicit SectionsDock(MainWindow *main, QWidget *parent = 0);
    ~SectionsDock();

protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:

    void showSectionsContextMenu(const QPoint &pt);

    void on_actionVertical_triggered();

    void on_actionHorizontal_triggered();

private:
    std::unique_ptr<Ui::SectionsDock> ui;
    MainWindow      *main;
    SectionsWidget  *sectionsWidget;
};

#endif // SECTIONSDOCK_H
