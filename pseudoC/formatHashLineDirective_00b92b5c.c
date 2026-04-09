// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: formatHashLineDirective
// Entry Point: 00b92b5c
// Size: 220 bytes
// Signature: undefined __thiscall formatHashLineDirective(Preprocessor * this, char * param_1, uint param_2)


/* Preprocessor::formatHashLineDirective(char const*, unsigned int) */

void __thiscall Preprocessor::formatHashLineDirective(Preprocessor *this,char *param_1,uint param_2)

{
  long lVar1;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar2;
  char acStack_1048 [4096];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00b92c38(acStack_1048,param_1,"#line \"%s\" %u\n",this,(ulong)param_1 & 0xffffffff);
  __n = strlen(acStack_1048);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00b92bfc;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,acStack_1048,__n);
LAB_00b92bfc:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


