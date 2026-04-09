// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b5604
// Entry Point: 007b5604
// Size: 120 bytes
// Signature: undefined FUN_007b5604(void)


VideoOverlay * FUN_007b5604(char **param_1)

{
  VideoOverlay *this;
  
  this = (VideoOverlay *)operator_new(0x80);
                    /* try { // try from 007b5630 to 007b5667 has its CatchHandler @ 007b567c */
  VideoOverlay::VideoOverlay
            (this,*param_1,*(bool *)(param_1 + 2),*(float *)(param_1 + 4),0.1,0.1,0.2,0.2,0.0,0.0,
             1.0,1.0);
  return this;
}


