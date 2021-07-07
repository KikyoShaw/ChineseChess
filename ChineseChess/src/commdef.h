#ifndef COMMDEF_H
#define COMMDEF_H
#include <QString>
#include <QObject>

struct MoveInfo
{
    char killedChessman;
    char movingChessman;
    bool attackGeneral;
    int move;
    QString moveStepAlpha;
    unsigned long zobristKey;

    void reset()
    {
        killedChessman = 0;
        movingChessman = 0;
        attackGeneral = 0;
        move = 0;
        moveStepAlpha = "";
        zobristKey = 0;
    }

    MoveInfo()
    {
        reset();
    }

};

struct ChineseMoveStep
{
    int orderNumber;
    QString moveStepInfo;
    QString moveStepTime;

    ChineseMoveStep()
    {
        orderNumber = 0;
    }
};

static const QString INDICATOR = QObject::tr(":/images/WOOD/OOS.GIF");
static const QString AUDIO_NEW_GAME = QObject::tr(":/audios/NewGame.wav");
static const QString AUDIO_ATTACK_KING = QObject::tr(":/audios/AttackKing.wav");
static const QString AUDIO_CHOOSE = QObject::tr(":/audios/Choose.wav");
static const QString AUDIO_EAT = QObject::tr(":/audios/Eat.wav");
static const QString AUDIO_LOSS = QObject::tr(":/audios/Loss.wav");
static const QString AUDIO_MOVE = QObject::tr(":/audios/Move.wav");
static const QString AUDIO_WIN = QObject::tr(":/audios/Win.wav");
static const QString AUDIO_TIE = QObject::tr(":/audios/Draw.wav");
static const QString AUDIO_ILLEGAL = QObject::tr(":/audios/Forbid.wav");

static const QString SETTINGS_FILE = QObject::tr("Config.ini");
static const QString CHESSMAN_CODE = QObject::tr("krncabpKRNCABP"); //��������ʿ����˧�����������

static const int TIE = 0;
static const int BLACK = 1;
static const int RED = 2;
static const int COMPITITOR_MACHINE = 1;
static const int COMPITITOR_HUMAN = 2;
static const int COMPITITOR_NETWORK = 3;
static const int CLIENT_SIDE = 1;
static const int SERVER_SIDE = 2;
static const int MAX_SEARCH_DEPTH = 3;

static const int CHESSMAN_TYPE_COUNT = 14;
static const int CHESSBOARD_ROW = 10;
static const int CHESSBOARD_COLUMN = 9;
static const int WINDOW_STARTX = 0;
static const int WINDOW_STARTY = 0;
static const int CHESSBOARD_WIDTH = 521;
static const int CHESSBOARD_HEIGHT = 577;
static const int CHESSBOARD_STARTX = 250;
static const int CHESSBOARD_STARTY = 100;
static const int LEFTSTEPLIST_STARTX = 20;
static const int LEFTSTEPLIST_STARTY = 100;
static const int STEPLIST_WIDTH = 200;
static const int STEPLIST_HEIGHT = 640;
static const int RIGHTSTEPLIST_STARTX = 800;
static const int RIGHTSTEPLIST_STARTY = 100;
static const int MOVE_STEP_PER_PAGE = 15;
static const int COLUMN_PER_STEP = 3;

static const int SQUARE_SIZE = 57;
static const int BOARD_EDGE = 4;

// ���̷�Χ
static const int RANK_TOP = 3;
static const int RANK_BOTTOM = 12;
static const int FILE_LEFT = 3;
static const int FILE_RIGHT = 11;

//���ӱ��
static const char BLACK_GENERAL = 1;     //�ڽ�
static const char BLACK_CHARIOT = 2;     //�ڳ�
static const char BLACK_HORSE = 3;       //����
static const char BLACK_CANNON = 4;      //����
static const char BLACK_ADVISOR = 5;     //��ʿ
static const char BLACK_MINISTER = 6;    //����
static const char BLACK_SOLDIER = 7;     //����

