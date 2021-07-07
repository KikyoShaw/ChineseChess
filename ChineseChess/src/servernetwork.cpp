#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QDataStream>
#include <QMessageBox>
#include "servernetwork.h"

ServerNetwork::ServerNetwork(QObject *parent) : QObject(parent)
{
}

ServerNetwork::~ServerNetwork()
{
}

void ServerNetwork::initServer(int port)
{
	server = QSharedPointer<QTcpServer>(new QTcpServer(this));
	if (server) {
		connect(server.data(), SIGNAL(newConnection()), this, SLOT(newConnection()));
		if (!server->listen(QHostAddress::Any, port)) {
			QMessageBox::critical(NULL, QStringLiteral("´íÎóÐÅÏ¢"), QStringLiteral("¼àÌý¶Ë¿ÚÊ§°Ü£¡"));
		}
	}
}

int ServerNetwork::sendMsg(char *msg, int len)
{
    return serverSocket->write(msg, len);
}

void ServerNetwork::newConnection()
{
	if (server) {
		serverSocket = server->nextPendingConnection();
	}
    connect(serverSocket, SIGNAL(disconnected()), this, SLOT(disconnected()));
    connect(serverSocket, SIGNAL(disconnected()), serverSocket, SLOT(deleteLater()));
    connect(serverSocket, SIGNAL(readyRead()), this, SLOT(readData()));

    emit connStateChanged(true);
}

void ServerNetwork::disconnected()
{
    emit connStateChanged(false);
}

void ServerNetwork::readData()
{
     char msg[1024];
     memset(msg, 0, 1024);

     int len = serverSocket->read(msg, 1024);

    emit processMessage(msg, len);
}

