// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ingestFunction
// Entry Point: 00c29c4c
// Size: 120 bytes
// Signature: undefined __thiscall ingestFunction(IR_Function * this, IR_Function * param_1)


/* IR_Function::ingestFunction(IR_Function*) */

undefined8 __thiscall IR_Function::ingestFunction(IR_Function *this,IR_Function *param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_40;
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  local_30 = 0;
                    /* try { // try from 00c29c7c to 00c29c87 has its CatchHandler @ 00c29cc4 */
  uVar2 = IR_Section::clone(**(IR_Section ***)(param_1 + 0xb8),this,(vector *)&local_40);
  if (local_40 != (void *)0x0) {
    local_38 = local_40;
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