static const char RED_GENERAL = 8;       //��˧
static const char RED_CHARIOT = 9;       //�쳵
static const char RED_HORSE = 10;        //����
static const char RED_CANNON = 11;       //����
static const char RED_ADVISOR = 12;      //����
static const char RED_MINISTER = 13;     //����
static const char RED_SOLDIER = 14;      //���

static const int EVENT_NEW_GAME = 1;
static const int EVENT_UPDATE_MOVE = 2;
static const int EVENT_ILLEGAL_MOVE = 3;
static const int EVENT_FALLBACK = 4;
static const int EVENT_GAME_RESULT = 5;
static const int EVENT_REQ_FALLBACK = 8;
static const int EVENT_REQ_FALLBACK_REPLY = 9;
static const int EVENT_REQ_TIE = 10;
static const int EVENT_REQ_TIE_REPLY = 11;
static const int EVENT_REQ_LOSE = 12;
static const int EVENT_REQ_LOSE_REPLY = 13;

static const int TIP_REQ_FALLBACK = 1;
static const int TIP_REQ_TIE = 2;
static const int TIP_REQ_LOSE = 3;

// �ж������Ƿ��������е�����
static const char ccInBoard[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// �ж������Ƿ��ھŹ�������
static const char ccInFort[256] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

// �жϲ����Ƿ�����ض��߷������飬1=˧(��)��2=��(ʿ)��3=��(��)
static const char ccLegalSpan[512] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 1, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 2, 1, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

// ���ݲ����ж����Ƿ����ȵ�����
static const char ccKnightPin[512] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,-16,  0,-16,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0, -1,  0,  0,  0,  1,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0, 16,  0, 16,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0
};

// ˧(��)�Ĳ���
static const char KING_DELTA[4] = {-16, -1, 1, 16};
// ��(ʿ)�Ĳ���
static const char ADVISOR_DELTA[4] = {-17, -15, 15, 17};
// ��Ĳ�������˧(��)�Ĳ�����Ϊ����
static const char knightDelta[4][2] = {{-33, -31}, {-18, 14}, {-14, 18}, {31, 33}};
// �������Ĳ���������(ʿ)�Ĳ�����Ϊ����
static const char KNIGHT_CHECK_DELTA[4][2] = {{-33, -18}, {-31, -14}, {14, 31}, {18, 33}};

// ���̳�ʼ����
static const char STARTUP_LAYOUT[256] = {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  2,  3,  6,  5,  1,  5,  6,  3,  2,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  4,  0,  0,  0,  0,  0,  4,  0,  0,  0,  0,  0,
    0,  0,  0,  7,  0,  7,  0,  7,  0,  7,  0,  7,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, 14,  0, 14,  0, 14,  0, 14,  0, 14,  0,  0,  0,  0,
    0,  0,  0,  0, 11,  0,  0,  0,  0,  0, 11,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0, 9, 10, 13,  12,  8,  12, 13, 10, 9,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
};

const int MATE_VALUE = 10000;               //��߷�ֵ���������ķ�ֵ
const int BAN_VALUE = MATE_VALUE - 100;     //�����и��ķ�ֵ�����ڸ�ֵ����д���û���
const int WIN_VALUE = MATE_VALUE - 200;     //������ʤ���ķ�ֵ���ޣ�������ֵ��˵���Ѿ�������ɱ����
const int DRAW_VALUE = 20;                  //����ʱ���صķ�����ȡ��ֵ��
const int ADVANCED_VALUE = 3;               //����Ȩ��ֵ
const int RANDOM_MASK = 7;                  //����Է�ֵ

