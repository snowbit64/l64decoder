// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addImport
// Entry Point: 00ef96cc
// Size: 112 bytes
// Signature: undefined __thiscall addImport(BytecodeBuilder * this, uint param_1)


/* Luau::BytecodeBuilder::addImport(unsigned int) */

void __thiscall Luau::BytecodeBuilder::addImport(BytecodeBuilder *this,uint param_1)

{
  long lVar1;
  undefined4 local_50 [2];
  ulong local_48;
  undefined8 local_40;
  ulong uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_48 = (ulong)param_1;
  local_40 = 4;
  uStack_38 = (ulong)param_1;
  local_50[0] = 4;
  addConstant(this,(ConstantKey *)local_50,(Constant *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


