/********************************************************************************
** Form generated from reading UI file 'documents.ui'
**
** Created: Mon 20. Nov 11:15:24 2017
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTS_H
#define UI_DOCUMENTS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "document/UBDocumentController.h"
#include "gui/UBDocumentThumbnailWidget.h"

QT_BEGIN_NAMESPACE

class Ui_documents
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *topWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QWidget *topLeftWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *collapseAll;
    QPushButton *expandAll;
    QComboBox *sortKind;
    QComboBox *sortOrder;
    UBDocumentTreeView *documentTreeView;
    QFrame *topRightFrame;
    QVBoxLayout *verticalLayout_3;
    UBDocumentThumbnailWidget *thumbnailWidget;
    QWidget *bottomRightFrame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer2;
    QSlider *documentZoomSlider;
    QSpacerItem *horizontalSpacer1;

    void setupUi(QWidget *documents)
    {
        if (documents->objectName().isEmpty())
            documents->setObjectName(QString::fromUtf8("documents"));
        documents->setEnabled(true);
        documents->resize(796, 646);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(documents->sizePolicy().hasHeightForWidth());
        documents->setSizePolicy(sizePolicy);
        documents->setContextMenuPolicy(Qt::DefaultContextMenu);
        documents->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(documents);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        topWidget = new QWidget(documents);
        topWidget->setObjectName(QString::fromUtf8("topWidget"));
        horizontalLayout = new QHBoxLayout(topWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        splitter = new QSplitter(topWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(6);
        topLeftWidget = new QWidget(splitter);
        topLeftWidget->setObjectName(QString::fromUtf8("topLeftWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(topLeftWidget->sizePolicy().hasHeightForWidth());
        topLeftWidget->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(topLeftWidget);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        collapseAll = new QPushButton(topLeftWidget);
        collapseAll->setObjectName(QString::fromUtf8("collapseAll"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(collapseAll->sizePolicy().hasHeightForWidth());
        collapseAll->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/collapse-all.png"), QSize(), QIcon::Normal, QIcon::Off);
        collapseAll->setIcon(icon);
        collapseAll->setFlat(true);

        horizontalLayout_3->addWidget(collapseAll);

        expandAll = new QPushButton(topLeftWidget);
        expandAll->setObjectName(QString::fromUtf8("expandAll"));
        sizePolicy2.setHeightForWidth(expandAll->sizePolicy().hasHeightForWidth());
        expandAll->setSizePolicy(sizePolicy2);
        expandAll->setText(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/expand-all.png"), QSize(), QIcon::Normal, QIcon::Off);
        expandAll->setIcon(icon1);
        expandAll->setFlat(true);

        horizontalLayout_3->addWidget(expandAll);

        sortKind = new QComboBox(topLeftWidget);
        sortKind->setObjectName(QString::fromUtf8("sortKind"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(4);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sortKind->sizePolicy().hasHeightForWidth());
        sortKind->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(sortKind);

        sortOrder = new QComboBox(topLeftWidget);
        sortOrder->setObjectName(QString::fromUtf8("sortOrder"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(sortOrder->sizePolicy().hasHeightForWidth());
        sortOrder->setSizePolicy(sizePolicy4);

        horizontalLayout_3->addWidget(sortOrder);


        verticalLayout_2->addLayout(horizontalLayout_3);

        documentTreeView = new UBDocumentTreeView(topLeftWidget);
        documentTreeView->setObjectName(QString::fromUtf8("documentTreeView"));
        documentTreeView->setMinimumSize(QSize(400, 0));
        documentTreeView->setMaximumSize(QSize(16777215, 16777215));
        documentTreeView->setFrameShape(QFrame::NoFrame);
        documentTreeView->setFrameShadow(QFrame::Plain);
        documentTreeView->setAutoScroll(true);
        documentTreeView->setAutoScrollMargin(65);
        documentTreeView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        documentTreeView->setSelectionBehavior(QAbstractItemView::SelectRows);
        documentTreeView->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        documentTreeView->setAnimated(true);
        documentTreeView->setHeaderHidden(true);
        documentTreeView->header()->setVisible(false);

        verticalLayout_2->addWidget(documentTreeView);

        splitter->addWidget(topLeftWidget);
        topRightFrame = new QFrame(splitter);
        topRightFrame->setObjectName(QString::fromUtf8("topRightFrame"));
        topRightFrame->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(topRightFrame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        thumbnailWidget = new UBDocumentThumbnailWidget(topRightFrame);
        thumbnailWidget->setObjectName(QString::fromUtf8("thumbnailWidget"));
        thumbnailWidget->setContextMenuPolicy(Qt::NoContextMenu);
        thumbnailWidget->setStyleSheet(QString::fromUtf8(""));
        thumbnailWidget->setFrameShape(QFrame::NoFrame);
        thumbnailWidget->setFrameShadow(QFrame::Plain);
        thumbnailWidget->setLineWidth(1);
        thumbnailWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        thumbnailWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        thumbnailWidget->setDragMode(QGraphicsView::NoDrag);

        verticalLayout_3->addWidget(thumbnailWidget);

        bottomRightFrame = new QWidget(topRightFrame);
        bottomRightFrame->setObjectName(QString::fromUtf8("bottomRightFrame"));
        horizontalLayout_2 = new QHBoxLayout(bottomRightFrame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer2 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer2);

        documentZoomSlider = new QSlider(bottomRightFrame);
        documentZoomSlider->setObjectName(QString::fromUtf8("documentZoomSlider"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(documentZoomSlider->sizePolicy().hasHeightForWidth());
        documentZoomSlider->setSizePolicy(sizePolicy5);
        documentZoomSlider->setMinimumSize(QSize(150, 0));
        documentZoomSlider->setStyleSheet(QString::fromUtf8(""));
        documentZoomSlider->setMinimum(50);
        documentZoomSlider->setMaximum(500);
        documentZoomSlider->setSingleStep(10);
        documentZoomSlider->setValue(150);
        documentZoomSlider->setOrientation(Qt::Horizontal);
        documentZoomSlider->setInvertedAppearance(false);
        documentZoomSlider->setInvertedControls(false);

        horizontalLayout_2->addWidget(documentZoomSlider);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer1);


        verticalLayout_3->addWidget(bottomRightFrame);

        splitter->addWidget(topRightFrame);

        horizontalLayout->addWidget(splitter);


        verticalLayout->addWidget(topWidget);


        retranslateUi(documents);

        QMetaObject::connectSlotsByName(documents);
    } // setupUi

    void retranslateUi(QWidget *documents)
    {
        documents->setWindowTitle(QApplication::translate("documents", "Uniboard Documents", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        collapseAll->setToolTip(QApplication::translate("documents", "Collapse All", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        collapseAll->setText(QString());
#ifndef QT_NO_TOOLTIP
        expandAll->setToolTip(QApplication::translate("documents", "Expand All", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sortKind->clear();
        sortKind->insertItems(0, QStringList()
         << QApplication::translate("documents", "Select a sort", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("documents", "Creation date", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("documents", "Update date", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("documents", "Alphabetical order", 0, QApplication::UnicodeUTF8)
        );
        sortOrder->clear();
        sortOrder->insertItems(0, QStringList()
         << QApplication::translate("documents", "Ascending order", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("documents", "Descending order", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class documents: public Ui_documents {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMENTS_H