// ����λ�ü�ֵ��
static const int CHESSMAN_VALUE[7][256] = {
    { // ˧(��)
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  2,  2,  2,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0, 11, 15, 11,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
      0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    }, { // ��
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,194,206,204,212,200,212,204,206,194,  0,  0,  0,  0,
         0,  0,  0,200,208,206,212,200,212,206,208,200,  0,  0,  0,  0,
         0,  0,  0,198,208,204,212,212,212,204,208,198,  0,  0,  0,  0,
         0,  0,  0,204,209,204,212,214,212,204,209,204,  0,  0,  0,  0,
         0,  0,  0,208,212,212,214,215,214,212,212,208,  0,  0,  0,  0,
         0,  0,  0,208,211,211,214,215,214,211,211,208,  0,  0,  0,  0,
         0,  0,  0,206,213,213,216,216,216,213,213,206,  0,  0,  0,  0,
         0,  0,  0,206,208,207,214,216,214,207,208,206,  0,  0,  0,  0,
         0,  0,  0,206,212,209,216,233,216,209,212,206,  0,  0,  0,  0,
         0,  0,  0,206,208,207,213,214,213,207,208,206,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    }, { // ��
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0, 88, 85, 90, 88, 90, 88, 90, 85, 88,  0,  0,  0,  0,
         0,  0,  0, 85, 90, 92, 93, 78, 93, 92, 90, 85,  0,  0,  0,  0,
         0,  0,  0, 93, 92, 94, 95, 92, 95, 94, 92, 93,  0,  0,  0,  0,
         0,  0,  0, 92, 94, 98, 95, 98, 95, 98, 94, 92,  0,  0,  0,  0,
         0,  0,  0, 90, 98,101,102,103,102,101, 98, 90,  0,  0,  0,  0,
         0,  0,  0, 90,100, 99,103,104,103, 99,100, 90,  0,  0,  0,  0,
         0,  0,  0, 93,108,100,107,100,107,100,108, 93,  0,  0,  0,  0,
         0,  0,  0, 92, 98, 99,103, 99,103, 99, 98, 92,  0,  0,  0,  0,
         0,  0,  0, 90, 96,103, 97, 94, 97,103, 96, 90,  0,  0,  0,  0,
         0,  0,  0, 90, 90, 90, 96, 90, 96, 90, 90, 90,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    }, { // ��
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0, 96, 96, 97, 99, 99, 99, 97, 96, 96,  0,  0,  0,  0,
         0,  0,  0, 96, 97, 98, 98, 98, 98, 98, 97, 96,  0,  0,  0,  0,
         0,  0,  0, 97, 96,100, 99,101, 99,100, 96, 97,  0,  0,  0,  0,
         0,  0,  0, 96, 96, 96, 96, 96, 96, 96, 96, 96,  0,  0,  0,  0,
         0,  0,  0, 95, 96, 99, 96,100, 96, 99, 96, 95,  0,  0,  0,  0,
         0,  0,  0, 96, 96, 96, 96,100, 96, 96, 96, 96,  0,  0,  0,  0,
         0,  0,  0, 96, 99, 99, 98,100, 98, 99, 99, 96,  0,  0,  0,  0,
         0,  0,  0, 97, 97, 96, 91, 92, 91, 96, 97, 97,  0,  0,  0,  0,
         0,  0,  0, 98, 98, 96, 92, 89, 92, 96, 98, 98,  0,  0,  0,  0,
         0,  0,  0,100,100, 96, 91, 90, 91, 96,100,100,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    }, { // ��(ʿ)
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0, 20,  0, 20,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0, 23,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0, 20, 20, 20,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    }, { // ��(��)
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0, 20,  0,  0,  0, 20,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0, 18,  0,  0,  0, 23,  0,  0,  0, 18,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0, 20,  0,  0,  0, 20,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    }, { // ��(��)
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  7,  0,  7,  0, 15,  0,  7,  0,  7,  0,  0,  0,  0,
         0,  0,  0,  7,  0, 13,  0, 16,  0, 13,  0,  7,  0,  0,  0,  0,
         0,  0,  0, 14, 18, 20, 27, 29, 27, 20, 18, 14,  0,  0,  0,  0,
         0,  0,  0, 19, 23, 27, 29, 30, 29, 27, 23, 19,  0,  0,  0,  0,
         0,  0,  0, 19, 24, 32, 37, 37, 37, 32, 24, 19,  0,  0,  0,  0,
         0,  0,  0, 19, 24, 34, 42, 44, 42, 34, 24, 19,  0,  0,  0,  0,
         0,  0,  0,  9,  9,  9, 11, 13, 11,  9,  9,  9,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
         0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
    }
};

