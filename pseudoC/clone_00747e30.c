// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00747e30
// Size: 56 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CharacterSet::clone() */

CharacterSet * CharacterSet::clone(void)

{
  long in_x0;
  CharacterSet *this;
  
  this = (CharacterSet *)operator_new(0xf0);
                    /* try { // try from 00747e54 to 00747e57 has its CatchHandler @ 00747e68 */
  CharacterSet(this,*(char **)(in_x0 + 8),*(CharacterSetSource **)(in_x0 + 0x40));
  return this;
}


