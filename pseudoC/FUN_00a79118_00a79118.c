// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00a79118
// Entry Point: 00a79118
// Size: 168 bytes
// Signature: undefined FUN_00a79118(void)


void FUN_00a79118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  long lVar1;
  long lVar2;
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
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_58 = 0xffffff80ffffffe0;
  local_90 = param_6;
  local_88 = param_7;
  uStack_80 = param_8;
  local_78 = param_9;
  local_70 = (undefined *)register0x00000008;
  __vsnprintf_chk(param_2,param_4,0,param_3,
                  " Texture array layer property mismatch: width %u vs %u, height %u vs %u, depth %u vs %u, array size %u vs %u, mipmap count %u vs %u, channels %u vs %u, type %s vs %s, texture type %s vs %s, data size %u vs %u, format %s vs %s, custom mips %s vs %s "
                  ,&local_70,param_8,param_9,param_1);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


