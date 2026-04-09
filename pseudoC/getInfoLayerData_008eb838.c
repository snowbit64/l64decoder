// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInfoLayerData
// Entry Point: 008eb838
// Size: 560 bytes
// Signature: undefined __thiscall getInfoLayerData(BaseTerrain * this, uint param_1, uint param_2, int param_3, int param_4, uint param_5, uint param_6, uchar * param_7)


/* BaseTerrain::getInfoLayerData(unsigned int, unsigned int, int, int, unsigned int, unsigned int,
   unsigned char*) */

void __thiscall
BaseTerrain::getInfoLayerData
          (BaseTerrain *this,uint param_1,uint param_2,int param_3,int param_4,uint param_5,
          uint param_6,uchar *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  code **ppcVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_a0;
  DensityMapModifier aDStack_98 [16];
  uint *local_88;
  long *local_80;
  int local_74;
  int local_6c;
  long local_68;
  
  uVar9 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(this + 0x50) + uVar9 * 0x58 + 0x38) + 0x20) +
                      0x48))();
  iVar7 = (**(code **)(**(long **)(*(long *)(*(long *)(this + 0x50) + uVar9 * 0x58 + 0x38) + 0x20) +
                      0x50))();
  DensityMapModifier::DensityMapModifier
            (aDStack_98,
             *(DensityMap **)(*(long *)(*(long *)(this + 0x50) + uVar9 * 0x58 + 0x38) + 0x20));
  if (param_6 != 0) {
    uVar10 = 0;
    local_a0 = 0;
    do {
      uVar11 = uVar10 + param_4;
      uVar12 = uVar11;
      if (iVar7 <= (int)uVar11) {
        uVar12 = iVar7 - 1;
      }
      uVar1 = 0;
      if (-1 < (int)uVar11) {
        uVar1 = uVar12;
      }
      if (param_5 != 0) {
        uVar9 = (ulong)param_5;
        uVar11 = local_a0;
        uVar12 = param_3;
        do {
          uVar3 = uVar12;
          if (iVar6 <= (int)uVar12) {
            uVar3 = iVar6 - 1;
          }
          uVar2 = 0;
          if (-1 < (int)uVar12) {
            uVar2 = uVar3;
          }
          if (local_88 == (uint *)0x0) {
            uVar3 = param_2 + (uVar2 + local_74 * uVar1) * local_6c;
            bVar5 = *(byte *)(*(long *)(*local_80 + (ulong)(uVar3 >> 0x13) * 8) +
                             ((ulong)(uVar3 >> 3) & 0xffff)) >> (ulong)(uVar3 & 7) & 1;
          }
          else {
            ppcVar8 = *(code ***)
                       (*(long *)(local_88 + 10) +
                       (ulong)(local_88[(ulong)param_2 + 0x1a] +
                              (((uVar1 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar2 >> 5)) *
                              local_88[0xd]) * 8);
                    /* try { // try from 008eba1c to 008eba23 has its CatchHandler @ 008eba68 */
            bVar5 = (**ppcVar8)(ppcVar8,uVar2 & 0x1f | (uVar1 & 0x1f) << 5,
                                param_2 - local_88[(ulong)local_88[(ulong)param_2 + 0x1a] * 2 + 0xe]
                                ,1);
          }
          param_7[uVar11] = bVar5;
          uVar11 = uVar11 + 1;
          uVar12 = uVar12 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      local_a0 = local_a0 + param_5;
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_6);
  }
  DensityMapModifier::~DensityMapModifier(aDStack_98);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


