// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sendout
// Entry Point: 00b8f44c
// Size: 396 bytes
// Signature: undefined __thiscall sendout(Preprocessor * this, char * param_1, uint param_2, bool param_3)


/* Preprocessor::sendout(char const*, unsigned int, bool) */

void __thiscall Preprocessor::sendout(Preprocessor *this,char *param_1,uint param_2,bool param_3)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  char **ppcVar6;
  char local_4c [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + (ulong)*(uint *)(this + 300) * 4 + 100) == 0) {
    uVar5 = (ulong)param_2;
    if (param_3) {
      if (param_2 != 0) {
        uVar5 = 0;
        do {
          cVar2 = param_1[uVar5];
          if (cVar2 == *(char *)(*(long *)(this + 0x30) + 0x30)) {
            uVar5 = uVar5 + 1;
            if ((uint)uVar5 == param_2) break;
            cVar2 = param_1[uVar5];
          }
          ppcVar6 = *(char ***)(*(long *)(this + 0x38) + 0x78);
          local_4c[0] = cVar2;
          if (*ppcVar6 != (char *)0x0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (*ppcVar6,(ulong)local_4c);
          }
          plVar4 = (long *)ppcVar6[1];
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,local_4c,1);
          }
          if (local_4c[0] == '\n') {
            *(int *)(ppcVar6 + 5) = *(int *)(ppcVar6 + 5) + 1;
          }
          uVar1 = (int)uVar5 + 1;
          uVar5 = (ulong)uVar1;
          *(bool *)((long)ppcVar6 + 0x2e) = local_4c[0] == '\n';
        } while (uVar1 < param_2);
      }
    }
    else {
      ppcVar6 = *(char ***)(*(long *)(this + 0x38) + 0x78);
      if (*ppcVar6 != (char *)0x0) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(*ppcVar6,(ulong)param_1);
      }
      plVar4 = (long *)ppcVar6[1];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,param_1,uVar5);
      }
      if (param_2 != 0) {
        do {
          cVar2 = *param_1;
          if (cVar2 == '\n') {
            *(int *)(ppcVar6 + 5) = *(int *)(ppcVar6 + 5) + 1;
          }
          uVar5 = uVar5 - 1;
          param_1 = param_1 + 1;
          *(bool *)((long)ppcVar6 + 0x2e) = cVar2 == '\n';
        } while (uVar5 != 0);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


