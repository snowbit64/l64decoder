// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afd24
// Entry Point: 007afd24
// Size: 56 bytes
// Signature: undefined FUN_007afd24(void)


FoliageSystemDesc * FUN_007afd24(void)

{
  FoliageSystemDesc *this;
  
  this = (FoliageSystemDesc *)operator_new(0x30);
                    /* try { // try from 007afd3c to 007afd4b has its CatchHandler @ 007afd5c */
  FoliageSystemDesc::FoliageSystemDesc(this,8.0,0xff00ff,0);
  return this;
}


