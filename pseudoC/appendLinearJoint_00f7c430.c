// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendLinearJoint
// Entry Point: 00f7c430
// Size: 96 bytes
// Signature: undefined __thiscall appendLinearJoint(btSoftBody * this, Specs * param_1, Body param_2)


/* btSoftBody::appendLinearJoint(btSoftBody::LJoint::Specs const&, btSoftBody::Body) */

void __thiscall btSoftBody::appendLinearJoint(btSoftBody *this,Specs *param_1,Body param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  puVar2 = (undefined8 *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  local_30 = puVar2[2];
  appendLinearJoint(this,param_1,**(Cluster ***)(this + 0x5e8),(Body)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


