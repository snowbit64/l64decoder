// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getArrayAttr
// Entry Point: 00b8c794
// Size: 516 bytes
// Signature: undefined __cdecl getArrayAttr(char * param_1, basic_string * param_2, uint param_3, char param_4, char * * param_5)


/* ExpatUtil::getArrayAttr(char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, unsigned int, char, char
   const**) */

uint ExpatUtil::getArrayAttr
               (char *param_1,basic_string *param_2,uint param_3,char param_4,char **param_5)

{
  char *pcVar1;
  char *__n;
  long lVar2;
  int iVar3;
  char *pcVar4;
  void *__dest;
  char *pcVar5;
  long lVar6;
  ulong *puVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 local_80;
  char *pcStack_78;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pcVar5 = *param_5;
  if (pcVar5 != (char *)0x0) {
    uVar9 = 0;
    do {
      iVar3 = strcmp(pcVar5,param_1);
      if (iVar3 == 0) {
        pcVar5 = param_5[(uVar9 & 0xfffffffe) + 1];
        if (pcVar5 != (char *)0x0) {
          if (param_3 == 0) goto LAB_00b8c938;
          uVar9 = 0;
          goto LAB_00b8c864;
        }
        break;
      }
      pcVar5 = param_5[uVar9 + 2];
      uVar9 = uVar9 + 2;
    } while (pcVar5 != (char *)0x0);
  }
  param_3 = 0;
  goto LAB_00b8c938;
LAB_00b8c864:
  do {
    lVar6 = 1;
    pcVar1 = (char *)0x0;
    do {
      pcVar8 = pcVar1;
      pcVar1 = pcVar8 + 1;
      lVar6 = lVar6 + -1;
    } while (pcVar5[(long)pcVar8] == ' ');
    pcVar4 = strchr(pcVar5 + (long)pcVar8,(uint)(byte)param_4);
    if (pcVar4 == (char *)0x0) {
      param_3 = (int)uVar9 + 1;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)(param_2 + (uVar9 & 0xffffffff) * 6));
      break;
    }
    __n = pcVar4 + (-(long)pcVar1 - (long)pcVar5) + 1;
    if ((char *)0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < (char *)0x17) {
      local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
      __dest = (void *)((ulong)&local_80 | 1);
      if (pcVar4 + (1 - (long)pcVar5) != pcVar1) goto LAB_00b8c8f4;
    }
    else {
      __dest = operator_new((ulong)(pcVar4 + (-(long)pcVar1 - (long)pcVar5) + 0x11) &
                            0xfffffffffffffff0);
      local_80 = (ulong)(pcVar4 + (-(long)pcVar1 - (long)pcVar5) + 0x11) & 0xfffffffffffffff0 | 1;
      pcStack_78 = __n;
      local_70 = __dest;
LAB_00b8c8f4:
      memcpy(__dest,pcVar5 + (long)pcVar8,(size_t)__n);
    }
    puVar7 = (ulong *)(param_2 + uVar9 * 6);
    ((char *)((long)__dest + (long)pcVar4))[lVar6 - (long)pcVar5] = '\0';
    if ((*(byte *)puVar7 & 1) != 0) {
      operator_delete(*(void **)(param_2 + uVar9 * 6 + 4));
    }
    uVar9 = uVar9 + 1;
    pcVar5 = pcVar4 + 1;
    puVar7[1] = (ulong)pcStack_78;
    *puVar7 = local_80;
    puVar7[2] = (ulong)local_70;
  } while (uVar9 != param_3);
LAB_00b8c938:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}


