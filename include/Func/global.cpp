#include "global.h"

bool firstNotice = true;
bool init = false;
bool isQuit = false;
QMap<int,MainWindow*> pmws;
MainWindow* activepmw = nullptr;
SUnit* processor;
QMap<int,QScreen*> pscs;
int screenNum;
int jsonNum;
StyleHelper* psh;
QDesktopWidget* pdt;
QString* UserDesktopPath;
QString* PublicDesktopPath;
bool moving_global;
QList<SUnit*> pCelectedUnits;
SUnit* pFocusedUnit = nullptr;
bool onLoading = true;
QMap<QString,SFile*> nowExits;
QMap<int,QJsonObject> UnusedJsons;
QList<QString> ExcludeFiles;

bool editMode = false;
