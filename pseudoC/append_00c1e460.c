// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: append
// Entry Point: 00c1e460
// Size: 216 bytes
// Signature: undefined __thiscall append(basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> * this, char * param_1)


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, SHC_STLPoolAllocator<char>
   >::append(char const*) */

basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *this,
          char *param_1)

{
  long lVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> bVar3;
  ulong uVar4;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *pbVar5;
  
  __n = strlen(param_1);
  bVar3 = *this;
  uVar2 = (ulong)((byte)bVar3 >> 1);
  uVar4 = 0x16;
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if (uVar4 - uVar2 < __n) {
    __grow_by_and_replace(this,uVar4,(uVar2 + __n) - uVar4,uVar2,uVar2,0,__n,param_1);
  }
  else if (__n != 0) {
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> **)
              (this + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar5 = this + 1;
    }
    memcpy(pbVar5 + uVar2,param_1,__n);
    lVar1 = uVar2 + __n;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    pbVar5[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>>)0x0;
  }
  return this;
}


