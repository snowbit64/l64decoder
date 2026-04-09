// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Print
// Entry Point: 00e01b34
// Size: 396 bytes
// Signature: undefined __cdecl Print(char * param_1, ...)


/* tinyxml2::XMLPrinter::Print(char const*, ...) */

void tinyxml2::XMLPrinter::Print(char *param_1,...)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  void *__dest;
  char *in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  char *__src;
  int iVar5;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined **ppuStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puVar6;
  undefined *local_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_100 = in_x2;
  local_f8 = in_x3;
  uStack_f0 = in_x4;
  local_e8 = in_x5;
  uStack_e0 = in_x6;
  local_d8 = in_x7;
  if (*(FILE **)(param_1 + 0x78) == (FILE *)0x0) {
    uStack_78 = 0xffffff80ffffffd0;
    local_90 = (undefined *)register0x00000008;
    ppuStack_88 = &local_d0;
    puStack_80 = &local_100;
    iVar4 = vsnprintf((char *)0x0,0,in_x1,&local_90);
    iVar5 = *(int *)(param_1 + 0x130);
    iVar3 = iVar5 + iVar4;
    if (*(int *)(param_1 + 300) < iVar3) {
      iVar1 = iVar3 * 2;
      puVar6 = (undefined *)register0x00000008;
      __dest = operator_new__((long)iVar1);
      __src = *(char **)(param_1 + 0x110);
      memcpy(__dest,__src,(long)iVar5);
      if ((__src != param_1 + 0x118) && (__src != (char *)0x0)) {
        operator_delete__(__src);
        iVar5 = *(int *)(param_1 + 0x130);
        iVar3 = iVar5 + iVar4;
      }
      *(void **)(param_1 + 0x110) = __dest;
      *(int *)(param_1 + 300) = iVar1;
      local_90 = puVar6;
    }
    else {
      __dest = *(void **)(param_1 + 0x110);
      local_90 = (undefined *)register0x00000008;
    }
    *(int *)(param_1 + 0x130) = iVar3;
    uStack_78 = 0xffffff80ffffffd0;
    ppuStack_88 = &local_d0;
    puStack_80 = &local_100;
    iVar3 = vsnprintf((char *)((long)__dest + (long)iVar5 + -1),(long)(iVar4 + 1),in_x1,&local_90);
    if (*(long *)(lVar2 + 0x28) != local_70) goto LAB_00e01cbc;
  }
  else {
    uStack_b8 = 0xffffff80ffffffd0;
    local_d0 = (undefined *)register0x00000008;
    ppuStack_c8 = &local_d0;
    puStack_c0 = &local_100;
    iVar3 = vfprintf(*(FILE **)(param_1 + 0x78),in_x1,&local_d0);
    if (*(long *)(lVar2 + 0x28) != local_70) {
LAB_00e01cbc:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar3);
    }
  }
  return;
}


