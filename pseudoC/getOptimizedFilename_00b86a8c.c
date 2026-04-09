// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOptimizedFilename
// Entry Point: 00b86a8c
// Size: 232 bytes
// Signature: undefined __thiscall getOptimizedFilename(DensityMap * this, char * param_1, basic_string * param_2)


/* DensityMap::getOptimizedFilename(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
DensityMap::getOptimizedFilename(DensityMap *this,char *param_1,basic_string *param_2)

{
  allocator *paVar1;
  long lVar2;
  long lVar3;
  allocator *paVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_2);
  paVar4 = *(allocator **)(param_2 + 2);
  lVar2 = *(long *)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    lVar2 = (long)param_2 + 1;
    paVar4 = (allocator *)(ulong)(*(byte *)param_2 >> 1);
  }
  do {
    if (paVar4 == (allocator *)0x0) goto LAB_00b86b28;
    paVar1 = paVar4 + lVar2 + -1;
    paVar4 = paVar4 + -1;
  } while (*paVar1 != (allocator)0x2e);
  if (paVar4 != (allocator *)0xffffffffffffffff) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_50,(ulong)param_2,0,paVar4);
    if ((*(byte *)param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 4));
    }
    *(undefined8 *)(param_2 + 2) = uStack_48;
    *(undefined8 *)param_2 = local_50;
    *(undefined8 *)(param_2 + 4) = local_40;
  }
LAB_00b86b28:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)param_2);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


