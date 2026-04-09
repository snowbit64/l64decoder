// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendLinearJoint
// Entry Point: 00f7c490
// Size: 96 bytes
// Signature: undefined __thiscall appendLinearJoint(btSoftBody * this, Specs * param_1, btSoftBody * param_2)


/* btSoftBody::appendLinearJoint(btSoftBody::LJoint::Specs const&, btSoftBody*) */

void __thiscall btSoftBody::appendLinearJoint(btSoftBody *this,Specs *param_1,btSoftBody *param_2)

{
  long lVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  local_40 = **(undefined8 **)(param_2 + 0x5e8);
  appendLinearJoint(this,param_1,**(Cluster ***)(this + 0x5e8),(Body)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


