// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstantNumber
// Entry Point: 00ef95b0
// Size: 96 bytes
// Signature: undefined __thiscall addConstantNumber(BytecodeBuilder * this, double param_1)


/* Luau::BytecodeBuilder::addConstantNumber(double) */

void __thiscall Luau::BytecodeBuilder::addConstantNumber(BytecodeBuilder *this,double param_1)

{
  long lVar1;
  undefined8 local_48;
  double local_40;
  undefined8 local_38;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 2;
  local_48 = 2;
  local_40 = param_1;
  local_30 = param_1;
  addConstant(this,(ConstantKey *)&local_48,(Constant *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


