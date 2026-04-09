// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: floor1_interpolate_fit
// Entry Point: 00e13628
// Size: 528 bytes
// Signature: undefined floor1_interpolate_fit(void)


/* WARNING: Type propagation algorithm not settling */

uint * floor1_interpolate_fit
                 (undefined8 param_1,long param_2,undefined (*param_3) [16],
                 undefined (*param_4) [16],int param_5)

{
  int iVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  undefined (*pauVar7) [16];
  uint *puVar8;
  undefined (*pauVar9) [16];
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  undefined auVar15 [13];
  uint uVar19;
  uint uVar20;
  undefined auVar16 [16];
  undefined auVar17 [16];
  uint uVar21;
  undefined auVar22 [16];
  byte bVar18;
  
  puVar4 = (uint *)0x0;
  if ((param_3 != (undefined (*) [16])0x0) && (param_4 != (undefined (*) [16])0x0)) {
    uVar14 = *(uint *)(param_2 + 0x504);
    uVar13 = (ulong)(int)uVar14;
    puVar4 = (uint *)_vorbis_block_alloc(param_1,uVar13 * 4);
    if (0 < (int)uVar14) {
      iVar1 = 0x10000 - param_5;
      if (uVar14 < 4) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (((uint *)((long)*param_3 + uVar13 * 4) <= puVar4 ||
             (undefined (*) [16])(puVar4 + uVar13) <= param_3) &&
           ((uint *)((long)*param_4 + uVar13 * 4) <= puVar4 ||
            (undefined (*) [16])(puVar4 + uVar13) <= param_4)) {
          uVar5 = uVar13 & 0xfffffffffffffffc;
          pauVar7 = param_4;
          pauVar9 = param_3;
          puVar8 = puVar4;
          uVar12 = uVar5;
          do {
            auVar2 = *pauVar7;
            auVar3 = *pauVar9;
            auVar16._0_6_ = CONCAT15(auVar2[5],(uint5)(auVar2[1] & 0x80) << 8) & 0x80ffffffffff;
            auVar16._6_3_ = 0;
            auVar16[9] = auVar2[9] & 0x80;
            auVar16._10_3_ = 0;
            auVar16[13] = auVar2[13] & 0x80;
            auVar16._14_2_ = 0;
            auVar17[9] = 0x80;
            auVar17._0_9_ = (unkuint9)0x800000008000;
            auVar17._10_3_ = 0;
            auVar17[13] = 0x80;
            auVar17._14_2_ = 0;
            auVar22 = NEON_cmtst(auVar3,auVar17,4);
            auVar17 = NEON_cmeq(auVar16,0,2);
            bVar18 = auVar22[4] & ~auVar17[4];
            auVar15._0_9_ =
                 CONCAT18(auVar22[8] & ~auVar17[8],
                          (ulong)CONCAT14(bVar18,(uint)(byte)(auVar22[0] & ~auVar17[0])));
            auVar15[9] = auVar22[9] & ~auVar17[9];
            auVar15[10] = auVar22[10] & ~auVar17[10];
            auVar15[11] = auVar22[11] & ~auVar17[11];
            auVar15[12] = auVar22[12] & ~auVar17[12];
            uVar14 = (int)((uint)(auVar2._0_2_ & 0x7fff) * param_5 +
                           (uint)(auVar3._0_2_ & 0x7fff) * iVar1 + 0x8000) >> 0x10;
            uVar19 = (int)((uint)(auVar2._4_2_ & 0x7fff) * param_5 +
                           (uint)(auVar3._4_2_ & 0x7fff) * iVar1 + 0x8000) >> 0x10;
            uVar20 = (int)((uint)(auVar2._8_2_ & 0x7fff) * param_5 +
                           (uint)(auVar3._8_2_ & 0x7fff) * iVar1 + 0x8000) >> 0x10;
            uVar21 = (int)((uint)(auVar2._12_2_ & 0x7fff) * param_5 +
                           (uint)(auVar3._12_2_ & 0x7fff) * iVar1 + 0x8000) >> 0x10;
            puVar8[4] = uVar20;
            puVar8[5] = uVar21;
            *puVar8 = uVar14;
            puVar8[1] = uVar19;
            if ((auVar15._0_9_ & 1) != 0) {
              *puVar8 = uVar14 | 0x8000;
            }
            if ((bVar18 & 1) != 0) {
              puVar8[1] = uVar19 | 0x8000;
            }
            if ((auVar15._0_9_ & 1) != 0) {
              puVar8[2] = uVar20 | 0x8000;
            }
            if ((auVar15 & (undefined  [13])0x100000000) != (undefined  [13])0x0) {
              puVar8[3] = uVar21 | 0x8000;
            }
            uVar12 = uVar12 - 4;
            puVar8 = puVar8 + 4;
            pauVar9 = pauVar9 + 1;
            pauVar7 = pauVar7 + 1;
          } while (uVar12 != 0);
          if (uVar5 == uVar13) {
            return puVar4;
          }
        }
      }
      lVar6 = uVar13 - uVar5;
      puVar8 = puVar4 + uVar5;
      puVar10 = (uint *)((long)*param_4 + uVar5 * 4);
      puVar11 = (uint *)((long)*param_3 + uVar5 * 4);
      do {
        uVar14 = (int)((*puVar10 & 0x7fff) * param_5 + (*puVar11 & 0x7fff) * iVar1 + 0x8000) >> 0x10
        ;
        *puVar8 = uVar14;
        if ((*(char *)((long)puVar11 + 1) < '\0') && (*(char *)((long)puVar10 + 1) < '\0')) {
          *puVar8 = uVar14 | 0x8000;
        }
        lVar6 = lVar6 + -1;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar6 != 0);
    }
  }
  return puVar4;
}


