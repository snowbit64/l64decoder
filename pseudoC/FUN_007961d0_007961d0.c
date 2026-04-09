// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007961d0
// Entry Point: 007961d0
// Size: 204 bytes
// Signature: undefined FUN_007961d0(void)


void FUN_007961d0(uchar **param_1)

{
  uchar *puVar1;
  uchar uVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  uchar *puVar6;
  byte *pbVar7;
  byte abStack_48 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  puVar6 = *param_1;
  sVar4 = strlen((char *)puVar6);
  MD5Hash::getMD5Hash(puVar6,(uint)sVar4,abStack_48);
  puVar6 = (uchar *)operator_new__(0x21);
  lVar5 = 0;
  pbVar7 = abStack_48;
  do {
    puVar1 = puVar6 + lVar5;
    lVar5 = lVar5 + 2;
    uVar2 = "0123456789abcdef"[(ulong)*pbVar7 & 0xf];
    *puVar1 = "0123456789abcdef"[*pbVar7 >> 4];
    puVar1[1] = uVar2;
    pbVar7 = pbVar7 + 1;
  } while (lVar5 != 0x20);
  puVar6[0x20] = '\0';
  param_1[0x20] = puVar6;
  *(undefined4 *)(param_1 + 0x21) = 6;
  *(ushort *)((long)param_1 + 0x10c) = *(ushort *)((long)param_1 + 0x10c) | 1;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


