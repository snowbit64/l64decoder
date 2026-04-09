// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initTexture
// Entry Point: 006faec4
// Size: 124 bytes
// Signature: undefined __thiscall initTexture(BillboardShape * this, GsShape * param_1, basic_string * param_2)


/* BillboardShape::initTexture(GsShape*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

bool __thiscall
BillboardShape::initTexture(BillboardShape *this,GsShape *param_1,basic_string *param_2)

{
  short sVar1;
  long lVar2;
  
  sVar1 = *(short *)(param_1 + 0x196);
  if (sVar1 == 1) {
    lVar2 = *(long *)(param_1 + 0x178);
    *(long *)(this + 0x30) = lVar2;
    FUN_00f276d0(1,lVar2 + 0x28);
    if (*(char *)(*(long *)(this + 0x28) + 0x3c) != '\0') {
      changeMaterial(this,param_1);
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2);
  }
  return sVar1 == 1;
}


