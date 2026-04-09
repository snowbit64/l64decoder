// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: openElement
// Entry Point: 00b2d124
// Size: 444 bytes
// Signature: undefined __thiscall openElement(XMLPrinter * this, char * param_1, bool param_2)


/* XMLPrinter::openElement(char const*, bool) */

void __thiscall XMLPrinter::openElement(XMLPrinter *this,char *param_1,bool param_2)

{
  ulong uVar1;
  char **ppcVar2;
  undefined *puVar3;
  void *__dest;
  void *__src;
  int iVar4;
  ulong __n;
  
  if (this[0x17] != (XMLPrinter)0x0) {
    this[0x17] = (XMLPrinter)0x0;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),0x4eb0ab);
  }
  ppcVar2 = *(char ***)(this + 0x28);
  if (ppcVar2 == *(char ***)(this + 0x30)) {
    __src = *(void **)(this + 0x20);
    __n = (long)ppcVar2 - (long)__src;
    uVar1 = ((long)__n >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 2)) {
      uVar1 = (long)__n >> 2;
    }
    if (0x7ffffffffffffff7 < __n) {
      uVar1 = 0x1fffffffffffffff;
    }
    if (uVar1 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
    }
    ppcVar2 = (char **)((long)__dest + ((long)__n >> 3) * 8);
    *ppcVar2 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x20) = __dest;
    *(char ***)(this + 0x28) = ppcVar2 + 1;
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar1 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppcVar2 = param_1;
    *(char ***)(this + 0x28) = ppcVar2 + 1;
  }
  if (((*(int *)(this + 0x10) < 0) && (this[8] == (XMLPrinter)0x0)) && (!param_2)) {
    puVar3 = &DAT_004fddf9;
    if (this[0x19] != (XMLPrinter)0x0) {
      puVar3 = &DAT_004cd8cc;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)(this + 0x38),(ulong)puVar3);
  }
  if ((!param_2) && (iVar4 = *(int *)(this + 0xc), 0 < iVar4)) {
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((char *)(this + 0x38),0x4de833);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  printf((char *)this,&DAT_004f5499,param_1);
  this[8] = (XMLPrinter)0x0;
  this[0x17] = (XMLPrinter)0x1;
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return;
}


