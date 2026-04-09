// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vorbis_bitrate_addblock
// Entry Point: 00e06f30
// Size: 1256 bytes
// Signature: undefined vorbis_bitrate_addblock(void)


undefined8 vorbis_bitrate_addblock(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  lVar13 = *(long *)(param_1 + 0xb8);
  lVar9 = *(long *)(*(long *)(param_1 + 0x68) + 0x88);
  lVar19 = *(long *)(*(long *)(param_1 + 0x68) + 8);
  lVar15 = *(long *)(lVar19 + 0x30);
  uVar16 = (uint)(double)(long)*(double *)(lVar9 + 200);
  uVar17 = (ulong)uVar16;
  lVar4 = oggpack_bytes(*(undefined8 *)(lVar13 + (long)(int)uVar16 * 8 + 0x10));
  lVar7 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(lVar9 + 0xb0);
  if (lVar7 == 0) {
    lVar10 = *(long *)(lVar9 + 0xb8);
    iVar18 = *(int *)(lVar9 + 0x90);
    lVar11 = lVar6;
  }
  else {
    lVar11 = *(long *)(lVar9 + 0xc0) * lVar6;
    lVar10 = *(long *)(lVar9 + 0xb8) * *(long *)(lVar9 + 0xc0);
    iVar18 = *(int *)(lVar9 + 0x90);
  }
  if (iVar18 == 0) {
    if (*(long *)(lVar9 + 0xd0) == 0) {
      *(long *)(lVar9 + 0xd0) = param_1;
      return 0;
    }
    return 0xffffffff;
  }
  lVar20 = *(long *)(lVar15 + 0x1558);
  lVar4 = lVar4 * 8;
  dVar23 = *(double *)(lVar15 + 0x1560);
  *(long *)(lVar9 + 0xd0) = param_1;
  lVar12 = *(long *)(lVar9 + 0xa8);
  uVar8 = *(ulong *)(lVar15 + lVar7 * 8);
  lVar20 = (long)(dVar23 * (double)lVar20);
  if (0 < lVar12) {
    if (lVar7 != 0) {
      lVar12 = *(long *)(lVar9 + 0xc0) * lVar12;
    }
    lVar7 = *(long *)(lVar9 + 0x98);
    dVar23 = 15.0 / *(double *)(lVar15 + 0x1568);
    lVar6 = lVar7 + (lVar4 - lVar12);
    if (lVar20 < lVar6) {
      if (((0 < (int)uVar16) && (lVar4 - lVar12 != 0 && lVar12 <= lVar4)) &&
         (lVar20 < (lVar4 - lVar12) + lVar7)) {
        do {
          iVar18 = (int)uVar17;
          lVar4 = oggpack_bytes(*(undefined8 *)(lVar13 + (ulong)(iVar18 - 1) * 8 + 0x10));
          if (((long)uVar17 < 2) || (lVar6 = lVar4 * 8 - lVar12, lVar6 == 0 || lVar4 * 8 < lVar12))
          break;
          uVar17 = uVar17 - 1;
        } while (lVar20 < lVar6 + *(long *)(lVar9 + 0x98));
        uVar16 = iVar18 - 1;
      }
    }
    else {
      bVar1 = lVar6 < lVar20;
      bVar2 = false;
      if (bVar1) {
        bVar2 = (int)(uVar16 - 0xd) < 0;
      }
      bVar2 = bVar2 != (bVar1 && SBORROW4(uVar16,0xd));
      bVar3 = false;
      if (bVar1 && uVar16 == 0xd || bVar2) {
        bVar3 = lVar4 - lVar12 < 0;
      }
      if ((bVar3 != ((bVar1 && uVar16 == 0xd || bVar2) && SBORROW8(lVar4,lVar12))) &&
         ((lVar4 - lVar12) + lVar7 < lVar20)) {
        lVar4 = (long)(int)uVar16;
        do {
          lVar7 = lVar4;
          lVar6 = oggpack_bytes(*(undefined8 *)(lVar13 + 0x18 + lVar7 * 8));
          if ((0xc < lVar7) || (lVar12 <= lVar6 * 8)) break;
          lVar4 = lVar7 + 1;
        } while ((lVar6 * 8 - lVar12) + *(long *)(lVar9 + 0x98) < lVar20);
        uVar16 = (int)lVar7 + 1;
      }
    }
    dVar24 = (double)(int)(uVar8 >> 1);
    dVar25 = (double)*(long *)(lVar19 + 8);
    dVar21 = ((double)(long)((double)uVar16 - *(double *)(lVar9 + 200)) / dVar24) * dVar25;
    dVar22 = -dVar23;
    if (-dVar23 <= dVar21) {
      dVar22 = dVar21;
    }
    if (dVar22 <= dVar23) {
      dVar23 = dVar22;
    }
    dVar23 = (double)NEON_fmadd(dVar23 / dVar25,dVar24,*(double *)(lVar9 + 200));
    *(double *)(lVar9 + 200) = dVar23;
    uVar17 = (ulong)(uint)(int)(double)(long)dVar23;
    lVar4 = oggpack_bytes(*(undefined8 *)(lVar13 + (long)(int)(double)(long)dVar23 * 8 + 0x10));
    lVar6 = *(long *)(lVar9 + 0xb0);
    lVar4 = lVar4 << 3;
  }
  if (((0 < lVar6) && (lVar4 < lVar11)) && ((lVar4 - lVar11) + *(long *)(lVar9 + 0xa0) < 0)) {
    uVar16 = (uint)uVar17;
    uVar5 = uVar16;
    if ((int)uVar16 < 0xf) {
      uVar5 = 0xe;
    }
    uVar17 = (ulong)(int)uVar16;
    if (uVar17 == uVar5) {
      uVar17 = (ulong)(uVar5 + 1);
    }
    else {
      lVar6 = uVar5 - uVar17;
      puVar14 = (undefined8 *)(lVar13 + uVar17 * 8 + 0x18);
      do {
        uVar16 = uVar16 + 1;
        uVar17 = (ulong)uVar16;
        lVar4 = oggpack_bytes(*puVar14);
        lVar4 = lVar4 * 8;
        if (-1 < (lVar4 - lVar11) + *(long *)(lVar9 + 0xa0)) goto LAB_00e071f8;
        lVar6 = lVar6 + -1;
        puVar14 = puVar14 + 1;
      } while (lVar6 != 0);
      uVar17 = (ulong)(uVar5 + 1);
    }
  }
LAB_00e071f8:
  uVar16 = (uint)uVar17;
  if ((*(long *)(lVar9 + 0xb8) < 1) || (lVar4 - lVar10 == 0 || lVar4 < lVar10)) {
LAB_00e07268:
    if ((int)uVar16 < 0) {
      lVar7 = *(long *)(lVar15 + 0x1558);
      lVar6 = *(long *)(lVar9 + 0xa0);
      goto LAB_00e072dc;
    }
    lVar6 = lVar11 - *(long *)(lVar9 + 0xa0);
    lVar4 = lVar6 + 7;
    lVar6 = lVar6 + 0xe;
    if (-1 < lVar4) {
      lVar6 = lVar4;
    }
    if (0xd < uVar16) {
      uVar16 = 0xe;
    }
    *(uint *)(lVar9 + 0xd8) = uVar16;
    puVar14 = (undefined8 *)(lVar13 + (ulong)uVar16 * 8 + 0x10);
    lVar4 = oggpack_bytes(*puVar14);
    lVar4 = (lVar6 >> 3) - lVar4;
    if (0 < lVar4) {
      uVar17 = lVar4 + 1;
      do {
        oggpack_write(*puVar14,0,8);
        uVar17 = uVar17 - 1;
      } while (1 < uVar17);
    }
  }
  else {
    lVar6 = *(long *)(lVar9 + 0xa0);
    lVar7 = *(long *)(lVar15 + 0x1558);
    if ((lVar4 - lVar10) + lVar6 <= lVar7) goto LAB_00e07268;
    if (0 < (int)uVar16) {
      puVar14 = (undefined8 *)(lVar13 + uVar17 * 8 + 8);
      do {
        lVar4 = oggpack_bytes(*puVar14);
        lVar6 = *(long *)(lVar9 + 0xa0);
        lVar4 = lVar4 * 8;
        lVar7 = *(long *)(lVar15 + 0x1558);
        uVar16 = (int)uVar17 - 1;
        uVar17 = (ulong)uVar16;
        if ((lVar4 - lVar10) + lVar6 <= lVar7) goto LAB_00e07268;
        puVar14 = puVar14 + -1;
      } while (0 < (int)uVar16);
    }
LAB_00e072dc:
    *(undefined4 *)(lVar9 + 0xd8) = 0;
    lVar6 = (lVar7 + lVar10) - lVar6;
    puVar14 = (undefined8 *)(lVar13 + 0x10);
    lVar7 = lVar6 + 7;
    if (-1 < lVar6) {
      lVar7 = lVar6;
    }
    lVar6 = oggpack_bytes(*puVar14);
    if (lVar6 <= lVar7 >> 3) goto LAB_00e07320;
    oggpack_writetrunc(*puVar14,(lVar7 >> 3) << 3);
  }
  lVar4 = oggpack_bytes(*puVar14);
  lVar4 = lVar4 << 3;
LAB_00e07320:
  if ((0 < *(long *)(lVar9 + 0xb0)) || (0 < *(long *)(lVar9 + 0xb8))) {
    if (((lVar10 < 1) || (lVar6 = lVar4 - lVar10, lVar6 == 0 || lVar4 < lVar10)) &&
       ((lVar11 < 1 || (lVar6 = lVar4 - lVar11, lVar11 <= lVar4)))) {
      lVar6 = *(long *)(lVar9 + 0xa0);
      if (lVar20 < lVar6) {
        if ((0 < lVar10) && (lVar6 = lVar6 + (lVar4 - lVar10), lVar20 <= lVar6)) {
          lVar20 = lVar6;
        }
      }
      else if ((0 < lVar11) && (lVar6 = lVar6 + (lVar4 - lVar11), lVar6 <= lVar20)) {
        lVar20 = lVar6;
      }
    }
    else {
      lVar20 = lVar6 + *(long *)(lVar9 + 0xa0);
    }
    *(long *)(lVar9 + 0xa0) = lVar20;
  }
  lVar6 = *(long *)(lVar9 + 0xa8);
  if (0 < lVar6) {
    if (*(long *)(param_1 + 0x38) != 0) {
      lVar6 = *(long *)(lVar9 + 0xc0) * lVar6;
    }
    *(long *)(lVar9 + 0x98) = (lVar4 - lVar6) + *(long *)(lVar9 + 0x98);
  }
  return 0;
}


