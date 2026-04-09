// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: printf
// Entry Point: 00b2d364
// Size: 296 bytes
// Signature: undefined __cdecl printf(char * param_1, ...)


/* XMLPrinter::printf(char const*, ...) */

void XMLPrinter::printf(char *param_1,...)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *pcVar4;
  byte *pbVar5;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined *puVar6;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uStack_78 = 0xffffff80ffffffd0;
  local_e0 = in_x2;
  local_d8 = in_x3;
  uStack_d0 = in_x4;
  local_c8 = in_x5;
  uStack_c0 = in_x6;
  local_b8 = in_x7;
  local_90 = (undefined *)register0x00000008;
  puStack_88 = &stack0xffffffffffffff50;
  puStack_80 = &local_e0;
  iVar3 = vsnprintf((char *)0x0,0,in_x1,&local_90);
  pbVar5 = (byte *)(param_1 + 0x38);
  uVar1 = (ulong)(*pbVar5 >> 1);
  if ((*pbVar5 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x40);
  }
  puVar6 = (undefined *)register0x00000008;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  resize((ulong)pbVar5,(char)iVar3 + (char)uVar1);
  pcVar4 = *(char **)(param_1 + 0x48);
  if ((*pbVar5 & 1) == 0) {
    pcVar4 = param_1 + 0x39;
  }
  uStack_78 = 0xffffff80ffffffd0;
  local_90 = puVar6;
  puStack_88 = &stack0xffffffffffffff50;
  puStack_80 = &local_e0;
  iVar3 = vsnprintf(pcVar4 + (uVar1 & 0xffffffff),(long)(iVar3 + 1),in_x1,&local_90);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}


