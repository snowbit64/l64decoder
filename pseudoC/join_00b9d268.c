// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: join
// Entry Point: 00b9d268
// Size: 272 bytes
// Signature: undefined __cdecl join(vector * param_1, char * param_2)


/* StringUtil::join(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&, char const*) */

void StringUtil::join(vector *param_1,char *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *in_x8;
  long lVar4;
  ulong uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 8) == *(long *)param_1) {
    *(undefined2 *)in_x8 = 0;
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_70);
    if (1 < (ulong)((*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555)) {
      lVar4 = 0;
      uVar5 = 1;
      do {
                    /* try { // try from 00b9d2d8 to 00b9d30f has its CatchHandler @ 00b9d378 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_70);
        lVar1 = *(long *)param_1 + lVar4;
        uVar2 = lVar1 + 0x19;
        if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
          uVar2 = *(ulong *)(lVar1 + 0x28);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_70,uVar2);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      } while (uVar5 < (ulong)((*(long *)(param_1 + 8) - *(long *)param_1 >> 3) *
                              -0x5555555555555555));
    }
    in_x8[1] = uStack_68;
    *in_x8 = local_70;
    in_x8[2] = local_60;
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


