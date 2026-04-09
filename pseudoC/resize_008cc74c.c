// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 008cc74c
// Size: 60 bytes
// Signature: undefined __thiscall resize(vector<FillPlaneGeometry::EdgeInfo,std::__ndk1::allocator<FillPlaneGeometry::EdgeInfo>> * this, ulong param_1, EdgeInfo * param_2)


/* std::__ndk1::vector<FillPlaneGeometry::EdgeInfo,
   std::__ndk1::allocator<FillPlaneGeometry::EdgeInfo> >::resize(unsigned long,
   FillPlaneGeometry::EdgeInfo const&) */

void __thiscall
std::__ndk1::vector<FillPlaneGeometry::EdgeInfo,std::__ndk1::allocator<FillPlaneGeometry::EdgeInfo>>
::resize(vector<FillPlaneGeometry::EdgeInfo,std::__ndk1::allocator<FillPlaneGeometry::EdgeInfo>>
         *this,ulong param_1,EdgeInfo *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar1 = lVar2 * -0x5555555555555555;
  if (uVar1 < param_1) {
    __append(this,param_1 + lVar2 * 0x5555555555555555,param_2);
    return;
  }
  if (uVar1 >= param_1 && uVar1 - param_1 != 0) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0xc;
  }
  return;
}


