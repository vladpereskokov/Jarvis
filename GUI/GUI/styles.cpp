#include "styles.h"


void setStyles(QString stylesList[stylesAmount])
{
    //стили кнопок PushButton  в классе MainWindow
    stylesList[0] = "QPushButton {"
                    "   background-color: #009E9B;"
                    "   border : none;"
                    "   font:  14px; "
                    "   color: #fff;"

                    "   max-width: 200px;"
                    "   min-width: 80px;"
                    "   min-height: 20px;"
                    "   padding: 5px;"
                    "}"
                    "QPushButton:disabled {"
                    "   background-color: #989898;"
                    "   color: #fff;"
                    " }"
                    "QPushButton:hover {"
                    "   background-color: #61b7ff;"
                    " }"
                    "QPushButton:focus { "
                    "   background-color: #61b7ff;"
                    " }"
                    "QPushButton:pressed {"
                    "   background-color: #54dff0;"
                    " }";

    //стили кнопок PushButton  в классе SettingsDialogWindow
    stylesList[1] = "QPushButton {"
                    "   background-color: #009E9B;"
                    "   border: none; "
                    "   font:  14px;"
                    "   color: #fff;"
                    "   max-width: 200px;"
                    "   min-width: 80px;"
                    "   min-height: 20px;"
                    "   margin: 5px;"
                    "   padding: 5px;"
                    "}"
                    "QPushButton:disabled {"
                    "   background-color: #989898;"
                    "   color: #fff;"
                    " }"
                    "QPushButton:hover {"
                    "   background-color: #61b7ff;"
                    "   color: #fff;"
                    " }"
                    "QPushButton:focus { "
                    "   background-color: #61b7ff;"
                    "   color: #fff;"
                    " }"
                    "QPushButton:pressed {"
                    "   background-color: #54dff0;"
                    "   color: #fff;"
                    " }";
    //стили кнопок SettingsButton
    stylesList[2] = "QPushButton {"
                    "   background-color: #009E9B;"
                    "   border: none; "
                    "   font:  14px;"
                    "   color: #fff;"
                    "   max-width: 30px;"
                    "   min-width: 30px;"
                    "   min-height: 20px;"
                    "   margin: 5px;"
                    "   padding: 5px;"
                    "}"
                    "QPushButton:disabled {"
                    "   background-color: #989898;"
                    "   color: #fff;"
                    " }"
                    "QPushButton:hover {"
                    "   background-color: #61b7ff;"
                    "   color: #fff;"
                    " }"
                    "QPushButton:focus { "
                    "   background-color: #61b7ff;"
                    "   color: #fff;"
                    " }"
                    "QPushButton:pressed {"
                    "   background-color: #54dff0;"
                    "   color: #fff;"
                    " }";
}
