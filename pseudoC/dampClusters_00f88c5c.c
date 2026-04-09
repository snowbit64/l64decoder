// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dampClusters
// Entry Point: 00f88c5c
// Size: 288 bytes
// Signature: undefined dampClusters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::dampClusters() */

void btSoftBody::dampClusters(void)

{
  uint uVar1;
  long in_x0;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  ulong uVar15;
  
  uVar1 = *(uint *)(in_x0 + 0x5dc);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar3 = *(long *)(in_x0 + 0x5e8);
    do {
      lVar4 = *(long *)(lVar3 + uVar2 * 8);
      if ((0.0 < *(float *)(lVar4 + 0x188)) &&
         (uVar5 = (ulong)*(uint *)(lVar4 + 0x24), 0 < (int)*(uint *)(lVar4 + 0x24))) {
        plVar6 = *(long **)(lVar4 + 0x30);
        do {
          lVar7 = *plVar6;
          if (0.0 < *(float *)(lVar7 + 0x60)) {
            fVar8 = *(float *)(lVar7 + 0x28) - *(float *)(lVar4 + 0x110);
            fVar10 = (float)*(undefined8 *)(lVar7 + 0x20) - (float)*(undefined8 *)(lVar4 + 0x108);
            fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar4 + 0x108) >> 0x20);
            fVar11 = (float)((ulong)*(undefined8 *)(lVar4 + 0x170) >> 0x20);
            fVar14 = (float)*(undefined8 *)(lVar4 + 0x170);
            fVar9 = -(fVar14 * fVar8) + fVar10 * *(float *)(lVar4 + 0x178) +
                    (float)*(undefined8 *)(lVar4 + 0x164);
            fVar10 = -(fVar11 * fVar10) + fVar13 * fVar14 +
                     (float)((ulong)*(undefined8 *)(lVar4 + 0x164) >> 0x20);
            fVar11 = (fVar8 * fVar11 - *(float *)(lVar4 + 0x178) * fVar13) +
                     *(float *)(lVar4 + 0x160);
            fVar14 = *(float *)(lVar7 + 0x30);
            fVar8 = (float)*(undefined8 *)(lVar7 + 0x34);
            fVar13 = (float)((ulong)*(undefined8 *)(lVar7 + 0x34) >> 0x20);
            fVar16 = fVar8 * fVar8 + fVar14 * fVar14 + fVar13 * fVar13;
            uVar15 = NEON_fcmgt(CONCAT44(fVar16,fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10),
                                CONCAT44(fVar16,fVar16),4);
            if ((uVar15 & 1) == 0) {
              fVar16 = *(float *)(lVar4 + 0x188);
              uVar12 = NEON_fmadd(fVar16,fVar11 - fVar14,fVar14);
              *(undefined4 *)(lVar7 + 0x30) = uVar12;
              *(ulong *)(lVar7 + 0x34) =
                   CONCAT44(fVar13 + (fVar10 - fVar13) * fVar16,fVar8 + (fVar9 - fVar8) * fVar16);
            }
          }
          uVar5 = uVar5 - 1;
          plVar6 = plVar6 + 1;
        } while (uVar5 != 0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar1);
  }
  return;
}


