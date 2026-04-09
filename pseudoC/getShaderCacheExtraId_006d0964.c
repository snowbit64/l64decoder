// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderCacheExtraId
// Entry Point: 006d0964
// Size: 224 bytes
// Signature: undefined __cdecl getShaderCacheExtraId(uint param_1, uint param_2, uint param_3, bool param_4, bool param_5)


/* MaterialShaderManager::getShaderCacheExtraId(unsigned int, unsigned int, unsigned int, bool,
   bool) */

void MaterialShaderManager::getShaderCacheExtraId
               (uint param_1,uint param_2,uint param_3,bool param_4,bool param_5)

{
  long lVar1;
  size_t __n;
  ulong *in_x8;
  undefined *__dest;
  ulong uVar2;
  char acStack_248 [512];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_006d2300(acStack_248,param_2,param_3,param_4,param_1,param_2,param_3,param_4,param_5);
  __n = strlen(acStack_248);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_006d0a0c;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
  }
  memcpy(__dest,acStack_248,__n);
LAB_006d0a0c:
  __dest[__n] = 0;
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


