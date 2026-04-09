// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteColourBlock3
// Entry Point: 00de91a0
// Size: 924 bytes
// Signature: undefined __cdecl WriteColourBlock3(Vec3 * param_1, Vec3 * param_2, uchar * param_3, void * param_4)


/* squish::WriteColourBlock3(squish::Vec3 const&, squish::Vec3 const&, unsigned char const*, void*)
    */

void squish::WriteColourBlock3(Vec3 *param_1,Vec3 *param_2,uchar *param_3,void *param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte bVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar21 = NEON_fmov(0x41f80000,4);
  uVar19 = NEON_smin(CONCAT44((int)(*(float *)param_2 * 31.0 + 0.5),
                              (int)((float)*(undefined8 *)(param_1 + 4) * 63.0 + 0.5)),0x1f0000003f,
                     4);
  uVar20 = NEON_smin(CONCAT44((int)(*(float *)(param_2 + 4) * 63.0 + 0.5),
                              (int)((float)*(undefined8 *)param_1 * 31.0 + 0.5)),0x3f0000001f,4);
  uVar19 = NEON_smax(uVar19,0,4);
  bVar8 = *param_3;
  uVar20 = NEON_smax(uVar20,0,4);
  uVar21 = NEON_smin(CONCAT44((int)(*(float *)(param_2 + 8) * (float)((ulong)uVar21 >> 0x20) + 0.5),
                              (int)(*(float *)(param_1 + 8) * (float)uVar21 + 0.5)),0x1f0000001f,4);
  uVar19 = NEON_ushl(uVar19,0xb00000005,4);
  uVar20 = NEON_ushl(uVar20,0x50000000b,4);
  uVar21 = NEON_smax(uVar21,0,4);
  uVar10 = CONCAT13((byte)((ulong)uVar20 >> 0x18) | (byte)((ulong)uVar19 >> 0x18) |
                    (byte)((ulong)uVar21 >> 0x18),
                    CONCAT12((byte)((ulong)uVar20 >> 0x10) | (byte)((ulong)uVar19 >> 0x10) |
                             (byte)((ulong)uVar21 >> 0x10),
                             CONCAT11((byte)((ulong)uVar20 >> 8) | (byte)((ulong)uVar19 >> 8) |
                                      (byte)((ulong)uVar21 >> 8),
                                      (byte)uVar20 | (byte)uVar19 | (byte)uVar21)));
  uVar19 = CONCAT17((byte)((ulong)uVar20 >> 0x38) | (byte)((ulong)uVar19 >> 0x38) |
                    (byte)((ulong)uVar21 >> 0x38),
                    CONCAT16((byte)((ulong)uVar20 >> 0x30) | (byte)((ulong)uVar19 >> 0x30) |
                             (byte)((ulong)uVar21 >> 0x30),
                             CONCAT15((byte)((ulong)uVar20 >> 0x28) | (byte)((ulong)uVar19 >> 0x28)
                                      | (byte)((ulong)uVar21 >> 0x28),
                                      CONCAT14((byte)((ulong)uVar20 >> 0x20) |
                                               (byte)((ulong)uVar19 >> 0x20) |
                                               (byte)((ulong)uVar21 >> 0x20),uVar10))));
  if (uVar10 <= (uint)((ulong)uVar19 >> 0x20)) {
    uVar10 = (uint)param_3[1];
    uVar9 = (uint)param_3[2];
    uVar11 = (uint)param_3[3];
    bVar13 = param_3[4];
    uVar12 = (uint)param_3[5];
    uVar14 = (uint)param_3[6];
    uVar15 = (uint)param_3[7];
    bVar17 = param_3[8];
    uVar16 = (uint)param_3[9];
    uVar18 = (uint)param_3[10];
    uVar2 = (uint)param_3[0xb];
    bVar5 = param_3[0xc];
    uVar3 = (uint)param_3[0xd];
    uVar6 = (uint)param_3[0xe];
    uVar4 = (uint)param_3[0xf];
    goto LAB_00de94d8;
  }
  if (bVar8 == 0) {
    bVar8 = 1;
    uVar9 = (uint)param_3[1];
    if (uVar9 == 1) goto LAB_00de93f0;
LAB_00de9278:
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    uVar11 = (uint)param_3[2];
    uVar10 = uVar9;
    if (param_3[2] != 1) goto LAB_00de928c;
LAB_00de9400:
    uVar11 = 0;
    uVar9 = 0;
    uVar12 = (uint)param_3[3];
    if (uVar12 == 1) goto LAB_00de9410;
LAB_00de92a0:
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    bVar13 = param_3[4];
    uVar9 = uVar11;
    uVar11 = uVar12;
    if (bVar13 != 1) goto LAB_00de92b4;
LAB_00de9420:
    bVar13 = 0;
    uVar14 = (uint)param_3[5];
    bVar17 = 0;
    if (uVar14 == 1) goto LAB_00de9430;
LAB_00de92c8:
    if (uVar14 == 0) {
      uVar14 = 1;
    }
    uVar15 = (uint)param_3[6];
    uVar12 = uVar14;
    if (param_3[6] != 1) goto LAB_00de92dc;
LAB_00de9440:
    uVar15 = 0;
    uVar14 = 0;
    uVar16 = (uint)param_3[7];
    if (uVar16 == 1) goto LAB_00de9450;
LAB_00de92f0:
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    bVar17 = param_3[8];
    uVar14 = uVar15;
    uVar15 = uVar16;
    if (bVar17 != 1) goto LAB_00de9304;
LAB_00de9460:
    bVar17 = 0;
    uVar18 = (uint)param_3[9];
    bVar5 = 0;
    if (uVar18 == 1) goto LAB_00de9470;
LAB_00de9318:
    if (uVar18 == 0) {
      uVar18 = 1;
    }
    uVar2 = (uint)param_3[10];
    uVar16 = uVar18;
    if (param_3[10] != 1) goto LAB_00de932c;
LAB_00de9480:
    uVar2 = 0;
    uVar18 = 0;
    uVar3 = (uint)param_3[0xb];
    if (uVar3 == 1) goto LAB_00de9490;
LAB_00de9340:
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    bVar5 = param_3[0xc];
    uVar18 = uVar2;
    uVar2 = uVar3;
    if (bVar5 != 1) goto LAB_00de9354;
LAB_00de94a0:
    bVar5 = 0;
    uVar6 = (uint)param_3[0xd];
    bVar1 = 0;
    if (uVar6 == 1) goto LAB_00de94b0;
LAB_00de9368:
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    uVar7 = (uint)param_3[0xe];
    uVar3 = uVar6;
    if (param_3[0xe] != 1) goto LAB_00de937c;
LAB_00de94c0:
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = (uint)param_3[0xf];
    uVar19 = NEON_rev64(uVar19,4);
    if (uVar4 == 1) goto LAB_00de94d4;
  }
  else {
    if (bVar8 == 1) {
      bVar8 = 0;
    }
    uVar9 = (uint)param_3[1];
    if (param_3[1] != 1) goto LAB_00de9278;
LAB_00de93f0:
    uVar9 = 0;
    uVar10 = 0;
    uVar11 = (uint)param_3[2];
    if (uVar11 == 1) goto LAB_00de9400;
LAB_00de928c:
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    uVar12 = (uint)param_3[3];
    uVar10 = uVar9;
    uVar9 = uVar11;
    if (param_3[3] != 1) goto LAB_00de92a0;
LAB_00de9410:
    uVar12 = 0;
    uVar11 = 0;
    bVar13 = param_3[4];
    if (bVar13 == 1) goto LAB_00de9420;
LAB_00de92b4:
    if (bVar13 == 0) {
      bVar13 = 1;
    }
    uVar14 = (uint)param_3[5];
    uVar11 = uVar12;
    bVar17 = bVar13;
    if (param_3[5] != 1) goto LAB_00de92c8;
LAB_00de9430:
    bVar13 = bVar17;
    uVar14 = 0;
    uVar12 = 0;
    uVar15 = (uint)param_3[6];
    if (uVar15 == 1) goto LAB_00de9440;
LAB_00de92dc:
    if (uVar15 == 0) {
      uVar15 = 1;
    }
    uVar16 = (uint)param_3[7];
    uVar12 = uVar14;
    uVar14 = uVar15;
    if (param_3[7] != 1) goto LAB_00de92f0;
LAB_00de9450:
    uVar16 = 0;
    uVar15 = 0;
    bVar17 = param_3[8];
    if (bVar17 == 1) goto LAB_00de9460;
LAB_00de9304:
    if (bVar17 == 0) {
      bVar17 = 1;
    }
    uVar18 = (uint)param_3[9];
    uVar15 = uVar16;
    bVar5 = bVar17;
    if (param_3[9] != 1) goto LAB_00de9318;
LAB_00de9470:
    bVar17 = bVar5;
    uVar18 = 0;
    uVar16 = 0;
    uVar2 = (uint)param_3[10];
    if (uVar2 == 1) goto LAB_00de9480;
LAB_00de932c:
    if (uVar2 == 0) {
      uVar2 = 1;
    }
    uVar3 = (uint)param_3[0xb];
    uVar16 = uVar18;
    uVar18 = uVar2;
    if (param_3[0xb] != 1) goto LAB_00de9340;
LAB_00de9490:
    uVar3 = 0;
    uVar2 = 0;
    bVar5 = param_3[0xc];
    if (bVar5 == 1) goto LAB_00de94a0;
LAB_00de9354:
    if (bVar5 == 0) {
      bVar5 = 1;
    }
    uVar6 = (uint)param_3[0xd];
    uVar2 = uVar3;
    bVar1 = bVar5;
    if (param_3[0xd] != 1) goto LAB_00de9368;
LAB_00de94b0:
    bVar5 = bVar1;
    uVar6 = 0;
    uVar3 = 0;
    uVar7 = (uint)param_3[0xe];
    if (uVar7 == 1) goto LAB_00de94c0;
LAB_00de937c:
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    uVar4 = (uint)param_3[0xf];
    uVar19 = NEON_rev64(uVar19,4);
    uVar3 = uVar6;
    uVar6 = uVar7;
    if (param_3[0xf] == 1) {
LAB_00de94d4:
      uVar4 = 0;
      goto LAB_00de94d8;
    }
  }
  uVar6 = uVar7;
  if (uVar4 == 0) {
    uVar4 = 1;
  }
LAB_00de94d8:
  *(char *)param_4 = (char)uVar19;
  *(char *)((long)param_4 + 2) = (char)((ulong)uVar19 >> 0x20);
  *(char *)((long)param_4 + 1) = (char)((ulong)uVar19 >> 8);
  *(byte *)((long)param_4 + 4) =
       bVar8 | (byte)(uVar10 << 2) | (byte)(uVar9 << 4) | (byte)(uVar11 << 6);
  *(char *)((long)param_4 + 3) = (char)((ulong)uVar19 >> 0x28);
  *(byte *)((long)param_4 + 5) =
       bVar13 | (byte)(uVar12 << 2) | (byte)(uVar14 << 4) | (byte)(uVar15 << 6);
  *(byte *)((long)param_4 + 6) =
       bVar17 | (byte)(uVar16 << 2) | (byte)(uVar18 << 4) | (byte)(uVar2 << 6);
  *(byte *)((long)param_4 + 7) =
       bVar5 | (byte)(uVar3 << 2) | (byte)(uVar6 << 4) | (byte)(uVar4 << 6);
  return;
}


