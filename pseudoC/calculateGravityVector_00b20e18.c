// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateGravityVector
// Entry Point: 00b20e18
// Size: 1992 bytes
// Signature: undefined __thiscall calculateGravityVector(AndroidInputDevice * this, bool param_1, bool param_2)


/* AndroidInputDevice::calculateGravityVector(bool, bool) */

void __thiscall
AndroidInputDevice::calculateGravityVector(AndroidInputDevice *this,bool param_1,bool param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (param_1) {
    fVar13 = *(float *)(this + 0x1548);
    iVar6 = finite((double)fVar13);
    if (iVar6 != 0) {
      fVar14 = *(float *)(this + 0x154c);
      iVar6 = finite((double)fVar14);
      if (iVar6 != 0) {
        fVar15 = *(float *)(this + 0x1550);
        iVar6 = finite((double)fVar15);
        if (iVar6 != 0) {
          bVar5 = false;
          uVar8 = NEON_fmadd(fVar13,fVar13,fVar14 * fVar14);
          fVar9 = (float)NEON_fmadd(fVar15,fVar15,uVar8);
          if ((fVar9 <= 0.0001) || (1600.0 <= fVar9)) goto LAB_00b20f30;
          fVar10 = 1.0;
          if (1e-06 < fVar9) {
            fVar10 = 1.0 / SQRT(fVar9);
          }
          fVar13 = fVar13 * fVar10;
          fVar14 = fVar14 * fVar10;
          fVar15 = fVar15 * fVar10;
          *(float *)(this + 0x1548) = fVar13;
          *(float *)(this + 0x154c) = fVar14;
          *(float *)(this + 0x1550) = fVar15;
          if (this[0x1544] == (AndroidInputDevice)0x0) {
            *(undefined4 *)(this + 0x1510) = 0;
            *(undefined4 *)(this + 0x1520) = 0;
            uVar8 = NEON_fmadd(fVar13,fVar13,fVar14 * fVar14);
            *(undefined8 *)(this + 0x1538) = 0;
            *(undefined8 *)(this + 0x1530) = 0;
            fVar23 = 1.0;
            fVar10 = (float)NEON_fmadd(fVar15,fVar15,uVar8);
            fVar18 = 0.0;
            fVar9 = fVar23;
            if (ABS(fVar14) <= 0.9) {
              fVar9 = 0.0;
              fVar18 = 1.0;
            }
            fVar19 = 1.0;
            *(undefined4 *)(this + 0x1540) = 0x3f800000;
            if (1e-06 < fVar10) {
              fVar19 = 1.0 / SQRT(fVar10);
            }
            fVar10 = fVar15 * fVar19;
            fVar14 = fVar14 * fVar19;
            fVar13 = fVar13 * fVar19;
            fVar25 = (float)NEON_fmadd(fVar13,0,fVar10 * -fVar9);
            fVar19 = (float)NEON_fmadd(fVar18,fVar10,fVar14 * -0.0);
            fVar9 = (float)NEON_fmadd(fVar9,fVar14,fVar13 * -fVar18);
            uVar8 = NEON_fmadd(fVar19,fVar19,fVar25 * fVar25);
            fVar18 = (float)NEON_fmadd(fVar9,fVar9,uVar8);
            if (1e-06 < fVar18) {
              fVar23 = 1.0 / SQRT(fVar18);
            }
            fVar25 = fVar25 * fVar23;
            fVar9 = fVar9 * fVar23;
            fVar19 = fVar19 * fVar23;
            *(float *)(this + 0x1524) = fVar13;
            *(float *)(this + 0x1528) = fVar14;
            *(float *)(this + 0x1508) = fVar25;
            *(float *)(this + 0x1504) = fVar19;
            uVar11 = NEON_fmadd(fVar14,fVar9,fVar25 * -fVar10);
            *(float *)(this + 0x150c) = fVar9;
            uVar22 = NEON_fmadd(fVar10,fVar19,fVar9 * -fVar13);
            *(float *)(this + 0x152c) = fVar10;
            uVar8 = NEON_fmadd(fVar13,fVar25,fVar19 * -fVar14);
            *(undefined4 *)(this + 0x1514) = uVar11;
            *(undefined4 *)(this + 0x1518) = uVar22;
            *(undefined4 *)(this + 0x151c) = uVar8;
            lVar7 = 0;
            while (iVar6 = finite((double)fVar19), iVar6 != 0) {
              if (lVar7 == 0x3c) {
                this[0x1544] = (AndroidInputDevice)0x1;
                if (*(long *)(this + 0x14f0) != 0) goto LAB_00b20f24;
                goto LAB_00b21518;
              }
              fVar19 = *(float *)(this + lVar7 + 0x1508);
              lVar7 = lVar7 + 4;
            }
            bVar5 = false;
            *(undefined8 *)(this + 0x150c) = 0;
            *(undefined8 *)(this + 0x1504) = 0x3f800000;
            *(undefined8 *)(this + 0x151c) = 0;
            *(undefined8 *)(this + 0x1514) = 0x3f80000000000000;
            *(undefined8 *)(this + 0x152c) = 0x3f800000;
            *(undefined8 *)(this + 0x1524) = 0;
            *(undefined8 *)(this + 0x153c) = 0x3f80000000000000;
            *(undefined8 *)(this + 0x1534) = 0;
            goto LAB_00b20f30;
          }
          if (*(long *)(this + 0x14f0) == 0) {
LAB_00b21518:
            lVar7 = (long)*(int *)(this + 0x15a0) * 4;
            fVar13 = *(float *)(this + (long)(char)(&DAT_004c48f3)[lVar7] * 4 + 0x1548) *
                     (float)(int)(char)(&DAT_004c48f1)[lVar7];
            fVar14 = *(float *)(this + (long)(char)(&DAT_004c48f2)[lVar7] * 4 + 0x1548) *
                     (float)(int)(char)(&DAT_004c48f0)[lVar7];
            uVar8 = NEON_fmadd(fVar14,fVar14,fVar13 * fVar13);
            fVar10 = (float)NEON_fmadd(fVar15,fVar15,uVar8);
            fVar9 = 1.0;
            if (1e-06 < fVar10) {
              fVar9 = 1.0 / SQRT(fVar10);
            }
            bVar5 = true;
            uVar8 = NEON_fmadd(fVar14 * fVar9,0x3e99999a,*(float *)(this + 0x20) * 0.7);
            *(undefined4 *)(this + 0x20) = uVar8;
            *(ulong *)(this + 0x24) =
                 CONCAT44((float)((ulong)*(undefined8 *)(this + 0x24) >> 0x20) * 0.7 +
                          fVar15 * fVar9 * 0.3,
                          (float)*(undefined8 *)(this + 0x24) * 0.7 + fVar13 * fVar9 * 0.3);
            goto LAB_00b20f30;
          }
          goto LAB_00b20f24;
        }
      }
    }
    bVar5 = false;
  }
  else {
LAB_00b20f24:
    bVar5 = true;
  }
LAB_00b20f30:
  if ((param_2) && (this[0x1544] != (AndroidInputDevice)0x0)) {
    fVar9 = *(float *)(this + 0x1558);
    fVar15 = *(float *)(this + 0x1554);
    fVar14 = *(float *)(this + 0x155c);
    uVar8 = NEON_fmadd(fVar15,fVar15,fVar9 * fVar9);
    fVar13 = (float)NEON_fmadd(fVar14,fVar14,uVar8);
    fVar13 = SQRT(fVar13);
    if (0.0001 <= fVar13) {
      fVar10 = 1.0 / fVar13;
      fVar15 = fVar15 * fVar10;
      fVar9 = fVar9 * fVar10;
      fVar14 = fVar14 * fVar10;
      *(float *)(this + 0x1554) = fVar15;
      *(float *)(this + 0x1558) = fVar9;
      *(float *)(this + 0x155c) = fVar14;
    }
    if (0.001 < fVar13) {
      fVar10 = 0.0;
      fVar23 = 0.0;
      fVar12 = 0.0;
      fVar25 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      uVar8 = NEON_fmadd(fVar15,fVar15,fVar9 * fVar9);
      fVar17 = 1.0;
      uVar11 = 0x3f800000;
      fVar16 = (float)NEON_fmadd(fVar14,fVar14,uVar8);
      uVar8 = 0x3f800000;
      if (fVar16 != 0.0) {
        sincosf(fVar13 * -0.5,&fStack_8c,&local_90);
        fStack_8c = fStack_8c / SQRT(fVar16);
        fVar15 = fVar15 * fStack_8c;
        fVar9 = fVar9 * fStack_8c;
        fVar14 = fVar14 * fStack_8c;
        fVar10 = fVar15 * fVar9 + local_90 * fVar14;
        fVar12 = fVar15 * fVar9 - local_90 * fVar14;
        fVar23 = fVar15 * fVar14 - local_90 * fVar9;
        fVar18 = fVar15 * fVar14 + local_90 * fVar9;
        fVar25 = fVar9 * fVar14 + local_90 * fVar15;
        fVar19 = fVar9 * fVar14 - local_90 * fVar15;
        uVar8 = NEON_fmadd(fVar9 * fVar9 + fVar14 * fVar14,0xc0000000,0x3f800000);
        fVar10 = fVar10 + fVar10;
        fVar12 = fVar12 + fVar12;
        fVar23 = fVar23 + fVar23;
        fVar17 = (float)NEON_fmadd(fVar15 * fVar15 + fVar14 * fVar14,0xc0000000,0x3f800000);
        fVar25 = fVar25 + fVar25;
        fVar18 = fVar18 + fVar18;
        fVar19 = fVar19 + fVar19;
        uVar11 = NEON_fmadd(fVar15 * fVar15 + fVar9 * fVar9,0xc0000000,0x3f800000);
      }
      fVar13 = *(float *)(this + 0x1508);
      fVar14 = *(float *)(this + 0x1518);
      *(undefined4 *)(this + 0x1510) = 0;
      uVar22 = *(undefined4 *)(this + 0x1504);
      *(undefined4 *)(this + 0x1520) = 0;
      uVar28 = *(undefined4 *)(this + 0x1514);
      uVar26 = *(undefined4 *)(this + 0x150c);
      uVar24 = NEON_fmadd(uVar22,fVar10,fVar17 * fVar13);
      uVar21 = NEON_fmadd(uVar22,uVar8,fVar12 * fVar13);
      uVar22 = NEON_fmadd(uVar22,fVar23,fVar25 * fVar13);
      uVar27 = NEON_fmadd(uVar28,uVar8,fVar12 * fVar14);
      uVar29 = *(undefined4 *)(this + 0x151c);
      *(undefined4 *)(this + 0x1530) = 0;
      fVar13 = *(float *)(this + 0x1528);
      uVar20 = NEON_fmadd(uVar28,fVar23,fVar25 * fVar14);
      uVar24 = NEON_fmadd(uVar26,fVar19,uVar24);
      uVar21 = NEON_fmadd(uVar26,fVar18,uVar21);
      uVar22 = NEON_fmadd(uVar26,uVar11,uVar22);
      uVar26 = NEON_fmadd(uVar29,fVar18,uVar27);
      uVar27 = NEON_fmadd(uVar28,fVar10,fVar17 * fVar14);
      uVar30 = *(undefined4 *)(this + 0x1524);
      uVar28 = NEON_fmadd(uVar29,uVar11,uVar20);
      *(undefined4 *)(this + 0x1508) = uVar24;
      fVar14 = *(float *)(this + 0x1538);
      *(undefined4 *)(this + 0x1514) = uVar26;
      uVar31 = *(undefined4 *)(this + 0x152c);
      uVar24 = NEON_fmadd(uVar29,fVar19,uVar27);
      *(undefined4 *)(this + 0x1504) = uVar21;
      uVar20 = *(undefined4 *)(this + 0x1534);
      uVar21 = NEON_fmadd(uVar30,uVar8,fVar12 * fVar13);
      *(undefined4 *)(this + 0x150c) = uVar22;
      uVar27 = *(undefined4 *)(this + 0x153c);
      *(undefined4 *)(this + 0x1518) = uVar24;
      uVar8 = NEON_fmadd(uVar20,uVar8,fVar12 * fVar14);
      uVar24 = NEON_fmadd(uVar30,fVar10,fVar17 * fVar13);
      uVar22 = NEON_fmadd(uVar20,fVar10,fVar17 * fVar14);
      uVar26 = NEON_fmadd(uVar30,fVar23,fVar25 * fVar13);
      uVar20 = NEON_fmadd(uVar20,fVar23,fVar25 * fVar14);
      uVar21 = NEON_fmadd(uVar31,fVar18,uVar21);
      *(undefined4 *)(this + 0x151c) = uVar28;
      fVar13 = (float)NEON_fmadd(uVar27,fVar18,uVar8);
      uVar8 = NEON_fmadd(uVar31,fVar19,uVar24);
      fVar14 = (float)NEON_fmadd(uVar27,fVar19,uVar22);
      uVar22 = NEON_fmadd(uVar31,uVar11,uVar26);
      fVar15 = (float)NEON_fmadd(uVar27,uVar11,uVar20);
      *(undefined4 *)(this + 0x1524) = uVar21;
      *(undefined4 *)(this + 0x1540) = 0x3f800000;
      *(undefined4 *)(this + 0x1528) = uVar8;
      *(undefined4 *)(this + 0x152c) = uVar22;
      *(float *)(this + 0x1534) = fVar13 + 0.0;
      *(float *)(this + 0x1538) = fVar14 + 0.0;
      *(float *)(this + 0x153c) = fVar15 + 0.0;
    }
    if (bVar5) {
      fVar13 = (float)*(undefined8 *)(this + 0x1548);
      fVar15 = (float)((ulong)*(undefined8 *)(this + 0x1548) >> 0x20);
      fVar13 = fVar13 + ((float)*(undefined8 *)(this + 0x1524) - fVar13) * 0.98;
      fVar15 = fVar15 + ((float)((ulong)*(undefined8 *)(this + 0x1524) >> 0x20) - fVar15) * 0.98;
      local_80 = *(float *)(this + 0x1550) +
                 (*(float *)(this + 0x152c) - *(float *)(this + 0x1550)) * 0.98;
      fVar10 = (float)NEON_fmadd(local_80,local_80,fVar15 * fVar15 + fVar13 * fVar13);
      fVar9 = 1.0;
      fVar14 = 1.0;
      if (1e-06 < fVar10) {
        fVar14 = 1.0 / SQRT(fVar10);
      }
      fVar13 = fVar13 * fVar14;
      fVar15 = fVar15 * fVar14;
      local_80 = local_80 * fVar14;
      *(undefined4 *)(this + 0x1510) = 0;
      *(undefined4 *)(this + 0x1520) = 0;
      *(undefined8 *)(this + 0x1538) = 0;
      local_88 = CONCAT44(fVar15,fVar13);
      *(undefined8 *)(this + 0x1530) = 0;
      fVar14 = (float)NEON_fmadd(local_80,local_80,fVar15 * fVar15 + fVar13 * fVar13);
      *(undefined4 *)(this + 0x1540) = 0x3f800000;
      if (1e-06 < fVar14) {
        fVar9 = 1.0 / SQRT(fVar14);
      }
      fVar14 = local_80 * fVar9;
      fVar13 = fVar13 * fVar9;
      fVar15 = fVar15 * fVar9;
      fVar9 = fVar14 * -0.0 + fVar13 * 0.0;
      fVar10 = fVar14 + fVar15 * -0.0;
      fVar23 = -fVar13 + fVar15 * 0.0;
      uVar8 = NEON_fmadd(fVar10,fVar10,fVar9 * fVar9);
      fVar19 = (float)NEON_fmadd(fVar23,fVar23,uVar8);
      fVar18 = 1.0;
      if (1e-06 < fVar19) {
        fVar18 = 1.0 / SQRT(fVar19);
      }
      fVar9 = fVar9 * fVar18;
      fVar23 = fVar23 * fVar18;
      lVar7 = (long)*(int *)(this + 0x15a0) * 4;
      fVar10 = fVar10 * fVar18;
      *(ulong *)(this + 0x1524) = CONCAT44(fVar15,fVar13);
      *(float *)(this + 0x1508) = fVar9;
      cVar2 = (&DAT_004c48f2)[lVar7];
      cVar1 = (&DAT_004c48f0)[lVar7];
      *(float *)(this + 0x1504) = fVar10;
      fVar18 = *(float *)((long)&local_88 + (long)cVar2 * 4);
      *(float *)(this + 0x150c) = fVar23;
      cVar2 = (&DAT_004c48f1)[lVar7];
      uVar11 = NEON_fmadd(fVar15,fVar23,fVar9 * -fVar14);
      cVar3 = (&DAT_004c48f3)[lVar7];
      uVar8 = NEON_fmadd(fVar14,fVar10,fVar23 * -fVar13);
      *(float *)(this + 0x152c) = fVar14;
      fVar14 = *(float *)((long)&local_88 + (long)cVar3 * 4);
      *(undefined4 *)(this + 0x1514) = uVar11;
      *(float *)(this + 0x28) = local_80;
      uVar11 = NEON_fmadd(fVar13,fVar9,fVar10 * -fVar15);
      *(undefined4 *)(this + 0x1518) = uVar8;
      *(undefined4 *)(this + 0x151c) = uVar11;
      *(float *)(this + 0x20) = fVar18 * (float)(int)cVar1;
      *(float *)(this + 0x24) = fVar14 * (float)(int)cVar2;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


