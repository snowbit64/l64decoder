// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddPoint
// Entry Point: 00eacc54
// Size: 56 bytes
// Signature: undefined __thiscall AddPoint(ICHull * this, Vec3 * param_1, int param_2)


/* VHACD::ICHull::AddPoint(VHACD::Vec3<double> const&, int) */

uint __thiscall VHACD::ICHull::AddPoint(ICHull *this,Vec3 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = AddPoints(this,param_1,1);
  if ((uVar1 & 1) != 0) {
    *(int *)(*(long *)(this + 8) + 0x18) = param_2;
  }
  return uVar1 & 1;
}


