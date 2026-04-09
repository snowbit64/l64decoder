// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLayerData
// Entry Point: 009cb834
// Size: 180 bytes
// Signature: undefined __thiscall setLayerData(ProceduralPlacementIndexMask * this, int param_1, int param_2, uint param_3, uint param_4, uchar * param_5)


/* ProceduralPlacementIndexMask::setLayerData(int, int, unsigned int, unsigned int, unsigned char*)
    */

void __thiscall
ProceduralPlacementIndexMask::setLayerData
          (ProceduralPlacementIndexMask *this,int param_1,int param_2,uint param_3,uint param_4,
          uchar *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  iVar10 = *(int *)(this + 0x50);
  iVar5 = *(int *)(this + 0x54);
  iVar1 = param_3 + param_1;
  iVar8 = param_4 + param_2;
  iVar4 = iVar10 + -1;
  if (param_1 <= iVar10 + -1) {
    iVar4 = param_1;
  }
  iVar3 = 0;
  if (-1 < param_1) {
    iVar3 = iVar4;
  }
  iVar4 = iVar5 + -1;
  if (param_2 <= iVar5 + -1) {
    iVar4 = param_2;
  }
  iVar7 = 0;
  if (-1 < param_2) {
    iVar7 = iVar4;
  }
  if (iVar1 <= iVar10) {
    iVar10 = iVar1;
  }
  iVar4 = 0;
  if (-1 < iVar1) {
    iVar4 = iVar10;
  }
  if (iVar8 <= iVar5) {
    iVar5 = iVar8;
  }
  iVar1 = 0;
  if (-1 < iVar8) {
    iVar1 = iVar5;
  }
  if (iVar7 < iVar1) {
    iVar8 = param_3 * (iVar7 - param_2) - param_1;
    do {
      if (iVar3 < iVar4) {
        lVar9 = *(long *)(this + 200);
        iVar10 = iVar3;
        do {
          uVar2 = iVar8 + iVar10;
          uVar6 = iVar10 + iVar7 * *(int *)(this + 0x50);
          iVar10 = iVar10 + 1;
          *(uint *)(lVar9 + (ulong)uVar6 * 4) = (uint)param_5[uVar2];
        } while (iVar4 != iVar10);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + param_3;
    } while (iVar7 != iVar1);
  }
  return;
}


