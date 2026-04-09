// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addParameter
// Entry Point: 00c28970
// Size: 296 bytes
// Signature: undefined __thiscall addParameter(IR_Function * this, char * param_1, char * param_2, IR_Type * param_3, IR_QualFlags param_4)


/* IR_Function::addParameter(char const*, char const*, IR_Type*, IR_QualFlags) */

void __thiscall
IR_Function::addParameter
          (IR_Function *this,char *param_1,char *param_2,IR_Type *param_3,IR_QualFlags param_4)

{
  ulong uVar1;
  char **ppcVar2;
  void *__dest;
  void *__src;
  ulong __n;
  
  ppcVar2 = *(char ***)(this + 0x70);
  if (ppcVar2 == *(char ***)(this + 0x78)) {
    __src = *(void **)(this + 0x68);
    __n = (long)ppcVar2 - (long)__src;
    uVar1 = ((long)__n >> 5) + 1;
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar1 <= (ulong)((long)__n >> 4)) {
      uVar1 = (long)__n >> 4;
    }
    if (0x7fffffffffffffdf < __n) {
      uVar1 = 0x7ffffffffffffff;
    }
    if (uVar1 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar1 * 0x20);
    ppcVar2 = (char **)((long)__dest + ((long)__n >> 5) * 0x20);
    *ppcVar2 = param_1;
    ppcVar2[1] = param_2;
    ppcVar2[2] = (char *)param_3;
    *(IR_QualFlags *)(ppcVar2 + 3) = param_4;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x68) = __dest;
    *(char ***)(this + 0x70) = ppcVar2 + 4;
    *(void **)(this + 0x78) = (void *)((long)__dest + uVar1 * 0x20);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  else {
    *ppcVar2 = param_1;
    ppcVar2[1] = param_2;
    ppcVar2[2] = (char *)param_3;
    *(IR_QualFlags *)(ppcVar2 + 3) = param_4;
    *(char ***)(this + 0x70) = ppcVar2 + 4;
  }
  return;
}


