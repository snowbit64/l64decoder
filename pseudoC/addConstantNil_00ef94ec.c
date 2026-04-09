// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstantNil
// Entry Point: 00ef94ec
// Size: 84 bytes
// Signature: undefined addConstantNil(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::BytecodeBuilder::addConstantNil() */

void Luau::BytecodeBuilder::addConstantNil(void)

{
  long lVar1;
  BytecodeBuilder *in_x0;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  addConstant(in_x0,(ConstantKey *)&local_48,(Constant *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


