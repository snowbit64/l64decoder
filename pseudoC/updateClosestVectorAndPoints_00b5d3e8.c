// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClosestVectorAndPoints
// Entry Point: 00b5d3e8
// Size: 1988 bytes
// Signature: undefined updateClosestVectorAndPoints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SimplexSolver::updateClosestVectorAndPoints() */

void SimplexSolver::updateClosestVectorAndPoints(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  bool bVar7;
  bool bVar8;
  uint *in_x0;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined auVar23 [16];
  bool local_8c [4];
  bool local_88 [4];
  bool local_84 [4];
  float local_80;
  bool local_7c [4];
  bool local_78 [4];
  float local_74;
  float local_70;
  float local_6c;
  Vector3 aVStack_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)((long)in_x0 + 0xe9) == '\0') {
    bVar10 = *(byte *)(in_x0 + 0x3a);
    goto LAB_00b5db68;
  }
  *(undefined *)((long)in_x0 + 0xe9) = 0;
  switch(*in_x0) {
  default:
switchD_00b5d43c_caseD_0:
    bVar10 = 0;
    *(undefined *)(in_x0 + 0x3a) = 0;
    goto LAB_00b5db68;
  case 1:
    *(undefined8 *)(in_x0 + 0x2e) = *(undefined8 *)(in_x0 + 0x10);
    *(undefined8 *)(in_x0 + 0x31) = *(undefined8 *)(in_x0 + 0x1f);
    in_x0[0x30] = in_x0[0x12];
    in_x0[0x33] = in_x0[0x21];
    bVar10 = 1;
    *(undefined *)(in_x0 + 0x3a) = 1;
    *(ulong *)(in_x0 + 0x34) =
         CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x2e) >> 0x20) -
                  (float)((ulong)*(undefined8 *)(in_x0 + 0x31) >> 0x20),
                  (float)*(undefined8 *)(in_x0 + 0x2e) - (float)*(undefined8 *)(in_x0 + 0x31));
    in_x0[0x36] = (uint)((float)in_x0[0x30] - (float)in_x0[0x33]);
    goto LAB_00b5db68;
  case 2:
    fVar16 = 0.0;
    fVar18 = (float)in_x0[1];
    fVar19 = (float)in_x0[5] - (float)in_x0[2];
    fVar20 = (float)in_x0[4] - fVar18;
    fVar21 = (float)in_x0[6] - (float)in_x0[3];
    uVar14 = NEON_fmadd(fVar20,0.0 - fVar18,(0.0 - (float)in_x0[2]) * fVar19);
    fVar18 = (float)NEON_fmadd(fVar21,0.0 - (float)in_x0[3],uVar14);
    if (fVar18 <= 0.0) {
LAB_00b5d7d4:
      bVar8 = true;
    }
    else {
      uVar14 = NEON_fmadd(fVar20,fVar20,fVar19 * fVar19);
      fVar16 = (float)NEON_fmadd(fVar21,fVar21,uVar14);
      if (fVar18 < fVar16) {
        fVar16 = fVar18 / fVar16;
        goto LAB_00b5d7d4;
      }
      bVar8 = false;
      fVar16 = 1.0;
    }
    uVar12 = *(undefined8 *)(in_x0 + 0x1f);
    uVar13 = *(undefined8 *)(in_x0 + 0x10);
    fVar19 = (float)uVar12;
    fVar20 = (float)((ulong)uVar12 >> 0x20);
    fVar21 = (float)uVar13;
    fVar15 = (float)((ulong)uVar13 >> 0x20);
    fVar17 = (float)in_x0[0x12] + fVar16 * ((float)in_x0[0x15] - (float)in_x0[0x12]);
    fVar19 = fVar19 + ((float)*(undefined8 *)(in_x0 + 0x22) - fVar19) * fVar16;
    fVar20 = fVar20 + ((float)((ulong)*(undefined8 *)(in_x0 + 0x22) >> 0x20) - fVar20) * fVar16;
    fVar21 = fVar21 + ((float)*(undefined8 *)(in_x0 + 0x13) - fVar21) * fVar16;
    fVar15 = fVar15 + ((float)((ulong)*(undefined8 *)(in_x0 + 0x13) >> 0x20) - fVar15) * fVar16;
    fVar22 = (float)in_x0[0x21] + fVar16 * ((float)in_x0[0x24] - (float)in_x0[0x21]);
    in_x0[0x30] = (uint)fVar17;
    *(ulong *)(in_x0 + 0x31) = CONCAT44(fVar20,fVar19);
    *(ulong *)(in_x0 + 0x2e) = CONCAT44(fVar15,fVar21);
    in_x0[0x33] = (uint)fVar22;
    *(ulong *)(in_x0 + 0x34) = CONCAT44(fVar15 - fVar20,fVar21 - fVar19);
    in_x0[0x36] = (uint)(fVar17 - fVar22);
    if (0.0 >= fVar18) {
      *in_x0 = 1;
    }
    uVar11 = (uint)(0.0 < fVar18);
    if (!bVar8) {
      *in_x0 = uVar11;
      uVar1 = in_x0[(ulong)uVar11 * 3 + 3];
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
      *(undefined8 *)(in_x0 + 1) = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
      uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
      in_x0[3] = uVar1;
      uVar1 = in_x0[(ulong)uVar11 * 3 + 0x12];
      uVar11 = in_x0[(ulong)uVar11 * 3 + 0x21];
      *(undefined8 *)(in_x0 + 0x1f) = uVar12;
      *(undefined8 *)(in_x0 + 0x10) = uVar13;
      in_x0[0x12] = uVar1;
      in_x0[0x21] = uVar11;
    }
    bVar8 = 0.0 <= fVar16;
    bVar7 = fVar16 <= 1.0;
    break;
  case 3:
    local_58 = 0;
    local_50 = 0;
    closestPtPointTriangle
              ((SimplexSolver *)in_x0,(Vector3 *)&local_58,(Vector3 *)(in_x0 + 1),
               (Vector3 *)(in_x0 + 4),(Vector3 *)(in_x0 + 7),(bool *)&local_80,local_78,local_7c,
               &local_6c,&local_70,&local_74,aVStack_68);
    *(undefined8 *)(in_x0 + 0x2e) = *(undefined8 *)(in_x0 + 0x16);
    in_x0[0x30] = in_x0[0x18];
    *(undefined8 *)(in_x0 + 0x31) = *(undefined8 *)(in_x0 + 0x25);
    in_x0[0x33] = in_x0[0x27];
    fVar21 = (float)in_x0[0x13] * local_70 +
             (float)in_x0[0x10] * local_6c + local_74 * (float)in_x0[0x2e];
    uVar11 = *in_x0;
    fVar16 = (float)*(undefined8 *)(in_x0 + 0x14) * local_70 +
             (float)*(undefined8 *)(in_x0 + 0x11) * local_6c +
             (float)*(undefined8 *)(in_x0 + 0x2f) * local_74;
    fVar18 = (float)((ulong)*(undefined8 *)(in_x0 + 0x14) >> 0x20) * local_70 +
             (float)((ulong)*(undefined8 *)(in_x0 + 0x11) >> 0x20) * local_6c +
             (float)((ulong)*(undefined8 *)(in_x0 + 0x2f) >> 0x20) * local_74;
    fVar19 = (float)*(undefined8 *)(in_x0 + 0x22) * local_70 +
             (float)*(undefined8 *)(in_x0 + 0x1f) * local_6c +
             (float)*(undefined8 *)(in_x0 + 0x31) * local_74;
    fVar20 = (float)((ulong)*(undefined8 *)(in_x0 + 0x22) >> 0x20) * local_70 +
             (float)((ulong)*(undefined8 *)(in_x0 + 0x1f) >> 0x20) * local_6c +
             (float)((ulong)*(undefined8 *)(in_x0 + 0x31) >> 0x20) * local_74;
    in_x0[0x2e] = (uint)fVar21;
    *(ulong *)(in_x0 + 0x31) = CONCAT44(fVar20,fVar19);
    *(ulong *)(in_x0 + 0x2f) = CONCAT44(fVar18,fVar16);
    auVar4._4_4_ = fVar18;
    auVar4._0_4_ = fVar16;
    auVar4._8_4_ = fVar19;
    auVar4._12_4_ = fVar20;
    auVar5._4_4_ = fVar18;
    auVar5._0_4_ = fVar16;
    auVar5._8_4_ = fVar19;
    auVar5._12_4_ = fVar20;
    auVar23 = NEON_ext(auVar4,auVar5,8,1);
    fVar19 = local_70 * (float)in_x0[0x24] +
             local_6c * (float)in_x0[0x21] + local_74 * (float)in_x0[0x33];
    in_x0[0x33] = (uint)fVar19;
    *(ulong *)(in_x0 + 0x34) = CONCAT44(fVar16 - auVar23._4_4_,fVar21 - auVar23._0_4_);
    in_x0[0x36] = (uint)(fVar18 - fVar19);
    if (3 < uVar11) {
      uVar11 = uVar11 - 1;
      *in_x0 = uVar11;
      uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
      uVar1 = in_x0[(ulong)uVar11 * 3 + 0x12];
      in_x0[0xc] = in_x0[(ulong)uVar11 * 3 + 3];
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
      *(undefined8 *)(in_x0 + 10) = uVar13;
      uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
      uVar2 = in_x0[(ulong)uVar11 * 3 + 0x21];
      in_x0[0x1b] = uVar1;
      *(undefined8 *)(in_x0 + 0x19) = uVar12;
      *(undefined8 *)(in_x0 + 0x28) = uVar13;
      in_x0[0x2a] = uVar2;
    }
    if ((local_7c[0] == false) && (2 < uVar11)) {
      uVar11 = uVar11 - 1;
      *in_x0 = uVar11;
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
      uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
      in_x0[9] = in_x0[(ulong)uVar11 * 3 + 3];
      uVar1 = in_x0[(ulong)uVar11 * 3 + 0x12];
      *(undefined8 *)(in_x0 + 7) = uVar12;
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
      uVar2 = in_x0[(ulong)uVar11 * 3 + 0x21];
      *(undefined8 *)(in_x0 + 0x25) = uVar13;
      in_x0[0x18] = uVar1;
      *(undefined8 *)(in_x0 + 0x16) = uVar12;
      in_x0[0x27] = uVar2;
    }
    if ((local_78[0] == false) && (1 < uVar11)) {
      uVar11 = uVar11 - 1;
      *in_x0 = uVar11;
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
      uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
      in_x0[6] = in_x0[(ulong)uVar11 * 3 + 3];
      uVar1 = in_x0[(ulong)uVar11 * 3 + 0x12];
      *(undefined8 *)(in_x0 + 4) = uVar12;
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
      uVar2 = in_x0[(ulong)uVar11 * 3 + 0x21];
      *(undefined8 *)(in_x0 + 0x22) = uVar13;
      in_x0[0x15] = uVar1;
      *(undefined8 *)(in_x0 + 0x13) = uVar12;
      in_x0[0x24] = uVar2;
    }
    if ((local_80._0_1_ == '\0') && (uVar11 != 0)) {
      uVar11 = uVar11 - 1;
      *in_x0 = uVar11;
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
      uVar1 = *(uint *)((long)(in_x0 + (ulong)uVar11 * 3 + 0x10) + 8);
      uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
      in_x0[3] = in_x0[(ulong)uVar11 * 3 + 3];
      *(undefined8 *)(in_x0 + 1) = uVar12;
      uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
      uVar11 = *(uint *)((long)(in_x0 + (ulong)uVar11 * 3 + 0x1f) + 8);
      in_x0[0x12] = uVar1;
      *(undefined8 *)(in_x0 + 0x10) = uVar13;
      *(undefined8 *)(in_x0 + 0x1f) = uVar12;
      in_x0[0x21] = uVar11;
    }
    bVar8 = 0.0 <= local_6c;
    local_80 = local_74;
    local_74 = local_70;
