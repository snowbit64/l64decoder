// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPossibleUserMacro
// Entry Point: 00b912b8
// Size: 992 bytes
// Signature: undefined __thiscall findPossibleUserMacro(Preprocessor * this, uint * param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6, bool * param_7, Macro * * param_8, COMMENT_MODE param_9)


/* Preprocessor::findPossibleUserMacro(unsigned int&, unsigned int&, unsigned int&, unsigned int*,
   unsigned int*, unsigned int&, bool&, Preprocessor::Macro**, Preprocessor::COMMENT_MODE) */

undefined4 __thiscall
Preprocessor::findPossibleUserMacro
          (Preprocessor *this,uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
          uint *param_6,bool *param_7,Macro **param_8,COMMENT_MODE param_9)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  __tree_iterator _Var5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  Macro *pMVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  void *__dest;
  ulong uVar13;
  undefined8 local_88;
  ulong local_80;
  void *local_78;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = matchSequence(this,**(char ***)(this + 0x30),param_1);
  if ((uVar7 & 1) != 0) {
    uVar4 = identifierEnd(this,*param_1);
    *param_2 = uVar4;
    if ((*param_1 < uVar4) && (cVar2 = getChar(this,uVar4 - 1), cVar2 != '\0')) {
      local_6c = *param_2;
      bVar3 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x10),&local_6c);
      *param_7 = (bool)(bVar3 & 1);
      if (param_8 != (Macro **)0x0) {
        uVar4 = *param_1;
        lVar10 = **(long **)(this + 0x38);
        uVar6 = *param_2 - uVar4;
        uVar7 = (ulong)uVar6;
        if (uVar6 < 0x17) {
          __dest = (void *)((ulong)&local_88 | 1);
          local_88 = CONCAT71(local_88._1_7_,(char)uVar6 * '\x02');
          if (uVar6 != 0) goto LAB_00b91418;
        }
        else {
          uVar13 = uVar7 + 0x10 & 0x1fffffff0;
          __dest = operator_new(uVar13);
          local_88 = uVar13 | 1;
          local_80 = uVar7;
          local_78 = __dest;
LAB_00b91418:
          memcpy(__dest,(void *)(lVar10 + (ulong)uVar4),uVar7);
        }
        *(undefined *)((long)__dest + uVar7) = 0;
                    /* try { // try from 00b91430 to 00b91437 has its CatchHandler @ 00b91698 */
        _Var5 = std::__ndk1::
                __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
                ::
                find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                          ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,Preprocessor::Macro*>>>
                            *)(this + 0x18),(basic_string *)&local_88);
        if (this + 0x20 == (Preprocessor *)(ulong)_Var5) {
          pMVar9 = (Macro *)0x0;
        }
        else {
          pMVar9 = *(Macro **)((Preprocessor *)(ulong)_Var5 + 0x38);
        }
        *param_8 = pMVar9;
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
          pMVar9 = *param_8;
        }
        if ((pMVar9 == (Macro *)0x0) || (*(int *)(pMVar9 + 0x30) == -1)) {
          *param_7 = false;
        }
      }
      *param_3 = *param_2;
      if (**(char **)(*(long *)(this + 0x30) + 8) == '\0') {
LAB_00b914fc:
        uVar12 = 1;
      }
      else {
        uVar7 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 8),param_3);
        if ((uVar7 & 1) == 0) {
          uVar12 = 0;
        }
        else {
          if (*param_3 == 0) goto LAB_00b914fc;
          uVar7 = getChar(this,*param_3 - 1);
          uVar12 = 1;
          if ((((uint)uVar7 & 0xff) < 0x21) && ((1L << (uVar7 & 0x3f) & 0x100000600U) != 0)) {
            uVar12 = 1;
            *param_3 = *param_3 - 1;
          }
        }
      }
      *param_6 = 0;
      if (*param_7 != false) {
        uVar4 = 0;
        do {
          iVar11 = 0;
          param_4[uVar4] = local_6c;
          uVar4 = local_6c;
          while( true ) {
            do {
              uVar6 = uVar4;
              uVar4 = identifierEnd(this,uVar6);
            } while (uVar4 != uVar6);
            local_6c = uVar6;
            skipPossibleComments(this,&local_6c,param_9,false);
            uVar4 = local_6c;
            bVar3 = getChar(this,local_6c);
            if (bVar3 == 0) goto LAB_00b913b4;
            pcVar8 = strchr(*(char **)(*(long *)(this + 0x30) + 0x38),(uint)bVar3);
            if (pcVar8 != (char *)0x0) {
              iVar11 = iVar11 + 1;
            }
            if (iVar11 == 0) break;
            pcVar8 = strchr(*(char **)(*(long *)(this + 0x30) + 0x40),(uint)bVar3);
            iVar11 = iVar11 - (uint)(pcVar8 != (char *)0x0);
LAB_00b9154c:
            local_6c = uVar4 + 1;
            uVar4 = local_6c;
          }
          param_5[*param_6] = uVar4;
          uVar7 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x18),&local_6c);
          if ((uVar7 & 1) == 0) {
            uVar4 = local_6c;
            if (**(char **)(*(long *)(this + 0x30) + 0x20) != '\0') {
              uVar7 = matchSequence(this,*(char **)(*(long *)(this + 0x30) + 0x20),&local_6c);
              uVar4 = local_6c;
              if ((uVar7 & 1) == 0) {
                iVar11 = 0;
                goto LAB_00b9154c;
              }
              if (local_6c != 0) {
                uVar6 = local_6c - 1;
                uVar7 = getChar(this,uVar6);
                if ((((uint)uVar7 & 0xff) < 0x21) && ((1L << (uVar7 & 0x3f) & 0x100000600U) != 0)) {
                  uVar4 = uVar6;
                  local_6c = uVar6;
                }
              }
            }
            uVar12 = 1;
            *param_6 = *param_6 + 1;
            *param_3 = uVar4;
            goto LAB_00b913b4;
          }
          uVar4 = *param_6 + 1;
          *param_6 = uVar4;
        } while (uVar4 < 100);
        printError(this,"too many macro parameters");
        uVar12 = 0;
      }
      goto LAB_00b913b4;
    }
  }
  uVar12 = 0;
LAB_00b913b4:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


