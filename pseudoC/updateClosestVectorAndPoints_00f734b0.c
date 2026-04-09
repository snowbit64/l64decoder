// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateClosestVectorAndPoints
// Entry Point: 00f734b0
// Size: 1704 bytes
// Signature: undefined updateClosestVectorAndPoints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btVoronoiSimplexSolver::updateClosestVectorAndPoints() */

void btVoronoiSimplexSolver::updateClosestVectorAndPoints(void)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  uint *in_x0;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)(in_x0 + 0x59) == '\0') {
    bVar4 = *(byte *)(in_x0 + 0x4e);
    goto LAB_00f73aac;
  }
  bVar4 = *(byte *)(in_x0 + 0x53);
  *(undefined8 *)(in_x0 + 0x54) = 0;
  *(undefined8 *)(in_x0 + 0x56) = 0;
  *(undefined *)(in_x0 + 0x58) = 0;
  *(undefined *)(in_x0 + 0x59) = 0;
  *(byte *)(in_x0 + 0x53) = bVar4 & 0xf0;
  puVar1 = (undefined8 *)(in_x0 + 0x41);
  switch(*in_x0) {
  default:
    goto switchD_00f73524_caseD_0;
  case 1:
    in_x0[0x48] = 0;
    *(undefined8 *)(in_x0 + 0x3f) = *(undefined8 *)(in_x0 + 0x17);
    *(undefined8 *)(in_x0 + 0x3d) = *(undefined8 *)(in_x0 + 0x15);
    *(undefined8 *)(in_x0 + 0x43) = *(undefined8 *)(in_x0 + 0x2b);
    *puVar1 = *(undefined8 *)(in_x0 + 0x29);
    bVar4 = true;
    *(ulong *)(in_x0 + 0x45) =
         CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x3d) >> 0x20) -
                  (float)((ulong)*puVar1 >> 0x20),
                  (float)*(undefined8 *)(in_x0 + 0x3d) - (float)*puVar1);
    *(undefined8 *)(in_x0 + 0x56) = 0;
    *(undefined8 *)(in_x0 + 0x54) = 0x3f800000;
    in_x0[0x47] = (uint)((float)in_x0[0x3f] - (float)in_x0[0x43]);
    break;
  case 2:
    fVar12 = (float)in_x0[1];
    fVar9 = (float)in_x0[7] - (float)in_x0[3];
    fVar10 = (float)in_x0[6] - (float)in_x0[2];
    fVar11 = (float)in_x0[5] - fVar12;
    fVar13 = (float)NEON_fmadd(fVar10,in_x0[2],fVar9 * (float)in_x0[3]);
    fVar12 = (float)NEON_fnmadd(fVar12,fVar11,-fVar13);
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
      bVar3 = false;
      bVar5 = true;
    }
    else {
      uVar18 = NEON_fmadd(fVar10,fVar10,fVar11 * fVar11);
      fVar9 = (float)NEON_fmadd(fVar9,fVar9,uVar18);
      if (fVar9 <= fVar12) {
        fVar12 = 1.0;
        bVar3 = true;
        bVar5 = false;
      }
      else {
        fVar12 = fVar12 / fVar9;
        bVar3 = true;
        bVar5 = true;
      }
    }
    uVar14 = *(undefined8 *)(in_x0 + 0x29);
    *(byte *)(in_x0 + 0x53) = bVar4 & 0xf0 | bVar5;
    in_x0[0x40] = 0;
    uVar16 = *(undefined8 *)(in_x0 + 0x15);
    fVar9 = (float)uVar14;
    fVar10 = (float)((ulong)uVar14 >> 0x20);
    fVar15 = (float)uVar16;
    fVar20 = (float)((ulong)uVar16 >> 0x20);
    in_x0[0x44] = 0;
    fVar11 = (float)NEON_fmadd((float)in_x0[0x1b] - (float)in_x0[0x17],fVar12,in_x0[0x17]);
    fVar9 = fVar9 + ((float)*(undefined8 *)(in_x0 + 0x2d) - fVar9) * fVar12;
    fVar10 = fVar10 + ((float)((ulong)*(undefined8 *)(in_x0 + 0x2d) >> 0x20) - fVar10) * fVar12;
    in_x0[0x48] = 0;
    fVar15 = fVar15 + ((float)*(undefined8 *)(in_x0 + 0x19) - fVar15) * fVar12;
    fVar20 = fVar20 + ((float)((ulong)*(undefined8 *)(in_x0 + 0x19) >> 0x20) - fVar20) * fVar12;
    in_x0[0x54] = (uint)(1.0 - fVar12);
    in_x0[0x55] = (uint)fVar12;
    fVar13 = (float)NEON_fmadd((float)in_x0[0x2f] - (float)in_x0[0x2b],fVar12,in_x0[0x2b]);
    in_x0[0x3f] = (uint)fVar11;
    *puVar1 = CONCAT44(fVar10,fVar9);
    *(ulong *)(in_x0 + 0x3d) = CONCAT44(fVar20,fVar15);
    in_x0[0x43] = (uint)fVar13;
    *(ulong *)(in_x0 + 0x45) = CONCAT44(fVar20 - fVar10,fVar15 - fVar9);
    in_x0[0x47] = (uint)(fVar11 - fVar13);
    if (!bVar3) {
      *in_x0 = 1;
    }
    uVar7 = (uint)bVar3;
    if (!bVar5) {
      *in_x0 = uVar7;
      uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
      uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
      uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
      uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
      uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
      *(undefined8 *)(in_x0 + 3) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
      *(undefined8 *)(in_x0 + 1) = uVar14;
      *(undefined8 *)(in_x0 + 0x17) = uVar17;
      *(undefined8 *)(in_x0 + 0x15) = uVar16;
      *(undefined8 *)(in_x0 + 0x2b) = uVar24;
      *(undefined8 *)(in_x0 + 0x29) = uVar22;
    }
    bVar5 = 0.0 <= 1.0 - fVar12;
