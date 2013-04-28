#include "commandrequest.h"

#include <QDebug>

CommandRequest::CommandRequest()
{
}

bool CommandRequest::hasParameter(QString strParam) const
{
    return m_cRequest.contains(strParam);
}

bool CommandRequest::getParameter(QString strParam, QVariant& rvValue) const
{
    if( m_cRequest.contains(strParam) )
    {
        rvValue = m_cRequest[strParam];
        return true;
    }
    qWarning() << QString("Respond Parameter %1 NOT found.").arg(strParam);
    return false;


}

bool CommandRequest::setParameter(QString strParam, const QVariant &rvValue)
{
    m_cRequest[strParam] = rvValue;
    return true;
}
