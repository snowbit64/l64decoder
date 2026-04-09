// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00b57574
// Size: 96 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LinearSpline::clone() const */

undefined8 * LinearSpline::clone(void)

{
  uint uVar1;
  long in_x0;
  undefined8 *this;
  float *pfVar2;
  
  this = (undefined8 *)operator_new(0x38);
                    /* try { // try from 00b57594 to 00b575a3 has its CatchHandler @ 00b575d4 */
  Spline::Spline((Spline *)this,0,*(FORM *)(in_x0 + 8),0,1);
  uVar1 = *(uint *)(in_x0 + 0x28);
  pfVar2 = *(float **)(in_x0 + 0x18);
  *this = &PTR__LinearSpline_00fea200;
  Spline::setCVs((Spline *)this,uVar1,pfVar2);
  return this;
}


