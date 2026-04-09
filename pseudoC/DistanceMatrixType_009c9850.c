// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DistanceMatrixType
// Entry Point: 009c9850
// Size: 44 bytes
// Signature: undefined __thiscall DistanceMatrixType(DistanceMatrixType * this, basic_string * param_1)


/* ProceduralPlacementDistanceMatrix::DistanceMatrixType::DistanceMatrixType(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
ProceduralPlacementDistanceMatrix::DistanceMatrixType::DistanceMatrixType
          (DistanceMatrixType *this,basic_string *param_1)

{
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)this);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(DistanceMatrixType **)(this + 0x18) = this + 0x20;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}


