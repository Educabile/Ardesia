/********************************************************************************
** Form generated from reading UI file 'youTubePublishingDialog.ui'
**
** Created: Fri 4. May 12:28:07 2018
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOUTUBEPUBLISHINGDIALOG_H
#define UI_YOUTUBEPUBLISHINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_YouTubePublishingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *titleLabel;
    QLineEdit *title;
    QLabel *decriptionLabel;
    QPlainTextEdit *description;
    QLabel *keywordsLabel;
    QLineEdit *keywords;
    QLabel *label;
    QComboBox *category;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *email;
    QLabel *label_3;
    QLineEdit *password;
    QLabel *label_4;
    QDialogButtonBox *dialogButtons;
    QCheckBox *youtubeCredentialsPersistence;

    void setupUi(QDialog *YouTubePublishingDialog)
    {
        if (YouTubePublishingDialog->objectName().isEmpty())
            YouTubePublishingDialog->setObjectName(QString::fromUtf8("YouTubePublishingDialog"));
        YouTubePublishingDialog->setWindowModality(Qt::WindowModal);
        YouTubePublishingDialog->resize(540, 534);
        verticalLayout = new QVBoxLayout(YouTubePublishingDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        titleLabel = new QLabel(YouTubePublishingDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, titleLabel);

        title = new QLineEdit(YouTubePublishingDialog);
        title->setObjectName(QString::fromUtf8("title"));
        title->setMaxLength(60);

        formLayout->setWidget(0, QFormLayout::FieldRole, title);

        decriptionLabel = new QLabel(YouTubePublishingDialog);
        decriptionLabel->setObjectName(QString::fromUtf8("decriptionLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, decriptionLabel);

        description = new QPlainTextEdit(YouTubePublishingDialog);
        description->setObjectName(QString::fromUtf8("description"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(description->sizePolicy().hasHeightForWidth());
        description->setSizePolicy(sizePolicy);
        description->setMinimumSize(QSize(0, 168));

        formLayout->setWidget(2, QFormLayout::FieldRole, description);

        keywordsLabel = new QLabel(YouTubePublishingDialog);
        keywordsLabel->setObjectName(QString::fromUtf8("keywordsLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, keywordsLabel);

        keywords = new QLineEdit(YouTubePublishingDialog);
        keywords->setObjectName(QString::fromUtf8("keywords"));

        formLayout->setWidget(4, QFormLayout::FieldRole, keywords);

        label = new QLabel(YouTubePublishingDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label);

        category = new QComboBox(YouTubePublishingDialog);
        category->setObjectName(QString::fromUtf8("category"));

        formLayout->setWidget(5, QFormLayout::FieldRole, category);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::FieldRole, verticalSpacer);

        label_2 = new QLabel(YouTubePublishingDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_2);

        email = new QLineEdit(YouTubePublishingDialog);
        email->setObjectName(QString::fromUtf8("email"));

        formLayout->setWidget(7, QFormLayout::FieldRole, email);

        label_3 = new QLabel(YouTubePublishingDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_3);

        password = new QLineEdit(YouTubePublishingDialog);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(8, QFormLayout::FieldRole, password);

        label_4 = new QLabel(YouTubePublishingDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);
        label_4->setOpenExternalLinks(true);
        label_4->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        formLayout->setWidget(10, QFormLayout::FieldRole, label_4);

        dialogButtons = new QDialogButtonBox(YouTubePublishingDialog);
        dialogButtons->setObjectName(QString::fromUtf8("dialogButtons"));
        dialogButtons->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(11, QFormLayout::FieldRole, dialogButtons);

        youtubeCredentialsPersistence = new QCheckBox(YouTubePublishingDialog);
        youtubeCredentialsPersistence->setObjectName(QString::fromUtf8("youtubeCredentialsPersistence"));
        youtubeCredentialsPersistence->setChecked(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, youtubeCredentialsPersistence);


        verticalLayout->addLayout(formLayout);


        retranslateUi(YouTubePublishingDialog);

        QMetaObject::connectSlotsByName(YouTubePublishingDialog);
    } // setupUi

    void retranslateUi(QDialog *YouTubePublishingDialog)
    {
        YouTubePublishingDialog->setWindowTitle(QApplication::translate("YouTubePublishingDialog", "Publish Podcast to YouTube", 0, QApplication::UnicodeUTF8));
        titleLabel->setText(QApplication::translate("YouTubePublishingDialog", "Titolo", 0, QApplication::UnicodeUTF8));
        decriptionLabel->setText(QApplication::translate("YouTubePublishingDialog", "Decrizione", 0, QApplication::UnicodeUTF8));
        keywordsLabel->setText(QApplication::translate("YouTubePublishingDialog", "Keywords", 0, QApplication::UnicodeUTF8));
        keywords->setText(QApplication::translate("YouTubePublishingDialog", "Uniboard", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("YouTubePublishingDialog", "Categoria", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("YouTubePublishingDialog", "YouTube Username", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("YouTubePublishingDialog", "YouTube Password", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("YouTubePublishingDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:24px; background-color:#ffffff;\"><a name=\"tw-target-text\"></a><span style=\" font-family:'inherit'; font-size:6pt; color:#212121;\">F</span><span style=\" font-family:'inherit'; font-size:6pt; color:#212121;\">acendo clic su &quot;Carica&quot;, certifichi di possedere tutti i diritti sui contenuti o di essere autorizzato dal proprietario a rendere i contenuti pubblicamente disponibili su YouTube e che sia conforme ai Termini di servizio di YouTube riportati all'indirizzo http: // www.youtube.com/t/terms</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        youtubeCredentialsPersistence->setText(QApplication::translate("YouTubePublishingDialog", "Salva Credenziali per il riavvio", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class YouTubePublishingDialog: public Ui_YouTubePublishingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOUTUBEPUBLISHINGDIALOG_H
