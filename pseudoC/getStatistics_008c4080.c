// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStatistics
// Entry Point: 008c4080
// Size: 100 bytes
// Signature: undefined __thiscall getStatistics(GsMaskedOcclusionCulling * this, Statistics * param_1)


/* GsMaskedOcclusionCulling::getStatistics(OcclusionCullingBase::Statistics&) */

void __thiscall
GsMaskedOcclusionCulling::getStatistics(GsMaskedOcclusionCulling *this,Statistics *param_1)

{
  long lVar1;
  undefined8 local_70 [6];
  undefined8 local_40;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x10) + 0x68))(local_70);
  *(undefined8 *)param_1 = local_70[0];
  *(undefined8 *)(param_1 + 8) = local_40;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


