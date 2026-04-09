// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00b63d6c
// Size: 52 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Brep::clone() const */

Brep * Brep::clone(void)

{
  Brep *in_x0;
  Brep *this;
  
  this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b63d88 to 00b63d8f has its CatchHandler @ 00b63da0 */
  Brep(this,in_x0);
  return this;
}


