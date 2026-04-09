// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMergedRigidBodyCollisionMask
// Entry Point: 00999668
// Size: 200 bytes
// Signature: undefined __cdecl getMergedRigidBodyCollisionMask(Bt2PhysicsRBObject * param_1, btRigidBody * param_2)


/* Bt2PhysicsUtil::getMergedRigidBodyCollisionMask(Bt2PhysicsRBObject*, btRigidBody*) */

uint Bt2PhysicsUtil::getMergedRigidBodyCollisionMask
               (Bt2PhysicsRBObject *param_1,btRigidBody *param_2)

{
  ulong uVar1;
  undefined auVar2 [16];
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  undefined4 *puVar9;
  byte bVar10;
  byte bVar11;
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
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  
  if (**(char **)(param_2 + 0x108) < '\0') {
    uVar3 = *(uint *)(*(long *)(param_2 + 200) + 0x24);
    uVar4 = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      return 0;
    }
    lVar6 = *(long *)(*(char **)(param_2 + 0x108) + 0x18);
    if (uVar3 < 9) {
      lVar8 = 0;
      uVar3 = 0;
    }
    else {
      uVar1 = 8;
      if ((uVar3 & 7) != 0) {
        uVar1 = uVar4 & 7;
      }
      lVar8 = uVar4 - uVar1;
      bVar10 = 0;
      bVar11 = 0;
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
      puVar9 = (undefined4 *)(lVar6 + 0x48);
      lVar5 = lVar8;
      auVar27 = ZEXT816(0);
      do {
        uVar32 = *puVar9;
        uVar33 = puVar9[4];
        uVar34 = puVar9[8];
        uVar35 = puVar9[0xc];
        lVar5 = lVar5 + -8;
        uVar28 = puVar9[-0x10];
        uVar29 = puVar9[-0xc];
        uVar30 = puVar9[-8];
        uVar31 = puVar9[-4];
        auVar26[0] = (byte)uVar32 | auVar27[0];
        auVar26[1] = (byte)((uint)uVar32 >> 8) | auVar27[1];
        auVar26[2] = (byte)((uint)uVar32 >> 0x10) | auVar27[2];
        auVar26[3] = (byte)((uint)uVar32 >> 0x18) | auVar27[3];
        auVar26[4] = (byte)uVar33 | auVar27[4];
        auVar26[5] = (byte)((uint)uVar33 >> 8) | auVar27[5];
        auVar26[6] = (byte)((uint)uVar33 >> 0x10) | auVar27[6];
        auVar26[7] = (byte)((uint)uVar33 >> 0x18) | auVar27[7];
        auVar26[8] = (byte)uVar34 | auVar27[8];
        auVar26[9] = (byte)((uint)uVar34 >> 8) | auVar27[9];
        auVar26[10] = (byte)((uint)uVar34 >> 0x10) | auVar27[10];
        auVar26[11] = (byte)((uint)uVar34 >> 0x18) | auVar27[11];
        auVar26[12] = (byte)uVar35 | auVar27[12];
        auVar26[13] = (byte)((uint)uVar35 >> 8) | auVar27[13];
        auVar26[14] = (byte)((uint)uVar35 >> 0x10) | auVar27[14];
        auVar26[15] = (byte)((uint)uVar35 >> 0x18) | auVar27[15];
        bVar10 = (byte)uVar28 | bVar10;
        bVar11 = (byte)((uint)uVar28 >> 8) | bVar11;
        bVar12 = (byte)((uint)uVar28 >> 0x10) | bVar12;
        bVar13 = (byte)((uint)uVar28 >> 0x18) | bVar13;
        bVar14 = (byte)uVar29 | bVar14;
        bVar15 = (byte)((uint)uVar29 >> 8) | bVar15;
        bVar16 = (byte)((uint)uVar29 >> 0x10) | bVar16;
        bVar17 = (byte)((uint)uVar29 >> 0x18) | bVar17;
        bVar18 = (byte)uVar30 | bVar18;
        bVar19 = (byte)((uint)uVar30 >> 8) | bVar19;
        bVar20 = (byte)((uint)uVar30 >> 0x10) | bVar20;
        bVar21 = (byte)((uint)uVar30 >> 0x18) | bVar21;
        bVar22 = (byte)uVar31 | bVar22;
        bVar23 = (byte)((uint)uVar31 >> 8) | bVar23;
        bVar24 = (byte)((uint)uVar31 >> 0x10) | bVar24;
        bVar25 = (byte)((uint)uVar31 >> 0x18) | bVar25;
        puVar9 = puVar9 + 0x20;
        auVar27 = auVar26;
      } while (lVar5 != 0);
      bVar10 = auVar26[0] | bVar10;
      bVar11 = auVar26[1] | bVar11;
      bVar12 = auVar26[2] | bVar12;
      bVar13 = auVar26[3] | bVar13;
      bVar14 = auVar26[4] | bVar14;
      bVar15 = auVar26[5] | bVar15;
      bVar16 = auVar26[6] | bVar16;
      bVar17 = auVar26[7] | bVar17;
      auVar27[1] = bVar11;
      auVar27[0] = bVar10;
      auVar27[2] = bVar12;
      auVar27[3] = bVar13;
      auVar27[4] = bVar14;
      auVar27[5] = bVar15;
      auVar27[6] = bVar16;
      auVar27[7] = bVar17;
      auVar27[8] = auVar26[8] | bVar18;
      auVar27[9] = auVar26[9] | bVar19;
      auVar27[10] = auVar26[10] | bVar20;
      auVar27[11] = auVar26[11] | bVar21;
      auVar27[12] = auVar26[12] | bVar22;
      auVar27[13] = auVar26[13] | bVar23;
      auVar27[14] = auVar26[14] | bVar24;
      auVar27[15] = auVar26[15] | bVar25;
      auVar2[1] = bVar11;
      auVar2[0] = bVar10;
      auVar2[2] = bVar12;
      auVar2[3] = bVar13;
      auVar2[4] = bVar14;
      auVar2[5] = bVar15;
      auVar2[6] = bVar16;
      auVar2[7] = bVar17;
      auVar2[8] = auVar26[8] | bVar18;
      auVar2[9] = auVar26[9] | bVar19;
      auVar2[10] = auVar26[10] | bVar20;
      auVar2[11] = auVar26[11] | bVar21;
      auVar2[12] = auVar26[12] | bVar22;
      auVar2[13] = auVar26[13] | bVar23;
      auVar2[14] = auVar26[14] | bVar24;
      auVar2[15] = auVar26[15] | bVar25;
      auVar27 = NEON_ext(auVar27,auVar2,8,1);
      uVar3 = CONCAT13(bVar13 | auVar27[3],
                       CONCAT12(bVar12 | auVar27[2],
                                CONCAT11(bVar11 | auVar27[1],bVar10 | auVar27[0]))) |
              CONCAT13(bVar17 | auVar27[7],
                       CONCAT12(bVar16 | auVar27[6],
                                CONCAT11(bVar15 | auVar27[5],bVar14 | auVar27[4])));
    }
    lVar5 = uVar4 - lVar8;
    puVar7 = (uint *)(lVar6 + lVar8 * 0x10 + 8);
    do {
      lVar5 = lVar5 + -1;
      uVar3 = *puVar7 | uVar3;
      puVar7 = puVar7 + 4;
    } while (lVar5 != 0);
  }
  else {
    if (((byte)param_1[9] >> 3 & 1) == 0) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x58);
  }
  return uVar3;
}


