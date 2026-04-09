// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRigidBodyCollisionMask
// Entry Point: 00999730
// Size: 308 bytes
// Signature: undefined __cdecl updateRigidBodyCollisionMask(Bt2PhysicsRBObject * param_1, btRigidBody * param_2, uint param_3)


/* Bt2PhysicsUtil::updateRigidBodyCollisionMask(Bt2PhysicsRBObject*, btRigidBody*, unsigned int) */

void Bt2PhysicsUtil::updateRigidBodyCollisionMask
               (Bt2PhysicsRBObject *param_1,btRigidBody *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  Bt2PhysicsRBObject BVar3;
  undefined auVar4 [16];
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  byte bVar12;
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
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  
  puVar7 = *(uint **)(param_2 + 0x108);
  uVar9 = *puVar7;
  if ((uVar9 >> 1 & 1) == 0) {
    if ((uVar9 >> 7 & 1) == 0) {
      BVar3 = param_1[9];
      goto joined_r0x00999768;
    }
LAB_009997b0:
    uVar9 = *(uint *)(*(long *)(param_2 + 200) + 0x24);
    uVar5 = (ulong)uVar9;
    if (0 < (int)uVar9) {
      if (uVar9 < 9) {
        lVar8 = 0;
        uVar9 = 0;
      }
      else {
        uVar2 = 8;
        if ((uVar9 & 7) != 0) {
          uVar2 = uVar5 & 7;
        }
        lVar8 = uVar5 - uVar2;
        bVar12 = 0;
        bVar13 = 0;
        bVar14 = 0;
        bVar15 = 0;
        bVar16 = 0;
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
        puVar11 = (undefined4 *)(*(long *)(puVar7 + 6) + 0x48);
        lVar6 = lVar8;
        auVar29 = ZEXT816(0);
        do {
          uVar34 = *puVar11;
          uVar35 = puVar11[4];
          uVar36 = puVar11[8];
          uVar37 = puVar11[0xc];
          lVar6 = lVar6 + -8;
          uVar30 = puVar11[-0x10];
          uVar31 = puVar11[-0xc];
          uVar32 = puVar11[-8];
          uVar33 = puVar11[-4];
          auVar28[0] = (byte)uVar34 | auVar29[0];
          auVar28[1] = (byte)((uint)uVar34 >> 8) | auVar29[1];
          auVar28[2] = (byte)((uint)uVar34 >> 0x10) | auVar29[2];
          auVar28[3] = (byte)((uint)uVar34 >> 0x18) | auVar29[3];
          auVar28[4] = (byte)uVar35 | auVar29[4];
          auVar28[5] = (byte)((uint)uVar35 >> 8) | auVar29[5];
          auVar28[6] = (byte)((uint)uVar35 >> 0x10) | auVar29[6];
          auVar28[7] = (byte)((uint)uVar35 >> 0x18) | auVar29[7];
          auVar28[8] = (byte)uVar36 | auVar29[8];
          auVar28[9] = (byte)((uint)uVar36 >> 8) | auVar29[9];
          auVar28[10] = (byte)((uint)uVar36 >> 0x10) | auVar29[10];
          auVar28[11] = (byte)((uint)uVar36 >> 0x18) | auVar29[11];
          auVar28[12] = (byte)uVar37 | auVar29[12];
          auVar28[13] = (byte)((uint)uVar37 >> 8) | auVar29[13];
          auVar28[14] = (byte)((uint)uVar37 >> 0x10) | auVar29[14];
          auVar28[15] = (byte)((uint)uVar37 >> 0x18) | auVar29[15];
          bVar12 = (byte)uVar30 | bVar12;
          bVar13 = (byte)((uint)uVar30 >> 8) | bVar13;
          bVar14 = (byte)((uint)uVar30 >> 0x10) | bVar14;
          bVar15 = (byte)((uint)uVar30 >> 0x18) | bVar15;
          bVar16 = (byte)uVar31 | bVar16;
          bVar17 = (byte)((uint)uVar31 >> 8) | bVar17;
          bVar18 = (byte)((uint)uVar31 >> 0x10) | bVar18;
          bVar19 = (byte)((uint)uVar31 >> 0x18) | bVar19;
          bVar20 = (byte)uVar32 | bVar20;
          bVar21 = (byte)((uint)uVar32 >> 8) | bVar21;
          bVar22 = (byte)((uint)uVar32 >> 0x10) | bVar22;
          bVar23 = (byte)((uint)uVar32 >> 0x18) | bVar23;
          bVar24 = (byte)uVar33 | bVar24;
          bVar25 = (byte)((uint)uVar33 >> 8) | bVar25;
          bVar26 = (byte)((uint)uVar33 >> 0x10) | bVar26;
          bVar27 = (byte)((uint)uVar33 >> 0x18) | bVar27;
          puVar11 = puVar11 + 0x20;
          auVar29 = auVar28;
        } while (lVar6 != 0);
        bVar12 = auVar28[0] | bVar12;
        bVar13 = auVar28[1] | bVar13;
        bVar14 = auVar28[2] | bVar14;
        bVar15 = auVar28[3] | bVar15;
        bVar16 = auVar28[4] | bVar16;
        bVar17 = auVar28[5] | bVar17;
        bVar18 = auVar28[6] | bVar18;
        bVar19 = auVar28[7] | bVar19;
        auVar29[1] = bVar13;
        auVar29[0] = bVar12;
        auVar29[2] = bVar14;
        auVar29[3] = bVar15;
        auVar29[4] = bVar16;
        auVar29[5] = bVar17;
        auVar29[6] = bVar18;
        auVar29[7] = bVar19;
        auVar29[8] = auVar28[8] | bVar20;
        auVar29[9] = auVar28[9] | bVar21;
        auVar29[10] = auVar28[10] | bVar22;
        auVar29[11] = auVar28[11] | bVar23;
        auVar29[12] = auVar28[12] | bVar24;
        auVar29[13] = auVar28[13] | bVar25;
        auVar29[14] = auVar28[14] | bVar26;
        auVar29[15] = auVar28[15] | bVar27;
        auVar4[1] = bVar13;
        auVar4[0] = bVar12;
        auVar4[2] = bVar14;
        auVar4[3] = bVar15;
        auVar4[4] = bVar16;
        auVar4[5] = bVar17;
        auVar4[6] = bVar18;
        auVar4[7] = bVar19;
        auVar4[8] = auVar28[8] | bVar20;
        auVar4[9] = auVar28[9] | bVar21;
        auVar4[10] = auVar28[10] | bVar22;
        auVar4[11] = auVar28[11] | bVar23;
        auVar4[12] = auVar28[12] | bVar24;
        auVar4[13] = auVar28[13] | bVar25;
        auVar4[14] = auVar28[14] | bVar26;
        auVar4[15] = auVar28[15] | bVar27;
        auVar29 = NEON_ext(auVar29,auVar4,8,1);
        uVar9 = CONCAT13(bVar15 | auVar29[3],
                         CONCAT12(bVar14 | auVar29[2],
                                  CONCAT11(bVar13 | auVar29[1],bVar12 | auVar29[0]))) |
                CONCAT13(bVar19 | auVar29[7],
                         CONCAT12(bVar18 | auVar29[6],
                                  CONCAT11(bVar17 | auVar29[5],bVar16 | auVar29[4])));
      }
      lVar6 = uVar5 - lVar8;
      puVar7 = (uint *)(*(long *)(puVar7 + 6) + lVar8 * 0x10 + 8);
      do {
        lVar6 = lVar6 + -1;
        uVar9 = *puVar7 | uVar9;
        puVar7 = puVar7 + 4;
      } while (lVar6 != 0);
      goto LAB_00999858;
    }
  }
  else {
    uVar1 = param_3 & (int)((uint)(byte)param_1[9] << 0x1c) >> 0x1f;
    if ((uVar9 >> 7 & 1) != 0) {
      uVar5 = (ulong)*(uint *)(*(long *)(param_2 + 200) + 0x24);
      if (0 < (int)*(uint *)(*(long *)(param_2 + 200) + 0x24)) {
        puVar10 = (uint *)(*(long *)(puVar7 + 6) + 8);
        do {
          if (*(long *)(puVar10 + -2) == *(long *)(param_1 + 0x28)) {
            *puVar10 = uVar1;
            break;
          }
          puVar10 = puVar10 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      goto LAB_009997b0;
    }
    *(uint *)(*(long *)(puVar7 + 6) + 8) = uVar1;
    BVar3 = param_1[9];
joined_r0x00999768:
    if (((byte)BVar3 >> 3 & 1) != 0) {
      uVar9 = *(uint *)(param_1 + 0x58);
      goto LAB_00999858;
    }
  }
  uVar9 = 0;
LAB_00999858:
  *(uint *)(*(long *)(param_2 + 0xc0) + 8) = uVar9;
  return;
}


