// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTrackPoint
// Entry Point: 008e1a18
// Size: 72 bytes
// Signature: undefined __cdecl addTrackPoint(uint param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, float param_12, float param_13, bool param_14)


/* TyreTrackGeometry::addTrackPoint(unsigned int, float, float, float, float, float, float, float,
   float, float, float, float, float, bool) */

void TyreTrackGeometry::addTrackPoint
               (uint param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,float param_9,float param_10,float param_11,
               float param_12,float param_13,bool param_14)

{
  Track *pTVar1;
  long lVar2;
  
  pTVar1 = (Track *)(ulong)param_1;
  if ((param_14 - 1 < *(uint *)(pTVar1 + 0x60)) &&
     (lVar2 = *(long *)(*(long *)(pTVar1 + 0x68) + (ulong)(param_14 - 1) * 8), lVar2 != 0)) {
    addTrackPoint(pTVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,SUB81(lVar2,0));
    return;
  }
  return;
}


