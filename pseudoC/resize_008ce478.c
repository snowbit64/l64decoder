// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resize
// Entry Point: 008ce478
// Size: 60 bytes
// Signature: undefined __thiscall resize(vector<Vector3,std::__ndk1::allocator<Vector3>> * this, ulong param_1, Vector3 * param_2)


/* std::__ndk1::vector<Vector3, std::__ndk1::allocator<Vector3> >::resize(unsigned long, Vector3
   const&) */

void __thiscall
std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::resize
          (vector<Vector3,std::__ndk1::allocator<Vector3>> *this,ulong param_1,Vector3 *param_2)

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


