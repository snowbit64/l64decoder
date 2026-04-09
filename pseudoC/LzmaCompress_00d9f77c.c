// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaCompress
// Entry Point: 00d9f77c
// Size: 212 bytes
// Signature: undefined LzmaCompress(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined4 param_11, undefined4 param_12, undefined4 param_13)


void LzmaCompress(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  long lVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  LzmaEncProps_Init(&local_98);
  local_90 = param_9;
  uStack_8c = param_10;
  local_88 = param_11;
  local_80 = param_12;
  local_6c = param_13;
  local_98 = param_7;
  uStack_94 = param_8;
  LzmaEncode(param_1,param_2,param_3,param_4,&local_98,param_5,param_6,0,0,&PTR_FUN_01048400,
             &PTR_FUN_01048400);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


