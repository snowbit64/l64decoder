// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: New
// Entry Point: 00c17be4
// Size: 184 bytes
// Signature: undefined __cdecl New(char * param_1, SHC_PoolAllocator * param_2)


/* SHC_String::New(char const*, SHC_PoolAllocator&) */

ulong * SHC_String::New(char *param_1,SHC_PoolAllocator *param_2)

{
  ulong *puVar1;
  size_t __n;
  undefined *__dest;
  ulong uVar2;
  
  puVar1 = (ulong *)SHC_PoolAllocator::allocate(param_2,0x20);
  puVar1[3] = (ulong)param_2;
  __n = strlen(param_1);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (undefined *)((long)puVar1 + 1);
    *(char *)puVar1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_00c17c78;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (undefined *)SHC_PoolAllocator::allocate(param_2,uVar2);
    puVar1[1] = __n;
    puVar1[2] = (ulong)__dest;
    *puVar1 = uVar2 | 1;
  }
  memcpy(__dest,param_1,__n);
LAB_00c17c78:
  __dest[__n] = 0;
  return puVar1;
}


