// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportVertexWithoutMarginNonVirtual
// Entry Point: 00f62320
// Size: 1164 bytes
// Signature: undefined __cdecl localGetSupportVertexWithoutMarginNonVirtual(btVector3 * param_1)


/* btConvexShape::localGetSupportVertexWithoutMarginNonVirtual(btVector3 const&) const */

void btConvexShape::localGetSupportVertexWithoutMarginNonVirtual(btVector3 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  float *pfVar3;
  float *in_x1;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 in_s2;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_60;
  undefined8 uStack_5c;
  float local_50 [4];
  float local_40 [6];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar11 = 0;
  uVar12 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    uVar20 = *(undefined8 *)(param_1 + 0x30);
    uVar12 = NEON_fcmge(*(undefined8 *)(in_x1 + 1),0,4);
    fVar13 = *(float *)(param_1 + 0x2c);
    if (*in_x1 < 0.0) {
      fVar13 = -*(float *)(param_1 + 0x2c);
    }
    uVar11 = (ulong)(uint)fVar13;
    uVar12 = NEON_bsl(uVar12,uVar20,CONCAT44(-(float)((ulong)uVar20 >> 0x20),-(float)uVar20),1);
    break;
  case 1:
    pfVar3 = (float *)(param_1 + 0x50);
    fVar13 = *in_x1;
    fVar17 = in_x1[1];
    fVar19 = in_x1[2];
    uVar10 = NEON_fmadd(*(undefined4 *)(param_1 + 0x54),fVar17,*pfVar3 * fVar13);
    uVar16 = NEON_fmadd(*(undefined4 *)(param_1 + 100),fVar17,*(float *)(param_1 + 0x60) * fVar13);
    fVar14 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x58),fVar19,uVar10);
    fVar15 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x68),fVar19,uVar16);
    uVar10 = NEON_fmadd(*(undefined4 *)(param_1 + 0x74),fVar17,*(float *)(param_1 + 0x70) * fVar13);
    fVar13 = fVar15;
    if (fVar14 >= fVar15) {
      fVar13 = fVar14;
    }
    fVar17 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x78),fVar19,uVar10);
    uVar5 = 2;
    if (fVar17 <= fVar13) {
      uVar5 = (ulong)(fVar14 < fVar15);
    }
    uVar11 = (ulong)(uint)pfVar3[uVar5 * 4];
    uVar12 = *(undefined8 *)(pfVar3 + uVar5 * 4 + 1);
    break;
  default:
    uVar10 = 0;
    uVar11 = (**(code **)(*(long *)param_1 + 0x88))();
    uVar12 = CONCAT44(in_s2,uVar10);
    break;
  case 4:
    lVar4 = *(long *)(param_1 + 0x88);
    fVar13 = *(float *)(param_1 + 0x1c);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x7c) < 1) goto LAB_00f625c0;
    lVar6 = 0;
    puVar9 = (undefined8 *)(lVar4 + 4);
    fVar14 = -3.402823e+38;
    iVar7 = -1;
    do {
      uVar20 = *puVar9;
      puVar1 = (undefined4 *)((long)puVar9 + -4);
      puVar9 = puVar9 + 2;
      fVar15 = (float)NEON_fmadd(fVar13 * *in_x1,*puVar1,
                                 (float)uVar12 * (float)*(undefined8 *)(in_x1 + 1) * (float)uVar20);
      fVar15 = fVar15 + (float)((ulong)uVar12 >> 0x20) *
                        (float)((ulong)*(undefined8 *)(in_x1 + 1) >> 0x20) *
                        (float)((ulong)uVar20 >> 0x20);
      iVar8 = (int)lVar6;
      if (fVar15 <= fVar14) {
        iVar8 = iVar7;
      }
      lVar6 = lVar6 + 1;
      fVar14 = fVar15;
      iVar7 = iVar8;
    } while (*(int *)(param_1 + 0x7c) != lVar6);
LAB_00f625b8:
    lVar6 = (long)iVar8;
    goto LAB_00f625c4;
  case 5:
    lVar4 = *(long *)(param_1 + 0x78);
    fVar13 = *(float *)(param_1 + 0x1c);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x80)) {
      lVar6 = 0;
      puVar9 = (undefined8 *)(lVar4 + 4);
      fVar14 = -3.402823e+38;
      iVar7 = -1;
      do {
        uVar20 = *puVar9;
        puVar1 = (undefined4 *)((long)puVar9 + -4);
        puVar9 = puVar9 + 2;
        fVar15 = (float)NEON_fmadd(fVar13 * *in_x1,*puVar1,
                                   (float)uVar12 * (float)*(undefined8 *)(in_x1 + 1) * (float)uVar20
                                  );
        fVar15 = fVar15 + (float)((ulong)uVar12 >> 0x20) *
                          (float)((ulong)*(undefined8 *)(in_x1 + 1) >> 0x20) *
                          (float)((ulong)uVar20 >> 0x20);
        iVar8 = (int)lVar6;
        if (fVar15 <= fVar14) {
          iVar8 = iVar7;
        }
        lVar6 = lVar6 + 1;
        fVar14 = fVar15;
        iVar7 = iVar8;
      } while (*(int *)(param_1 + 0x80) != lVar6);
      goto LAB_00f625b8;
    }
LAB_00f625c0:
    lVar6 = -1;
