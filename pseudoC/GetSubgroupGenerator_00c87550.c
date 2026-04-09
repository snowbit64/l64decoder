// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetSubgroupGenerator
// Entry Point: 00c87550
// Size: 76 bytes
// Signature: undefined GetSubgroupGenerator(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetSubgroupGenerator() const */

void CryptoPP::DL_GroupParameters<CryptoPP::Integer>::GetSubgroupGenerator(void)

{
  long *in_x0;
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*in_x0 + 0x90))();
  uVar2 = (**(code **)(*in_x0 + 0x88))();
                    /* WARNING: Could not recover jumptable at 0x00c87598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
  return;
}


