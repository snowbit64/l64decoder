// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c31e84
// Entry Point: 00c31e84
// Size: 80 bytes
// Signature: undefined FUN_00c31e84(void)


void FUN_00c31e84(undefined8 *param_1,char *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pbVar1 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar1 = param_3 + 1;
  }
  puVar2 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     (param_2,(ulong)pbVar1);
  uVar5 = puVar2[1];
  uVar4 = *puVar2;
  *puVar2 = 0;
  puVar2[1] = 0;
  uVar3 = puVar2[2];
  puVar2[2] = 0;
  param_1[1] = uVar5;
  *param_1 = uVar4;
  param_1[2] = uVar3;
  return;
}


