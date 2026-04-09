// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLine
// Entry Point: 00b9258c
// Size: 996 bytes
// Signature: undefined __thiscall setLine(OutputContext * this, char * param_1, uint param_2, uint param_3)


/* Preprocessor::OutputContext::setLine(char const*, unsigned int, unsigned int) */

void __thiscall
Preprocessor::OutputContext::setLine(OutputContext *this,char *param_1,uint param_2,uint param_3)

{
  size_t sVar1;
  OutputContext OVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  long *plVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  byte local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (this[0x2c] == (OutputContext)0x0) {
    if (this[0x2d] != (OutputContext)0x0) {
      sVar7 = strlen(param_1);
      OVar2 = this[0x10];
      sVar1 = (ulong)((byte)OVar2 >> 1);
      if (((byte)OVar2 & 1) != 0) {
        sVar1 = *(size_t *)(this + 0x18);
      }
                    /* try { // try from 00b92734 to 00b92743 has its CatchHandler @ 00b92974 */
      if ((sVar7 == sVar1) &&
         (iVar6 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)(this + 0x10),0,(char *)0xffffffffffffffff,(ulong)param_1),
         iVar6 == 0)) {
        uVar9 = *(uint *)(this + 0x28);
        while (uVar9 < param_2) {
          if (*(char **)this != (char *)0x0) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (*(char **)this,0x4fddf9);
          }
          plVar8 = *(long **)(this + 8);
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004fddf9,1);
          }
          this[0x2e] = (OutputContext)0x1;
          uVar9 = *(int *)(this + 0x28) + 1;
          *(uint *)(this + 0x28) = uVar9;
        }
      }
    }
    goto LAB_00b92930;
  }
  uVar9 = param_2;
  sVar7 = strlen(param_1);
  OVar2 = this[0x10];
  sVar1 = (ulong)((byte)OVar2 >> 1);
  if (((byte)OVar2 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x18);
  }
  if (sVar7 == sVar1) {
                    /* try { // try from 00b925f8 to 00b92607 has its CatchHandler @ 00b92978 */
    uVar10 = 0xffffffffffffffff;
    iVar6 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
                      ((ulong)(this + 0x10),0,(char *)0xffffffffffffffff,(ulong)param_1);
    uVar9 = (uint)uVar10;
    if (iVar6 != 0) goto LAB_00b9260c;
    uVar11 = *(uint *)(this + 0x28);
    if ((uVar11 < param_2) && (param_3 != 0)) {
      iVar6 = param_3 - 1;
      do {
        if (*(char **)this != (char *)0x0) {
          uVar10 = 1;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    (*(char **)this,0x4fddf9);
        }
        plVar8 = *(long **)(this + 8);
        if (plVar8 != (long *)0x0) {
          uVar10 = 1;
          (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004fddf9);
        }
        uVar9 = (uint)uVar10;
        bVar5 = iVar6 != 0;
        iVar6 = iVar6 + -1;
        this[0x2e] = (OutputContext)0x1;
        uVar11 = *(int *)(this + 0x28) + 1;
        *(uint *)(this + 0x28) = uVar11;
      } while ((uVar11 < param_2) && (bVar5));
    }
    if (uVar11 == param_2) goto LAB_00b92930;
    if (this[0x2e] == (OutputContext)0x0) {
      if (*(char **)this != (char *)0x0) {
        uVar9 = 1;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(*(char **)this,0x4fddf9);
      }
      plVar8 = *(long **)(this + 8);
      if (plVar8 != (long *)0x0) {
        uVar9 = 1;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004fddf9);
      }
      this[0x2e] = (OutputContext)0x1;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
    }
    formatHashLineDirective((Preprocessor *)param_1,(char *)(ulong)param_2,uVar9);
    uVar12 = (ulong)(local_70[0] >> 1);
    pcVar13 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      uVar12 = local_68;
      pcVar13 = local_60;
    }
    if (*(char **)this != (char *)0x0) {
                    /* try { // try from 00b928bc to 00b928df has its CatchHandler @ 00b92970 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(*(char **)this,(ulong)pcVar13);
    }
    plVar8 = *(long **)(this + 8);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,pcVar13,uVar12 & 0xffffffff);
    }
    if ((int)uVar12 != 0) {
      uVar12 = uVar12 & 0xffffffff;
      do {
        cVar3 = *pcVar13;
        if (cVar3 == '\n') {
          *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
        }
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar13 + 1;
        this[0x2e] = (OutputContext)(cVar3 == '\n');
      } while (uVar12 != 0);
    }
  }
  else {
LAB_00b9260c:
    if (this[0x2e] == (OutputContext)0x0) {
      if (*(char **)this != (char *)0x0) {
        uVar9 = 1;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append(*(char **)this,0x4fddf9);
      }
      plVar8 = *(long **)(this + 8);
      if (plVar8 != (long *)0x0) {
        uVar9 = 1;
        (**(code **)(*plVar8 + 0x30))(plVar8,&DAT_004fddf9);
      }
      this[0x2e] = (OutputContext)0x1;
      *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
    }
    formatHashLineDirective((Preprocessor *)param_1,(char *)(ulong)param_2,uVar9);
    uVar12 = (ulong)(local_70[0] >> 1);
    pcVar13 = (char *)((ulong)local_70 | 1);
    if ((local_70[0] & 1) != 0) {
      uVar12 = local_68;
      pcVar13 = local_60;
    }
    if (*(char **)this != (char *)0x0) {
                    /* try { // try from 00b9269c to 00b926bf has its CatchHandler @ 00b9297c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(*(char **)this,(ulong)pcVar13);
    }
    plVar8 = *(long **)(this + 8);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x30))(plVar8,pcVar13,uVar12 & 0xffffffff);
    }
    if ((int)uVar12 != 0) {
      uVar12 = uVar12 & 0xffffffff;
      do {
        cVar3 = *pcVar13;
        if (cVar3 == '\n') {
          *(int *)(this + 0x28) = *(int *)(this + 0x28) + 1;
        }
        uVar12 = uVar12 - 1;
        pcVar13 = pcVar13 + 1;
        this[0x2e] = (OutputContext)(cVar3 == '\n');
      } while (uVar12 != 0);
    }
  }
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00b92930:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x10));
  *(uint *)(this + 0x28) = param_2;
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