LAB_00f73aa0:
    bVar4 = bVar5 & 0.0 <= fVar12;
    break;
  case 3:
    local_68 = 0;
    uStack_60 = 0;
    closestPtPointTriangle
              ((btVoronoiSimplexSolver *)in_x0,(btVector3 *)&local_68,(btVector3 *)(in_x0 + 1),
               (btVector3 *)(in_x0 + 5),(btVector3 *)(in_x0 + 9),
               (btSubSimplexClosestResult *)(in_x0 + 0x4f));
    fVar12 = (float)in_x0[0x54];
    uVar14 = *(undefined8 *)(in_x0 + 0x15);
    uVar24 = *(undefined8 *)(in_x0 + 0x29);
    fVar9 = (float)in_x0[0x55];
    uVar16 = *(undefined8 *)(in_x0 + 0x19);
    uVar17 = *(undefined8 *)(in_x0 + 0x2d);
    uVar18 = NEON_fmadd(in_x0[0x1b],fVar9,(float)in_x0[0x17] * fVar12);
    fVar10 = (float)in_x0[0x56];
    uVar19 = NEON_fmadd(in_x0[0x2f],fVar9,(float)in_x0[0x2b] * fVar12);
    uVar22 = *(undefined8 *)(in_x0 + 0x31);
    uVar25 = *(undefined8 *)(in_x0 + 0x1d);
    fVar15 = (float)NEON_fmadd(in_x0[0x1f],fVar10,uVar18);
    uVar7 = *in_x0;
    fVar21 = (float)uVar24 * fVar12 + (float)uVar17 * fVar9 + (float)uVar22 * fVar10;
    fVar23 = (float)((ulong)uVar24 >> 0x20) * fVar12 + (float)((ulong)uVar17 >> 0x20) * fVar9 +
             (float)((ulong)uVar22 >> 0x20) * fVar10;
    fVar11 = (float)uVar14 * fVar12 + (float)uVar16 * fVar9 + (float)uVar25 * fVar10;
    fVar13 = (float)((ulong)uVar14 >> 0x20) * fVar12 + (float)((ulong)uVar16 >> 0x20) * fVar9 +
             (float)((ulong)uVar25 >> 0x20) * fVar10;
    in_x0[0x40] = 0;
    in_x0[0x44] = 0;
    fVar20 = (float)NEON_fmadd(in_x0[0x33],fVar10,uVar19);
    in_x0[0x3f] = (uint)fVar15;
    *puVar1 = CONCAT44(fVar23,fVar21);
    *(ulong *)(in_x0 + 0x3d) = CONCAT44(fVar13,fVar11);
    in_x0[0x48] = 0;
    in_x0[0x43] = (uint)fVar20;
    *(ulong *)(in_x0 + 0x45) = CONCAT44(fVar13 - fVar23,fVar11 - fVar21);
    in_x0[0x47] = (uint)(fVar15 - fVar20);
    if ((int)uVar7 < 4) {
      if (uVar7 == 3) {
        bVar4 = *(byte *)(in_x0 + 0x53);
        uVar8 = (uint)bVar4;
        goto joined_r0x00f73890;
      }
      if (1 < (int)uVar7) {
        uVar8 = (uint)*(byte *)(in_x0 + 0x53);
        uVar7 = 2;
        if ((*(byte *)(in_x0 + 0x53) >> 1 & 1) == 0) goto LAB_00f73898;
        goto joined_r0x00f7385c;
      }
      if ((uVar7 == 1) && ((*(byte *)(in_x0 + 0x53) & 1) == 0)) goto LAB_00f738c0;
    }
    else {
      bVar4 = *(byte *)(in_x0 + 0x53);
      uVar8 = (uint)bVar4;
      if ((bVar4 >> 3 & 1) == 0) {
        uVar7 = uVar7 - 1;
        *in_x0 = uVar7;
        uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
        uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
        uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
        uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
        uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
        *(undefined8 *)(in_x0 + 0xf) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
        *(undefined8 *)(in_x0 + 0xd) = uVar14;
        *(undefined8 *)(in_x0 + 0x23) = uVar17;
        *(undefined8 *)(in_x0 + 0x21) = uVar16;
        *(undefined8 *)(in_x0 + 0x37) = uVar24;
        *(undefined8 *)(in_x0 + 0x35) = uVar22;
        if ((bVar4 >> 2 & 1) == 0) goto LAB_00f73834;
LAB_00f73894:
        if ((uVar8 >> 1 & 1) != 0) goto joined_r0x00f7385c;
LAB_00f73898:
        uVar7 = uVar7 - 1;
        *in_x0 = uVar7;
        uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
        uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
        uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
        uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
        uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
        *(undefined8 *)(in_x0 + 7) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
        *(undefined8 *)(in_x0 + 5) = uVar14;
        *(undefined8 *)(in_x0 + 0x1b) = uVar17;
        *(undefined8 *)(in_x0 + 0x19) = uVar16;
        *(undefined8 *)(in_x0 + 0x2f) = uVar24;
        *(undefined8 *)(in_x0 + 0x2d) = uVar22;
      }
      else {
joined_r0x00f73890:
        if ((bVar4 >> 2 & 1) != 0) goto LAB_00f73894;
LAB_00f73834:
        uVar7 = uVar7 - 1;
        *in_x0 = uVar7;
        uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
        uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
        uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
        uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
        uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
        *(undefined8 *)(in_x0 + 0xb) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
        *(undefined8 *)(in_x0 + 9) = uVar14;
        *(undefined8 *)(in_x0 + 0x1f) = uVar17;
        *(undefined8 *)(in_x0 + 0x1d) = uVar16;
        *(undefined8 *)(in_x0 + 0x33) = uVar24;
        *(undefined8 *)(in_x0 + 0x31) = uVar22;
        if ((uVar8 >> 1 & 1) == 0) goto LAB_00f73898;
      }
joined_r0x00f7385c:
      if ((uVar8 & 1) == 0) {
LAB_00f738c0:
        uVar7 = uVar7 - 1;
        *in_x0 = uVar7;
        uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
        uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
        uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
        uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
        uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
        *(undefined8 *)(in_x0 + 3) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
        *(undefined8 *)(in_x0 + 1) = uVar14;
        *(undefined8 *)(in_x0 + 0x17) = uVar17;
        *(undefined8 *)(in_x0 + 0x15) = uVar16;
        *(undefined8 *)(in_x0 + 0x2b) = uVar24;
        *(undefined8 *)(in_x0 + 0x29) = uVar22;
      }
    }
    bVar4 = false;
    if (((0.0 <= fVar12) && (0.0 <= fVar9)) && (0.0 <= fVar10)) {
      bVar4 = 0.0 <= (float)in_x0[0x57];
    }
    break;
  case 4:
    local_68 = 0;
    uStack_60 = 0;
    uVar6 = closestPtPointTetrahedron
                      ((btVoronoiSimplexSolver *)in_x0,(btVector3 *)&local_68,
                       (btVector3 *)(in_x0 + 1),(btVector3 *)(in_x0 + 5),(btVector3 *)(in_x0 + 9),
                       (btVector3 *)(in_x0 + 0xd),(btSubSimplexClosestResult *)(in_x0 + 0x4f));
    if ((uVar6 & 1) != 0) {
      fVar11 = (float)in_x0[0x54];
      fVar9 = (float)in_x0[0x55];
      uVar14 = *(undefined8 *)(in_x0 + 0x15);
      uVar16 = *(undefined8 *)(in_x0 + 0x19);
      uVar24 = *(undefined8 *)(in_x0 + 0x1d);
      fVar10 = (float)in_x0[0x56];
      uVar18 = NEON_fmadd(in_x0[0x1b],fVar9,(float)in_x0[0x17] * fVar11);
      uVar22 = *(undefined8 *)(in_x0 + 0x29);
      uVar25 = *(undefined8 *)(in_x0 + 0x2d);
      uVar17 = *(undefined8 *)(in_x0 + 0x21);
      fVar12 = (float)in_x0[0x57];
      uVar19 = NEON_fmadd(in_x0[0x1f],fVar10,uVar18);
      uVar18 = NEON_fmadd(in_x0[0x2f],fVar9,(float)in_x0[0x2b] * fVar11);
      uVar26 = *(undefined8 *)(in_x0 + 0x31);
      fVar13 = (float)uVar14 * fVar11 + (float)uVar16 * fVar9 + (float)uVar24 * fVar10 +
               (float)uVar17 * fVar12;
      fVar15 = (float)((ulong)uVar14 >> 0x20) * fVar11 + (float)((ulong)uVar16 >> 0x20) * fVar9 +
               (float)((ulong)uVar24 >> 0x20) * fVar10 + (float)((ulong)uVar17 >> 0x20) * fVar12;
      uVar7 = *in_x0;
      in_x0[0x40] = 0;
      uVar18 = NEON_fmadd(in_x0[0x33],fVar10,uVar18);
      uVar14 = *(undefined8 *)(in_x0 + 0x35);
      fVar20 = (float)NEON_fmadd(in_x0[0x23],fVar12,uVar19);
      *(ulong *)(in_x0 + 0x3d) = CONCAT44(fVar15,fVar13);
      fVar21 = (float)uVar22 * fVar11 + (float)uVar25 * fVar9 + (float)uVar26 * fVar10 +
               (float)uVar14 * fVar12;
      fVar23 = (float)((ulong)uVar22 >> 0x20) * fVar11 + (float)((ulong)uVar25 >> 0x20) * fVar9 +
               (float)((ulong)uVar26 >> 0x20) * fVar10 + (float)((ulong)uVar14 >> 0x20) * fVar12;
      in_x0[0x44] = 0;
      fVar11 = (float)NEON_fmadd(in_x0[0x37],fVar12,uVar18);
      in_x0[0x48] = 0;
      in_x0[0x3f] = (uint)fVar20;
      *puVar1 = CONCAT44(fVar23,fVar21);
      in_x0[0x43] = (uint)fVar11;
      *(ulong *)(in_x0 + 0x45) = CONCAT44(fVar15 - fVar23,fVar13 - fVar21);
      in_x0[0x47] = (uint)(fVar20 - fVar11);
      if ((int)uVar7 < 4) {
        if (uVar7 == 3) {
          bVar4 = *(byte *)(in_x0 + 0x53);
          uVar8 = (uint)bVar4;
          goto joined_r0x00f73950;
        }
        if (1 < (int)uVar7) {
          uVar8 = (uint)*(byte *)(in_x0 + 0x53);
          uVar7 = 2;
          if ((*(byte *)(in_x0 + 0x53) >> 1 & 1) == 0) goto LAB_00f73958;
          goto joined_r0x00f7393c;
        }
        if ((uVar7 == 1) && ((*(byte *)(in_x0 + 0x53) & 1) == 0)) goto LAB_00f73980;
      }
      else {
        bVar4 = *(byte *)(in_x0 + 0x53);
        uVar8 = (uint)bVar4;
        if ((bVar4 >> 3 & 1) == 0) {
          uVar7 = uVar7 - 1;
          *in_x0 = uVar7;
          uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
          uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
          uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
          uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
          uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
          *(undefined8 *)(in_x0 + 0xf) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
          *(undefined8 *)(in_x0 + 0xd) = uVar14;
          *(undefined8 *)(in_x0 + 0x23) = uVar17;
          *(undefined8 *)(in_x0 + 0x21) = uVar16;
          *(undefined8 *)(in_x0 + 0x37) = uVar24;
          *(undefined8 *)(in_x0 + 0x35) = uVar22;
          if ((bVar4 >> 2 & 1) == 0) goto LAB_00f73914;
LAB_00f73954:
          if ((uVar8 >> 1 & 1) != 0) goto joined_r0x00f7393c;
LAB_00f73958:
          uVar7 = uVar7 - 1;
          *in_x0 = uVar7;
          uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
          uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
          uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
          uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
          uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
          *(undefined8 *)(in_x0 + 7) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
          *(undefined8 *)(in_x0 + 5) = uVar14;
          *(undefined8 *)(in_x0 + 0x1b) = uVar17;
          *(undefined8 *)(in_x0 + 0x19) = uVar16;
          *(undefined8 *)(in_x0 + 0x2f) = uVar24;
          *(undefined8 *)(in_x0 + 0x2d) = uVar22;
        }
        else {
joined_r0x00f73950:
          if ((bVar4 >> 2 & 1) != 0) goto LAB_00f73954;
LAB_00f73914:
          uVar7 = uVar7 - 1;
          *in_x0 = uVar7;
          uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
          uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
          uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
          uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
          uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
          *(undefined8 *)(in_x0 + 0xb) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
          *(undefined8 *)(in_x0 + 9) = uVar14;
          *(undefined8 *)(in_x0 + 0x1f) = uVar17;
          *(undefined8 *)(in_x0 + 0x1d) = uVar16;
          *(undefined8 *)(in_x0 + 0x33) = uVar24;
          *(undefined8 *)(in_x0 + 0x31) = uVar22;
          if ((uVar8 >> 1 & 1) == 0) goto LAB_00f73958;
        }
joined_r0x00f7393c:
        if ((uVar8 & 1) == 0) {
LAB_00f73980:
          uVar7 = uVar7 - 1;
          *in_x0 = uVar7;
          uVar14 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 1);
          uVar17 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x17);
          uVar16 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x15);
          uVar24 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x2b);
          uVar22 = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 0x29);
          *(undefined8 *)(in_x0 + 3) = *(undefined8 *)(in_x0 + (ulong)uVar7 * 4 + 3);
          *(undefined8 *)(in_x0 + 1) = uVar14;
          *(undefined8 *)(in_x0 + 0x17) = uVar17;
          *(undefined8 *)(in_x0 + 0x15) = uVar16;
          *(undefined8 *)(in_x0 + 0x2b) = uVar24;
          *(undefined8 *)(in_x0 + 0x29) = uVar22;
        }
      }
      bVar5 = (0.0 <= (float)in_x0[0x54] && 0.0 <= fVar9) && 0.0 <= fVar10;
      goto LAB_00f73aa0;
    }
    if (*(char *)(in_x0 + 0x58) == '\0') {
      bVar4 = 1;
      *(undefined *)(in_x0 + 0x4e) = 1;
      *(undefined8 *)(in_x0 + 0x47) = 0;
      *(undefined8 *)(in_x0 + 0x45) = 0;
      goto LAB_00f73aac;
    }
    goto switchD_00f73524_caseD_0;
  }
  *(byte *)(in_x0 + 0x4e) = bVar4;
LAB_00f73aac:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar4 != 0);
switchD_00f73524_caseD_0:
  bVar4 = 0;
  *(undefined *)(in_x0 + 0x4e) = 0;
  goto LAB_00f73aac;
}


