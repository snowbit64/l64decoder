// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHashLine
// Entry Point: 00c1a4fc
// Size: 344 bytes
// Signature: undefined __thiscall onHashLine(GISLParserContext * this, char * param_1, int param_2)


/* GISLParserContext::onHashLine(char const*, int) */

void __thiscall GISLParserContext::onHashLine(GISLParserContext *this,char *param_1,int param_2)

{
  ulong uVar1;
  char **ppcVar2;
  int iVar3;
  size_t sVar4;
  char *__dest;
  void *__dest_00;
  void *__src;
  ulong __n;
  
  if (this[0x90] != (GISLParserContext)0x0) {
    *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
    return;
  }
  if (param_1 == (char *)0x0) {
    __dest = (char *)0x0;
  }
  else {
    if ((*(char **)(this + 0x98) != (char *)0x0) &&
       (iVar3 = strcmp(param_1,*(char **)(this + 0x98)), iVar3 == 0)) goto LAB_00c1a624;
    sVar4 = strlen(param_1);
    __dest = (char *)operator_new__(sVar4 + 1);
    strcpy(__dest,param_1);
    ppcVar2 = *(char ***)(this + 0xb0);
    if (ppcVar2 == *(char ***)(this + 0xb8)) {
      __src = *(void **)(this + 0xa8);
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
        __dest_00 = (void *)0x0;
      }
      else {
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest_00 = operator_new(uVar1 << 3);
      }
      ppcVar2 = (char **)((long)__dest_00 + ((long)__n >> 3) * 8);
      *ppcVar2 = __dest;
      if (0 < (long)__n) {
        memcpy(__dest_00,__src,__n);
      }
      *(void **)(this + 0xa8) = __dest_00;
      *(char ***)(this + 0xb0) = ppcVar2 + 1;
      *(void **)(this + 0xb8) = (void *)((long)__dest_00 + uVar1 * 8);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
      *ppcVar2 = __dest;
      *(char ***)(this + 0xb0) = ppcVar2 + 1;
    }
  }
  *(char **)(this + 0x98) = __dest;
LAB_00c1a624:
  *(int *)(this + 0xa0) = param_2;
  return;
}