// ����������ͺ������ø���
inline int COORD_XY(int x, int y) {
    return x + (y << 4);
}

// ������ˮƽ����
inline int FILE_FLIP(int x) {
    return 14 - x;
}

// �����괹ֱ����
inline int RANK_FLIP(int y) {
    return 15 - y;
}

inline int getChessboardCoord(int x, int y, bool fliped)
{
    x = fliped ? FILE_FLIP(x) : x;
    y = fliped ? RANK_FLIP(y) : y;

    return (x - FILE_LEFT) + (y - RANK_TOP) * CHESSBOARD_COLUMN;
}

//��ȡ����λ��
inline void getPixmapPos(int row, int column, int &xx, int &yy)
{
    xx = BOARD_EDGE + column * SQUARE_SIZE;
    yy = BOARD_EDGE + row * SQUARE_SIZE;
}

//���������ϵ��к��л�ȡ�������е�����
inline int getChessmanIndex(int row, int column, bool fliped)
{
    int x = column + FILE_LEFT;
    int y = row + RANK_TOP;
    if (fliped)
    {
        x = FILE_FLIP(x);
        y = RANK_FLIP(y);
    }
    return COORD_XY(x, y);
}

inline void getPixmapIndex(int xx, int yy, int &row, int &column)
{
    row = (yy - BOARD_EDGE) / SQUARE_SIZE;
    column = (xx - BOARD_EDGE) / SQUARE_SIZE;
}

// �ж������Ƿ���������
inline bool IN_BOARD(int sq) {
    return ccInBoard[sq] != 0;
}

// �ж������Ƿ��ھŹ���
inline bool IN_FORT(int sq) {
    return ccInFort[sq] != 0;
}

// ��ø��ӵ�������
inline int RANK_Y(int sq) {
    return sq >> 4;
}

// ��ø��ӵĺ�����
inline int FILE_X(int sq) {
    return sq & 15;
}

// ��ת����
inline int SQUARE_FLIP(int sq) {
    return 254 - sq;
}

// ����ˮƽ����
inline int MIRROR_SQUARE(int sq) {
    return COORD_XY(FILE_FLIP(FILE_X(sq)), RANK_Y(sq));
}

// ����ˮƽ����
inline int SQUARE_FORWARD(int sq, int sd) {
    return sq - 16 + (sd << 5);
}

// �߷��Ƿ����˧(��)�Ĳ���
inline bool KING_SPAN(int sqSrc, int sqDst) {
    return ccLegalSpan[sqDst - sqSrc + 256] == 1;
}

// �߷��Ƿ������(ʿ)�Ĳ���
inline bool ADVISOR_SPAN(int sqSrc, int sqDst) {
    return ccLegalSpan[sqDst - sqSrc + 256] == 2;
}

// �߷��Ƿ������(��)�Ĳ���
inline bool BISHOP_SPAN(int sqSrc, int sqDst) {
    return ccLegalSpan[sqDst - sqSrc + 256] == 3;
}

// ��(��)�۵�λ��
inline int BISHOP_PIN(int sqSrc, int sqDst) {
    return (sqSrc + sqDst) >> 1;
}

// ���ȵ�λ��
inline int KNIGHT_PIN(int sqSrc, int sqDst) {
    return sqSrc + ccKnightPin[sqDst - sqSrc + 256];
}

// �Ƿ�δ����
inline bool HOME_HALF(int sq, int sd) {
    return (sq & 0x80) != (sd << 7);
}

// �Ƿ��ѹ���
inline bool AWAY_HALF(int sq, int sd) {
    return (sq & 0x80) == (sd << 7);
}

// �Ƿ��ںӵ�ͬһ��
inline bool SAME_HALF(int sqSrc, int sqDst) {
    return ((sqSrc ^ sqDst) & 0x80) == 0;
}

// �Ƿ���ͬһ��
inline bool SAME_RANK(int sqSrc, int sqDst) {
    return ((sqSrc ^ sqDst) & 0xf0) == 0;
}

