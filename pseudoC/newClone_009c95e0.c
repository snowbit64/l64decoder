// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: newClone
// Entry Point: 009c95e0
// Size: 76 bytes
// Signature: undefined newClone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProceduralPlacementConstMask::newClone() */

undefined8 * ProceduralPlacementConstMask::newClone(void)

{
  ProceduralPlacementMask *in_x0;
  undefined8 *this;
  
  this = (undefined8 *)operator_new(0xd0);
                    /* try { // try from 009c95fc to 009c9603 has its CatchHandler @ 009c962c */
  ProceduralPlacementMask::ProceduralPlacementMask((ProceduralPlacementMask *)this,in_x0);
  *(undefined4 *)(this + 0x19) = *(undefined4 *)(in_x0 + 200);
  *this = &PTR__ProceduralPlacementConstMask_00fe1fe8;
  return this;
}


