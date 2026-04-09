// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9430
// Entry Point: 007a9430
// Size: 76 bytes
// Signature: undefined FUN_007a9430(void)


Camera * FUN_007a9430(char **param_1)

{
  Camera *this;
  
  this = (Camera *)operator_new(0x170);
                    /* try { // try from 007a945c to 007a946b has its CatchHandler @ 007a947c */
  Camera::Camera(this,*param_1,*(float *)(param_1 + 2),*(float *)(param_1 + 4),
                 *(float *)(param_1 + 6),false,1.0,0);
  return this;
}


