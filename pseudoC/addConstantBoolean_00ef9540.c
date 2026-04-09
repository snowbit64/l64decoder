// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstantBoolean
// Entry Point: 00ef9540
// Size: 112 bytes
// Signature: undefined __thiscall addConstantBoolean(BytecodeBuilder * this, bool param_1)


/* Luau::BytecodeBuilder::addConstantBoolean(bool) */

void __thiscall Luau::BytecodeBuilder::addConstantBoolean(BytecodeBuilder *this,bool param_1)

{
  long lVar1;
  undefined4 local_50 [2];
  ulong local_48;
  undefined8 local_40;
  ulong uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = (ulong)param_1 & 1;
  local_40 = 1;
  uStack_38 = (ulong)param_1;
  local_50[0] = 1;
  addConstant(this,(ConstantKey *)local_50,(Constant *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


