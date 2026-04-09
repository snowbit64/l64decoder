// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct
// Entry Point: 0076a3b8
// Size: 52 bytes
// Signature: undefined __cdecl construct(MethodInvocation * param_1)


/* IKChain::construct(MethodInvocation*) */

IKChain * IKChain::construct(MethodInvocation *param_1)

{
  uint uVar1;
  IKChain *this;
  
  uVar1 = *(uint *)param_1;
  this = (IKChain *)operator_new(0x18);
                    /* try { // try from 0076a3d4 to 0076a3db has its CatchHandler @ 0076a3ec */
  IKChain(this,uVar1);
  return this;
}


