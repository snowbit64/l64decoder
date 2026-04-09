// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: optimize
// Entry Point: 00f45e48
// Size: 76 bytes
// Signature: undefined optimize(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btDbvtBroadphase::optimize() */

void btDbvtBroadphase::optimize(void)

{
  long *in_x0;
  
  (**(code **)(*in_x0 + 0x70))();
  btDbvt::optimizeTopDown((btDbvt *)(in_x0 + 1),0x80);
  btDbvt::optimizeTopDown((btDbvt *)(in_x0 + 0xd),0x80);
                    /* WARNING: Could not recover jumptable at 0x00f45e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0x78))();
  return;
}


