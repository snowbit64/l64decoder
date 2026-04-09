// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMangledName
// Entry Point: 00c1e660
// Size: 216 bytes
// Signature: undefined __thiscall getMangledName(SHC_Type * this, SHC_PoolAllocator * param_1)


/* SHC_Type::getMangledName(SHC_PoolAllocator&) const */

ulong * __thiscall SHC_Type::getMangledName(SHC_Type *this,SHC_PoolAllocator *param_1)

{
  byte bVar1;
  ulong *this_00;
  ulong uVar2;
  ulong uVar3;
  
  if (*(ulong **)(this + 0x28) != (ulong *)0x0) {
    return *(ulong **)(this + 0x28);
  }
  this_00 = (ulong *)SHC_String::New("",param_1);
  buildMangledName(this,(SHC_String *)this_00);
  if ((*(byte *)this_00 & 1) == 0) {
    bVar1 = *(byte *)this_00 >> 1;
    uVar3 = (ulong)bVar1;
    if (bVar1 == 0x16) {
      uVar2 = 0x16;
LAB_00c1e6c8:
      uVar3 = uVar2;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>>::
      __grow_by((basic_string<char,std::__ndk1::char_traits<char>,SHC_STLPoolAllocator<char>> *)
                this_00,uVar3,1,uVar3,uVar3,0,0);
      if ((*(byte *)this_00 & 1) != 0) goto LAB_00c1e708;
    }
    uVar2 = (long)this_00 + 1;
    *(char *)this_00 = (char)uVar3 * '\x02' + '\x02';
  }
  else {
    uVar3 = this_00[1];
    uVar2 = (*this_00 & 0xfffffffffffffffe) - 1;
    if (uVar3 == uVar2) goto LAB_00c1e6c8;
LAB_00c1e708:
    uVar2 = this_00[2];
    this_00[1] = uVar3 + 1;
  }
  *(undefined2 *)(uVar2 + uVar3) = 0x5f;
  *(ulong **)(this + 0x28) = this_00;
  return this_00;
}


