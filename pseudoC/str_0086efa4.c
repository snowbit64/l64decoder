// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: str
// Entry Point: 0086efa4
// Size: 304 bytes
// Signature: undefined __thiscall str(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this, basic_string * param_1)


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::str(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
          (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x40),param_1);
  *(undefined8 *)(this + 0x58) = 0;
  if ((*(uint *)(this + 0x60) >> 3 & 1) != 0) {
    uVar5 = *(ulong *)(this + 0x48);
    pbVar4 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x50);
    if (((byte)this[0x40] & 1) == 0) {
      pbVar4 = this + 0x41;
      uVar5 = (ulong)((byte)this[0x40] >> 1);
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar4;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x18) = pbVar4;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x58) = pbVar4 + uVar5;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x20) = pbVar4 + uVar5;
  }
  if ((*(uint *)(this + 0x60) >> 4 & 1) != 0) {
    uVar5 = *(ulong *)(this + 0x48);
    pbVar4 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x50);
    bVar2 = ((byte)this[0x40] & 1) != 0;
    if (!bVar2) {
      pbVar4 = this + 0x41;
      uVar5 = (ulong)((byte)this[0x40] >> 1);
    }
    cVar1 = '\x16';
    if (bVar2) {
      cVar1 = ((byte)*(undefined8 *)(this + 0x40) & 0xfe) - 1;
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x58) = pbVar4 + uVar5;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    resize((ulong)(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0x40),cVar1);
    pbVar4 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x50);
    bVar2 = ((byte)this[0x40] & 1) == 0;
    if (bVar2) {
      pbVar4 = this + 0x41;
    }
    uVar3 = (ulong)((byte)this[0x40] >> 1);
    if (!bVar2) {
      uVar3 = *(ulong *)(this + 0x48);
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x28) = pbVar4;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x30) = pbVar4;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x38) = pbVar4 + uVar3;
    if (((byte)this[0x60] & 3) != 0) {
      if (uVar5 >> 0x1f != 0) {
        uVar3 = (uVar5 - 0x80000000) / 0x7fffffff;
        uVar3 = uVar3 + ((uVar5 - 0x80000000) - uVar3 >> 1) >> 0x1e;
        pbVar4 = pbVar4 + uVar3 * 0x7fffffff + 0x7fffffff;
        uVar5 = (uVar5 + uVar3 * -0x7fffffff) - 0x7fffffff;
        *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x30) = pbVar4;
      }
      if (uVar5 != 0) {
        *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x30) = pbVar4 + (uVar5 & 0xffffffff);
      }
    }
  }
  return;
}


