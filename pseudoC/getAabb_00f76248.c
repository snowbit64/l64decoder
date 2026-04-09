// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f76248
// Size: 644 bytes
// Signature: undefined __thiscall getAabb(btSoftBodyCollisionShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btSoftBodyCollisionShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btSoftBodyCollisionShape::getAabb
          (btSoftBodyCollisionShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3
          )

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_b8 [28];
  long local_48;
  
  lVar1 = tpidr_el0;
  lVar4 = 0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar5 = *(long *)(this + 0x20);
  fVar10 = *(float *)(lVar5 + 0x494);
  local_b8[3] = 0.0;
  fVar11 = *(float *)(lVar5 + 0x498);
  local_b8[7] = 0.0;
  fVar16 = *(float *)param_1 * fVar10;
  fVar18 = *(float *)(param_1 + 0x10) * fVar10;
  fVar17 = *(float *)(param_1 + 4) * fVar11;
  fVar19 = *(float *)(param_1 + 0x14) * fVar11;
  fVar10 = *(float *)(param_1 + 0x20) * fVar10;
  uVar14 = *(undefined4 *)(lVar5 + 0x49c);
  fVar11 = *(float *)(param_1 + 0x24) * fVar11;
  fVar21 = fVar17 + fVar16;
  fVar23 = fVar19 + fVar18;
  fVar20 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar14,*(undefined4 *)(param_1 + 0x30));
  fVar22 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),uVar14,*(undefined4 *)(param_1 + 0x34))
  ;
  fVar24 = *(float *)(lVar5 + 0x4a4);
  fVar12 = *(float *)(lVar5 + 0x4a8);
  fVar13 = fVar11 + fVar10;
  fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar14,*(undefined4 *)(param_1 + 0x38))
  ;
  local_b8[11] = 0.0;
  fVar6 = *(float *)param_1 * fVar24;
  fVar8 = *(float *)(param_1 + 0x10) * fVar24;
  fVar7 = *(float *)(param_1 + 4) * fVar12;
  fVar9 = *(float *)(param_1 + 0x14) * fVar12;
  fVar24 = *(float *)(param_1 + 0x20) * fVar24;
  fVar17 = fVar17 + fVar6;
  fVar19 = fVar19 + fVar8;
  uVar14 = *(undefined4 *)(lVar5 + 0x4ac);
  fVar12 = *(float *)(param_1 + 0x24) * fVar12;
  fVar6 = fVar7 + fVar6;
  fVar8 = fVar9 + fVar8;
  fVar7 = fVar7 + fVar16;
  fVar9 = fVar9 + fVar18;
  fVar16 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar14,*(undefined4 *)(param_1 + 0x30));
  fVar18 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x18),uVar14,*(undefined4 *)(param_1 + 0x34))
  ;
  fVar11 = fVar11 + fVar24;
  fVar24 = fVar12 + fVar24;
  fVar12 = fVar12 + fVar10;
  fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),uVar14,*(undefined4 *)(param_1 + 0x38))
  ;
  local_b8[0] = fVar20 + fVar17;
  local_b8[1] = fVar22 + fVar19;
  local_b8[8] = fVar20 + fVar7;
  local_b8[9] = fVar22 + fVar9;
  local_b8[20] = fVar16 + fVar6;
  local_b8[21] = fVar18 + fVar8;
  local_b8[10] = fVar15 + fVar12;
  local_b8[12] = fVar16 + fVar21;
  local_b8[13] = fVar18 + fVar23;
  local_b8[18] = fVar10 + fVar11;
  local_b8[24] = fVar16 + fVar7;
  local_b8[25] = fVar18 + fVar9;
  uVar3 = (ulong)(uint)(fVar15 + fVar13);
  uVar2 = CONCAT44(fVar22 + fVar23,fVar20 + fVar21);
  local_b8[2] = fVar15 + fVar11;
  local_b8[4] = fVar20 + fVar6;
  local_b8[5] = fVar22 + fVar8;
  local_b8[6] = fVar15 + fVar24;
  local_b8[14] = fVar10 + fVar13;
  local_b8[15] = 0.0;
  local_b8[16] = fVar16 + fVar17;
  local_b8[17] = fVar18 + fVar19;
  local_b8[19] = 0.0;
  local_b8[22] = fVar10 + fVar24;
  local_b8[23] = 0.0;
  local_b8[26] = fVar10 + fVar12;
  local_b8[27] = 0.0;
  *(ulong *)(param_3 + 8) = uVar3;
  *(undefined8 *)param_3 = uVar2;
  *(ulong *)(param_2 + 8) = uVar3;
  *(undefined8 *)param_2 = uVar2;
  do {
    fVar6 = *(float *)((long)local_b8 + lVar4);
    if (fVar6 < *(float *)param_2) {
      *(float *)param_2 = fVar6;
    }
    fVar7 = *(float *)((long)local_b8 + lVar4 + 4);
    if (fVar7 < *(float *)(param_2 + 4)) {
      *(float *)(param_2 + 4) = fVar7;
    }
    fVar16 = *(float *)((long)local_b8 + lVar4 + 8);
    if (fVar16 < *(float *)(param_2 + 8)) {
      *(float *)(param_2 + 8) = fVar16;
    }
    fVar8 = *(float *)((long)local_b8 + lVar4 + 0xc);
    if (fVar8 < *(float *)(param_2 + 0xc)) {
      *(float *)(param_2 + 0xc) = fVar8;
    }
    if (*(float *)param_3 < fVar6) {
      *(float *)param_3 = fVar6;
    }
    if (*(float *)(param_3 + 4) < fVar7) {
      *(float *)(param_3 + 4) = fVar7;
    }
    if (*(float *)(param_3 + 8) < fVar16) {
      *(float *)(param_3 + 8) = fVar16;
    }
    if (*(float *)(param_3 + 0xc) < fVar8) {
      *(float *)(param_3 + 0xc) = fVar8;
    }
    lVar4 = lVar4 + 0x10;
  } while (lVar4 != 0x70);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


