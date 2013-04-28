#include "analyzermsgsender.h"
#include "events/eventnames.h"
#include "gitlevent.h"

///SINGLETON
SINGLETON_PATTERN_IMPLIMENT(AnalyzerMsgSender)

AnalyzerMsgSender::AnalyzerMsgSender()
{
}

void AnalyzerMsgSender::msgOut( const QString& strMsg , QtMsgType eMsgLevel)
{    
    GitlEvent cEvt(g_strStatusMsgEvent);
    cEvt.getEvtData().setParameter("msg_detail", strMsg);
    cEvt.getEvtData().setParameter("msg_level",eMsgLevel);
    dispatchEvt(&cEvt);
}
