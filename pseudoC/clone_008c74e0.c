// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 008c74e0
// Size: 84 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SplineGeometry::clone() */

SplineGeometry * SplineGeometry::clone(void)

{
  long in_x0;
  Spline *pSVar1;
  SplineGeometry *this;
  
  pSVar1 = (Spline *)(**(code **)(**(long **)(in_x0 + 0xd8) + 0x48))();
  this = (SplineGeometry *)operator_new(0xe0);
                    /* try { // try from 008c7518 to 008c751f has its CatchHandler @ 008c7534 */
  SplineGeometry(this,*(char **)(in_x0 + 0x18),pSVar1);
  return this;
}


