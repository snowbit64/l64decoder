// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: outchar
// Entry Point: 00b918ec
// Size: 164 bytes
// Signature: undefined __thiscall outchar(Preprocessor * this, char param_1)


/* Preprocessor::outchar(char) */

void __thiscall Preprocessor::outchar(Preprocessor *this,char param_1)

{
  long lVar1;
  long *plVar2;
  char **ppcVar3;
  char local_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ppcVar3 = *(char ***)(*(long *)(this + 0x38) + 0x78);
  local_2c[0] = param_1;
  if (*ppcVar3 != (char *)0x0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append(*ppcVar3,(ulong)local_2c);
  }
  plVar2 = (long *)ppcVar3[1];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,local_2c,1);
  }
  if (local_2c[0] == '\n') {
    *(int *)(ppcVar3 + 5) = *(int *)(ppcVar3 + 5) + 1;
  }
  *(bool *)((long)ppcVar3 + 0x2e) = local_2c[0] == '\n';
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


