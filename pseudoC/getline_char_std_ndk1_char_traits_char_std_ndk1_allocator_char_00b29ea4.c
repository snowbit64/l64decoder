// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
// Entry Point: 00b29ea4
// Size: 332 bytes
// Signature: basic_istream * __cdecl getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>(basic_istream * param_1, basic_string * param_2, char param_3)


/* std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >& std::__ndk1::getline<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(std::__ndk1::basic_istream<char,
   std::__ndk1::char_traits<char> >&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, char) */

basic_istream *
std::__ndk1::getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
          (basic_istream *param_1,basic_string *param_2,char param_3)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  sentry local_50 [8];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>::sentry::sentry
            (local_50,param_1,true);
  if (local_50[0] != (sentry)0x0) {
    if ((*(byte *)param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      **(undefined **)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 2) = 0;
    }
    do {
      plVar5 = *(long **)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28);
      pbVar2 = (byte *)plVar5[3];
      if (pbVar2 == (byte *)plVar5[4]) {
                    /* try { // try from 00b29f40 to 00b29f43 has its CatchHandler @ 00b29ff0 */
        uVar4 = (**(code **)(*plVar5 + 0x50))();
        if (uVar4 == 0xffffffff) break;
      }
      else {
        plVar5[3] = (long)(pbVar2 + 1);
        uVar4 = (uint)*pbVar2;
      }
      if ((uVar4 & 0xff) == (uint)(byte)param_3) break;
                    /* try { // try from 00b29f5c to 00b29f67 has its CatchHandler @ 00b29ff4 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)param_2);
      uVar1 = (ulong)(*(byte *)param_2 >> 1);
      if ((*(byte *)param_2 & 1) != 0) {
        uVar1 = *(ulong *)(param_2 + 2);
      }
    } while (uVar1 != 0xffffffffffffffef);
    std::__ndk1::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


