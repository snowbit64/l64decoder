// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a927a8
// Entry Point: 00a927a8
// Size: 160 bytes
// Signature: undefined FUN_00a927a8(void)


void FUN_00a927a8(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
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
  local_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  local_70 = (undefined *)register0x00000008;
  iVar2 = vsnprintf(param_1,0x100,
                    "#?RADIANCE\n#Made with GIANTS Engine\nFORMAT=32-bit_rle_rgbe\n\n-Y %u +X %u\n",
                    &local_70);
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}


