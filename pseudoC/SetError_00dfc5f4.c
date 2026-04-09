// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetError
// Entry Point: 00dfc5f4
// Size: 456 bytes
// Signature: undefined __cdecl SetError(XMLError param_1, int param_2, char * param_3, ...)


/* tinyxml2::XMLDocument::SetError(tinyxml2::XMLError, int, char const*, ...) */

void tinyxml2::XMLDocument::SetError(XMLError param_1,int param_2,char *param_3,...)

{
  long lVar1;
  ulong uVar2;
  void *__src;
  long lVar3;
  void *__dest;
  char *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar4;
  void **ppvVar5;
  undefined8 in_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  long local_58;
  
  uVar2 = (ulong)param_1;
  uVar4 = (ulong)(uint)param_2;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(int *)(uVar2 + 0x6c) = param_2;
  *(int *)(uVar2 + 0x90) = (int)param_3;
  local_c0 = in_x4;
  uStack_b8 = in_x5;
  local_b0 = in_x6;
  uStack_a8 = in_x7;
  if (((*(byte *)(uVar2 + 0x79) >> 1 & 1) != 0) && (*(void **)(uVar2 + 0x80) != (void *)0x0)) {
    operator_delete__(*(void **)(uVar2 + 0x80));
  }
  ppvVar5 = (void **)(uVar2 + 0x80);
  *ppvVar5 = (void *)0x0;
  *(undefined4 *)(uVar2 + 0x78) = 0;
  *(undefined8 *)(uVar2 + 0x88) = 0;
  __src = operator_new__(1000);
  FUN_00dfa4ec(__src,1000,1000,"Error=%s ErrorID=%d (0x%x) Line number=%d",
               *(undefined8 *)(_errorNames + uVar4 * 8),uVar4,uVar4,(ulong)param_3 & 0xffffffff,
               in_d0);
  if (in_x3 != (char *)0x0) {
    lVar3 = __strlen_chk(__src,1000);
    FUN_00dfa4ec((long)__src + lVar3,0xffffffffffffffff,1000 - lVar3,&DAT_004f56f4);
    lVar3 = __strlen_chk(__src,1000);
    puStack_78 = &stack0xffffffffffffff60;
    puStack_70 = &local_c0;
    uStack_68 = 0xffffff80ffffffe0;
    local_80 = (undefined *)register0x00000008;
    vsnprintf((char *)((long)__src + lVar3),1000 - lVar3,in_x3,&local_80);
  }
  if (((*(byte *)(uVar2 + 0x79) >> 1 & 1) != 0) && (*ppvVar5 != (void *)0x0)) {
    operator_delete__(*ppvVar5);
  }
  *(undefined4 *)(uVar2 + 0x78) = 0;
  *ppvVar5 = (void *)0x0;
  *(undefined8 *)(uVar2 + 0x88) = 0;
  lVar3 = __strlen_chk(__src,1000);
  __dest = operator_new__(lVar3 + 1U);
  *(void **)(uVar2 + 0x80) = __dest;
  memcpy(__dest,__src,lVar3 + 1U);
  *(long *)(uVar2 + 0x88) = (long)__dest + lVar3;
  *(undefined4 *)(uVar2 + 0x78) = 0x200;
  operator_delete__(__src);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


