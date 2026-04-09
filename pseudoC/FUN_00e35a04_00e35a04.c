// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e35a04
// Entry Point: 00e35a04
// Size: 244 bytes
// Signature: undefined FUN_00e35a04(void)


int FUN_00e35a04(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if ((*(int *)(param_1 + 0x10138) != 0) && (uVar2 != 0)) {
    pbVar4 = (byte *)(param_1 + 0x128);
    uVar3 = (ulong)uVar2;
    do {
      uVar3 = uVar3 - 1;
      uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x10170) +
                              (*(ulong *)(param_1 + 0x10158) & 0xff ^ (ulong)*pbVar4) * 4) ^
              *(ulong *)(param_1 + 0x10158) >> 8;
      lVar6 = (*(long *)(param_1 + 0x10160) + (uVar5 & 0xff)) * 0x8088405 + 1;
      uVar7 = (uint)*(ulong *)(param_1 + 0x10168);
      *(ulong *)(param_1 + 0x10158) = uVar5;
      *(long *)(param_1 + 0x10160) = lVar6;
      uVar1 = uVar7 & 0xfffd;
      *(ulong *)(param_1 + 0x10168) =
           (ulong)*(uint *)(*(long *)(param_1 + 0x10170) +
                           ((ulong)(uVar7 ^ (uint)lVar6 >> 0x18) & 0xff) * 4) ^
           *(ulong *)(param_1 + 0x10168) >> 8;
      *pbVar4 = *pbVar4 ^ (byte)((uVar1 | 2) * (uVar1 ^ 3) >> 8);
      pbVar4 = pbVar4 + 1;
    } while (uVar3 != 0);
  }
  uVar3 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58),param_1 + 0x128
                     ,(ulong)uVar2);
  uVar2 = *(uint *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xec) = 0;
  lVar6 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(ulong *)(param_1 + 0x10148) = *(long *)(param_1 + 0x10148) + (ulong)uVar2;
  *(long *)(param_1 + 0x10150) = *(long *)(param_1 + 0x10150) + lVar6;
  return -(uint)(uVar3 != uVar2);
}


