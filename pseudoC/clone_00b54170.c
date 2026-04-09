// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00b54170
// Size: 112 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CubicSpline::clone() const */

undefined8 * CubicSpline::clone(void)

{
  int iVar1;
  uint uVar2;
  long in_x0;
  undefined8 *this;
  long lVar3;
  
  this = (undefined8 *)operator_new(0x40);
                    /* try { // try from 00b54190 to 00b5419f has its CatchHandler @ 00b541e0 */
  Spline::Spline((Spline *)this,1,*(FORM *)(in_x0 + 8),1,2);
  this[7] = 0;
  iVar1 = *(int *)(in_x0 + 0x20);
  lVar3 = *(long *)(in_x0 + 0x18);
  uVar2 = *(uint *)(in_x0 + 0x28);
  *this = &PTR__CubicSpline_00fea130;
  Spline::setCVs((Spline *)this,uVar2,(float *)(lVar3 + (ulong)(uint)(iVar1 * 3) * 4));
  return this;
}


