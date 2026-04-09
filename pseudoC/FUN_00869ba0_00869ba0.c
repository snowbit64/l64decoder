// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00869ba0
// Entry Point: 00869ba0
// Size: 156 bytes
// Signature: undefined FUN_00869ba0(void)


void FUN_00869ba0(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  ppuStack_68 = &local_70;
  puStack_60 = &local_90;
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_78 = param_8;
  local_70 = (undefined *)register0x00000008;
  iVar2 = vsnprintf(param_1,0x80,param_4,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


