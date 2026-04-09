// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_build_gamma_table
// Entry Point: 00dace88
// Size: 2588 bytes
// Signature: undefined png_build_gamma_table(void)


void png_build_gamma_table(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  if ((*(long *)(param_1 + 0x2e0) != 0) || (*(long *)(param_1 + 0x2e8) != 0)) {
    png_warning(param_1,"gamma table being rebuilt");
    png_destroy_gamma_table(param_1);
  }
  if (param_2 < 9) {
    if (*(int *)(param_1 + 0x2dc) < 1) {
      iVar19 = 100000;
    }
    else if ((*(int *)(param_1 + 0x4d8) == 0) ||
            (dVar23 = (1000000000000000.0 / (double)*(int *)(param_1 + 0x4d8)) /
                      (double)*(int *)(param_1 + 0x2dc) + 0.5, dVar24 = (double)(long)dVar23,
            2147483647.0 < dVar24 || dVar24 < -2147483648.0)) {
      iVar19 = 0;
    }
    else {
      iVar19 = (int)dVar23;
    }
    puVar16 = (undefined8 *)png_malloc(param_1,0x100);
    *(undefined8 **)(param_1 + 0x2e0) = puVar16;
    if (iVar19 - 95000U < 0x2711) {
      puVar16[1] = 0xf0e0d0c0b0a0908;
      *puVar16 = 0x706050403020100;
      puVar16[3] = 0x1f1e1d1c1b1a1918;
      puVar16[2] = 0x1716151413121110;
      puVar16[5] = 0x2f2e2d2c2b2a2928;
      puVar16[4] = 0x2726252423222120;
      puVar16[7] = 0x3f3e3d3c3b3a3938;
      puVar16[6] = 0x3736353433323130;
      puVar16[9] = 0x4f4e4d4c4b4a4948;
      puVar16[8] = 0x4746454443424140;
      puVar16[0xb] = 0x5f5e5d5c5b5a5958;
      puVar16[10] = 0x5756555453525150;
      puVar16[0xd] = 0x6f6e6d6c6b6a6968;
      puVar16[0xc] = 0x6766656463626160;
      puVar16[0xf] = 0x7f7e7d7c7b7a7978;
      puVar16[0xe] = 0x7776757473727170;
      puVar16[0x11] = 0x8f8e8d8c8b8a8988;
      puVar16[0x10] = 0x8786858483828180;
      puVar16[0x13] = 0x9f9e9d9c9b9a9998;
      puVar16[0x12] = 0x9796959493929190;
      puVar16[0x15] = 0xafaeadacabaaa9a8;
      puVar16[0x14] = 0xa7a6a5a4a3a2a1a0;
      puVar16[0x17] = 0xbfbebdbcbbbab9b8;
      puVar16[0x16] = 0xb7b6b5b4b3b2b1b0;
      puVar16[0x19] = 0xcfcecdcccbcac9c8;
      puVar16[0x18] = 0xc7c6c5c4c3c2c1c0;
      puVar16[0x1b] = 0xdfdedddcdbdad9d8;
      puVar16[0x1a] = 0xd7d6d5d4d3d2d1d0;
      puVar16[0x1d] = 0xefeeedecebeae9e8;
      puVar16[0x1c] = 0xe7e6e5e4e3e2e1e0;
      puVar16[0x1f] = 0xfffefdfcfbfaf9f8;
      puVar16[0x1e] = 0xf7f6f5f4f3f2f1f0;
    }
    else {
      lVar21 = 0;
      do {
        uVar20 = (uint)lVar21;
        dVar23 = pow((double)uVar20 / 255.0,(double)iVar19 * 1e-05);
        dVar24 = pow((double)(uVar20 + 1) / 255.0,(double)iVar19 * 1e-05);
        dVar25 = (double)NEON_fmadd(dVar23,0x406fe00000000000,0x3fe0000000000000);
        dVar23 = (double)NEON_fmadd(dVar24,0x406fe00000000000,0x3fe0000000000000);
        puVar2 = (undefined *)((long)puVar16 + lVar21);
        uVar17 = uVar20;
        if (0xffffff01 < uVar20 - 0xff) {
          uVar17 = (int)dVar25;
        }
        bVar6 = (byte)lVar21 | 1;
        if (uVar20 < 0xfe) {
          bVar6 = (byte)(int)dVar23;
        }
        lVar21 = lVar21 + 2;
        *puVar2 = (char)uVar17;
        puVar2[1] = bVar6;
      } while (lVar21 != 0x100);
    }
    if ((*(uint *)(param_1 + 0x16c) & 0x600080) == 0) {
      return;
    }
    dVar23 = 10000000000.0 / (double)(long)*(int *)(param_1 + 0x4d8) + 0.5;
    dVar24 = (double)(long)dVar23;
    iVar19 = (int)dVar23;
    if ((dVar24 < -2147483648.0 || 2147483647.0 <= dVar24) &&
        (dVar24 < -2147483648.0 || dVar24 != 2147483647.0)) {
      iVar19 = 0;
    }
    puVar16 = (undefined8 *)png_malloc(param_1,0x100);
    *(undefined8 **)(param_1 + 0x2f8) = puVar16;
    if (iVar19 - 95000U < 0x2711) {
      puVar16[1] = 0xf0e0d0c0b0a0908;
      *puVar16 = 0x706050403020100;
      puVar16[3] = 0x1f1e1d1c1b1a1918;
      puVar16[2] = 0x1716151413121110;
      puVar16[5] = 0x2f2e2d2c2b2a2928;
      puVar16[4] = 0x2726252423222120;
      puVar16[7] = 0x3f3e3d3c3b3a3938;
      puVar16[6] = 0x3736353433323130;
      puVar16[9] = 0x4f4e4d4c4b4a4948;
      puVar16[8] = 0x4746454443424140;
      puVar16[0xb] = 0x5f5e5d5c5b5a5958;
      puVar16[10] = 0x5756555453525150;
      puVar16[0xd] = 0x6f6e6d6c6b6a6968;
      puVar16[0xc] = 0x6766656463626160;
      puVar16[0xf] = 0x7f7e7d7c7b7a7978;
      puVar16[0xe] = 0x7776757473727170;
      puVar16[0x11] = 0x8f8e8d8c8b8a8988;
      puVar16[0x10] = 0x8786858483828180;
      puVar16[0x13] = 0x9f9e9d9c9b9a9998;
      puVar16[0x12] = 0x9796959493929190;
      puVar16[0x19] = 0xcfcecdcccbcac9c8;
      puVar16[0x18] = 0xc7c6c5c4c3c2c1c0;
      puVar16[0x1b] = 0xdfdedddcdbdad9d8;
      puVar16[0x1a] = 0xd7d6d5d4d3d2d1d0;
      puVar16[0x15] = 0xafaeadacabaaa9a8;
      puVar16[0x14] = 0xa7a6a5a4a3a2a1a0;
      puVar16[0x17] = 0xbfbebdbcbbbab9b8;
      puVar16[0x16] = 0xb7b6b5b4b3b2b1b0;
      puVar16[0x1d] = 0xefeeedecebeae9e8;
      puVar16[0x1c] = 0xe7e6e5e4e3e2e1e0;
      puVar16[0x1f] = 0xfffefdfcfbfaf9f8;
      puVar16[0x1e] = 0xf7f6f5f4f3f2f1f0;
    }
    else {
      lVar21 = 0;
      do {
        uVar20 = (uint)lVar21;
        dVar23 = pow((double)uVar20 / 255.0,(double)iVar19 * 1e-05);
        dVar24 = pow((double)(uVar20 + 1) / 255.0,(double)iVar19 * 1e-05);
        dVar25 = (double)NEON_fmadd(dVar23,0x406fe00000000000,0x3fe0000000000000);
        dVar23 = (double)NEON_fmadd(dVar24,0x406fe00000000000,0x3fe0000000000000);
        puVar2 = (undefined *)((long)puVar16 + lVar21);
        uVar17 = uVar20;
        if (0xffffff01 < uVar20 - 0xff) {
          uVar17 = (int)dVar25;
        }
        bVar6 = (byte)lVar21 | 1;
        if (uVar20 < 0xfe) {
          bVar6 = (byte)(int)dVar23;
        }
        lVar21 = lVar21 + 2;
        *puVar2 = (char)uVar17;
        puVar2[1] = bVar6;
      } while (lVar21 != 0x100);
    }
    if (*(int *)(param_1 + 0x2dc) < 1) {
      iVar19 = *(int *)(param_1 + 0x4d8);
    }
    else {
      dVar23 = 10000000000.0 / (double)*(int *)(param_1 + 0x2dc) + 0.5;
      dVar24 = (double)(long)dVar23;
      iVar19 = (int)dVar23;
      if ((dVar24 < -2147483648.0 || 2147483647.0 <= dVar24) &&
          (dVar24 < -2147483648.0 || dVar24 != 2147483647.0)) {
        iVar19 = 0;
      }
    }
    puVar16 = (undefined8 *)png_malloc(param_1,0x100);
    *(undefined8 **)(param_1 + 0x2f0) = puVar16;
    if (iVar19 - 95000U < 0x2711) {
      puVar16[1] = 0xf0e0d0c0b0a0908;
      *puVar16 = 0x706050403020100;
      puVar16[3] = 0x1f1e1d1c1b1a1918;
      puVar16[2] = 0x1716151413121110;
      puVar16[5] = 0x2f2e2d2c2b2a2928;
      puVar16[4] = 0x2726252423222120;
      puVar16[7] = 0x3f3e3d3c3b3a3938;
      puVar16[6] = 0x3736353433323130;
      puVar16[9] = 0x4f4e4d4c4b4a4948;
      puVar16[8] = 0x4746454443424140;
      puVar16[0xb] = 0x5f5e5d5c5b5a5958;
      puVar16[10] = 0x5756555453525150;
      puVar16[0xd] = 0x6f6e6d6c6b6a6968;
      puVar16[0xc] = 0x6766656463626160;
      puVar16[0xf] = 0x7f7e7d7c7b7a7978;
      puVar16[0xe] = 0x7776757473727170;
      puVar16[0x11] = 0x8f8e8d8c8b8a8988;
      puVar16[0x10] = 0x8786858483828180;
      puVar16[0x13] = 0x9f9e9d9c9b9a9998;
      puVar16[0x12] = 0x9796959493929190;
      puVar16[0x19] = 0xcfcecdcccbcac9c8;
      puVar16[0x18] = 0xc7c6c5c4c3c2c1c0;
      puVar16[0x1b] = 0xdfdedddcdbdad9d8;
      puVar16[0x1a] = 0xd7d6d5d4d3d2d1d0;
      puVar16[0x15] = 0xafaeadacabaaa9a8;
      puVar16[0x14] = 0xa7a6a5a4a3a2a1a0;
      puVar16[0x17] = 0xbfbebdbcbbbab9b8;
      puVar16[0x16] = 0xb7b6b5b4b3b2b1b0;
      puVar16[0x1d] = 0xefeeedecebeae9e8;
      puVar16[0x1c] = 0xe7e6e5e4e3e2e1e0;
      puVar16[0x1f] = 0xfffefdfcfbfaf9f8;
      puVar16[0x1e] = 0xf7f6f5f4f3f2f1f0;
      return;
    }
    lVar21 = 0;
    do {
      uVar20 = (uint)lVar21;
      dVar23 = pow((double)uVar20 / 255.0,(double)iVar19 * 1e-05);
      dVar24 = pow((double)(uVar20 + 1) / 255.0,(double)iVar19 * 1e-05);
      dVar25 = (double)NEON_fmadd(dVar23,0x406fe00000000000,0x3fe0000000000000);
      dVar23 = (double)NEON_fmadd(dVar24,0x406fe00000000000,0x3fe0000000000000);
      puVar2 = (undefined *)((long)puVar16 + lVar21);
      uVar17 = uVar20;
      if (0xffffff01 < uVar20 - 0xff) {
        uVar17 = (int)dVar25;
      }
      bVar6 = (byte)lVar21 | 1;
      if (uVar20 < 0xfe) {
        bVar6 = (byte)(int)dVar23;
      }
      lVar21 = lVar21 + 2;
      *puVar2 = (char)uVar17;
      puVar2[1] = bVar6;
    } while (lVar21 != 0x100);
    return;
  }
  if ((*(byte *)(param_1 + 0x29f) >> 1 & 1) == 0) {
    uVar17 = (uint)*(byte *)(param_1 + 0x313);
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x311);
    if (*(byte *)(param_1 + 0x311) <= *(byte *)(param_1 + 0x310)) {
      bVar6 = *(byte *)(param_1 + 0x310);
    }
    uVar17 = (uint)*(byte *)(param_1 + 0x312);
    if ((uint)*(byte *)(param_1 + 0x312) <= (uint)bVar6) {
      uVar17 = (uint)bVar6;
    }
  }
  uVar20 = 0x10 - uVar17;
  if (0xe < uVar17 - 1) {
    uVar20 = 0;
  }
  uVar17 = *(uint *)(param_1 + 0x16c) & 0x4000400;
  if ((uVar20 & 0xff) < 6 && uVar17 != 0) {
    uVar20 = 5;
  }
  if (7 < (uVar20 & 0xff)) {
    uVar20 = 8;
  }
  uVar3 = uVar20 & 0xff;
  iVar19 = *(int *)(param_1 + 0x2dc);
  *(uint *)(param_1 + 0x2d8) = uVar3;
  if (uVar17 == 0) {
    if (iVar19 < 1) {
      iVar19 = 100000;
    }
    else if ((*(int *)(param_1 + 0x4d8) == 0) ||
            (dVar23 = (1000000000000000.0 / (double)*(int *)(param_1 + 0x4d8)) / (double)iVar19 +
                      0.5, dVar24 = (double)(long)dVar23,
            2147483647.0 < dVar24 || dVar24 < -2147483648.0)) {
      iVar19 = 0;
    }
    else {
      iVar19 = (int)dVar23;
    }
    FUN_00dad8a4(param_1,param_1 + 0x2e8,uVar3,iVar19);
    uVar17 = *(uint *)(param_1 + 0x16c);
    goto joined_r0x00dad874;
  }
  if (iVar19 < 1) {
    dVar23 = 1.0;
  }
  else {
    dVar23 = (double)(long)*(int *)(param_1 + 0x4d8) * 1e-05 * (double)iVar19 + 0.5;
    dVar24 = (double)(long)dVar23;
    dVar23 = (double)(int)dVar23 * 1e-05;
    if ((dVar24 < -2147483648.0 || 2147483647.0 <= dVar24) &&
        (dVar24 < -2147483648.0 || dVar24 != 2147483647.0)) {
      dVar23 = 0.0;
    }
  }
  uVar11 = 8 - uVar3;
  uVar17 = 1 << (ulong)(uVar11 & 0x1f);
  uVar22 = (ulong)uVar17;
  puVar14 = (undefined8 *)png_calloc(param_1,uVar22 << 3);
  *(undefined8 **)(param_1 + 0x2e8) = puVar14;
  puVar16 = puVar14;
  do {
    uVar15 = png_malloc(param_1,0x200);
    uVar22 = uVar22 - 1;
    *puVar16 = uVar15;
    puVar16 = puVar16 + 1;
  } while (uVar22 != 0);
  uVar7 = 0xff >> (ulong)(uVar20 & 0x1f);
  iVar19 = 0;
  uVar20 = 0;
  do {
    dVar24 = pow((double)((iVar19 * 0x101 & 0xffffU) + 0x80) / 65535.0,dVar23);
    dVar24 = (double)NEON_fmadd(dVar24,0x40efffe000000000,0x3fe0000000000000);
    uVar18 = ((int)dVar24 * ~(-1 << (ulong)(0x10 - uVar3 & 0x1f)) + 0x8000U) / 0xffff;
    if (uVar20 <= uVar18) {
      uVar12 = (uVar18 + 1) - uVar20;
      uVar10 = (undefined2)(iVar19 * 0x101);
      if (uVar12 < 2) {
LAB_00dad1d4:
        do {
          uVar12 = uVar20 + 1;
          *(undefined2 *)(puVar14[uVar20 & uVar7] + (ulong)(uVar20 >> (ulong)(uVar11 & 0x1f)) * 2) =
               uVar10;
          uVar20 = uVar12;
        } while (uVar18 + 1 != uVar12);
      }
      else {
        uVar13 = uVar12 & 0xfffffffe;
        uVar4 = uVar20 + uVar13;
        uVar1 = uVar13;
        do {
          uVar5 = uVar20 + 1;
          uVar9 = uVar20 & uVar7;
          uVar8 = uVar20 >> (ulong)(uVar11 & 0x1f);
          uVar1 = uVar1 - 2;
          uVar20 = uVar20 + 2;
          lVar21 = puVar14[uVar5 & uVar7];
          *(undefined2 *)(puVar14[uVar9] + (ulong)uVar8 * 2) = uVar10;
          *(undefined2 *)(lVar21 + (ulong)(uVar5 >> (ulong)(uVar11 & 0x1f)) * 2) = uVar10;
        } while (uVar1 != 0);
        uVar20 = uVar4;
        if (uVar12 != uVar13) goto LAB_00dad1d4;
      }
      uVar20 = uVar18 + 1;
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 != 0xff);
  uVar17 = uVar17 * 0x100;
  uVar18 = uVar17 - uVar20;
  if (uVar20 <= uVar17 && uVar18 != 0) {
    if (1 < uVar18) {
      uVar4 = uVar18 & 0xfffffffe;
      uVar12 = uVar20 + uVar4;
      uVar13 = uVar4;
      do {
        uVar1 = uVar20 + 1;
        uVar5 = uVar20 & uVar7;
        uVar9 = uVar20 >> (ulong)(uVar11 & 0x1f);
        uVar13 = uVar13 - 2;
        uVar20 = uVar20 + 2;
        lVar21 = puVar14[uVar1 & uVar7];
        *(undefined2 *)(puVar14[uVar5] + (ulong)uVar9 * 2) = 0xffff;
        *(undefined2 *)(lVar21 + (ulong)(uVar1 >> (ulong)(uVar11 & 0x1f)) * 2) = 0xffff;
      } while (uVar13 != 0);
      uVar20 = uVar12;
      if (uVar18 == uVar4) goto LAB_00dad75c;
    }
    do {
      uVar18 = uVar20 + 1;
      *(undefined2 *)(puVar14[uVar20 & uVar7] + (ulong)(uVar20 >> (ulong)(uVar11 & 0x1f)) * 2) =
           0xffff;
      uVar20 = uVar18;
    } while (uVar17 != uVar18);
  }
LAB_00dad75c:
  uVar17 = *(uint *)(param_1 + 0x16c);
joined_r0x00dad874:
  if ((uVar17 & 0x600080) == 0) {
    return;
  }
  dVar23 = 10000000000.0 / (double)(long)*(int *)(param_1 + 0x4d8) + 0.5;
  dVar24 = (double)(long)dVar23;
  iVar19 = (int)dVar23;
  if ((dVar24 < -2147483648.0 || 2147483647.0 <= dVar24) &&
      (dVar24 < -2147483648.0 || dVar24 != 2147483647.0)) {
    iVar19 = 0;
  }
  FUN_00dad8a4(param_1,param_1 + 0x308,uVar3,iVar19);
  if (*(int *)(param_1 + 0x2dc) < 1) {
    iVar19 = *(int *)(param_1 + 0x4d8);
  }
  else {
    dVar23 = 10000000000.0 / (double)*(int *)(param_1 + 0x2dc) + 0.5;
    dVar24 = (double)(long)dVar23;
    iVar19 = (int)dVar23;
    if ((dVar24 < -2147483648.0 || 2147483647.0 <= dVar24) &&
        (dVar24 < -2147483648.0 || dVar24 != 2147483647.0)) {
      iVar19 = 0;
    }
  }
  FUN_00dad8a4(param_1,param_1 + 0x300,uVar3,iVar19);
  return;
}


