// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: bubbleUp
// Entry Point: 00dd97e0
// Size: 92 bytes
// Signature: undefined __thiscall bubbleUp(dtNodeQueue * this, int param_1, dtNode * param_2)


/* dtNodeQueue::bubbleUp(int, dtNode*) */

void __thiscall dtNodeQueue::bubbleUp(dtNodeQueue *this,int param_1,dtNode *param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  
  if (0 < param_1) {
    fVar4 = *(float *)(param_2 + 0x10);
    while( true ) {
      uVar2 = param_1;
      if (-1 < (int)(param_1 - 1U)) {
        uVar2 = param_1 - 1U;
      }
      uVar2 = (int)uVar2 >> 1;
      lVar3 = *(long *)(*(long *)this + (long)(int)uVar2 * 8);
      if (*(float *)(lVar3 + 0x10) <= fVar4) break;
      *(long *)(*(long *)this + (ulong)(uint)param_1 * 8) = lVar3;
      bVar1 = param_1 < 3;
      param_1 = uVar2;
      if (bVar1) {
        *(dtNode **)(*(long *)this + (long)(int)uVar2 * 8) = param_2;
        return;
      }
    }
  }
  *(dtNode **)(*(long *)this + (long)param_1 * 8) = param_2;
  return;
}


