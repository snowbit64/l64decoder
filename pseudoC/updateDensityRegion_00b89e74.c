// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateDensityRegion
// Entry Point: 00b89e74
// Size: 556 bytes
// Signature: undefined __thiscall updateDensityRegion(DensityMapModifier * this, int param_1, int param_2, uint param_3, uint param_4, uint param_5, uchar * param_6)


/* DensityMapModifier::updateDensityRegion(int, int, unsigned int, unsigned int, unsigned int,
   unsigned char const*) */

void __thiscall
DensityMapModifier::updateDensityRegion
          (DensityMapModifier *this,int param_1,int param_2,uint param_3,uint param_4,uint param_5,
          uchar *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint *puVar14;
  int iVar15;
  ulong uVar13;
  
  uVar1 = param_3 + param_1 & ((int)(param_3 + param_1) >> 0x1f ^ 0xffffffffU);
  uVar2 = param_4 + param_2 & ((int)(param_4 + param_2) >> 0x1f ^ 0xffffffffU);
  uVar3 = *(uint *)(this + 0x24);
  if (uVar1 <= *(uint *)(this + 0x24)) {
    uVar3 = uVar1;
  }
  uVar1 = param_1 & (param_1 >> 0x1f ^ 0xffffffffU);
  uVar4 = *(uint *)(this + 0x28);
  if (uVar2 <= *(uint *)(this + 0x28)) {
    uVar4 = uVar2;
  }
  if ((uVar1 < uVar3) && (uVar2 = param_2 & (param_2 >> 0x1f ^ 0xffffffffU), uVar2 < uVar4)) {
    iVar15 = param_3 * (uVar2 - param_2) - param_1;
    uVar9 = uVar2;
    do {
      uVar13 = (ulong)uVar1;
      do {
        uVar12 = (uint)uVar13;
        puVar14 = *(uint **)(this + 0x10);
        if (param_6[iVar15 + uVar12] < 0x81) {
          if (puVar14 != (uint *)0x0) {
            uVar8 = *puVar14;
            uVar6 = 0;
            goto LAB_00b89f4c;
          }
          uVar12 = param_5 + (uVar12 + uVar9 * *(int *)(this + 0x24)) * *(int *)(this + 0x2c);
          uVar10 = (ulong)(uVar12 >> 3) & 0xffff;
          lVar5 = *(long *)(**(long **)(this + 0x18) + (ulong)(uVar12 >> 0x13) * 8);
          bVar7 = *(byte *)(lVar5 + uVar10) & ((byte)(1 << (ulong)(uVar12 & 7)) ^ 0xff);
LAB_00b8a048:
          *(byte *)(lVar5 + uVar10) = bVar7;
        }
        else {
          if (puVar14 == (uint *)0x0) {
            uVar12 = param_5 + (uVar12 + uVar9 * *(int *)(this + 0x24)) * *(int *)(this + 0x2c);
            uVar10 = (ulong)(uVar12 >> 3) & 0xffff;
            lVar5 = *(long *)(**(long **)(this + 0x18) + (ulong)(uVar12 >> 0x13) * 8);
            bVar7 = *(byte *)(lVar5 + uVar10) | (byte)(1 << (ulong)(uVar12 & 7));
            goto LAB_00b8a048;
          }
          uVar8 = *puVar14;
          uVar6 = 1;
LAB_00b89f4c:
          lVar11 = (ulong)(puVar14[(ulong)param_5 + 0x1a] +
                          (((uVar9 >> 5) << (ulong)(uVar8 & 0x1f)) + (uVar12 >> 5)) * puVar14[0xd])
                   * 8;
          lVar5 = *(long *)(*(long *)(puVar14 + 10) + lVar11);
          uVar6 = (**(code **)(lVar5 + 8))
                            (lVar5,uVar12 & 0x1f | (uVar9 & 0x1f) << 5,
                             param_5 - puVar14[(ulong)puVar14[(ulong)param_5 + 0x1a] * 2 + 0xe],1,
                             uVar6);
          *(undefined8 *)(*(long *)(puVar14 + 10) + lVar11) = uVar6;
        }
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar13);
      uVar9 = uVar9 + 1;
      iVar15 = iVar15 + param_3;
    } while (uVar9 != uVar4);
    DensityMap::markDensityRegionDirty
              (*(DensityMap **)(this + 8),uVar1,uVar2,uVar3,uVar4,param_5,1,0xffffffff,false,true,
               true);
  }
  return;
}


