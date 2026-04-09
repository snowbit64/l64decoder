// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DERLengthEncode
// Entry Point: 00ccc1cc
// Size: 364 bytes
// Signature: undefined __cdecl DERLengthEncode(BufferedTransformation * param_1, ulong param_2)


/* CryptoPP::DERLengthEncode(CryptoPP::BufferedTransformation&, unsigned long) */

long CryptoPP::DERLengthEncode(BufferedTransformation *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined local_54 [4];
  byte local_50 [4];
  undefined local_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (param_2 < 0x80) {
    local_54[0] = (undefined)param_2;
    lVar6 = 1;
    (**(code **)(*(long *)param_1 + 0x38))(param_1,local_54,1,0,1);
  }
  else {
    uVar5 = 0;
    uVar4 = 0x40;
    do {
      uVar2 = uVar5 + uVar4 >> 1;
      uVar1 = uVar2;
      if (param_2 >> ((ulong)uVar2 & 0x3f) != 0) {
        uVar1 = uVar4;
        uVar5 = uVar2;
      }
      uVar4 = uVar1;
    } while (8 < uVar1 - uVar5);
    local_50[0] = (byte)(uVar1 >> 3) | 0x80;
    (**(code **)(*(long *)param_1 + 0x38))(param_1,local_50,1,0,1);
    uVar5 = 0;
    uVar4 = 0x40;
    do {
      uVar2 = uVar5 + uVar4 >> 1;
      uVar1 = uVar2;
      if (param_2 >> ((ulong)uVar2 & 0x3f) != 0) {
        uVar1 = uVar4;
        uVar5 = uVar2;
      }
      uVar4 = uVar1;
    } while (8 < uVar1 - uVar5);
    if (uVar1 < 8) {
      lVar6 = 1;
    }
    else {
      uVar5 = uVar1 >> 3;
      uVar1 = uVar1 & 0xfffffff8;
      uVar4 = uVar5 - 1;
      do {
        uVar1 = uVar1 - 8;
        local_4c[0] = (undefined)(param_2 >> ((ulong)uVar1 & 0x3f));
        (**(code **)(*(long *)param_1 + 0x38))(param_1,local_4c,1,0,1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      lVar6 = (ulong)uVar4 + 2;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar6;
}