// �Ƿ���ͬһ��
inline bool SAME_FILE(int sqSrc, int sqDst) {
    return ((sqSrc ^ sqDst) & 0x0f) == 0;
}

// ����߷������
inline int SRC(int mv) {
  return mv & 255;
}

// ����߷����յ�
inline int DST(int mv) {
  return mv >> 8;
}

// ���������յ����߷�
inline int MOVE(int sqSrc, int sqDst) {
  return sqSrc + (sqDst << 8);
}

inline bool isBlackSide(char chessmanType)
{
    return (chessmanType >= BLACK_GENERAL) && (chessmanType <= BLACK_SOLDIER);
}

inline bool isRedSide(int chessmanType)
{
    return (chessmanType >= RED_GENERAL) && (chessmanType <= RED_SOLDIER);
}

inline bool isSameSide(int srcChessmanType, int dstChessmanType)
{
    return ((isBlackSide(srcChessmanType) && isBlackSide(dstChessmanType))
            || (isRedSide(srcChessmanType) && isRedSide(dstChessmanType)));
}

inline QString getChessmanPic(char chessman, bool selected, bool dead)
{
    QString chessmanPic;
    switch(chessman)
    {
    case 0:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/OOS.GIF"): QObject::tr(":/images/WOOD/OO.GIF");
        }
        break;
    case 1:
        {
            chessmanPic = dead ? QObject::tr(":/images/WOOD/BKM.GIF") : (selected ? QObject::tr(":/images/WOOD/BKS.GIF"): QObject::tr(":/images/WOOD/BK.GIF"));
        }
        break;
    case 2:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/BRS.GIF"): QObject::tr(":/images/WOOD/BR.GIF");
        }
        break;
    case 3:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/BNS.GIF"): QObject::tr(":/images/WOOD/BN.GIF");
        }
        break;
    case 4:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/BCS.GIF"): QObject::tr(":/images/WOOD/BC.GIF");
        }
        break;
    case 5:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/BAS.GIF"): QObject::tr(":/images/WOOD/BA.GIF");
        }
        break;
    case 6:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/BBS.GIF"): QObject::tr(":/images/WOOD/BB.GIF");
        }
        break;
    case 7:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/BPS.GIF"): QObject::tr(":/images/WOOD/BP.GIF");
        }
        break;
    case 8:
        {
            chessmanPic = dead ? QObject::tr(":/images/WOOD/RKM.GIF") : (selected ? QObject::tr(":/images/WOOD/RKS.GIF"): QObject::tr(":/images/WOOD/RK.GIF"));
        }
        break;
    case 9:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/RRS.GIF"): QObject::tr(":/images/WOOD/RR.GIF");
        }
        break;
    case 10:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/RNS.GIF"): QObject::tr(":/images/WOOD/RN.GIF");
        }
        break;
    case 11:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/RCS.GIF"): QObject::tr(":/images/WOOD/RC.GIF");
        }
        break;
    case 12:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/RAS.GIF"): QObject::tr(":/images/WOOD/RA.GIF");
        }
        break;
    case 13:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/RBS.GIF"): QObject::tr(":/images/WOOD/RB.GIF");
        }
        break;
    case 14:
        {
            chessmanPic = selected ? QObject::tr(":/images/WOOD/RPS.GIF"): QObject::tr(":/images/WOOD/RP.GIF");
        }
        break;
    default:
        break;
    }
    return chessmanPic;
}

inline int getChessmanTypeByCode(QChar code)
{
    int chessmanType = 0;
    for (int i = 0; i < 14; ++i)
    {
        if (CHESSMAN_CODE.at(i) == code)
        {
            chessmanType = i + 1;
            break;
        }
    }

    return chessmanType;
}

inline QString convertToTimeStr(int seconds)
{
    QString time;

    int hour = seconds / 3600;
    int minute = (seconds - hour * 3600) / 60;
    int second = seconds - hour * 3600 - minute * 60;
    time.sprintf("%.2d:%.2d:%.2d", hour, minute, second);

    return time;
}

#endif // COMMDEF

