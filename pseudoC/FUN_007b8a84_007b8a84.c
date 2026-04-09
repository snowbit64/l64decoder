// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8a84
// Entry Point: 007b8a84
// Size: 56 bytes
// Signature: undefined FUN_007b8a84(void)


NavigationPath * FUN_007b8a84(char **param_1)

{
  NavigationPath *this;
  
  this = (NavigationPath *)operator_new(0x30);
                    /* try { // try from 007b8aa8 to 007b8aab has its CatchHandler @ 007b8abc */
  NavigationPath::NavigationPath(this,*param_1,*(bool *)(param_1 + 2));
  return this;
}


