#ifndef MOVEGENERATOR_H
#define MOVEGENERATOR_H
#include <QString>
#include <stdio.h>
#include <QList>
#include "commdef.h"

class MoveGenerator
{
public:
    MoveGenerator();
    ~MoveGenerator();
    bool validateMove(const char *arrChessman, int srcPos, int dstPos);
    bool validateGeneralMove(const char *arrChessman, int srcPos, int dstPos);
    bool validateAdvisorMove(const char *arrChessman, int srcPos, int dstPos);
    bool validateMinisterMove(const char *arrChessman, int srcPos, int dstPos);
    bool validateHorseMove(const char *arrChessman, int srcPos, int dstPos);
    bool validateChariotMove(const char *arrChessman, int srcPos, int dstPos);
    bool validateCannonMove(const char *arrChessman, int srcPos, int dstPos);
    bool validateSoldierMove(const char *arrChessman, int srcPos, int dstPos);

    void generateAllMove(char *arrChessman, int side, QList<MoveInfo> &lstInfo);
    void generateGeneralMove(char *arrChessman, int srcPos, MoveInfo &info, QList<MoveInfo> &lstInfo);
    void generateAdvisorMove(char *arrChessman, int srcPos, MoveInfo &info, QList<MoveInfo> &lstInfo);
    void generateMinisterMove(char *arrChessman, int srcPos, MoveInfo &info, QList<MoveInfo> &lstInfo);
    void generateHorseMove(char *arrChessman, int srcPos, MoveInfo &info, QList<MoveInfo> &lstInfo);
    void generateChariotMove(char *arrChessman, int srcPos, MoveInfo &info, QList<MoveInfo> &lstInfo);
    void generateCannonMove(char *arrChessman, int srcPos, MoveInfo &info, QList<MoveInfo> &lstInfo);
    void generateSoldierMove(char *arrChessman, int srcPos, MoveInfo &info, QList<MoveInfo> &lstInfo);

    void addMoveRoute(char *arrChessman, int srcPos, int dstPos, MoveInfo &info, QList<MoveInfo> &lstInfo);

    bool isAttackGeneral(const char *arrChessman, char attackedGeneral);
    bool attackGeneral(const char *arrChessman, int attackedPos, char chessman);
    bool attackedByGeneral(const char *arrChessman, int attackedPos, char attackingGeneral);
    int getChessmanPos(const char *arrChessman, char chessman, int pos[]);

    bool isGeneralDead(char *arrChessman, int side);
    bool canSaveGeneral(char *arrChessman, int index, char attackedGeneral);

    //��ȡ�ŷ������������ʽ����k5+1
    void getMoveStepAlpha(const char *arrChessman, int mv, QString &stepAlpha);
    void getGeneralMoveStepAlpha(const char *arrChessman, char movingChessman, int fromX, int fromY, int toX, int toY, QString &stepAlpha);
    void getAdvisorMinisterMoveStepAlpha(const char *arrChessman, char movingChessman, int fromX, int fromY, int toX, int toY, QString &stepAlpha);
    void getChariotCannonMoveStepAlpha(const char *arrChessman, char movingChessman, int fromX, int fromY, int toX, int toY, QString &stepAlpha);
    void getHorseMoveStepAlpha(const char *arrChessman, char movingChessman, int fromX, int fromY, int toX, int toY, QString &stepAlpha);
    void getSoldierMoveStepAlpha(const char *arrChessman, char movingChessman, int fromX, int fromY, int toX, int toY, QString &stepAlpha);

    //�����������ʽת�������ĸ�ʽ�罫5��1
    static QString digitToChinese(const QChar &digit, bool black);
    static QString chessManCodeToChinese(const QChar &code);
    static QString actionToChinese(const QChar &action);
    static void alphaFmtToChiness(const QString &alphaFmt, QString &chineseFmt, bool black);

    //������ֽ��ΪFEN��
    static QString chessmanToFEN(const char *arrchessman, int currentTurn);
    //��FEE���������
    static void FENTochessman(QString strFEN, char *arrChessman, int &currentTurn);

};

#endif // MOVEGENERATOR_H
