// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: trickleDown
// Entry Point: 00dd983c
// Size: 216 bytes
// Signature: undefined __thiscall trickleDown(dtNodeQueue * this, int param_1, dtNode * param_2)


/* dtNodeQueue::trickleDown(int, dtNode*) */

void __thiscall dtNodeQueue::trickleDown(dtNodeQueue *this,int param_1,dtNode *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  float fVar9;
  
  iVar4 = *(int *)(this + 0xc);
  uVar3 = param_1 << 1 | 1;
  if ((int)uVar3 < iVar4) {
    iVar8 = param_1 << 1;
    do {
      uVar1 = iVar8 + 2;
      lVar7 = *(long *)this;
      lVar6 = (long)(int)uVar3;
      uVar2 = uVar3;
      if (((int)uVar1 < iVar4) &&
         (*(float *)(*(long *)(lVar7 + (long)(int)uVar1 * 8) + 0x10) <
          *(float *)(*(long *)(lVar7 + lVar6 * 8) + 0x10))) {
        lVar6 = (long)(int)uVar1;
        uVar2 = uVar1;
      }
      uVar5 = (ulong)uVar2;
      iVar8 = uVar2 << 1;
      *(undefined8 *)(lVar7 + (long)param_1 * 8) = *(undefined8 *)(lVar7 + lVar6 * 8);
      uVar3 = uVar2 << 1 | 1;
      param_1 = uVar2;
    } while ((int)uVar3 < iVar4);
  }
  else {
    uVar5 = (ulong)(uint)param_1;
  }
  iVar4 = (int)uVar5;
  if (0 < iVar4) {
    fVar9 = *(float *)(param_2 + 0x10);
    while( true ) {
      iVar4 = (int)uVar5;
      iVar8 = iVar4;
      if (-1 < iVar4 + -1) {
        iVar8 = iVar4 + -1;
      }
      uVar3 = iVar8 >> 1;
      lVar6 = *(long *)(*(long *)this + (long)(int)uVar3 * 8);
      if (*(float *)(lVar6 + 0x10) <= fVar9) break;
      *(long *)(*(long *)this + uVar5 * 8) = lVar6;
      uVar5 = (ulong)uVar3;
      if (iVar4 < 3) {
        *(dtNode **)(*(long *)this + (long)(int)uVar3 * 8) = param_2;
        return;
      }
    }
  }
  *(dtNode **)(*(long *)this + (long)iVar4 * 8) = param_2;
  return;
}


