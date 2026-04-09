// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayerData
// Entry Point: 009d961c
// Size: 268 bytes
// Signature: undefined __thiscall getLayerData(ProceduralPlacementMask * this, int param_1, int param_2, uint param_3, uint param_4, uchar * param_5)


/* ProceduralPlacementMask::getLayerData(int, int, unsigned int, unsigned int, unsigned char*) */

void __thiscall
ProceduralPlacementMask::getLayerData
          (ProceduralPlacementMask *this,int param_1,int param_2,uint param_3,uint param_4,
          uchar *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  
  if (param_4 != 0) {
    iVar4 = *(int *)(this + 0x50);
    iVar5 = *(int *)(this + 0x54);
    uVar7 = 0;
    uVar9 = 0;
    do {
      iVar10 = uVar9 + param_2;
      iVar2 = iVar10;
      if (iVar5 <= iVar10) {
        iVar2 = iVar5 + -1;
      }
      iVar1 = 0;
      if (-1 < iVar10) {
        iVar1 = iVar2;
      }
      uVar8 = (ulong)param_3;
      iVar10 = param_1;
      uVar6 = uVar7;
      if (param_3 != 0) {
        do {
          iVar2 = iVar10;
          if (iVar4 <= iVar10) {
            iVar2 = iVar4 + -1;
          }
          iVar3 = 0;
          if (-1 < iVar10) {
            iVar3 = iVar2;
          }
          fVar11 = (float)(**(code **)(*(long *)this + 0x68))(this,iVar3,iVar1);
          uVar8 = uVar8 - 1;
          param_5[uVar6] = (uchar)(int)fVar11;
          iVar10 = iVar10 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar8 != 0);
      }
      uVar9 = uVar9 + 1;
      uVar7 = uVar7 + param_3;
    } while (uVar9 != param_4);
  }
  return;
}


