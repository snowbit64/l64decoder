// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 008ce384
// Size: 68 bytes
// Signature: undefined __thiscall resize(vector<FillPlaneGeometry::SideVertexFormat,std::__ndk1::allocator<FillPlaneGeometry::SideVertexFormat>> * this, ulong param_1)


/* std::__ndk1::vector<FillPlaneGeometry::SideVertexFormat,
   std::__ndk1::allocator<FillPlaneGeometry::SideVertexFormat> >::resize(unsigned long) */

void __thiscall
std::__ndk1::
vector<FillPlaneGeometry::SideVertexFormat,std::__ndk1::allocator<FillPlaneGeometry::SideVertexFormat>>
::resize(vector<FillPlaneGeometry::SideVertexFormat,std::__ndk1::allocator<FillPlaneGeometry::SideVertexFormat>>
         *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 8) - *(long *)this >> 2;
  uVar1 = lVar2 * 0x6db6db6db6db6db7;
  if (uVar1 < param_1) {
    __append(this,param_1 + lVar2 * -0x6db6db6db6db6db7);
    return;
  }
  if (uVar1 >= param_1 && uVar1 - param_1 != 0) {
    *(ulong *)(this + 8) = *(long *)this + param_1 * 0x1c;
  }
  return;
}


