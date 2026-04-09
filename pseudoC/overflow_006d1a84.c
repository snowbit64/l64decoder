// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overflow
// Entry Point: 006d1a84
// Size: 348 bytes
// Signature: undefined __thiscall overflow(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * this, int param_1)


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::overflow(int) */

ulong __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
overflow(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
        int param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 == -1) {
    uVar6 = 0;
  }
  else {
    pbVar9 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x30);
    pbVar7 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x38);
    lVar3 = *(long *)(this + 0x10);
    lVar4 = *(long *)(this + 0x18);
    if (pbVar9 == pbVar7) {
      if (((byte)this[0x60] >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar10 = *(long *)(this + 0x28);
      puVar1 = (undefined8 *)(this + 0x40);
      lVar11 = *(long *)(this + 0x58);
                    /* try { // try from 006d1ae8 to 006d1b1b has its CatchHandler @ 006d1be0 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      push_back((char)puVar1);
      cVar2 = '\x16';
      if (((byte)*(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                   *)puVar1 & 1) != 0) {
        cVar2 = ((byte)*puVar1 & 0xfe) - 1;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      resize((ulong)puVar1,cVar2);
      uVar6 = *(ulong *)(this + 0x48);
      pbVar5 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 **)(this + 0x50);
      if (((byte)this[0x40] & 1) == 0) {
        pbVar5 = this + 0x41;
        uVar6 = (ulong)((byte)this[0x40] >> 1);
      }
      pbVar7 = pbVar5 + uVar6;
      pbVar9 = pbVar5 + ((long)pbVar9 - lVar10);
      pbVar8 = pbVar5 + (lVar11 - lVar10);
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x28) = pbVar5;
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x30) = pbVar9;
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x38) = pbVar7;
    }
    else {
      pbVar8 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 **)(this + 0x58);
    }
    if (pbVar8 <= pbVar9 + 1) {
      pbVar8 = pbVar9 + 1;
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x58) = pbVar8;
    if (((byte)this[0x60] >> 3 & 1) != 0) {
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x20) = pbVar8;
      pbVar5 = this + 0x41;
      if (((byte)this[0x40] & 1) != 0) {
        pbVar5 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                   **)(this + 0x50);
      }
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x10) = pbVar5;
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x18) = pbVar5 + (lVar4 - lVar3);
    }
    if (pbVar9 == pbVar7) {
                    /* WARNING: Could not recover jumptable at 0x006d1bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(*(long *)this + 0x68))(this,param_1 & 0xff);
      return uVar6;
    }
    uVar6 = (ulong)(param_1 & 0xff);
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x30) = pbVar9 + 1;
    *pbVar9 = SUB41(param_1,0);
  }
  return uVar6;
}


