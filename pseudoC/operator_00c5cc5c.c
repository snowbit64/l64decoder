// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator>>
// Entry Point: 00c5cc5c
// Size: 452 bytes
// Signature: basic_istream * __cdecl operator>>(basic_istream * param_1, basic_string * param_2)


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >&
   std::__ndk1::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

basic_istream * std::__ndk1::operator>>(basic_istream *param_1,basic_string *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  id aiStack_68 [8];
  sentry local_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_60,param_1,false);
  if (local_60[0] != (sentry)0x0) {
    if ((*(byte *)param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      **(undefined **)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 2) = 0;
    }
    lVar5 = 0x7fffffffffffffff;
    if (0 < *(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18)) {
      lVar5 = *(long *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18);
    }
                    /* try { // try from 00c5ccdc to 00c5cce3 has its CatchHandler @ 00c5ce30 */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00c5cce4 to 00c5ccf3 has its CatchHandler @ 00c5ce20 */
    lVar3 = std::__ndk1::locale::use_facet(aiStack_68);
    std::__ndk1::locale::~locale((locale *)aiStack_68);
    lVar6 = 0;
    do {
      plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
      if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
                    /* try { // try from 00c5cd48 to 00c5cd4f has its CatchHandler @ 00c5ce34 */
        uVar2 = (**(code **)(*plVar4 + 0x48))();
        if (uVar2 != 0xffffffff) goto LAB_00c5cd58;
LAB_00c5cdbc:
        lVar6 = *(long *)param_1;
        lVar5 = *(long *)(lVar6 + -0x18);
        goto LAB_00c5cdd4;
      }
      uVar2 = (uint)*(byte *)plVar4[3];
LAB_00c5cd58:
      if (((uVar2 >> 7 & 1) == 0) &&
         ((*(ulong *)(*(long *)(lVar3 + 0x10) + (ulong)(uVar2 & 0xff) * 8) & 1) != 0))
      goto LAB_00c5cdbc;
                    /* try { // try from 00c5cd6c to 00c5cd97 has its CatchHandler @ 00c5ce38 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)param_2);
      plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
      if (plVar4[3] == plVar4[4]) {
        (**(code **)(*plVar4 + 0x50))();
      }
      else {
        plVar4[3] = plVar4[3] + 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar5 != lVar6);
    lVar6 = *(long *)param_1;
    lVar5 = *(long *)(lVar6 + -0x18);
LAB_00c5cdd4:
    *(undefined8 *)(param_1 + lVar5 + 0x18) = 0;
    std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(lVar6 + -0x18));
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


