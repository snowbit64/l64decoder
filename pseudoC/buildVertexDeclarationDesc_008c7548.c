// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildVertexDeclarationDesc
// Entry Point: 008c7548
// Size: 312 bytes
// Signature: undefined __cdecl buildVertexDeclarationDesc(uint * param_1, uint param_2, bool param_3, VertexDeclarationDesc * param_4)


/* IndexedTriangleSetGeometryUtil::buildVertexDeclarationDesc(unsigned int*, unsigned int, bool,
   VertexDeclarationDesc&) */

void IndexedTriangleSetGeometryUtil::buildVertexDeclarationDesc
               (uint *param_1,uint param_2,bool param_3,VertexDeclarationDesc *param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined auVar3 [16];
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  puVar1 = VERTEX_ATTRIBUTE_TYPES_POSITION32;
  if (!param_3) {
    puVar1 = VERTEX_ATTRIBUTE_TYPES;
  }
  uVar5 = *param_1;
  if (1 < param_2) {
    uVar9 = (ulong)param_2 - 1;
    if (uVar9 < 8) {
      uVar8 = 1;
    }
    else {
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      uVar11 = uVar9 & 0xfffffffffffffff8;
      uVar8 = uVar11 | 1;
      bVar13 = (byte)uVar5;
      bVar14 = (byte)(uVar5 >> 8);
      bVar15 = (byte)(uVar5 >> 0x10);
      bVar16 = (byte)(uVar5 >> 0x18);
      puVar6 = (undefined8 *)(param_1 + 5);
      uVar12 = uVar11;
      auVar30 = ZEXT816(0);
      do {
        uVar32 = puVar6[-1];
        uVar31 = puVar6[-2];
        uVar34 = puVar6[1];
        uVar33 = *puVar6;
        puVar6 = puVar6 + 4;
        uVar12 = uVar12 - 8;
        bVar13 = (byte)uVar31 | bVar13;
        bVar14 = (byte)((ulong)uVar31 >> 8) | bVar14;
        bVar15 = (byte)((ulong)uVar31 >> 0x10) | bVar15;
        bVar16 = (byte)((ulong)uVar31 >> 0x18) | bVar16;
        bVar17 = (byte)((ulong)uVar31 >> 0x20) | bVar17;
        bVar18 = (byte)((ulong)uVar31 >> 0x28) | bVar18;
        bVar19 = (byte)((ulong)uVar31 >> 0x30) | bVar19;
        bVar20 = (byte)((ulong)uVar31 >> 0x38) | bVar20;
        bVar21 = (byte)uVar32 | bVar21;
        bVar22 = (byte)((ulong)uVar32 >> 8) | bVar22;
        bVar23 = (byte)((ulong)uVar32 >> 0x10) | bVar23;
        bVar24 = (byte)((ulong)uVar32 >> 0x18) | bVar24;
        bVar25 = (byte)((ulong)uVar32 >> 0x20) | bVar25;
        bVar26 = (byte)((ulong)uVar32 >> 0x28) | bVar26;
        bVar27 = (byte)((ulong)uVar32 >> 0x30) | bVar27;
        bVar28 = (byte)((ulong)uVar32 >> 0x38) | bVar28;
        auVar29[0] = (byte)uVar33 | auVar30[0];
        auVar29[1] = (byte)((ulong)uVar33 >> 8) | auVar30[1];
        auVar29[2] = (byte)((ulong)uVar33 >> 0x10) | auVar30[2];
        auVar29[3] = (byte)((ulong)uVar33 >> 0x18) | auVar30[3];
        auVar29[4] = (byte)((ulong)uVar33 >> 0x20) | auVar30[4];
        auVar29[5] = (byte)((ulong)uVar33 >> 0x28) | auVar30[5];
        auVar29[6] = (byte)((ulong)uVar33 >> 0x30) | auVar30[6];
        auVar29[7] = (byte)((ulong)uVar33 >> 0x38) | auVar30[7];
        auVar29[8] = (byte)uVar34 | auVar30[8];
        auVar29[9] = (byte)((ulong)uVar34 >> 8) | auVar30[9];
        auVar29[10] = (byte)((ulong)uVar34 >> 0x10) | auVar30[10];
        auVar29[11] = (byte)((ulong)uVar34 >> 0x18) | auVar30[11];
        auVar29[12] = (byte)((ulong)uVar34 >> 0x20) | auVar30[12];
        auVar29[13] = (byte)((ulong)uVar34 >> 0x28) | auVar30[13];
        auVar29[14] = (byte)((ulong)uVar34 >> 0x30) | auVar30[14];
        auVar29[15] = (byte)((ulong)uVar34 >> 0x38) | auVar30[15];
        auVar30 = auVar29;
      } while (uVar12 != 0);
      bVar13 = auVar29[0] | bVar13;
      bVar14 = auVar29[1] | bVar14;
      bVar15 = auVar29[2] | bVar15;
      bVar16 = auVar29[3] | bVar16;
      bVar17 = auVar29[4] | bVar17;
      bVar18 = auVar29[5] | bVar18;
      bVar19 = auVar29[6] | bVar19;
      bVar20 = auVar29[7] | bVar20;
      auVar30[1] = bVar14;
      auVar30[0] = bVar13;
      auVar30[2] = bVar15;
      auVar30[3] = bVar16;
      auVar30[4] = bVar17;
      auVar30[5] = bVar18;
      auVar30[6] = bVar19;
      auVar30[7] = bVar20;
      auVar30[8] = auVar29[8] | bVar21;
      auVar30[9] = auVar29[9] | bVar22;
      auVar30[10] = auVar29[10] | bVar23;
      auVar30[11] = auVar29[11] | bVar24;
      auVar30[12] = auVar29[12] | bVar25;
      auVar30[13] = auVar29[13] | bVar26;
      auVar30[14] = auVar29[14] | bVar27;
      auVar30[15] = auVar29[15] | bVar28;
      auVar3[1] = bVar14;
      auVar3[0] = bVar13;
      auVar3[2] = bVar15;
      auVar3[3] = bVar16;
      auVar3[4] = bVar17;
      auVar3[5] = bVar18;
      auVar3[6] = bVar19;
      auVar3[7] = bVar20;
      auVar3[8] = auVar29[8] | bVar21;
      auVar3[9] = auVar29[9] | bVar22;
      auVar3[10] = auVar29[10] | bVar23;
      auVar3[11] = auVar29[11] | bVar24;
      auVar3[12] = auVar29[12] | bVar25;
      auVar3[13] = auVar29[13] | bVar26;
      auVar3[14] = auVar29[14] | bVar27;
      auVar3[15] = auVar29[15] | bVar28;
      auVar30 = NEON_ext(auVar30,auVar3,8,1);
      uVar5 = CONCAT13(bVar16 | auVar30[3],
                       CONCAT12(bVar15 | auVar30[2],
                                CONCAT11(bVar14 | auVar30[1],bVar13 | auVar30[0]))) |
              CONCAT13(bVar20 | auVar30[7],
                       CONCAT12(bVar19 | auVar30[6],
                                CONCAT11(bVar18 | auVar30[5],bVar17 | auVar30[4])));
      if (uVar9 == uVar11) goto LAB_008c75f0;
    }
    lVar7 = param_2 - uVar8;
    puVar10 = param_1 + uVar8;
    do {
      lVar7 = lVar7 + -1;
      uVar5 = *puVar10 | uVar5;
      puVar10 = puVar10 + 1;
    } while (lVar7 != 0);
  }
LAB_008c75f0:
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      uVar2 = 1 << (ulong)((uint)uVar9 & 0x1f);
      if (((uVar2 & uVar5) != 0) &&
         (*(undefined4 *)(param_4 + uVar9 * 4 + 0x18) = *(undefined4 *)(puVar1 + uVar9 * 4),
         param_2 != 0)) {
        uVar12 = 0;
        do {
          if ((param_1[uVar12] & uVar2) != 0) {
            *(int *)(param_4 + uVar9 * 4 + 0x44) = (int)uVar12;
            break;
          }
          uVar12 = uVar12 + 1;
        } while (param_2 != uVar12);
      }
      bVar4 = uVar9 < 10;
      uVar9 = uVar9 + 1;
    } while (bVar4);
  }
  *(uint *)(param_4 + 0x6c) = param_2;
  *(undefined4 *)(param_4 + 0x40) = 0xf;
  *(undefined4 *)(param_4 + (ulong)param_2 * 4 + 4) = 1;
  *(uint *)param_4 = param_2 + 1;
  return;
}


