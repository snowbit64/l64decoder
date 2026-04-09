// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ws<char,std::__ndk1::char_traits<char>>
// Entry Point: 00cfbf00
// Size: 316 bytes
// Signature: basic_istream * __cdecl ws<char,std::__ndk1::char_traits<char>>(basic_istream * param_1)


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >& std::__ndk1::ws<char,
   std::__ndk1::char_traits<char> >(std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char>
   >&) */

basic_istream * std::__ndk1::ws<char,std::__ndk1::char_traits<char>>(basic_istream *param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  id aiStack_48 [8];
  sentry local_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_40,param_1,true);
  if (local_40[0] != (sentry)0x0) {
                    /* try { // try from 00cfbf48 to 00cfbf4f has its CatchHandler @ 00cfc04c */
    std::__ndk1::ios_base::getloc();
                    /* try { // try from 00cfbf50 to 00cfbf5f has its CatchHandler @ 00cfc03c */
    lVar3 = std::__ndk1::locale::use_facet(aiStack_48);
    std::__ndk1::locale::~locale((locale *)aiStack_48);
LAB_00cfbf7c:
    plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
    if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
                    /* try { // try from 00cfbfa4 to 00cfbfe7 has its CatchHandler @ 00cfc050 */
      uVar2 = (**(code **)(*plVar4 + 0x48))();
      if (uVar2 == 0xffffffff) goto LAB_00cfbff0;
    }
    else {
      uVar2 = (uint)*(byte *)plVar4[3];
    }
    if (((uVar2 >> 7 & 1) != 0) ||
       ((*(ulong *)(*(long *)(lVar3 + 0x10) + (ulong)(uVar2 & 0xff) * 8) & 1) == 0))
    goto LAB_00cfbff0;
    plVar4 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
    if (plVar4[3] == plVar4[4]) {
      (**(code **)(*plVar4 + 0x50))();
    }
    else {
      plVar4[3] = plVar4[3] + 1;
    }
    goto LAB_00cfbf7c;
  }
LAB_00cfc008:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_00cfbff0:
  std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  goto LAB_00cfc008;
}


