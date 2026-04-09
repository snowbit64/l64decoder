// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b623c
// Entry Point: 007b623c
// Size: 56 bytes
// Signature: undefined FUN_007b623c(void)


StreamedSample * FUN_007b623c(char **param_1)

{
  StreamedSample *this;
  
  this = (StreamedSample *)operator_new(0x50);
                    /* try { // try from 007b6260 to 007b6263 has its CatchHandler @ 007b6274 */
  StreamedSample::StreamedSample(this,*param_1,*(bool *)(param_1 + 2));
  return this;
}


