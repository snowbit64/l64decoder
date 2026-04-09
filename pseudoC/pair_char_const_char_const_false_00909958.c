// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pair<char_const*,char_const*,false>
// Entry Point: 00909958
// Size: 272 bytes
// Signature: undefined __thiscall pair<char_const*,char_const*,false>(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>> * this, pair * param_1)


/* std::__ndk1::pair<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >::pair<char const*, char const*,
   false>(std::__ndk1::pair<char const*, char const*>&&) */

void __thiscall
std::__ndk1::
pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
::pair<char_const*,char_const*,false>
          (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
           *this,pair *param_1)

{
  size_t sVar1;
  char *pcVar2;
  pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
  *ppVar3;
  ulong uVar4;
  
  pcVar2 = *(char **)param_1;
  sVar1 = strlen(pcVar2);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    ppVar3 = this + 1;
    *this = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_009099c8;
  }
  else {
    uVar4 = sVar1 + 0x10 & 0xfffffffffffffff0;
    ppVar3 = (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              *)operator_new(uVar4);
    *(size_t *)(this + 8) = sVar1;
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
      **)(this + 0x10) = ppVar3;
    *(ulong *)this = uVar4 | 1;
LAB_009099c8:
    memcpy(ppVar3,pcVar2,sVar1);
  }
  ppVar3[sVar1] =
       (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
        )0x0;
  pcVar2 = *(char **)(param_1 + 2);
  sVar1 = strlen(pcVar2);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00909a60 to 00909a67 has its CatchHandler @ 00909a68 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    ppVar3 = this + 0x19;
    this[0x18] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00909a40;
  }
  else {
    uVar4 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00909a18 to 00909a1f has its CatchHandler @ 00909a68 */
    ppVar3 = (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
              *)operator_new(uVar4);
    *(size_t *)(this + 0x20) = sVar1;
    *(pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
      **)(this + 0x28) = ppVar3;
    *(ulong *)(this + 0x18) = uVar4 | 1;
  }
  memcpy(ppVar3,pcVar2,sVar1);
LAB_00909a40:
  ppVar3[sVar1] =
       (pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
        )0x0;
  return;
}


