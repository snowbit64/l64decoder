// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f173fc
// Entry Point: 00f173fc
// Size: 272 bytes
// Signature: undefined FUN_00f173fc(void)


long FUN_00f173fc(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar6;
  int iVar3;
  byte bVar5;
  byte bVar7;
  undefined8 uVar4;
  byte bVar8;
  undefined8 uVar9;
  
  switch(*(uint *)((long)param_2 + 0xc)) {
  case 1:
    uVar2 = *(uint *)param_2;
    break;
  default:
    uVar2 = (*(uint *)param_2 ^ *(uint *)param_2 >> 0x10) * -0x7a143595;
    uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
    uVar2 = uVar2 ^ uVar2 >> 0x10;
    break;
  case 3:
    uVar2 = *(uint *)((long)param_2 + 4) & 0x7fffffff;
    uVar1 = (*(uint *)param_2 ^ uVar2 >> 0x12) * 0x5bd1e995;
    uVar2 = (uVar2 ^ uVar1 >> 0x16) * 0x5bd1e995;
    uVar2 = (uVar2 ^ (uVar1 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995;
    break;
  case 4:
    uVar9 = *(undefined8 *)((long)param_2 + 4);
    uVar4 = NEON_cmeq(uVar9,0x8000000080000000,4);
    bVar5 = (byte)((ulong)uVar9 >> 0x10) & ~(byte)((ulong)uVar4 >> 0x10);
    bVar6 = (byte)((ulong)uVar9 >> 0x18) & ~(byte)((ulong)uVar4 >> 0x18);
    bVar7 = (byte)((ulong)uVar9 >> 0x30) & ~(byte)((ulong)uVar4 >> 0x30);
    bVar8 = (byte)((ulong)uVar9 >> 0x38) & ~(byte)((ulong)uVar4 >> 0x38);
    iVar3 = CONCAT13(bVar6,CONCAT12(bVar5,CONCAT11(bVar6 >> 1 ^
                                                   (byte)((ulong)uVar9 >> 8) &
                                                   ~(byte)((ulong)uVar4 >> 8),
                                                   (byte)(CONCAT11(bVar6,bVar5) >> 1) ^
                                                   (byte)uVar9 & ~(byte)uVar4)));
    uVar2 = 0;
    if (*(uint *)param_2 != 0x80000000) {
      uVar2 = *(uint *)param_2;
    }
    uVar2 = iVar3 * 0x127409f ^ (uVar2 ^ uVar2 >> 0x11) * 0x466f45d ^
            (int)(CONCAT17(bVar8,CONCAT16(bVar7,CONCAT15(bVar8 >> 1 ^
                                                         (byte)((ulong)uVar9 >> 0x28) &
                                                         ~(byte)((ulong)uVar4 >> 0x28),
                                                         CONCAT14((byte)(uint)(((ulong)CONCAT11(
                                                  bVar8,bVar7) << 0x30) >> 0x31) ^
                                                  (byte)((ulong)uVar9 >> 0x20) &
                                                  ~(byte)((ulong)uVar4 >> 0x20),iVar3)))) >> 0x20) *
            0x4f9ffb7;
    break;
  case 5:
    uVar2 = *(uint *)(*param_2 + 0x10);
  }
  return *(long *)(param_1 + 0x20) +
         (long)(int)(uVar2 & (-1 << (ulong)(*(byte *)(param_1 + 6) & 0x1f) ^ 0xffffffffU)) * 0x20;
}


