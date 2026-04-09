// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: formatIncludeDirective
// Entry Point: 00b92cdc
// Size: 240 bytes
// Signature: undefined __thiscall formatIncludeDirective(Preprocessor * this, char * param_1, bool param_2)


/* Preprocessor::formatIncludeDirective(char const*, bool) */

void __thiscall Preprocessor::formatIncludeDirective(Preprocessor *this,char *param_1,bool param_2)

{
  long lVar1;
  size_t __n;
  ulong *in_x8;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *__dest;
  ulong uVar4;
  char acStack_1048 [4096];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = 0x22;
  uVar2 = uVar3;
  if (((ulong)param_1 & 1) == 0) {
    uVar2 = 0x3c;
    uVar3 = 0x3e;
  }
  FUN_00b92c38(acStack_1048,param_1,"#include %c%s%c\n",uVar2,this,uVar3);
  __n = strlen(acStack_1048);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00b92d90;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar4);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
  }
  memcpy(__dest,acStack_1048,__n);
LAB_00b92d90:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


