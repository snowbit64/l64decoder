// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: combinePath
// Entry Point: 00c64898
// Size: 172 bytes
// Signature: undefined __thiscall combinePath(PathUtil * this, basic_string * param_1, basic_string * param_2)


/* PathUtil::combinePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall PathUtil::combinePath(PathUtil *this,basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  basic_string *in_x8;
  long lVar5;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(in_x8);
  bVar3 = *(byte *)in_x8;
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(in_x8 + 2);
  }
  if (uVar2 != 0) {
    uVar1 = (ulong)(*(byte *)param_1 >> 1);
    if ((*(byte *)param_1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 2);
    }
    if (uVar1 != 0) {
      lVar5 = *(long *)(in_x8 + 4);
      if ((bVar3 & 1) == 0) {
        lVar5 = (long)in_x8 + 1;
      }
      cVar4 = *(char *)(lVar5 + uVar2 + -1);
      if ((cVar4 != '/') && (cVar4 != '\\')) {
                    /* try { // try from 00c6490c to 00c64937 has its CatchHandler @ 00c64944 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::push_back((char)in_x8);
      }
    }
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if ((*(byte *)param_1 & 1) == 0) {
    uVar2 = (long)param_1 + 1;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((char *)in_x8,uVar2);
  return;
}


