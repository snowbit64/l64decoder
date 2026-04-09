// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityRegion
// Entry Point: 00b89ce0
// Size: 404 bytes
// Signature: undefined __thiscall getDensityRegion(DensityMapModifier * this, int param_1, int param_2, uint param_3, uint param_4, uint param_5, uchar * param_6)


/* DensityMapModifier::getDensityRegion(int, int, unsigned int, unsigned int, unsigned int, unsigned
   char*) */

void __thiscall
DensityMapModifier::getDensityRegion
          (DensityMapModifier *this,int param_1,int param_2,uint param_3,uint param_4,uint param_5,
          uchar *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code **ppcVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint local_64;
  
  if (param_4 != 0) {
    uVar7 = 0;
    local_64 = 0;
    do {
      uVar10 = uVar7 + param_2;
      uVar8 = uVar10;
      if (*(int *)(this + 0x24) <= (int)uVar10) {
        uVar8 = *(int *)(this + 0x24) - 1;
      }
      uVar1 = 0;
      if (-1 < (int)uVar10) {
        uVar1 = uVar8;
      }
      if (param_3 != 0) {
        uVar9 = (ulong)param_3;
        uVar10 = param_1;
        uVar8 = local_64;
        do {
          uVar3 = uVar10;
          if (*(int *)(this + 0x28) <= (int)uVar10) {
            uVar3 = *(int *)(this + 0x28) - 1;
          }
          puVar6 = *(uint **)(this + 0x10);
          uVar2 = 0;
          if (-1 < (int)uVar10) {
            uVar2 = uVar3;
          }
          if (puVar6 == (uint *)0x0) {
            uVar3 = param_5 + (uVar2 + *(int *)(this + 0x24) * uVar1) * *(int *)(this + 0x2c);
            uVar5 = (ulong)(*(byte *)(*(long *)(**(long **)(this + 0x18) +
                                               (ulong)(uVar3 >> 0x13) * 8) +
                                     ((ulong)(uVar3 >> 3) & 0xffff)) >> (ulong)(uVar3 & 7) & 1);
          }
          else {
            ppcVar4 = *(code ***)
                       (*(long *)(puVar6 + 10) +
                       (ulong)(puVar6[(ulong)param_5 + 0x1a] +
                              (((uVar1 >> 5) << (ulong)(*puVar6 & 0x1f)) + (uVar2 >> 5)) *
                              puVar6[0xd]) * 8);
            uVar5 = (**ppcVar4)(ppcVar4,uVar2 & 0x1f | (uVar1 & 0x1f) << 5,
                                param_5 - puVar6[(ulong)puVar6[(ulong)param_5 + 0x1a] * 2 + 0xe],1);
          }
          uVar10 = uVar10 + 1;
          uVar9 = uVar9 - 1;
          param_6[uVar8] = (&DAT_005257be)[uVar5 & 0xffffffff];
          uVar8 = uVar8 + 1;
        } while (uVar9 != 0);
      }
      local_64 = local_64 + param_3;
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_4);
  }
  return;
}


