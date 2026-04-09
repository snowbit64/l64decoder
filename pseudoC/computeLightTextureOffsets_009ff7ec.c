// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeLightTextureOffsets
// Entry Point: 009ff7ec
// Size: 140 bytes
// Signature: undefined __thiscall computeLightTextureOffsets(LightList * this, uint * param_1, uint * param_2, uint * param_3)


/* LightList::computeLightTextureOffsets(unsigned int&, unsigned int&, unsigned int&) const */

void __thiscall
LightList::computeLightTextureOffsets(LightList *this,uint *param_1,uint *param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  byte **ppbVar7;
  
  uVar5 = (int)((ulong)(*(long *)(this + 0x70) - *(long *)(this + 0x68)) >> 3) * -0x66666666;
  uVar6 = (ulong)*(uint *)(this + 0x34);
  if (*(uint *)(this + 0x34) != 0) {
    ppbVar7 = (byte **)(*(long *)(this + 0x68) + 8);
    do {
      bVar4 = **ppbVar7;
      if (1 < bVar4) {
        uVar5 = uVar5 + 1;
      }
      if (4 < bVar4) {
        uVar5 = uVar5 + 1;
      }
      uVar5 = uVar5 + (uint)bVar4 * 3;
      if ((*ppbVar7)[2] != 0) {
        uVar5 = uVar5 + 4;
      }
      uVar6 = uVar6 - 1;
      ppbVar7 = ppbVar7 + 5;
    } while (uVar6 != 0);
  }
  lVar1 = *(long *)(this + 0x50);
  lVar2 = *(long *)(this + 0x58);
  iVar3 = *(int *)(this + 0x38);
  *param_1 = uVar5;
  uVar5 = uVar5 + (int)((ulong)(lVar2 - lVar1) >> 3) * 0x33333334;
  *param_2 = uVar5;
  *param_3 = uVar5 + iVar3 * 4;
  return;
}