LAB_00b5da54:
    bVar7 = 0.0 <= local_80;
    bVar8 = (bool)(bVar8 & 0.0 <= local_74);
    break;
  case 4:
    local_58 = 0;
    local_50 = 0;
    uVar9 = closestPtPointTetrahedron
                      ((SimplexSolver *)in_x0,(Vector3 *)&local_58,(Vector3 *)(in_x0 + 1),
                       (Vector3 *)(in_x0 + 4),(Vector3 *)(in_x0 + 7),(Vector3 *)(in_x0 + 10),
                       local_78,local_7c,local_84,local_88,&local_6c,&local_70,&local_74,&local_80,
                       aVStack_68,local_8c);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(in_x0 + 0x2e) = *(undefined8 *)(in_x0 + 0x19);
      in_x0[0x30] = in_x0[0x1b];
      *(undefined8 *)(in_x0 + 0x31) = *(undefined8 *)(in_x0 + 0x28);
      auVar23 = *(undefined (*) [16])(in_x0 + 0x2f);
      in_x0[0x33] = in_x0[0x2a];
      uVar11 = *in_x0;
      fVar21 = (float)in_x0[0x16] * local_74 +
               (float)in_x0[0x13] * local_70 +
               (float)in_x0[0x10] * local_6c + local_80 * (float)in_x0[0x2e];
      fVar16 = (float)*(undefined8 *)(in_x0 + 0x17) * local_74 +
               (float)*(undefined8 *)(in_x0 + 0x14) * local_70 +
               (float)*(undefined8 *)(in_x0 + 0x11) * local_6c + auVar23._0_4_ * local_80;
      fVar18 = (float)((ulong)*(undefined8 *)(in_x0 + 0x17) >> 0x20) * local_74 +
               (float)((ulong)*(undefined8 *)(in_x0 + 0x14) >> 0x20) * local_70 +
               (float)((ulong)*(undefined8 *)(in_x0 + 0x11) >> 0x20) * local_6c +
               auVar23._4_4_ * local_80;
      fVar19 = (float)*(undefined8 *)(in_x0 + 0x25) * local_74 +
               (float)*(undefined8 *)(in_x0 + 0x22) * local_70 +
               (float)*(undefined8 *)(in_x0 + 0x1f) * local_6c + auVar23._8_4_ * local_80;
      fVar20 = (float)((ulong)*(undefined8 *)(in_x0 + 0x25) >> 0x20) * local_74 +
               (float)((ulong)*(undefined8 *)(in_x0 + 0x22) >> 0x20) * local_70 +
               (float)((ulong)*(undefined8 *)(in_x0 + 0x1f) >> 0x20) * local_6c +
               auVar23._12_4_ * local_80;
      in_x0[0x2e] = (uint)fVar21;
      *(ulong *)(in_x0 + 0x31) = CONCAT44(fVar20,fVar19);
      *(ulong *)(in_x0 + 0x2f) = CONCAT44(fVar18,fVar16);
      auVar23._4_4_ = fVar18;
      auVar23._0_4_ = fVar16;
      auVar23._8_4_ = fVar19;
      auVar23._12_4_ = fVar20;
      auVar6._4_4_ = fVar18;
      auVar6._0_4_ = fVar16;
      auVar6._8_4_ = fVar19;
      auVar6._12_4_ = fVar20;
      auVar23 = NEON_ext(auVar23,auVar6,8,1);
      fVar19 = local_74 * (float)in_x0[0x27] +
               local_70 * (float)in_x0[0x24] +
               local_6c * (float)in_x0[0x21] + local_80 * (float)in_x0[0x33];
      in_x0[0x33] = (uint)fVar19;
      *(ulong *)(in_x0 + 0x34) = CONCAT44(fVar16 - auVar23._4_4_,fVar21 - auVar23._0_4_);
      in_x0[0x36] = (uint)(fVar18 - fVar19);
      if ((local_88[0] == false) && (3 < uVar11)) {
        uVar11 = uVar11 - 1;
        *in_x0 = uVar11;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
        uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
        in_x0[0xc] = in_x0[(ulong)uVar11 * 3 + 3];
        uVar1 = in_x0[(ulong)uVar11 * 3 + 0x12];
        *(undefined8 *)(in_x0 + 10) = uVar12;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
        uVar2 = in_x0[(ulong)uVar11 * 3 + 0x21];
        *(undefined8 *)(in_x0 + 0x28) = uVar13;
        in_x0[0x1b] = uVar1;
        *(undefined8 *)(in_x0 + 0x19) = uVar12;
        in_x0[0x2a] = uVar2;
      }
      if ((local_84[0] == false) && (2 < uVar11)) {
        uVar11 = uVar11 - 1;
        *in_x0 = uVar11;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
        uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
        in_x0[9] = in_x0[(ulong)uVar11 * 3 + 3];
        uVar1 = in_x0[(ulong)uVar11 * 3 + 0x12];
        *(undefined8 *)(in_x0 + 7) = uVar12;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
        uVar2 = in_x0[(ulong)uVar11 * 3 + 0x21];
        *(undefined8 *)(in_x0 + 0x25) = uVar13;
        in_x0[0x18] = uVar1;
        *(undefined8 *)(in_x0 + 0x16) = uVar12;
        in_x0[0x27] = uVar2;
      }
      if ((local_7c[0] == false) && (1 < uVar11)) {
        uVar11 = uVar11 - 1;
        *in_x0 = uVar11;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
        uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
        in_x0[6] = in_x0[(ulong)uVar11 * 3 + 3];
        uVar1 = in_x0[(ulong)uVar11 * 3 + 0x12];
        *(undefined8 *)(in_x0 + 4) = uVar12;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
        uVar2 = in_x0[(ulong)uVar11 * 3 + 0x21];
        *(undefined8 *)(in_x0 + 0x22) = uVar13;
        in_x0[0x15] = uVar1;
        *(undefined8 *)(in_x0 + 0x13) = uVar12;
        in_x0[0x24] = uVar2;
      }
      if ((local_78[0] == false) && (uVar11 != 0)) {
        uVar11 = uVar11 - 1;
        *in_x0 = uVar11;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 1);
        uVar1 = *(uint *)((long)(in_x0 + (ulong)uVar11 * 3 + 0x10) + 8);
        uVar13 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x10);
        in_x0[3] = in_x0[(ulong)uVar11 * 3 + 3];
        *(undefined8 *)(in_x0 + 1) = uVar12;
        uVar12 = *(undefined8 *)(in_x0 + (ulong)uVar11 * 3 + 0x1f);
        uVar11 = *(uint *)((long)(in_x0 + (ulong)uVar11 * 3 + 0x1f) + 8);
        in_x0[0x12] = uVar1;
        *(undefined8 *)(in_x0 + 0x10) = uVar13;
        *(undefined8 *)(in_x0 + 0x1f) = uVar12;
        in_x0[0x21] = uVar11;
      }
      bVar8 = 0.0 <= local_6c && 0.0 <= local_70;
      goto LAB_00b5da54;
    }
    if (local_8c[0] != false) goto switchD_00b5d43c_caseD_0;
    bVar10 = 1;
    *(undefined8 *)(in_x0 + 0x34) = 0;
    in_x0[0x36] = 0;
    goto LAB_00b5db64;
  }
  bVar10 = bVar8 & bVar7;
LAB_00b5db64:
  *(byte *)(in_x0 + 0x3a) = bVar10;
LAB_00b5db68:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar10 != 0);
}


