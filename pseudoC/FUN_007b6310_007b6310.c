// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6310
// Entry Point: 007b6310
// Size: 52 bytes
// Signature: undefined FUN_007b6310(void)


StaticSample * FUN_007b6310(char **param_1)

{
  StaticSample *this;
  
  this = (StaticSample *)operator_new(0x98);
                    /* try { // try from 007b6330 to 007b6333 has its CatchHandler @ 007b6344 */
  StaticSample::StaticSample(this,*param_1);
  return this;
}


