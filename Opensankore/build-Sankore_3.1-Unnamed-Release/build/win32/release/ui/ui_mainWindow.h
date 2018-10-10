/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created: Fri 4. May 12:28:06 2018
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStylus;
    QAction *actionBackgrounds;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionBack;
    QAction *actionForward;
    QAction *actionDocument;
    QAction *actionWeb;
    QAction *actionLineSmall;
    QAction *actionLineMedium;
    QAction *actionLineLarge;
    QAction *actionQuit;
    QAction *actionEraserSmall;
    QAction *actionEraserMedium;
    QAction *actionEraserLarge;
    QAction *actionColor0;
    QAction *actionColor1;
    QAction *actionColor2;
    QAction *actionColor3;
    QAction *actionWebBack;
    QAction *actionWebForward;
    QAction *actionWebReload;
    QAction *actionHome;
    QAction *actionBookmarks;
    QAction *actionAddBookmark;
    QAction *actionBoard;
    QAction *actionErase;
    QAction *actionPreferences;
    QAction *actionLibrary;
    QAction *actionMenu;
    QAction *actionDesktop;
    QAction *actionWebBigger;
    QAction *actionWebSmaller;
    QAction *actionNewFolder;
    QAction *actionNewDocument;
    QAction *actionImport;
    QAction *actionExport;
    QAction *actionOpen;
    QAction *actionDuplicate;
    QAction *actionDelete;
    QAction *actionAddToWorkingDocument;
    QAction *actionDocumentAdd;
    QAction *actionRename;
    QAction *actionDocumentTools;
    QAction *actionWebTools;
    QAction *actionMultiScreen;
    QAction *actionWidePageSize;
    QAction *actionRegularPageSize;
    QAction *actionCustomPageSize;
    QAction *actionStopLoading;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSleep;
    QAction *actionVirtualKeyboard;
    QAction *actionPlainLightBackground;
    QAction *actionCrossedLightBackground;
    QAction *actionPlainDarkBackground;
    QAction *actionCrossedDarkBackground;
    QAction *actionPodcast;
    QAction *actionPodcastRecord;
    QAction *actionEraseItems;
    QAction *actionEraseAnnotations;
    QAction *actionClearPage;
    QAction *actionAdd;
    QAction *actionPen;
    QAction *actionEraser;
    QAction *actionMarker;
    QAction *actionSelector;
    QAction *actionHand;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionPointer;
    QAction *actionLine;
    QAction *actionText;
    QAction *actionCapture;
    QAction *actionAddItemToCurrentPage;
    QAction *actionAddItemToNewPage;
    QAction *actionAddItemToLibrary;
    QAction *actionPages;
    QAction *actionNewPage;
    QAction *actionDuplicatePage;
    QAction *actionImportPage;
    QAction *actionPodcastPause;
    QAction *actionPodcastConfig;
    QAction *actionWebTrap;
    QAction *actionWebCustomCapture;
    QAction *actionWebWindowCapture;
    QAction *actionWebShowHideOnDisplay;
    QAction *actionEraseDesktopAnnotations;
    QAction *actionEduMedia;
    QAction *actionTutorial;
    QAction *actionCheckUpdate;
    QAction *actionSankoreEditor;
    QAction *actionHideApplication;
    QAction *actionGroupItems;
    QAction *actionPlay;
    QAction *actionEraseBackground;
    QAction *actionBookmark;
    QAction *actionWebTrapContent;
    QAction *actionWebTrapToLibrary;
    QAction *actionWebTrapToCurrentPage;
    QAction *actionWebTrapLinkToLibrary;
    QAction *actionWebTrapLinkToPage;
    QAction *actionCenterImageBackground;
    QAction *actionAdjustImageBackground;
    QAction *actionExtendImageBackground;
    QAction *actionFillImageBackground;
    QAction *actionMosaicImageBackground;
    QAction *actionWidePageSize_16_10;
    QAction *actionRichTextEditor;
    QAction *actionEllipse;
    QAction *actionChangeFillingColor;
    QAction *actionPolygon;
    QAction *actionDrawing;
    QAction *actionCircle;
    QAction *actionRectangle;
    QAction *actionSquare;
    QAction *actionSmartPen;
    QAction *actionSmartLine;
    QAction *actionRegularShapes;
    QAction *actionRegularTriangle;
    QAction *actionRegularSquare;
    QAction *actionRegularPentagone;
    QAction *actionRegularHexagone;
    QAction *actionRegularHeptagone;
    QAction *actionRegularOctogone;
    QAction *actionStrokeProperties;
    QAction *actionFillProperties;
    QAction *actionStrokePropertyThickness0;
    QAction *actionStrokePropertyThickness1;
    QAction *actionStrokePropertyThickness2;
    QAction *actionStrokePropertyStyleSolidLine;
    QAction *actionStrokePropertyStyleDotLine;
    QAction *actionColorStyleTransparent;
    QAction *actionColorStyleGradient;
    QAction *actionColorStyleFull;
    QAction *actionFillStyleDense;
    QAction *actionFillStyleDiag;
    QAction *actionStrokePropertyStyleCustomDash;
    QAction *actionAlignObject;
    QAction *actionAlignToLeft;
    QAction *actionVerticalCenter;
    QAction *actionAlignToRight;
    QAction *actionAlignToTop;
    QAction *actionHorizontalCenter;
    QAction *actionAlignToBottom;
    QAction *actionEndArrowStyleArrow;
    QAction *actionStartArrowStyleArrow;
    QAction *actionEndArrowStyleRound;
    QAction *actionStartArrowStyleRound;
    QAction *actionEndArrowStyleNone;
    QAction *actionStartArrowStyleNone;
    QAction *actionArrowProperties;
    QWidget *centralwidget;
    QToolBar *boardToolBar;
    QToolBar *webToolBar;
    QToolBar *documentToolBar;
    QToolBar *tutorialToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1197, 252);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/uniboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::Italian, QLocale::Italy));
        MainWindow->setIconSize(QSize(32, 32));
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->setAnimated(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionStylus = new QAction(MainWindow);
        actionStylus->setObjectName(QString::fromUtf8("actionStylus"));
        actionStylus->setCheckable(true);
        actionStylus->setChecked(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/toolbar/stylus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStylus->setIcon(icon1);
        actionBackgrounds = new QAction(MainWindow);
        actionBackgrounds->setObjectName(QString::fromUtf8("actionBackgrounds"));
        actionBackgrounds->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/toolbar/background.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBackgrounds->setIcon(icon2);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/toolbar/undoOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon3);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/toolbar/redoOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon4);
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/toolbar/previousPageOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBack->setIcon(icon5);
        actionForward = new QAction(MainWindow);
        actionForward->setObjectName(QString::fromUtf8("actionForward"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/toolbar/nextPageOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionForward->setIcon(icon6);
        actionDocument = new QAction(MainWindow);
        actionDocument->setObjectName(QString::fromUtf8("actionDocument"));
        actionDocument->setCheckable(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/toolbar/documents.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocument->setIcon(icon7);
        actionWeb = new QAction(MainWindow);
        actionWeb->setObjectName(QString::fromUtf8("actionWeb"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/toolbar/web.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWeb->setIcon(icon8);
        actionLineSmall = new QAction(MainWindow);
        actionLineSmall->setObjectName(QString::fromUtf8("actionLineSmall"));
        actionLineSmall->setCheckable(true);
        actionLineSmall->setChecked(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/toolbar/smallPen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineSmall->setIcon(icon9);
        actionLineMedium = new QAction(MainWindow);
        actionLineMedium->setObjectName(QString::fromUtf8("actionLineMedium"));
        actionLineMedium->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/toolbar/mediumPen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineMedium->setIcon(icon10);
        actionLineLarge = new QAction(MainWindow);
        actionLineLarge->setObjectName(QString::fromUtf8("actionLineLarge"));
        actionLineLarge->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/toolbar/largePen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLineLarge->setIcon(icon11);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/toolbar/quitOn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon12);
        actionQuit->setShortcutContext(Qt::WindowShortcut);
        actionQuit->setMenuRole(QAction::NoRole);
        actionEraserSmall = new QAction(MainWindow);
        actionEraserSmall->setObjectName(QString::fromUtf8("actionEraserSmall"));
        actionEraserSmall->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/toolbar/smallEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserSmall->setIcon(icon13);
        actionEraserMedium = new QAction(MainWindow);
        actionEraserMedium->setObjectName(QString::fromUtf8("actionEraserMedium"));
        actionEraserMedium->setCheckable(true);
        actionEraserMedium->setChecked(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/toolbar/mediumEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserMedium->setIcon(icon14);
        actionEraserLarge = new QAction(MainWindow);
        actionEraserLarge->setObjectName(QString::fromUtf8("actionEraserLarge"));
        actionEraserLarge->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/toolbar/largeEraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraserLarge->setIcon(icon15);
        actionColor0 = new QAction(MainWindow);
        actionColor0->setObjectName(QString::fromUtf8("actionColor0"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/toolbar/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor0->setIcon(icon16);
        actionColor1 = new QAction(MainWindow);
        actionColor1->setObjectName(QString::fromUtf8("actionColor1"));
        actionColor1->setIcon(icon16);
        actionColor2 = new QAction(MainWindow);
        actionColor2->setObjectName(QString::fromUtf8("actionColor2"));
        actionColor2->setIcon(icon16);
        actionColor3 = new QAction(MainWindow);
        actionColor3->setObjectName(QString::fromUtf8("actionColor3"));
        actionColor3->setIcon(icon16);
        actionWebBack = new QAction(MainWindow);
        actionWebBack->setObjectName(QString::fromUtf8("actionWebBack"));
        actionWebBack->setIcon(icon5);
        actionWebForward = new QAction(MainWindow);
        actionWebForward->setObjectName(QString::fromUtf8("actionWebForward"));
        actionWebForward->setIcon(icon6);
        actionWebReload = new QAction(MainWindow);
        actionWebReload->setObjectName(QString::fromUtf8("actionWebReload"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/toolbar/reload.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebReload->setIcon(icon17);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/toolbar/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon18);
        actionBookmarks = new QAction(MainWindow);
        actionBookmarks->setObjectName(QString::fromUtf8("actionBookmarks"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/toolbar/bookmarks.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBookmarks->setIcon(icon19);
        actionAddBookmark = new QAction(MainWindow);
        actionAddBookmark->setObjectName(QString::fromUtf8("actionAddBookmark"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/toolbar/addBookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddBookmark->setIcon(icon20);
        actionBoard = new QAction(MainWindow);
        actionBoard->setObjectName(QString::fromUtf8("actionBoard"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/toolbar/board.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBoard->setIcon(icon21);
        actionErase = new QAction(MainWindow);
        actionErase->setObjectName(QString::fromUtf8("actionErase"));
        actionErase->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/toolbar/clearPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionErase->setIcon(icon22);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/toolbar/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon23);
        actionPreferences->setVisible(true);
        actionLibrary = new QAction(MainWindow);
        actionLibrary->setObjectName(QString::fromUtf8("actionLibrary"));
        actionLibrary->setCheckable(true);
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/toolbar/library.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLibrary->setIcon(icon24);
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QString::fromUtf8("actionMenu"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/toolbar/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMenu->setIcon(icon25);
        actionMenu->setVisible(false);
        actionDesktop = new QAction(MainWindow);
        actionDesktop->setObjectName(QString::fromUtf8("actionDesktop"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/toolbar/display.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDesktop->setIcon(icon26);
        actionWebBigger = new QAction(MainWindow);
        actionWebBigger->setObjectName(QString::fromUtf8("actionWebBigger"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/stylusPalette/zoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebBigger->setIcon(icon27);
        actionWebSmaller = new QAction(MainWindow);
        actionWebSmaller->setObjectName(QString::fromUtf8("actionWebSmaller"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebSmaller->setIcon(icon28);
        actionNewFolder = new QAction(MainWindow);
        actionNewFolder->setObjectName(QString::fromUtf8("actionNewFolder"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/toolbar/newFolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFolder->setIcon(icon29);
        actionNewDocument = new QAction(MainWindow);
        actionNewDocument->setObjectName(QString::fromUtf8("actionNewDocument"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/toolbar/newDocument.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewDocument->setIcon(icon30);
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/toolbar/import.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImport->setIcon(icon31);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/images/toolbar/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon32);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/images/toolbar/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon33);
        actionDuplicate = new QAction(MainWindow);
        actionDuplicate->setObjectName(QString::fromUtf8("actionDuplicate"));
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/images/toolbar/duplicate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDuplicate->setIcon(icon34);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/images/toolbar/deleteDocument.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete->setIcon(icon35);
        actionAddToWorkingDocument = new QAction(MainWindow);
        actionAddToWorkingDocument->setObjectName(QString::fromUtf8("actionAddToWorkingDocument"));
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/images/toolbar/addToWorkingDoc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddToWorkingDocument->setIcon(icon36);
        actionDocumentAdd = new QAction(MainWindow);
        actionDocumentAdd->setObjectName(QString::fromUtf8("actionDocumentAdd"));
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/images/toolbar/addToPage.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocumentAdd->setIcon(icon37);
        actionRename = new QAction(MainWindow);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        actionRename->setEnabled(true);
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/images/toolbar/rename.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRename->setIcon(icon38);
        actionRename->setVisible(true);
        actionRename->setMenuRole(QAction::TextHeuristicRole);
        actionRename->setIconVisibleInMenu(true);
        actionDocumentTools = new QAction(MainWindow);
        actionDocumentTools->setObjectName(QString::fromUtf8("actionDocumentTools"));
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/images/toolbar/tools.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDocumentTools->setIcon(icon39);
        actionWebTools = new QAction(MainWindow);
        actionWebTools->setObjectName(QString::fromUtf8("actionWebTools"));
        actionWebTools->setCheckable(true);
        actionWebTools->setIcon(icon39);
        actionMultiScreen = new QAction(MainWindow);
        actionMultiScreen->setObjectName(QString::fromUtf8("actionMultiScreen"));
        actionMultiScreen->setCheckable(true);
        actionMultiScreen->setChecked(true);
        actionMultiScreen->setIcon(icon26);
        actionWidePageSize = new QAction(MainWindow);
        actionWidePageSize->setObjectName(QString::fromUtf8("actionWidePageSize"));
        actionWidePageSize->setCheckable(true);
        actionWidePageSize->setIcon(icon37);
        actionWidePageSize->setIconVisibleInMenu(false);
        actionRegularPageSize = new QAction(MainWindow);
        actionRegularPageSize->setObjectName(QString::fromUtf8("actionRegularPageSize"));
        actionRegularPageSize->setCheckable(true);
        actionRegularPageSize->setIcon(icon37);
        actionRegularPageSize->setIconVisibleInMenu(false);
        actionCustomPageSize = new QAction(MainWindow);
        actionCustomPageSize->setObjectName(QString::fromUtf8("actionCustomPageSize"));
        actionCustomPageSize->setCheckable(true);
        actionCustomPageSize->setEnabled(false);
        actionCustomPageSize->setIcon(icon37);
        actionCustomPageSize->setIconVisibleInMenu(false);
        actionStopLoading = new QAction(MainWindow);
        actionStopLoading->setObjectName(QString::fromUtf8("actionStopLoading"));
        actionStopLoading->setIcon(icon35);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/images/toolbar/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon40);
        actionCut->setShortcutContext(Qt::ApplicationShortcut);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/images/toolbar/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon41);
        actionCopy->setShortcutContext(Qt::ApplicationShortcut);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon42;
        icon42.addFile(QString::fromUtf8(":/images/toolbar/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon42);
        actionPaste->setShortcutContext(Qt::ApplicationShortcut);
        actionPaste->setMenuRole(QAction::TextHeuristicRole);
        actionSleep = new QAction(MainWindow);
        actionSleep->setObjectName(QString::fromUtf8("actionSleep"));
        QIcon icon43;
        icon43.addFile(QString::fromUtf8(":/images/extraPalette/blackout.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon43.addFile(QString::fromUtf8(":/images/extraPalette/blackoutOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSleep->setIcon(icon43);
        actionVirtualKeyboard = new QAction(MainWindow);
        actionVirtualKeyboard->setObjectName(QString::fromUtf8("actionVirtualKeyboard"));
        actionVirtualKeyboard->setCheckable(true);
        QIcon icon44;
        icon44.addFile(QString::fromUtf8(":/images/extraPalette/keyboard.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon44.addFile(QString::fromUtf8(":/images/extraPalette/keyboardOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionVirtualKeyboard->setIcon(icon44);
        actionPlainLightBackground = new QAction(MainWindow);
        actionPlainLightBackground->setObjectName(QString::fromUtf8("actionPlainLightBackground"));
        actionPlainLightBackground->setCheckable(true);
        QIcon icon45;
        icon45.addFile(QString::fromUtf8(":/images/backgroundPalette/background1.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon45.addFile(QString::fromUtf8(":/images/backgroundPalette/background1On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPlainLightBackground->setIcon(icon45);
        actionCrossedLightBackground = new QAction(MainWindow);
        actionCrossedLightBackground->setObjectName(QString::fromUtf8("actionCrossedLightBackground"));
        actionCrossedLightBackground->setCheckable(true);
        QIcon icon46;
        icon46.addFile(QString::fromUtf8(":/images/backgroundPalette/background2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon46.addFile(QString::fromUtf8(":/images/backgroundPalette/background2On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCrossedLightBackground->setIcon(icon46);
        actionPlainDarkBackground = new QAction(MainWindow);
        actionPlainDarkBackground->setObjectName(QString::fromUtf8("actionPlainDarkBackground"));
        actionPlainDarkBackground->setCheckable(true);
        QIcon icon47;
        icon47.addFile(QString::fromUtf8(":/images/backgroundPalette/background3.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon47.addFile(QString::fromUtf8(":/images/backgroundPalette/background3On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionPlainDarkBackground->setIcon(icon47);
        actionCrossedDarkBackground = new QAction(MainWindow);
        actionCrossedDarkBackground->setObjectName(QString::fromUtf8("actionCrossedDarkBackground"));
        actionCrossedDarkBackground->setCheckable(true);
        QIcon icon48;
        icon48.addFile(QString::fromUtf8(":/images/backgroundPalette/background4.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon48.addFile(QString::fromUtf8(":/images/backgroundPalette/background4On.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionCrossedDarkBackground->setIcon(icon48);
        actionPodcast = new QAction(MainWindow);
        actionPodcast->setObjectName(QString::fromUtf8("actionPodcast"));
        actionPodcast->setCheckable(true);
        QIcon icon49;
        icon49.addFile(QString::fromUtf8(":/images/toolbar/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPodcast->setIcon(icon49);
        actionPodcastRecord = new QAction(MainWindow);
        actionPodcastRecord->setObjectName(QString::fromUtf8("actionPodcastRecord"));
        actionPodcastRecord->setCheckable(true);
        QIcon icon50;
        icon50.addFile(QString::fromUtf8(":/images/toolbar/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon50.addFile(QString::fromUtf8(":/images/toolbar/stop.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPodcastRecord->setIcon(icon50);
        actionEraseItems = new QAction(MainWindow);
        actionEraseItems->setObjectName(QString::fromUtf8("actionEraseItems"));
        QIcon icon51;
        icon51.addFile(QString::fromUtf8(":/images/erasePalette/eraseItem.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseItems->setIcon(icon51);
        actionEraseAnnotations = new QAction(MainWindow);
        actionEraseAnnotations->setObjectName(QString::fromUtf8("actionEraseAnnotations"));
        QIcon icon52;
        icon52.addFile(QString::fromUtf8(":/images/erasePalette/eraseAnnotation.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseAnnotations->setIcon(icon52);
        actionClearPage = new QAction(MainWindow);
        actionClearPage->setObjectName(QString::fromUtf8("actionClearPage"));
        QIcon icon53;
        icon53.addFile(QString::fromUtf8(":/images/erasePalette/eraseAll.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearPage->setIcon(icon53);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionAdd->setIcon(icon37);
        actionPen = new QAction(MainWindow);
        actionPen->setObjectName(QString::fromUtf8("actionPen"));
        actionPen->setCheckable(true);
        actionPen->setChecked(true);
        QIcon icon54;
        icon54.addFile(QString::fromUtf8(":/images/stylusPalette/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon54.addFile(QString::fromUtf8(":/images/stylusPalette/penOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPen->setIcon(icon54);
        actionEraser = new QAction(MainWindow);
        actionEraser->setObjectName(QString::fromUtf8("actionEraser"));
        actionEraser->setCheckable(true);
        QIcon icon55;
        icon55.addFile(QString::fromUtf8(":/images/stylusPalette/eraser.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon55.addFile(QString::fromUtf8(":/images/stylusPalette/eraserOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEraser->setIcon(icon55);
        actionMarker = new QAction(MainWindow);
        actionMarker->setObjectName(QString::fromUtf8("actionMarker"));
        actionMarker->setCheckable(true);
        QIcon icon56;
        icon56.addFile(QString::fromUtf8(":/images/stylusPalette/marker.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon56.addFile(QString::fromUtf8(":/images/stylusPalette/markerOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionMarker->setIcon(icon56);
        actionSelector = new QAction(MainWindow);
        actionSelector->setObjectName(QString::fromUtf8("actionSelector"));
        actionSelector->setCheckable(true);
        QIcon icon57;
        icon57.addFile(QString::fromUtf8(":/images/stylusPalette/arrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon57.addFile(QString::fromUtf8(":/images/stylusPalette/arrowOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSelector->setIcon(icon57);
        actionHand = new QAction(MainWindow);
        actionHand->setObjectName(QString::fromUtf8("actionHand"));
        actionHand->setCheckable(true);
        QIcon icon58;
        icon58.addFile(QString::fromUtf8(":/images/stylusPalette/hand.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon58.addFile(QString::fromUtf8(":/images/stylusPalette/handOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHand->setIcon(icon58);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        actionZoomIn->setCheckable(true);
        QIcon icon59;
        icon59.addFile(QString::fromUtf8(":/images/stylusPalette/zoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon59.addFile(QString::fromUtf8(":/images/stylusPalette/zoomInOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomIn->setIcon(icon59);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        actionZoomOut->setCheckable(true);
        QIcon icon60;
        icon60.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon60.addFile(QString::fromUtf8(":/images/stylusPalette/zoomOutOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoomOut->setIcon(icon60);
        actionPointer = new QAction(MainWindow);
        actionPointer->setObjectName(QString::fromUtf8("actionPointer"));
        actionPointer->setCheckable(true);
        QIcon icon61;
        icon61.addFile(QString::fromUtf8(":/images/stylusPalette/laser.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon61.addFile(QString::fromUtf8(":/images/stylusPalette/laserOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPointer->setIcon(icon61);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        actionLine->setCheckable(true);
        QIcon icon62;
        icon62.addFile(QString::fromUtf8(":/images/stylusPalette/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon62.addFile(QString::fromUtf8(":/images/stylusPalette/lineOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionLine->setIcon(icon62);
        actionText = new QAction(MainWindow);
        actionText->setObjectName(QString::fromUtf8("actionText"));
        actionText->setCheckable(true);
        QIcon icon63;
        icon63.addFile(QString::fromUtf8(":/images/stylusPalette/text.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon63.addFile(QString::fromUtf8(":/images/stylusPalette/textOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionText->setIcon(icon63);
        actionCapture = new QAction(MainWindow);
        actionCapture->setObjectName(QString::fromUtf8("actionCapture"));
        actionCapture->setCheckable(true);
        QIcon icon64;
        icon64.addFile(QString::fromUtf8(":/images/stylusPalette/captureArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon64.addFile(QString::fromUtf8(":/images/stylusPalette/captureAreaOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCapture->setIcon(icon64);
        actionAddItemToCurrentPage = new QAction(MainWindow);
        actionAddItemToCurrentPage->setObjectName(QString::fromUtf8("actionAddItemToCurrentPage"));
        QIcon icon65;
        icon65.addFile(QString::fromUtf8(":/images/addItemToCurrentPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToCurrentPage->setIcon(icon65);
        actionAddItemToNewPage = new QAction(MainWindow);
        actionAddItemToNewPage->setObjectName(QString::fromUtf8("actionAddItemToNewPage"));
        QIcon icon66;
        icon66.addFile(QString::fromUtf8(":/images/addItemToNewPage.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToNewPage->setIcon(icon66);
        actionAddItemToLibrary = new QAction(MainWindow);
        actionAddItemToLibrary->setObjectName(QString::fromUtf8("actionAddItemToLibrary"));
        QIcon icon67;
        icon67.addFile(QString::fromUtf8(":/images/addItemToLibrary.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddItemToLibrary->setIcon(icon67);
        actionPages = new QAction(MainWindow);
        actionPages->setObjectName(QString::fromUtf8("actionPages"));
        actionPages->setCheckable(false);
        actionPages->setIcon(icon30);
        actionNewPage = new QAction(MainWindow);
        actionNewPage->setObjectName(QString::fromUtf8("actionNewPage"));
        actionNewPage->setIcon(icon65);
        actionDuplicatePage = new QAction(MainWindow);
        actionDuplicatePage->setObjectName(QString::fromUtf8("actionDuplicatePage"));
        actionDuplicatePage->setIcon(icon66);
        actionImportPage = new QAction(MainWindow);
        actionImportPage->setObjectName(QString::fromUtf8("actionImportPage"));
        actionImportPage->setIcon(icon67);
        actionPodcastPause = new QAction(MainWindow);
        actionPodcastPause->setObjectName(QString::fromUtf8("actionPodcastPause"));
        actionPodcastPause->setCheckable(true);
        actionPodcastPause->setEnabled(false);
        QIcon icon68;
        icon68.addFile(QString::fromUtf8(":/images/toolbar/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPodcastPause->setIcon(icon68);
        actionPodcastConfig = new QAction(MainWindow);
        actionPodcastConfig->setObjectName(QString::fromUtf8("actionPodcastConfig"));
        actionPodcastConfig->setIcon(icon23);
        actionWebTrap = new QAction(MainWindow);
        actionWebTrap->setObjectName(QString::fromUtf8("actionWebTrap"));
        actionWebTrap->setCheckable(true);
        QIcon icon69;
        icon69.addFile(QString::fromUtf8(":/images/extraPalette/webTrap.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon69.addFile(QString::fromUtf8(":/images/extraPalette/webTrapEnabled.png"), QSize(), QIcon::Normal, QIcon::On);
        actionWebTrap->setIcon(icon69);
        actionWebCustomCapture = new QAction(MainWindow);
        actionWebCustomCapture->setObjectName(QString::fromUtf8("actionWebCustomCapture"));
        QIcon icon70;
        icon70.addFile(QString::fromUtf8(":/images/toolbar/captureArea.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebCustomCapture->setIcon(icon70);
        actionWebWindowCapture = new QAction(MainWindow);
        actionWebWindowCapture->setObjectName(QString::fromUtf8("actionWebWindowCapture"));
        QIcon icon71;
        icon71.addFile(QString::fromUtf8(":/images/toolbar/captureWindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebWindowCapture->setIcon(icon71);
        actionWebShowHideOnDisplay = new QAction(MainWindow);
        actionWebShowHideOnDisplay->setObjectName(QString::fromUtf8("actionWebShowHideOnDisplay"));
        actionWebShowHideOnDisplay->setCheckable(true);
        QIcon icon72;
        icon72.addFile(QString::fromUtf8(":/images/toolbar/eyeClosed.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon72.addFile(QString::fromUtf8(":/images/toolbar/eyeOpened.png"), QSize(), QIcon::Normal, QIcon::On);
        actionWebShowHideOnDisplay->setIcon(icon72);
        actionWebShowHideOnDisplay->setAutoRepeat(false);
        actionWebShowHideOnDisplay->setMenuRole(QAction::TextHeuristicRole);
        actionEraseDesktopAnnotations = new QAction(MainWindow);
        actionEraseDesktopAnnotations->setObjectName(QString::fromUtf8("actionEraseDesktopAnnotations"));
        actionEraseDesktopAnnotations->setIcon(icon52);
        actionEduMedia = new QAction(MainWindow);
        actionEduMedia->setObjectName(QString::fromUtf8("actionEduMedia"));
        QIcon icon73;
        icon73.addFile(QString::fromUtf8(":/images/toolbar/addToolToLibrary.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEduMedia->setIcon(icon73);
        actionTutorial = new QAction(MainWindow);
        actionTutorial->setObjectName(QString::fromUtf8("actionTutorial"));
        QIcon icon74;
        icon74.addFile(QString::fromUtf8(":/images/toolbar/tutorial.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTutorial->setIcon(icon74);
        actionCheckUpdate = new QAction(MainWindow);
        actionCheckUpdate->setObjectName(QString::fromUtf8("actionCheckUpdate"));
        QIcon icon75;
        icon75.addFile(QString::fromUtf8(":/images/toolbar/updates.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCheckUpdate->setIcon(icon75);
        actionSankoreEditor = new QAction(MainWindow);
        actionSankoreEditor->setObjectName(QString::fromUtf8("actionSankoreEditor"));
        QIcon icon76;
        icon76.addFile(QString::fromUtf8(":/images/toolbar/paraschool.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSankoreEditor->setIcon(icon76);
        actionHideApplication = new QAction(MainWindow);
        actionHideApplication->setObjectName(QString::fromUtf8("actionHideApplication"));
        QIcon icon77;
        icon77.addFile(QString::fromUtf8(":/images/toolbar/hide.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHideApplication->setIcon(icon77);
        actionGroupItems = new QAction(MainWindow);
        actionGroupItems->setObjectName(QString::fromUtf8("actionGroupItems"));
        actionGroupItems->setCheckable(true);
        actionGroupItems->setEnabled(false);
        QIcon icon78;
        icon78.addFile(QString::fromUtf8(":/images/toolbar/group.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon78.addFile(QString::fromUtf8(":/images/toolbar/ungroup.png"), QSize(), QIcon::Normal, QIcon::On);
        actionGroupItems->setIcon(icon78);
        actionGroupItems->setVisible(false);
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        actionPlay->setCheckable(true);
        QIcon icon79;
        icon79.addFile(QString::fromUtf8(":/images/stylusPalette/handPlay.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon79.addFile(QString::fromUtf8(":/images/stylusPalette/handPlayOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPlay->setIcon(icon79);
        actionEraseBackground = new QAction(MainWindow);
        actionEraseBackground->setObjectName(QString::fromUtf8("actionEraseBackground"));
        QIcon icon80;
        icon80.addFile(QString::fromUtf8(":/images/erasePalette/eraseBackground.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionEraseBackground->setIcon(icon80);
        actionBookmark = new QAction(MainWindow);
        actionBookmark->setObjectName(QString::fromUtf8("actionBookmark"));
        QIcon icon81;
        icon81.addFile(QString::fromUtf8(":/images/toolbar/bookmark.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBookmark->setIcon(icon81);
        actionWebTrapContent = new QAction(MainWindow);
        actionWebTrapContent->setObjectName(QString::fromUtf8("actionWebTrapContent"));
        actionWebTrapContent->setCheckable(true);
        actionWebTrapContent->setIcon(icon73);
        actionWebTrapToLibrary = new QAction(MainWindow);
        actionWebTrapToLibrary->setObjectName(QString::fromUtf8("actionWebTrapToLibrary"));
        actionWebTrapToLibrary->setEnabled(false);
        QIcon icon82;
        icon82.addFile(QString::fromUtf8(":/images/trapFlashPalette/downloadToLibrary.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapToLibrary->setIcon(icon82);
        actionWebTrapToCurrentPage = new QAction(MainWindow);
        actionWebTrapToCurrentPage->setObjectName(QString::fromUtf8("actionWebTrapToCurrentPage"));
        actionWebTrapToCurrentPage->setEnabled(false);
        QIcon icon83;
        icon83.addFile(QString::fromUtf8(":/images/trapFlashPalette/downloadToBoard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapToCurrentPage->setIcon(icon83);
        actionWebTrapLinkToLibrary = new QAction(MainWindow);
        actionWebTrapLinkToLibrary->setObjectName(QString::fromUtf8("actionWebTrapLinkToLibrary"));
        QIcon icon84;
        icon84.addFile(QString::fromUtf8(":/images/trapFlashPalette/linkToLibrary.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapLinkToLibrary->setIcon(icon84);
        actionWebTrapLinkToPage = new QAction(MainWindow);
        actionWebTrapLinkToPage->setObjectName(QString::fromUtf8("actionWebTrapLinkToPage"));
        QIcon icon85;
        icon85.addFile(QString::fromUtf8(":/images/trapFlashPalette/linkToBoard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionWebTrapLinkToPage->setIcon(icon85);
        actionCenterImageBackground = new QAction(MainWindow);
        actionCenterImageBackground->setObjectName(QString::fromUtf8("actionCenterImageBackground"));
        actionCenterImageBackground->setCheckable(false);
        QIcon icon86;
        icon86.addFile(QString::fromUtf8("../images/imageBackgroundPalette/centerBackground.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenterImageBackground->setIcon(icon86);
        actionCenterImageBackground->setIconVisibleInMenu(true);
        actionAdjustImageBackground = new QAction(MainWindow);
        actionAdjustImageBackground->setObjectName(QString::fromUtf8("actionAdjustImageBackground"));
        actionAdjustImageBackground->setCheckable(false);
        QIcon icon87;
        icon87.addFile(QString::fromUtf8("../images/imageBackgroundPalette/adjustBackground.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon87.addFile(QString::fromUtf8("../images/imageBackgroundPalette/adjustBackground.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAdjustImageBackground->setIcon(icon87);
        actionExtendImageBackground = new QAction(MainWindow);
        actionExtendImageBackground->setObjectName(QString::fromUtf8("actionExtendImageBackground"));
        actionExtendImageBackground->setCheckable(false);
        QIcon icon88;
        icon88.addFile(QString::fromUtf8("../images/imageBackgroundPalette/extendBackground.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExtendImageBackground->setIcon(icon88);
        actionFillImageBackground = new QAction(MainWindow);
        actionFillImageBackground->setObjectName(QString::fromUtf8("actionFillImageBackground"));
        actionFillImageBackground->setCheckable(false);
        QIcon icon89;
        icon89.addFile(QString::fromUtf8("../images/imageBackgroundPalette/fillBackground.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon89.addFile(QString::fromUtf8("../images/imageBackgroundPalette/fillBackground.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFillImageBackground->setIcon(icon89);
        actionMosaicImageBackground = new QAction(MainWindow);
        actionMosaicImageBackground->setObjectName(QString::fromUtf8("actionMosaicImageBackground"));
        actionMosaicImageBackground->setCheckable(false);
        QIcon icon90;
        icon90.addFile(QString::fromUtf8("../images/imageBackgroundPalette/mosaicBackground.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon90.addFile(QString::fromUtf8("../images/imageBackgroundPalette/mosaicBackground.png"), QSize(), QIcon::Normal, QIcon::On);
        actionMosaicImageBackground->setIcon(icon90);
        actionWidePageSize_16_10 = new QAction(MainWindow);
        actionWidePageSize_16_10->setObjectName(QString::fromUtf8("actionWidePageSize_16_10"));
        actionWidePageSize_16_10->setCheckable(true);
        actionWidePageSize_16_10->setIcon(icon37);
        actionWidePageSize_16_10->setIconVisibleInMenu(false);
        actionRichTextEditor = new QAction(MainWindow);
        actionRichTextEditor->setObjectName(QString::fromUtf8("actionRichTextEditor"));
        actionRichTextEditor->setCheckable(true);
        QIcon icon91;
        icon91.addFile(QString::fromUtf8(":/images/stylusPalette/richTextEditor.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon91.addFile(QString::fromUtf8(":/images/stylusPalette/richTextEditorOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRichTextEditor->setIcon(icon91);
        actionEllipse = new QAction(MainWindow);
        actionEllipse->setObjectName(QString::fromUtf8("actionEllipse"));
        actionEllipse->setCheckable(true);
        QIcon icon92;
        icon92.addFile(QString::fromUtf8(":/images/drawingPalette/ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon92.addFile(QString::fromUtf8(":/images/drawingPalette/ellipseON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionEllipse->setIcon(icon92);
        actionChangeFillingColor = new QAction(MainWindow);
        actionChangeFillingColor->setObjectName(QString::fromUtf8("actionChangeFillingColor"));
        actionChangeFillingColor->setCheckable(true);
        QIcon icon93;
        icon93.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucket.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon93.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucketOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionChangeFillingColor->setIcon(icon93);
        actionPolygon = new QAction(MainWindow);
        actionPolygon->setObjectName(QString::fromUtf8("actionPolygon"));
        actionPolygon->setCheckable(true);
        QIcon icon94;
        icon94.addFile(QString::fromUtf8(":/images/drawingPalette/free-shape.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon94.addFile(QString::fromUtf8(":/images/drawingPalette/free-shapeOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPolygon->setIcon(icon94);
        actionDrawing = new QAction(MainWindow);
        actionDrawing->setObjectName(QString::fromUtf8("actionDrawing"));
        actionDrawing->setCheckable(true);
        actionDrawing->setChecked(false);
        QIcon icon95;
        icon95.addFile(QString::fromUtf8(":/images/drawingPalette/paint-palette.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon95.addFile(QString::fromUtf8(":/images/drawingPalette/paint-paletteOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionDrawing->setIcon(icon95);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        actionCircle->setCheckable(true);
        QIcon icon96;
        icon96.addFile(QString::fromUtf8(":/images/drawingPalette/cercle.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon96.addFile(QString::fromUtf8(":/images/drawingPalette/cercleON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCircle->setIcon(icon96);
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        actionRectangle->setCheckable(true);
        QIcon icon97;
        icon97.addFile(QString::fromUtf8(":/images/drawingPalette/rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon97.addFile(QString::fromUtf8(":/images/drawingPalette/rectangleON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRectangle->setIcon(icon97);
        actionSquare = new QAction(MainWindow);
        actionSquare->setObjectName(QString::fromUtf8("actionSquare"));
        actionSquare->setCheckable(true);
        QIcon icon98;
        icon98.addFile(QString::fromUtf8(":/images/drawingPalette/square.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon98.addFile(QString::fromUtf8(":/images/drawingPalette/squareON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSquare->setIcon(icon98);
        actionSmartPen = new QAction(MainWindow);
        actionSmartPen->setObjectName(QString::fromUtf8("actionSmartPen"));
        actionSmartPen->setCheckable(true);
        actionSmartPen->setChecked(true);
        QIcon icon99;
        icon99.addFile(QString::fromUtf8(":/images/drawingPalette/freeHand.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon99.addFile(QString::fromUtf8(":/images/drawingPalette/freeHandOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSmartPen->setIcon(icon99);
        actionSmartLine = new QAction(MainWindow);
        actionSmartLine->setObjectName(QString::fromUtf8("actionSmartLine"));
        actionSmartLine->setCheckable(true);
        actionSmartLine->setIcon(icon62);
        actionRegularShapes = new QAction(MainWindow);
        actionRegularShapes->setObjectName(QString::fromUtf8("actionRegularShapes"));
        actionRegularShapes->setCheckable(true);
        QIcon icon100;
        icon100.addFile(QString::fromUtf8(":/images/drawingPalette/triangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon100.addFile(QString::fromUtf8(":/images/drawingPalette/triangleON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRegularShapes->setIcon(icon100);
        actionRegularTriangle = new QAction(MainWindow);
        actionRegularTriangle->setObjectName(QString::fromUtf8("actionRegularTriangle"));
        actionRegularTriangle->setCheckable(true);
        actionRegularTriangle->setIcon(icon100);
        actionRegularSquare = new QAction(MainWindow);
        actionRegularSquare->setObjectName(QString::fromUtf8("actionRegularSquare"));
        actionRegularSquare->setCheckable(true);
        actionRegularSquare->setIcon(icon98);
        actionRegularPentagone = new QAction(MainWindow);
        actionRegularPentagone->setObjectName(QString::fromUtf8("actionRegularPentagone"));
        actionRegularPentagone->setCheckable(true);
        QIcon icon101;
        icon101.addFile(QString::fromUtf8(":/images/drawingPalette/Penta.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon101.addFile(QString::fromUtf8(":/images/drawingPalette/PentaON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRegularPentagone->setIcon(icon101);
        actionRegularHexagone = new QAction(MainWindow);
        actionRegularHexagone->setObjectName(QString::fromUtf8("actionRegularHexagone"));
        actionRegularHexagone->setCheckable(true);
        QIcon icon102;
        icon102.addFile(QString::fromUtf8(":/images/drawingPalette/hexa.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon102.addFile(QString::fromUtf8(":/images/drawingPalette/hexaON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRegularHexagone->setIcon(icon102);
        actionRegularHeptagone = new QAction(MainWindow);
        actionRegularHeptagone->setObjectName(QString::fromUtf8("actionRegularHeptagone"));
        actionRegularHeptagone->setCheckable(true);
        QIcon icon103;
        icon103.addFile(QString::fromUtf8(":/images/drawingPalette/hepta.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon103.addFile(QString::fromUtf8(":/images/drawingPalette/heptaON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRegularHeptagone->setIcon(icon103);
        actionRegularOctogone = new QAction(MainWindow);
        actionRegularOctogone->setObjectName(QString::fromUtf8("actionRegularOctogone"));
        actionRegularOctogone->setCheckable(true);
        QIcon icon104;
        icon104.addFile(QString::fromUtf8(":/images/drawingPalette/octo.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon104.addFile(QString::fromUtf8(":/images/drawingPalette/octoON.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRegularOctogone->setIcon(icon104);
        actionStrokeProperties = new QAction(MainWindow);
        actionStrokeProperties->setObjectName(QString::fromUtf8("actionStrokeProperties"));
        QIcon icon105;
        icon105.addFile(QString::fromUtf8(":/images/drawingPalette/line-thickness.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStrokeProperties->setIcon(icon105);
        actionFillProperties = new QAction(MainWindow);
        actionFillProperties->setObjectName(QString::fromUtf8("actionFillProperties"));
        QIcon icon106;
        icon106.addFile(QString::fromUtf8(":/images/drawingPalette/fill-modes.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFillProperties->setIcon(icon106);
        actionStrokePropertyThickness0 = new QAction(MainWindow);
        actionStrokePropertyThickness0->setObjectName(QString::fromUtf8("actionStrokePropertyThickness0"));
        actionStrokePropertyThickness0->setCheckable(true);
        actionStrokePropertyThickness0->setIcon(icon9);
        actionStrokePropertyThickness1 = new QAction(MainWindow);
        actionStrokePropertyThickness1->setObjectName(QString::fromUtf8("actionStrokePropertyThickness1"));
        actionStrokePropertyThickness1->setCheckable(true);
        actionStrokePropertyThickness1->setIcon(icon10);
        actionStrokePropertyThickness2 = new QAction(MainWindow);
        actionStrokePropertyThickness2->setObjectName(QString::fromUtf8("actionStrokePropertyThickness2"));
        actionStrokePropertyThickness2->setCheckable(true);
        actionStrokePropertyThickness2->setIcon(icon11);
        actionStrokePropertyStyleSolidLine = new QAction(MainWindow);
        actionStrokePropertyStyleSolidLine->setObjectName(QString::fromUtf8("actionStrokePropertyStyleSolidLine"));
        actionStrokePropertyStyleSolidLine->setCheckable(true);
        QIcon icon107;
        icon107.addFile(QString::fromUtf8(":/images/drawingPalette/strokeStyleSolidLine.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStrokePropertyStyleSolidLine->setIcon(icon107);
        actionStrokePropertyStyleDotLine = new QAction(MainWindow);
        actionStrokePropertyStyleDotLine->setObjectName(QString::fromUtf8("actionStrokePropertyStyleDotLine"));
        actionStrokePropertyStyleDotLine->setCheckable(true);
        QIcon icon108;
        icon108.addFile(QString::fromUtf8(":/images/drawingPalette/strokeStyleDotLine .png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStrokePropertyStyleDotLine->setIcon(icon108);
        actionColorStyleTransparent = new QAction(MainWindow);
        actionColorStyleTransparent->setObjectName(QString::fromUtf8("actionColorStyleTransparent"));
        actionColorStyleTransparent->setCheckable(true);
        QIcon icon109;
        icon109.addFile(QString::fromUtf8(":/images/drawingPalette/fill-transparent.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon109.addFile(QString::fromUtf8(":/images/drawingPalette/fill-transparent.png"), QSize(), QIcon::Normal, QIcon::On);
        actionColorStyleTransparent->setIcon(icon109);
        actionColorStyleGradient = new QAction(MainWindow);
        actionColorStyleGradient->setObjectName(QString::fromUtf8("actionColorStyleGradient"));
        actionColorStyleGradient->setCheckable(true);
        QIcon icon110;
        icon110.addFile(QString::fromUtf8(":/images/drawingPalette/fill-gradient.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon110.addFile(QString::fromUtf8(":/images/drawingPalette/fill-gradient.png"), QSize(), QIcon::Normal, QIcon::On);
        actionColorStyleGradient->setIcon(icon110);
        actionColorStyleFull = new QAction(MainWindow);
        actionColorStyleFull->setObjectName(QString::fromUtf8("actionColorStyleFull"));
        actionColorStyleFull->setCheckable(true);
        QIcon icon111;
        icon111.addFile(QString::fromUtf8(":/images/drawingPalette/fill-plain.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon111.addFile(QString::fromUtf8(":/images/drawingPalette/fill-plain.png"), QSize(), QIcon::Normal, QIcon::On);
        actionColorStyleFull->setIcon(icon111);
        actionFillStyleDense = new QAction(MainWindow);
        actionFillStyleDense->setObjectName(QString::fromUtf8("actionFillStyleDense"));
        actionFillStyleDense->setCheckable(true);
        QIcon icon112;
        icon112.addFile(QString::fromUtf8(":/images/drawingPalette/fill-dotted.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon112.addFile(QString::fromUtf8(":/images/drawingPalette/fill-dotted.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFillStyleDense->setIcon(icon112);
        actionFillStyleDiag = new QAction(MainWindow);
        actionFillStyleDiag->setObjectName(QString::fromUtf8("actionFillStyleDiag"));
        actionFillStyleDiag->setCheckable(true);
        QIcon icon113;
        icon113.addFile(QString::fromUtf8(":/images/drawingPalette/fill-stripes.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon113.addFile(QString::fromUtf8(":/images/drawingPalette/fill-stripes.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFillStyleDiag->setIcon(icon113);
        actionStrokePropertyStyleCustomDash = new QAction(MainWindow);
        actionStrokePropertyStyleCustomDash->setObjectName(QString::fromUtf8("actionStrokePropertyStyleCustomDash"));
        actionStrokePropertyStyleCustomDash->setCheckable(true);
        QIcon icon114;
        icon114.addFile(QString::fromUtf8(":/images/drawingPalette/strokeStyleCustomDash.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStrokePropertyStyleCustomDash->setIcon(icon114);
        actionAlignObject = new QAction(MainWindow);
        actionAlignObject->setObjectName(QString::fromUtf8("actionAlignObject"));
        actionAlignObject->setCheckable(false);
        QIcon icon115;
        icon115.addFile(QString::fromUtf8(":/images/drawingPalette/align-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon115.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucketOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAlignObject->setIcon(icon115);
        actionAlignToLeft = new QAction(MainWindow);
        actionAlignToLeft->setObjectName(QString::fromUtf8("actionAlignToLeft"));
        actionAlignToLeft->setCheckable(false);
        actionAlignToLeft->setIcon(icon115);
        actionVerticalCenter = new QAction(MainWindow);
        actionVerticalCenter->setObjectName(QString::fromUtf8("actionVerticalCenter"));
        actionVerticalCenter->setCheckable(false);
        QIcon icon116;
        icon116.addFile(QString::fromUtf8(":/images/drawingPalette/align-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon116.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucketOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionVerticalCenter->setIcon(icon116);
        actionAlignToRight = new QAction(MainWindow);
        actionAlignToRight->setObjectName(QString::fromUtf8("actionAlignToRight"));
        actionAlignToRight->setCheckable(false);
        QIcon icon117;
        icon117.addFile(QString::fromUtf8(":/images/drawingPalette/align-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon117.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucketOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAlignToRight->setIcon(icon117);
        actionAlignToTop = new QAction(MainWindow);
        actionAlignToTop->setObjectName(QString::fromUtf8("actionAlignToTop"));
        actionAlignToTop->setCheckable(false);
        QIcon icon118;
        icon118.addFile(QString::fromUtf8(":/images/drawingPalette/align-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon118.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucketOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAlignToTop->setIcon(icon118);
        actionHorizontalCenter = new QAction(MainWindow);
        actionHorizontalCenter->setObjectName(QString::fromUtf8("actionHorizontalCenter"));
        actionHorizontalCenter->setCheckable(false);
        QIcon icon119;
        icon119.addFile(QString::fromUtf8(":/images/drawingPalette/align-middle.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon119.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucketOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHorizontalCenter->setIcon(icon119);
        actionAlignToBottom = new QAction(MainWindow);
        actionAlignToBottom->setObjectName(QString::fromUtf8("actionAlignToBottom"));
        QIcon icon120;
        icon120.addFile(QString::fromUtf8(":/images/drawingPalette/align-bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon120.addFile(QString::fromUtf8(":/images/drawingPalette/paint-bucketOn.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAlignToBottom->setIcon(icon120);
        actionEndArrowStyleArrow = new QAction(MainWindow);
        actionEndArrowStyleArrow->setObjectName(QString::fromUtf8("actionEndArrowStyleArrow"));
        actionEndArrowStyleArrow->setCheckable(true);
        QIcon icon121;
        icon121.addFile(QString::fromUtf8(":/images/drawingPalette/endArrowStyleArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEndArrowStyleArrow->setIcon(icon121);
        actionStartArrowStyleArrow = new QAction(MainWindow);
        actionStartArrowStyleArrow->setObjectName(QString::fromUtf8("actionStartArrowStyleArrow"));
        actionStartArrowStyleArrow->setCheckable(true);
        QIcon icon122;
        icon122.addFile(QString::fromUtf8(":/images/drawingPalette/startArrowStyleArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartArrowStyleArrow->setIcon(icon122);
        actionEndArrowStyleRound = new QAction(MainWindow);
        actionEndArrowStyleRound->setObjectName(QString::fromUtf8("actionEndArrowStyleRound"));
        actionEndArrowStyleRound->setCheckable(true);
        QIcon icon123;
        icon123.addFile(QString::fromUtf8(":/images/drawingPalette/endArrowStyleRound.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEndArrowStyleRound->setIcon(icon123);
        actionStartArrowStyleRound = new QAction(MainWindow);
        actionStartArrowStyleRound->setObjectName(QString::fromUtf8("actionStartArrowStyleRound"));
        actionStartArrowStyleRound->setCheckable(true);
        QIcon icon124;
        icon124.addFile(QString::fromUtf8(":/images/drawingPalette/startArrowStyleRound.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartArrowStyleRound->setIcon(icon124);
        actionEndArrowStyleNone = new QAction(MainWindow);
        actionEndArrowStyleNone->setObjectName(QString::fromUtf8("actionEndArrowStyleNone"));
        actionEndArrowStyleNone->setCheckable(true);
        QIcon icon125;
        icon125.addFile(QString::fromUtf8(":/images/drawingPalette/endArrowStyleNone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEndArrowStyleNone->setIcon(icon125);
        actionStartArrowStyleNone = new QAction(MainWindow);
        actionStartArrowStyleNone->setObjectName(QString::fromUtf8("actionStartArrowStyleNone"));
        actionStartArrowStyleNone->setCheckable(true);
        QIcon icon126;
        icon126.addFile(QString::fromUtf8(":/images/drawingPalette/startArrowStyleNone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStartArrowStyleNone->setIcon(icon126);
        actionArrowProperties = new QAction(MainWindow);
        actionArrowProperties->setObjectName(QString::fromUtf8("actionArrowProperties"));
        QIcon icon127;
        icon127.addFile(QString::fromUtf8(":/images/drawingPalette/arrowsProperties.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionArrowProperties->setIcon(icon127);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        boardToolBar = new QToolBar(MainWindow);
        boardToolBar->setObjectName(QString::fromUtf8("boardToolBar"));
        boardToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        boardToolBar->setMovable(false);
        boardToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        boardToolBar->setIconSize(QSize(48, 32));
        boardToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, boardToolBar);
        webToolBar = new QToolBar(MainWindow);
        webToolBar->setObjectName(QString::fromUtf8("webToolBar"));
        webToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        webToolBar->setMovable(false);
        webToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        webToolBar->setIconSize(QSize(48, 32));
        webToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, webToolBar);
        MainWindow->insertToolBarBreak(webToolBar);
        documentToolBar = new QToolBar(MainWindow);
        documentToolBar->setObjectName(QString::fromUtf8("documentToolBar"));
        documentToolBar->setEnabled(true);
        documentToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        documentToolBar->setMovable(false);
        documentToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        documentToolBar->setIconSize(QSize(48, 32));
        documentToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, documentToolBar);
        MainWindow->insertToolBarBreak(documentToolBar);
        tutorialToolBar = new QToolBar(MainWindow);
        tutorialToolBar->setObjectName(QString::fromUtf8("tutorialToolBar"));
        tutorialToolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        tutorialToolBar->setLayoutDirection(Qt::LeftToRight);
        tutorialToolBar->setMovable(false);
        tutorialToolBar->setAllowedAreas(Qt::BottomToolBarArea|Qt::TopToolBarArea);
        tutorialToolBar->setIconSize(QSize(48, 32));
        tutorialToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, tutorialToolBar);
        MainWindow->insertToolBarBreak(tutorialToolBar);

        boardToolBar->addAction(actionStylus);
        boardToolBar->addAction(actionBackgrounds);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionUndo);
        boardToolBar->addAction(actionRedo);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionPages);
        boardToolBar->addAction(actionBack);
        boardToolBar->addAction(actionForward);
        boardToolBar->addSeparator();
        boardToolBar->addAction(actionErase);
        boardToolBar->addAction(actionGroupItems);
        boardToolBar->addAction(actionBoard);
        boardToolBar->addAction(actionWeb);
        boardToolBar->addAction(actionDocument);
        boardToolBar->addAction(actionImport);
        boardToolBar->addAction(actionExport);
        boardToolBar->addAction(actionDesktop);
        boardToolBar->addAction(actionHideApplication);
        boardToolBar->addAction(actionQuit);
        boardToolBar->addAction(actionMenu);
        webToolBar->addAction(actionWebTools);
        webToolBar->addSeparator();
        webToolBar->addAction(actionWebBack);
        webToolBar->addAction(actionWebForward);
        webToolBar->addAction(actionWebReload);
        webToolBar->addAction(actionStopLoading);
        webToolBar->addAction(actionHome);
        webToolBar->addAction(actionBookmark);
        webToolBar->addSeparator();
        webToolBar->addAction(actionWebBigger);
        webToolBar->addAction(actionWebSmaller);
        webToolBar->addSeparator();
        webToolBar->addAction(actionBoard);
        webToolBar->addAction(actionWeb);
        webToolBar->addAction(actionDocument);
        webToolBar->addAction(actionDesktop);
        webToolBar->addAction(actionHideApplication);
        webToolBar->addAction(actionQuit);
        webToolBar->addAction(actionMenu);
        documentToolBar->addAction(actionDocumentTools);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionNewFolder);
        documentToolBar->addAction(actionNewDocument);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionImport);
        documentToolBar->addAction(actionExport);
        documentToolBar->addAction(actionRename);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionDuplicate);
        documentToolBar->addAction(actionDelete);
        documentToolBar->addSeparator();
        documentToolBar->addAction(actionDocumentAdd);
        documentToolBar->addAction(actionAddToWorkingDocument);
        documentToolBar->addAction(actionOpen);
        documentToolBar->addAction(actionBoard);
        documentToolBar->addAction(actionWeb);
        documentToolBar->addAction(actionDocument);
        documentToolBar->addAction(actionDesktop);
        documentToolBar->addAction(actionHideApplication);
        documentToolBar->addAction(actionQuit);
        documentToolBar->addAction(actionMenu);
        tutorialToolBar->addAction(actionWebBack);
        tutorialToolBar->addAction(actionWebForward);
        tutorialToolBar->addAction(actionBoard);
        tutorialToolBar->addAction(actionWeb);
        tutorialToolBar->addAction(actionDocument);
        tutorialToolBar->addAction(actionHideApplication);
        tutorialToolBar->addAction(actionMenu);
        tutorialToolBar->addAction(actionQuit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ardesia", 0, QApplication::UnicodeUTF8));
        actionStylus->setText(QApplication::translate("MainWindow", "Penna", 0, QApplication::UnicodeUTF8));
        actionStylus->setIconText(QApplication::translate("MainWindow", "Penna", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStylus->setToolTip(QApplication::translate("MainWindow", "Penna", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStylus->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", 0, QApplication::UnicodeUTF8));
        actionBackgrounds->setText(QApplication::translate("MainWindow", "Sfondi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBackgrounds->setToolTip(QApplication::translate("MainWindow", "Cambia Sfondo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUndo->setText(QApplication::translate("MainWindow", "Annulla", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionUndo->setToolTip(QApplication::translate("MainWindow", "Annulla", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionUndo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("MainWindow", "Ripeti", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRedo->setToolTip(QApplication::translate("MainWindow", "Ripeti", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRedo->setShortcut(QApplication::translate("MainWindow", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("MainWindow", "Precedente", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBack->setToolTip(QApplication::translate("MainWindow", "Pagina Precedente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBack->setShortcut(QApplication::translate("MainWindow", "PgUp", 0, QApplication::UnicodeUTF8));
        actionForward->setText(QApplication::translate("MainWindow", "Successiva", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionForward->setToolTip(QApplication::translate("MainWindow", "Pagina Successiva", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionForward->setShortcut(QApplication::translate("MainWindow", "PgDown", 0, QApplication::UnicodeUTF8));
        actionDocument->setText(QApplication::translate("MainWindow", "Documenti", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDocument->setToolTip(QApplication::translate("MainWindow", "Gestisci i Documenti", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDocument->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionWeb->setText(QApplication::translate("MainWindow", "Web", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWeb->setToolTip(QApplication::translate("MainWindow", "Web Browsing", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWeb->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionLineSmall->setText(QApplication::translate("MainWindow", "Linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLineSmall->setToolTip(QApplication::translate("MainWindow", "Linea Sottile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLineMedium->setText(QApplication::translate("MainWindow", "Linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLineMedium->setToolTip(QApplication::translate("MainWindow", "Linea Media", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLineLarge->setText(QApplication::translate("MainWindow", "Linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLineLarge->setToolTip(QApplication::translate("MainWindow", "Linea Spessa", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("MainWindow", "Esci", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("MainWindow", "Esci da Ardesia", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraserSmall->setText(QApplication::translate("MainWindow", "Gomma", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraserSmall->setToolTip(QApplication::translate("MainWindow", "Gomma Piccola", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraserMedium->setText(QApplication::translate("MainWindow", "Gomma", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraserMedium->setToolTip(QApplication::translate("MainWindow", "Gomma Media", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraserLarge->setText(QApplication::translate("MainWindow", "Gomma", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraserLarge->setToolTip(QApplication::translate("MainWindow", "Gomma Grande", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColor0->setText(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColor0->setToolTip(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColor1->setText(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColor1->setToolTip(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColor2->setText(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColor2->setToolTip(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColor3->setText(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColor3->setToolTip(QApplication::translate("MainWindow", "Colore", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebBack->setText(QApplication::translate("MainWindow", "Indietro", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebBack->setToolTip(QApplication::translate("MainWindow", "Pagina Precedente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebBack->setShortcut(QApplication::translate("MainWindow", "Left", 0, QApplication::UnicodeUTF8));
        actionWebForward->setText(QApplication::translate("MainWindow", "Avanti", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebForward->setToolTip(QApplication::translate("MainWindow", "Pagina Successiva", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebForward->setShortcut(QApplication::translate("MainWindow", "Right", 0, QApplication::UnicodeUTF8));
        actionWebReload->setText(QApplication::translate("MainWindow", "Ricarica", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebReload->setToolTip(QApplication::translate("MainWindow", "Aggiorna la Pagina Corrente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHome->setText(QApplication::translate("MainWindow", "Pagina Iniziale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHome->setToolTip(QApplication::translate("MainWindow", "Pagina Iniziale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBookmarks->setText(QApplication::translate("MainWindow", "Segnalibri", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBookmarks->setToolTip(QApplication::translate("MainWindow", "Mostra i Segnalibri", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddBookmark->setText(QApplication::translate("MainWindow", "Segnalibro", 0, QApplication::UnicodeUTF8));
        actionAddBookmark->setIconText(QApplication::translate("MainWindow", "Add Bookmark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddBookmark->setToolTip(QApplication::translate("MainWindow", "Segnalibro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBoard->setText(QApplication::translate("MainWindow", "Lavagna", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBoard->setToolTip(QApplication::translate("MainWindow", "Mostra la Lavagna", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBoard->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", 0, QApplication::UnicodeUTF8));
        actionErase->setText(QApplication::translate("MainWindow", "Cancella", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionErase->setToolTip(QApplication::translate("MainWindow", "Cancella Lavagna", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPreferences->setText(QApplication::translate("MainWindow", "Preferenze", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPreferences->setToolTip(QApplication::translate("MainWindow", "Mostra le Preferenze", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLibrary->setText(QApplication::translate("MainWindow", "Libreria", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLibrary->setToolTip(QApplication::translate("MainWindow", "Mostra la Libreria", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLibrary->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0, QApplication::UnicodeUTF8));
        actionMenu->setText(QApplication::translate("MainWindow", "Impostazioni", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMenu->setToolTip(QApplication::translate("MainWindow", "Impostazioni", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDesktop->setText(QApplication::translate("MainWindow", "Mostra Desktop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDesktop->setToolTip(QApplication::translate("MainWindow", "Mostra il Desktop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDesktop->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+H", 0, QApplication::UnicodeUTF8));
        actionWebBigger->setText(QApplication::translate("MainWindow", "Pi\303\271 Grande", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebBigger->setToolTip(QApplication::translate("MainWindow", "Zoom +", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebBigger->setShortcut(QApplication::translate("MainWindow", "Ctrl++", 0, QApplication::UnicodeUTF8));
        actionWebSmaller->setText(QApplication::translate("MainWindow", "Pi\303\271 Piccolo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebSmaller->setToolTip(QApplication::translate("MainWindow", "Zoom -", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebSmaller->setShortcut(QApplication::translate("MainWindow", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        actionNewFolder->setText(QApplication::translate("MainWindow", "Nuova Cartella", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNewFolder->setToolTip(QApplication::translate("MainWindow", "Crea una nuova cartella", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNewDocument->setText(QApplication::translate("MainWindow", "Nuovo Documento", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNewDocument->setToolTip(QApplication::translate("MainWindow", "Crea un nuovo documento", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImport->setText(QApplication::translate("MainWindow", "Carica", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImport->setToolTip(QApplication::translate("MainWindow", "Carica Documento", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExport->setText(QApplication::translate("MainWindow", "Salva", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport->setToolTip(QApplication::translate("MainWindow", "Salva Documento", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setText(QApplication::translate("MainWindow", "Apri nella Lavagna", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "Apri la pagina nella lavagna", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionDuplicate->setText(QApplication::translate("MainWindow", "Duplica", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDuplicate->setToolTip(QApplication::translate("MainWindow", "Duplica il contenuto selezionato", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete->setText(QApplication::translate("MainWindow", "Cancella", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "Cancella il contenuto selezionato", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Del", 0, QApplication::UnicodeUTF8));
        actionAddToWorkingDocument->setText(QApplication::translate("MainWindow", "Aggiungi al documento", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddToWorkingDocument->setToolTip(QApplication::translate("MainWindow", "Aggiungi il contenuto selezionato al documento aperto", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDocumentAdd->setText(QApplication::translate("MainWindow", "Aggiungi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDocumentAdd->setToolTip(QApplication::translate("MainWindow", "Aggiungi il contenuto al documento", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRename->setText(QApplication::translate("MainWindow", "Rinomina", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRename->setToolTip(QApplication::translate("MainWindow", "Rinomina Contenuto", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDocumentTools->setText(QApplication::translate("MainWindow", "Strumenti", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDocumentTools->setToolTip(QApplication::translate("MainWindow", "Mostra gli Strumenti", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTools->setText(QApplication::translate("MainWindow", "Strumenti", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTools->setToolTip(QApplication::translate("MainWindow", "Mostra gli Strumenti", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMultiScreen->setText(QApplication::translate("MainWindow", "Multi Screen", 0, QApplication::UnicodeUTF8));
        actionWidePageSize->setText(QApplication::translate("MainWindow", "Wide Size (16/9)", 0, QApplication::UnicodeUTF8));
        actionWidePageSize->setIconText(QApplication::translate("MainWindow", "Wide Size (16/9)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWidePageSize->setToolTip(QApplication::translate("MainWindow", "Use Document Wide Size (16/9)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularPageSize->setText(QApplication::translate("MainWindow", "Regular Size (4/3)", 0, QApplication::UnicodeUTF8));
        actionRegularPageSize->setIconText(QApplication::translate("MainWindow", "Regular Size (4/3)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularPageSize->setToolTip(QApplication::translate("MainWindow", "Use Document Regular Size (4/3)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCustomPageSize->setText(QApplication::translate("MainWindow", "Custom Size", 0, QApplication::UnicodeUTF8));
        actionCustomPageSize->setIconText(QApplication::translate("MainWindow", "Custom Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCustomPageSize->setToolTip(QApplication::translate("MainWindow", "Use Custom Document Size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStopLoading->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStopLoading->setToolTip(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCut->setText(QApplication::translate("MainWindow", "Taglia", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("MainWindow", "Taglia", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCopy->setText(QApplication::translate("MainWindow", "Copia", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MainWindow", "Copia", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPaste->setText(QApplication::translate("MainWindow", "Incolla", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MainWindow", "Incolla", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSleep->setText(QApplication::translate("MainWindow", "Pausa", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSleep->setToolTip(QApplication::translate("MainWindow", "Metti in pausa la presentazione", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionVirtualKeyboard->setText(QApplication::translate("MainWindow", "Tastiera Virtuale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionVirtualKeyboard->setToolTip(QApplication::translate("MainWindow", "Mostra la tastiera virtuale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlainLightBackground->setText(QApplication::translate("MainWindow", "Sfondo chiaro", 0, QApplication::UnicodeUTF8));
        actionPlainLightBackground->setIconText(QApplication::translate("MainWindow", "Light", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlainLightBackground->setToolTip(QApplication::translate("MainWindow", "Sfondo chiaro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCrossedLightBackground->setText(QApplication::translate("MainWindow", "Sfondo a griglia chiaro", 0, QApplication::UnicodeUTF8));
        actionCrossedLightBackground->setIconText(QApplication::translate("MainWindow", "Light", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCrossedLightBackground->setToolTip(QApplication::translate("MainWindow", "Sfondo a griglia chiaro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlainDarkBackground->setText(QApplication::translate("MainWindow", "Sfondo Scuro", 0, QApplication::UnicodeUTF8));
        actionPlainDarkBackground->setIconText(QApplication::translate("MainWindow", "Dark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlainDarkBackground->setToolTip(QApplication::translate("MainWindow", "Sfondo Scuro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCrossedDarkBackground->setText(QApplication::translate("MainWindow", "Sfondo a griglia scuro", 0, QApplication::UnicodeUTF8));
        actionCrossedDarkBackground->setIconText(QApplication::translate("MainWindow", "Dark", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCrossedDarkBackground->setToolTip(QApplication::translate("MainWindow", "Sfondo a griglia scuro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcast->setText(QApplication::translate("MainWindow", "Podcast", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcast->setToolTip(QApplication::translate("MainWindow", "Registra presentazione", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcastRecord->setText(QApplication::translate("MainWindow", "Registra", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcastRecord->setToolTip(QApplication::translate("MainWindow", "Inizia registrazione schermo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseItems->setText(QApplication::translate("MainWindow", "Cancella tutto", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseItems->setToolTip(QApplication::translate("MainWindow", "Cancella Tutto", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseAnnotations->setText(QApplication::translate("MainWindow", "Cancella Annotazioni", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseAnnotations->setToolTip(QApplication::translate("MainWindow", "Cancella Annotazioni", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClearPage->setText(QApplication::translate("MainWindow", "Pulisci Pagina", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClearPage->setToolTip(QApplication::translate("MainWindow", "Cancella tutti gli elementi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAdd->setText(QApplication::translate("MainWindow", "Aggiungi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdd->setToolTip(QApplication::translate("MainWindow", "Aggiungi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPen->setText(QApplication::translate("MainWindow", "Penna", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPen->setToolTip(QApplication::translate("MainWindow", "Annota Documento", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPen->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionEraser->setText(QApplication::translate("MainWindow", "Gomma", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraser->setToolTip(QApplication::translate("MainWindow", "Cancella Annotazione", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraser->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0, QApplication::UnicodeUTF8));
        actionMarker->setText(QApplication::translate("MainWindow", "Evidenziatore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMarker->setToolTip(QApplication::translate("MainWindow", "Evidenzia", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMarker->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", 0, QApplication::UnicodeUTF8));
        actionSelector->setText(QApplication::translate("MainWindow", "Seleziona", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSelector->setToolTip(QApplication::translate("MainWindow", "Seleziona e modifica oggetti", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSelector->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        actionHand->setText(QApplication::translate("MainWindow", "Mano", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHand->setToolTip(QApplication::translate("MainWindow", "Scorri Pagina", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomIn->setText(QApplication::translate("MainWindow", "Zoom +", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("MainWindow", "Zoom +", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoomOut->setText(QApplication::translate("MainWindow", "Zoom -", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("MainWindow", "Zoom -", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPointer->setText(QApplication::translate("MainWindow", "Puntatore Laser", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPointer->setToolTip(QApplication::translate("MainWindow", "Puntatore laser virtuale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPointer->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        actionLine->setText(QApplication::translate("MainWindow", "Linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLine->setToolTip(QApplication::translate("MainWindow", "Disegna Linea", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLine->setShortcut(QApplication::translate("MainWindow", "Ctrl+J", 0, QApplication::UnicodeUTF8));
        actionText->setText(QApplication::translate("MainWindow", "Testo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionText->setToolTip(QApplication::translate("MainWindow", "Scrivi Testo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionText->setShortcut(QApplication::translate("MainWindow", "Ctrl+K", 0, QApplication::UnicodeUTF8));
        actionCapture->setText(QApplication::translate("MainWindow", "Cattura", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCapture->setToolTip(QApplication::translate("MainWindow", "Cattura una parte dello schermo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddItemToCurrentPage->setText(QApplication::translate("MainWindow", "Aggiungi alla pagina corrente", 0, QApplication::UnicodeUTF8));
        actionAddItemToCurrentPage->setIconText(QApplication::translate("MainWindow", "Aggiungi alla pagin corrente", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddItemToCurrentPage->setToolTip(QApplication::translate("MainWindow", "Aggiungi oggetto alla pagina corrente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddItemToNewPage->setText(QApplication::translate("MainWindow", "Aggiungi a nuova pagina", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddItemToNewPage->setToolTip(QApplication::translate("MainWindow", "Aggiungi oggetto a una nuova pagina", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAddItemToLibrary->setText(QApplication::translate("MainWindow", "Aggiungi alla libreria", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAddItemToLibrary->setToolTip(QApplication::translate("MainWindow", "Aggiungi oggetto alla libreria", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPages->setText(QApplication::translate("MainWindow", "Pagine", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPages->setToolTip(QApplication::translate("MainWindow", "Crea una nuova pagina", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNewPage->setText(QApplication::translate("MainWindow", "Nuova Pagina", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionNewPage->setToolTip(QApplication::translate("MainWindow", "Crea una nuova pagina", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDuplicatePage->setText(QApplication::translate("MainWindow", "Duplica Pagina", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDuplicatePage->setToolTip(QApplication::translate("MainWindow", "Duplica la pagina corrente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionImportPage->setText(QApplication::translate("MainWindow", "Importa Pagina", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionImportPage->setToolTip(QApplication::translate("MainWindow", "Importa una pagina esterna", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcastPause->setText(QApplication::translate("MainWindow", "Pausa", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcastPause->setToolTip(QApplication::translate("MainWindow", "Sospendi registrazione podcast", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPodcastConfig->setText(QApplication::translate("MainWindow", "Podcast Config", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPodcastConfig->setToolTip(QApplication::translate("MainWindow", "Configura registrazione podcast", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrap->setText(QApplication::translate("MainWindow", "Cattura Web", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrap->setToolTip(QApplication::translate("MainWindow", "Cattura contenuti web", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebCustomCapture->setText(QApplication::translate("MainWindow", "Cattura personalizzata", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebCustomCapture->setToolTip(QApplication::translate("MainWindow", "Cattura parte dello schermo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebWindowCapture->setText(QApplication::translate("MainWindow", "Cattura finestra", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebWindowCapture->setToolTip(QApplication::translate("MainWindow", "Cattura una finestra", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebShowHideOnDisplay->setText(QApplication::translate("MainWindow", "Mostra Display", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebShowHideOnDisplay->setToolTip(QApplication::translate("MainWindow", "Mostra display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseDesktopAnnotations->setText(QApplication::translate("MainWindow", "Cancella Annotazioni", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseDesktopAnnotations->setToolTip(QApplication::translate("MainWindow", "Cancella tutte le annotazioni", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEduMedia->setText(QApplication::translate("MainWindow", "eduMedia", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEduMedia->setToolTip(QApplication::translate("MainWindow", "Import eduMedia simulation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionTutorial->setText(QApplication::translate("MainWindow", "Tutorial", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionTutorial->setToolTip(QApplication::translate("MainWindow", "Open the tutorial", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCheckUpdate->setText(QApplication::translate("MainWindow", "Check Update", 0, QApplication::UnicodeUTF8));
        actionSankoreEditor->setText(QApplication::translate("MainWindow", "Open-Sankor\303\251 Editor", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSankoreEditor->setToolTip(QApplication::translate("MainWindow", "Show Open-Sankor\303\251 Widgets Editor", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHideApplication->setText(QApplication::translate("MainWindow", "Nascondi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHideApplication->setToolTip(QApplication::translate("MainWindow", "Minimizza l'applicazione", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHideApplication->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", 0, QApplication::UnicodeUTF8));
        actionGroupItems->setText(QApplication::translate("MainWindow", "Group", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGroupItems->setToolTip(QApplication::translate("MainWindow", "Group items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("MainWindow", "Play", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPlay->setToolTip(QApplication::translate("MainWindow", "Interazione con gli oggetti", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEraseBackground->setText(QApplication::translate("MainWindow", "Cancella Sfondo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEraseBackground->setToolTip(QApplication::translate("MainWindow", "Cancella Sfondo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionBookmark->setText(QApplication::translate("MainWindow", "Segnalibri", 0, QApplication::UnicodeUTF8));
        actionBookmark->setIconText(QApplication::translate("MainWindow", "Bookmark", "tooltip", QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionBookmark->setToolTip(QApplication::translate("MainWindow", "Segnalibri", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapContent->setText(QApplication::translate("MainWindow", "Cattura Web", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapContent->setToolTip(QApplication::translate("MainWindow", "Cattura contenuti web", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapToLibrary->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Download to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">library</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapToLibrary->setToolTip(QApplication::translate("MainWindow", "Download to library", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapToCurrentPage->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Download to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">current page</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapToCurrentPage->setToolTip(QApplication::translate("MainWindow", "Download to current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapLinkToLibrary->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add link to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">library</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapLinkToLibrary->setToolTip(QApplication::translate("MainWindow", "Add link to library", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWebTrapLinkToPage->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\"> <html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">p, li { white-space: pre-wrap; }</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\"><p align=\"center\" style=\" margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add link to</p><p align=\"center\" style=\" margin-top:2px; margin-bottom12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">current page</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWebTrapLinkToPage->setToolTip(QApplication::translate("MainWindow", "Add link to current page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCenterImageBackground->setText(QApplication::translate("MainWindow", "Centro", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCenterImageBackground->setToolTip(QApplication::translate("MainWindow", "Immagine al centro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAdjustImageBackground->setText(QApplication::translate("MainWindow", "Posiziona", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdjustImageBackground->setToolTip(QApplication::translate("MainWindow", "Posiziona Immagine", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExtendImageBackground->setText(QApplication::translate("MainWindow", "Espandi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExtendImageBackground->setToolTip(QApplication::translate("MainWindow", "Espandi immagine", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFillImageBackground->setText(QApplication::translate("MainWindow", "Riempi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFillImageBackground->setToolTip(QApplication::translate("MainWindow", "Riempi sfondo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionMosaicImageBackground->setText(QApplication::translate("MainWindow", "Mosaico", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMosaicImageBackground->setToolTip(QApplication::translate("MainWindow", "Mosaico", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionWidePageSize_16_10->setText(QApplication::translate("MainWindow", "Wide Size (16/10)", 0, QApplication::UnicodeUTF8));
        actionWidePageSize_16_10->setIconText(QApplication::translate("MainWindow", "Wide Size (16/9)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionWidePageSize_16_10->setToolTip(QApplication::translate("MainWindow", "Use Document Wide Size (16/10)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRichTextEditor->setText(QApplication::translate("MainWindow", "Editor di Testo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRichTextEditor->setToolTip(QApplication::translate("MainWindow", "Editor di Testo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEllipse->setText(QApplication::translate("MainWindow", "Ellissi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEllipse->setToolTip(QApplication::translate("MainWindow", "Disegna Ellissi", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionChangeFillingColor->setText(QApplication::translate("MainWindow", "Cambia colore", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionChangeFillingColor->setToolTip(QApplication::translate("MainWindow", "Cambia colore", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPolygon->setText(QApplication::translate("MainWindow", "Poligono", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPolygon->setToolTip(QApplication::translate("MainWindow", "Disegna Poligono", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionDrawing->setText(QApplication::translate("MainWindow", "Disegna", 0, QApplication::UnicodeUTF8));
        actionDrawing->setIconText(QApplication::translate("MainWindow", "Drawing", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionDrawing->setToolTip(QApplication::translate("MainWindow", "Disegna", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCircle->setText(QApplication::translate("MainWindow", "Cerchio", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCircle->setToolTip(QApplication::translate("MainWindow", "Disegna un cerchio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRectangle->setText(QApplication::translate("MainWindow", "Rettangolo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRectangle->setToolTip(QApplication::translate("MainWindow", "Disegna un Rettangolo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSquare->setText(QApplication::translate("MainWindow", "Quadrato", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSquare->setToolTip(QApplication::translate("MainWindow", "Disegna un quadrato", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSmartPen->setText(QApplication::translate("MainWindow", "Disegno a mano libera", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSmartPen->setToolTip(QApplication::translate("MainWindow", "disegno a mano libera", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSmartLine->setText(QApplication::translate("MainWindow", "Linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSmartLine->setToolTip(QApplication::translate("MainWindow", "Disegna Linea", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularShapes->setText(QApplication::translate("MainWindow", "Forma Regolare", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularShapes->setToolTip(QApplication::translate("MainWindow", "Disegna una Forma Regolare", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularTriangle->setText(QApplication::translate("MainWindow", "Triangolo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularTriangle->setToolTip(QApplication::translate("MainWindow", "Disegna un triangolo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularSquare->setText(QApplication::translate("MainWindow", "Quadrato", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularSquare->setToolTip(QApplication::translate("MainWindow", "Disegna un quadrato", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularPentagone->setText(QApplication::translate("MainWindow", "Pentagono", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularPentagone->setToolTip(QApplication::translate("MainWindow", "Disegna un Pentagono", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularHexagone->setText(QApplication::translate("MainWindow", "Esagono", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularHexagone->setToolTip(QApplication::translate("MainWindow", "Disegna un esagono", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularHeptagone->setText(QApplication::translate("MainWindow", "Ettagono", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularHeptagone->setToolTip(QApplication::translate("MainWindow", "Disegna un ettagono", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRegularOctogone->setText(QApplication::translate("MainWindow", "Ottagono", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionRegularOctogone->setToolTip(QApplication::translate("MainWindow", "Disegna un Ottagono", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStrokeProperties->setText(QApplication::translate("MainWindow", "Propriet\303\240 Forma", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStrokeProperties->setToolTip(QApplication::translate("MainWindow", "Propriet\303\240 Forma", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFillProperties->setText(QApplication::translate("MainWindow", "Propriet\303\240 Riempimento", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFillProperties->setToolTip(QApplication::translate("MainWindow", "Propriet\303\240 Riempimento", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStrokePropertyThickness0->setText(QApplication::translate("MainWindow", "Spessore della linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStrokePropertyThickness0->setToolTip(QApplication::translate("MainWindow", "Spessore della linea", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStrokePropertyThickness1->setText(QApplication::translate("MainWindow", "Spessore della linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStrokePropertyThickness1->setToolTip(QApplication::translate("MainWindow", "Spessore della linea", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStrokePropertyThickness2->setText(QApplication::translate("MainWindow", "Spessore della linea", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStrokePropertyThickness2->setToolTip(QApplication::translate("MainWindow", "Spessore della linea", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStrokePropertyStyleSolidLine->setText(QApplication::translate("MainWindow", "Linea continua", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStrokePropertyStyleSolidLine->setToolTip(QApplication::translate("MainWindow", "Linea continua", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStrokePropertyStyleDotLine->setText(QApplication::translate("MainWindow", "Linea tratteggiata", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStrokePropertyStyleDotLine->setToolTip(QApplication::translate("MainWindow", "Linea tratteggiata", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColorStyleTransparent->setText(QApplication::translate("MainWindow", "Riempimento trasparente", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColorStyleTransparent->setToolTip(QApplication::translate("MainWindow", "Riempimento trasparente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColorStyleGradient->setText(QApplication::translate("MainWindow", "Riempimento gradiente", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColorStyleGradient->setToolTip(QApplication::translate("MainWindow", "Riempimento gradiente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColorStyleFull->setText(QApplication::translate("MainWindow", "Riempimento completo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColorStyleFull->setToolTip(QApplication::translate("MainWindow", "Riempimento completo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFillStyleDense->setText(QApplication::translate("MainWindow", "Riempimento denso", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFillStyleDense->setToolTip(QApplication::translate("MainWindow", "Riempimento denso", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFillStyleDiag->setText(QApplication::translate("MainWindow", "Riempimento diagonale", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFillStyleDiag->setToolTip(QApplication::translate("MainWindow", "Riempimento diagonale", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStrokePropertyStyleCustomDash->setText(QApplication::translate("MainWindow", "Linea tratteggiata tonda", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStrokePropertyStyleCustomDash->setToolTip(QApplication::translate("MainWindow", "Linea tratteggiata tonda", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignObject->setText(QApplication::translate("MainWindow", "Allinea oggetti", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignObject->setToolTip(QApplication::translate("MainWindow", "Allinea oggetti", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignToLeft->setText(QApplication::translate("MainWindow", "Allinea a sinistra", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignToLeft->setToolTip(QApplication::translate("MainWindow", "Allinea a sinistra", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionVerticalCenter->setText(QApplication::translate("MainWindow", "Allinea al centro", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionVerticalCenter->setToolTip(QApplication::translate("MainWindow", "Allinea al centro", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignToRight->setText(QApplication::translate("MainWindow", "Allinea a destra", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignToRight->setToolTip(QApplication::translate("MainWindow", "Allinea a destra", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignToTop->setText(QApplication::translate("MainWindow", "Allinea in alto", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignToTop->setToolTip(QApplication::translate("MainWindow", "Allinea in alto", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionHorizontalCenter->setText(QApplication::translate("MainWindow", "Allinea orizzontalmente", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionHorizontalCenter->setToolTip(QApplication::translate("MainWindow", "Allinea orizzontalmente", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAlignToBottom->setText(QApplication::translate("MainWindow", "Allinea in basso", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAlignToBottom->setToolTip(QApplication::translate("MainWindow", "Allinea in basso", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEndArrowStyleArrow->setText(QApplication::translate("MainWindow", "Freccia", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEndArrowStyleArrow->setToolTip(QApplication::translate("MainWindow", "Freccia", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStartArrowStyleArrow->setText(QApplication::translate("MainWindow", "Freccia", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStartArrowStyleArrow->setToolTip(QApplication::translate("MainWindow", "Freccia", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEndArrowStyleRound->setText(QApplication::translate("MainWindow", "cerchio", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEndArrowStyleRound->setToolTip(QApplication::translate("MainWindow", "cerchio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStartArrowStyleRound->setText(QApplication::translate("MainWindow", "cerchio", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStartArrowStyleRound->setToolTip(QApplication::translate("MainWindow", "cerchio", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEndArrowStyleNone->setText(QApplication::translate("MainWindow", "nessun simbolo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEndArrowStyleNone->setToolTip(QApplication::translate("MainWindow", "nessun simbolo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionStartArrowStyleNone->setText(QApplication::translate("MainWindow", "nessun simbolo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionStartArrowStyleNone->setToolTip(QApplication::translate("MainWindow", "nessun simbolo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionArrowProperties->setText(QApplication::translate("MainWindow", "Propriet\303\240 della freccia", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionArrowProperties->setToolTip(QApplication::translate("MainWindow", "Propriet\303\240 della freccia", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        boardToolBar->setWindowTitle(QApplication::translate("MainWindow", "Board", 0, QApplication::UnicodeUTF8));
        webToolBar->setWindowTitle(QApplication::translate("MainWindow", "Web", 0, QApplication::UnicodeUTF8));
        documentToolBar->setWindowTitle(QApplication::translate("MainWindow", "Documents", 0, QApplication::UnicodeUTF8));
        tutorialToolBar->setWindowTitle(QApplication::translate("MainWindow", "Tutorial", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