LAB_00f625c4:
    pfVar3 = (float *)(lVar4 + lVar6 * 0x10);
    uVar20 = *(undefined8 *)(pfVar3 + 1);
    uVar11 = (ulong)(uint)(*pfVar3 * fVar13);
    uVar12 = CONCAT44((float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar12 >> 0x20),
                      (float)uVar20 * (float)uVar12);
    break;
  case 8:
    break;
  case 10:
    lVar4 = (long)*(int *)(param_1 + 0x44);
    fVar13 = *in_x1;
    fVar15 = (float)*(undefined8 *)(in_x1 + 1);
    fVar17 = (float)((ulong)*(undefined8 *)(in_x1 + 1) >> 0x20);
    fVar19 = (float)NEON_fmadd(fVar13,fVar13,fVar15 * fVar15);
    fVar19 = fVar19 + fVar17 * fVar17;
    fVar18 = *(float *)(param_1 + lVar4 * 4 + 0x2c);
    fVar14 = *(float *)(param_1 + (long)((*(int *)(param_1 + 0x44) + 2) % 3) * 4 + 0x2c);
    if (0.0001 <= fVar19) {
      fVar19 = 1.0 / SQRT(fVar19);
      fVar13 = fVar19 * fVar13;
      fVar15 = fVar15 * fVar19;
      fVar17 = fVar17 * fVar19;
    }
    else {
      fVar15 = 0.0;
      fVar17 = 0.0;
      fVar13 = 1.0;
    }
    fVar21 = *(float *)(param_1 + 0x3c);
    local_40[0] = 0.0;
    local_40[1] = 0.0;
    local_40[2] = 0.0;
    local_40[lVar4] = fVar18;
    fVar23 = local_40[2];
    fVar22 = local_40[1];
    fVar19 = local_40[0];
    local_40[0] = 0.0;
    local_40[1] = 0.0;
    local_40[2] = 0.0;
    local_40[3] = 0.0;
    local_40[lVar4] = -fVar18;
    fVar24 = fVar15 * fVar14 + fVar22 + -fVar15 * fVar21;
    fVar25 = fVar17 * fVar14 + fVar23 + -fVar17 * fVar21;
    fVar19 = fVar13 * fVar14 + fVar19 + fVar21 * -fVar13;
    fVar22 = fVar15 * fVar14 + -fVar15 * fVar21 + local_40[1];
    fVar23 = fVar17 * fVar14 + -fVar17 * fVar21 + local_40[2];
    fVar14 = fVar13 * fVar14 + fVar21 * -fVar13 + local_40[0];
    fVar18 = (float)NEON_fmadd(fVar19,fVar13,fVar24 * fVar15);
    fVar15 = (float)NEON_fmadd(fVar14,fVar13,fVar22 * fVar15);
    fVar18 = fVar18 + fVar25 * fVar17;
    fVar15 = fVar15 + fVar23 * fVar17;
    fVar13 = fVar18;
    if (fVar18 <= -1e+18) {
      fVar19 = 0.0;
      fVar13 = -1e+18;
    }
    uVar12 = NEON_fcmgt((ulong)(uint)fVar18,0xdd5e0b6b,4);
    if (fVar15 <= fVar13) {
      fVar14 = fVar19;
    }
    uVar11 = (ulong)(uint)fVar14;
    uVar20 = NEON_cmlt(CONCAT44((uint)(fVar13 < fVar15) << 0x1f,(uint)(fVar13 < fVar15) << 0x1f),0,4
                      );
    uVar12 = NEON_bsl(uVar20,CONCAT44(fVar23,fVar22),
                      CONCAT44(fVar25,fVar24) & CONCAT44((int)uVar12,(int)uVar12),1);
    break;
  case 0xd:
    local_50[3] = 0.0;
    iVar7 = *(int *)(param_1 + 0x44);
    fVar13 = in_x1[1];
    local_40[2] = (float)*(undefined8 *)(param_1 + 0x34);
    local_40[3] = (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
    local_40[0] = (float)*(undefined8 *)(param_1 + 0x2c);
    local_40[1] = (float)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
    local_50[0] = *in_x1;
    local_50[1] = fVar13;
    local_50[2] = in_x1[2];
    if (iVar7 == 2) {
      uVar5 = 0;
      uVar11 = 2;
      lVar4 = 1;
    }
    else {
      lVar4 = 2;
      uVar11 = (ulong)(iVar7 == 1);
      uVar5 = (ulong)(iVar7 != 1);
      fVar13 = in_x1[2];
    }
    fVar17 = *(float *)((ulong)local_50 | uVar5 << 2);
    fVar19 = *(float *)((ulong)local_40 | uVar5 << 2);
    fVar14 = (float)NEON_fmadd(fVar13,fVar13,fVar17 * fVar17);
    fVar15 = local_40[iVar7];
    if (SQRT(fVar14) == 0.0) {
      fVar13 = local_50[uVar11];
      *(float *)((ulong)&local_60 | uVar5 << 2) = fVar19;
      fVar14 = -fVar15;
      if (0.0 <= fVar13) {
        fVar14 = fVar15;
      }
      fVar13 = 0.0;
      (&local_60)[uVar11] = fVar14;
    }
    else {
      fVar19 = fVar19 / SQRT(fVar14);
      fVar14 = -fVar15;
      if (0.0 <= local_50[uVar11]) {
        fVar14 = fVar15;
      }
      (&local_60)[uVar11] = fVar14;
      fVar13 = fVar19 * fVar13;
      *(float *)((ulong)&local_60 | uVar5 << 2) = fVar19 * fVar17;
    }
    (&local_60)[lVar4] = fVar13;
    uVar11 = (ulong)(uint)local_60;
    uVar12 = uStack_5c;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar11,uVar12);
  }
  return;
}


