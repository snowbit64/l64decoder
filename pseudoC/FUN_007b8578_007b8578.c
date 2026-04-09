// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8578
// Entry Point: 007b8578
// Size: 52 bytes
// Signature: undefined FUN_007b8578(void)


IKChain * FUN_007b8578(uint *param_1)

{
  uint uVar1;
  IKChain *this;
  
  uVar1 = *param_1;
  this = (IKChain *)operator_new(0x18);
                    /* try { // try from 007b8594 to 007b859b has its CatchHandler @ 007b85ac */
  IKChain::IKChain(this,uVar1);
  return this;
}


