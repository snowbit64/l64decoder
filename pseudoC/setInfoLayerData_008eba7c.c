// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInfoLayerData
// Entry Point: 008eba7c
// Size: 732 bytes
// Signature: undefined __thiscall setInfoLayerData(BaseTerrain * this, uint param_1, uint param_2, int param_3, int param_4, uint param_5, uint param_6, uchar * param_7)


/* BaseTerrain::setInfoLayerData(unsigned int, unsigned int, int, int, unsigned int, unsigned int,
   unsigned char const*) */

void __thiscall
BaseTerrain::setInfoLayerData
          (BaseTerrain *this,uint param_1,uint param_2,int param_3,int param_4,uint param_5,
          uint param_6,uchar *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  DensityMapModifier aDStack_98 [16];
  uint *local_88;
  long *local_80;
  int local_74;
  int local_6c;
  long local_68;
  
  uVar11 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = (**(code **)(**(long **)(*(long *)(*(long *)(this + 0x50) + uVar11 * 0x58 + 0x38) + 0x20)
                      + 0x48))();
  uVar7 = (**(code **)(**(long **)(*(long *)(*(long *)(this + 0x50) + uVar11 * 0x58 + 0x38) + 0x20)
                      + 0x50))();
  uVar13 = uVar6 - 1;
  if (param_3 <= (int)(uVar6 - 1)) {
    uVar13 = param_3;
  }
  uVar2 = 0;
  if (-1 < param_3) {
    uVar2 = uVar13;
  }
  uVar13 = uVar7 - 1;
  if (param_4 <= (int)(uVar7 - 1)) {
    uVar13 = param_4;
  }
  uVar1 = param_5 + param_3;
  uVar14 = 0;
  if (-1 < param_4) {
    uVar14 = uVar13;
  }
  if ((int)uVar1 <= (int)uVar6) {
    uVar6 = uVar1;
  }
  uVar13 = param_6 + param_4;
  uVar3 = 0;
  if (-1 < (int)uVar1) {
    uVar3 = uVar6;
  }
  if ((int)uVar13 <= (int)uVar7) {
    uVar7 = uVar13;
  }
  uVar6 = 0;
  if (-1 < (int)uVar13) {
    uVar6 = uVar7;
  }
  DensityMapModifier::DensityMapModifier
            (aDStack_98,
             *(DensityMap **)(*(long *)(*(long *)(this + 0x50) + uVar11 * 0x58 + 0x38) + 0x20));
  if ((int)uVar14 < (int)uVar6) {
    iVar12 = param_5 * (uVar14 - param_4) - param_3;
    do {
      if ((int)uVar2 < (int)uVar3) {
        uVar7 = (uVar14 & 0x1f) << 5;
        uVar13 = uVar2;
        do {
          puVar5 = local_88;
          if (param_7[iVar12 + uVar13] == '\0') {
            if (local_88 != (uint *)0x0) {
              uVar11 = (ulong)(local_88[(ulong)param_2 + 0x1a] +
                              (((uVar14 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar13 >> 5)) *
                              local_88[0xd]);
              lVar10 = *(long *)(*(long *)(local_88 + 10) + uVar11 * 8);
              uVar8 = (**(code **)(lVar10 + 8))
                                (lVar10,uVar13 & 0x1f | uVar7,
                                 param_2 - local_88[(ulong)local_88[(ulong)param_2 + 0x1a] * 2 + 0xe
                                                   ],1,0);
              goto LAB_008ebc20;
            }
            uVar1 = param_2 + (uVar13 + uVar14 * local_74) * local_6c;
            uVar11 = (ulong)(uVar1 >> 3) & 0xffff;
            lVar10 = *(long *)(*local_80 + (ulong)(uVar1 >> 0x13) * 8);
            bVar9 = *(byte *)(lVar10 + uVar11) & ((byte)(1 << (ulong)(uVar1 & 7)) ^ 0xff);
LAB_008ebd10:
            *(byte *)(lVar10 + uVar11) = bVar9;
          }
          else {
            if (local_88 == (uint *)0x0) {
              uVar1 = param_2 + (uVar13 + uVar14 * local_74) * local_6c;
              uVar11 = (ulong)(uVar1 >> 3) & 0xffff;
              lVar10 = *(long *)(*local_80 + (ulong)(uVar1 >> 0x13) * 8);
              bVar9 = *(byte *)(lVar10 + uVar11) | (byte)(1 << (ulong)(uVar1 & 7));
              goto LAB_008ebd10;
            }
            uVar11 = (ulong)(local_88[(ulong)param_2 + 0x1a] +
                            (((uVar14 >> 5) << (ulong)(*local_88 & 0x1f)) + (uVar13 >> 5)) *
                            local_88[0xd]);
            lVar10 = *(long *)(*(long *)(local_88 + 10) + uVar11 * 8);
                    /* try { // try from 008ebc14 to 008ebcd3 has its CatchHandler @ 008ebd58 */
            uVar8 = (**(code **)(lVar10 + 8))
                              (lVar10,uVar13 & 0x1f | uVar7,
                               param_2 - local_88[(ulong)local_88[(ulong)param_2 + 0x1a] * 2 + 0xe],
                               1,1);
LAB_008ebc20:
            *(undefined8 *)(*(long *)(puVar5 + 10) + uVar11 * 8) = uVar8;
          }
          uVar13 = uVar13 + 1;
        } while (uVar3 != uVar13);
      }
      uVar14 = uVar14 + 1;
      iVar12 = iVar12 + param_5;
    } while (uVar14 != uVar6);
  }
  DensityMapModifier::~DensityMapModifier(aDStack_98);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


