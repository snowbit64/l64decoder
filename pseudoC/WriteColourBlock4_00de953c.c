// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: WriteColourBlock4
// Entry Point: 00de953c
// Size: 400 bytes
// Signature: undefined __cdecl WriteColourBlock4(Vec3 * param_1, Vec3 * param_2, uchar * param_3, void * param_4)


/* squish::WriteColourBlock4(squish::Vec3 const&, squish::Vec3 const&, unsigned char const*, void*)
    */

void squish::WriteColourBlock4(Vec3 *param_1,Vec3 *param_2,uchar *param_3,void *param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = NEON_fmov(0x41f80000,4);
  uVar1 = 0;
  uVar2 = 0;
  uVar4 = NEON_smin(CONCAT44((int)(*(float *)(param_1 + 4) * 63.0 + 0.5),
                             (int)((float)*(undefined8 *)param_2 * 31.0 + 0.5)),0x3f0000001f,4);
  uVar9 = NEON_smin(CONCAT44((int)(*(float *)param_1 * 31.0 + 0.5),
                             (int)((float)*(undefined8 *)(param_2 + 4) * 63.0 + 0.5)),0x1f0000003f,4
                   );
  uVar4 = NEON_smax(uVar4,0,4);
  uVar9 = NEON_smax(uVar9,0,4);
  uVar8 = NEON_smin(CONCAT44((int)(*(float *)(param_1 + 8) * (float)((ulong)uVar8 >> 0x20) + 0.5),
                             (int)(*(float *)(param_2 + 8) * (float)uVar8 + 0.5)),0x1f0000001f,4);
  uVar4 = NEON_ushl(uVar4,0x50000000b,4);
  uVar9 = NEON_ushl(uVar9,0xb00000005,4);
  uVar8 = NEON_smax(uVar8,0,4);
  uVar3 = CONCAT13((byte)((ulong)uVar4 >> 0x18) | (byte)((ulong)uVar9 >> 0x18) |
                   (byte)((ulong)uVar8 >> 0x18),
                   CONCAT12((byte)((ulong)uVar4 >> 0x10) | (byte)((ulong)uVar9 >> 0x10) |
                            (byte)((ulong)uVar8 >> 0x10),
                            CONCAT11((byte)((ulong)uVar4 >> 8) | (byte)((ulong)uVar9 >> 8) |
                                     (byte)((ulong)uVar8 >> 8),
                                     (byte)uVar4 | (byte)uVar9 | (byte)uVar8)));
  uVar4 = CONCAT17((byte)((ulong)uVar4 >> 0x38) | (byte)((ulong)uVar9 >> 0x38) |
                   (byte)((ulong)uVar8 >> 0x38),
                   CONCAT16((byte)((ulong)uVar4 >> 0x30) | (byte)((ulong)uVar9 >> 0x30) |
                            (byte)((ulong)uVar8 >> 0x30),
                            CONCAT15((byte)((ulong)uVar4 >> 0x28) | (byte)((ulong)uVar9 >> 0x28) |
                                     (byte)((ulong)uVar8 >> 0x28),
                                     CONCAT14((byte)((ulong)uVar4 >> 0x20) |
                                              (byte)((ulong)uVar9 >> 0x20) |
                                              (byte)((ulong)uVar8 >> 0x20),uVar3))));
  uVar5 = (uint)((ulong)uVar4 >> 0x20);
  if (uVar5 < uVar3) {
    uVar7 = *(ulong *)(param_3 + 8);
    uVar6 = *(ulong *)param_3;
    uVar1 = uVar6 & 0x303030303030303;
    uVar2 = uVar7 & 0x303030303030303;
    uVar1 = (CONCAT17((char)(uVar6 >> 0x38),
                      CONCAT16((char)(uVar1 >> 0x30),
                               CONCAT15((char)(uVar1 >> 0x28),
                                        CONCAT14((char)(uVar1 >> 0x20),
                                                 CONCAT13((char)(uVar1 >> 0x18),
                                                          CONCAT12((char)(uVar1 >> 0x10),
                                                                   (short)uVar6)))))) &
             0xffffffffffff0303 ^ 0x10101010101) & 0x3ffffffffffffff ^ 0x101000000000000;
    uVar2 = (CONCAT17((char)(uVar7 >> 0x38),
                      CONCAT16((char)(uVar2 >> 0x30),
                               CONCAT15((char)(uVar2 >> 0x28),
                                        CONCAT14((char)(uVar2 >> 0x20),
                                                 CONCAT13((char)(uVar2 >> 0x18),
                                                          CONCAT12((char)(uVar2 >> 0x10),
                                                                   (short)uVar7)))))) &
             0xffffffffffff0303 ^ 0x10101010101) & 0x3ffffffffffffff ^ 0x101000000000000;
  }
  else if (uVar5 == uVar3) {
    uVar4 = CONCAT44(uVar5,uVar5);
  }
  else {
    uVar4 = CONCAT44(uVar3,uVar5);
    uVar2 = *(ulong *)(param_3 + 8);
    uVar1 = *(ulong *)param_3;
  }
  *(char *)param_4 = (char)uVar4;
  *(char *)((long)param_4 + 2) = (char)((ulong)uVar4 >> 0x20);
  *(char *)((long)param_4 + 1) = (char)((ulong)uVar4 >> 8);
  *(char *)((long)param_4 + 3) = (char)((ulong)uVar4 >> 0x28);
  *(byte *)((long)param_4 + 4) =
       (byte)uVar1 | (char)(uVar1 >> 8) << 2 | (char)(uVar1 >> 0x10) << 4 |
       (char)(uVar1 >> 0x18) << 6;
  *(byte *)((long)param_4 + 5) =
       (byte)(uVar1 >> 0x20) | (char)(uVar1 >> 0x28) << 2 | (char)(uVar1 >> 0x30) << 4 |
       (char)(uVar1 >> 0x38) << 6;
  *(byte *)((long)param_4 + 6) =
       (byte)uVar2 | (char)(uVar2 >> 8) << 2 | (char)(uVar2 >> 0x10) << 4 |
       (char)(uVar2 >> 0x18) << 6;
  *(byte *)((long)param_4 + 7) =
       (byte)(uVar2 >> 0x20) | (char)(uVar2 >> 0x28) << 2 | (char)(uVar2 >> 0x30) << 4 |
       (char)(uVar2 >> 0x38) << 6;
  return;
}


