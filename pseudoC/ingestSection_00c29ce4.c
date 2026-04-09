// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ingestSection
// Entry Point: 00c29ce4
// Size: 116 bytes
// Signature: undefined __thiscall ingestSection(IR_Function * this, IR_Section * param_1)


/* IR_Function::ingestSection(IR_Section*) */

undefined8 __thiscall IR_Function::ingestSection(IR_Function *this,IR_Section *param_1)

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
                    /* try { // try from 00c29d0c to 00c29d1b has its CatchHandler @ 00c29d58 */
  uVar2 = IR_Section::clone(param_1,this,(vector *)&local_40);
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


