// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: infof
// Entry Point: 006cafe0
// Size: 172 bytes
// Signature: undefined __cdecl infof(char * param_1, ...)


/* LogManager::infof(char const*, ...) */

char * LogManager::infof(char *param_1,...)

{
  long lVar1;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  ppuStack_78 = &local_80;
  puStack_70 = &local_b0;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  uStack_68 = 0xffffff80ffffffd0;
  local_b0 = in_x2;
  local_a8 = in_x3;
  uStack_a0 = in_x4;
  local_98 = in_x5;
  uStack_90 = in_x6;
  local_88 = in_x7;
  local_80 = (undefined *)register0x00000008;
  Logger::infof(*(Logger **)param_1,in_x1,(int)&stack0xffffffffffffffd0 - 0x50);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


