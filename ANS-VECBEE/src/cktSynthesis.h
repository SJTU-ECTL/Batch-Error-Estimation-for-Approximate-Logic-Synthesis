#ifndef CKT_SYNTHESIS_H
#define CKT_SYNTHESIS_H

#include "header.h"
#include "abcApi.h"
#include "cktSopNet.h"
#include "cktTiming.h"


float Ckt_Synthesis(Ckt_Sop_Net_t & ckt);
float Ckt_Synthesis2(Ckt_Sop_Net_t & ckt, std::string fileName);
float Ckt_Synthesis3(Ckt_Sop_Net_t & ckt);
void OutputBlif(abc::Abc_Ntk_t * pNtk, std::string fileName, bool isSynthMap);
float Ckt_GetArea(abc::Abc_Ntk_t * pNtk);


#endif
