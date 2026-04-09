// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: uninitializedConst
// Entry Point: 00c28c88
// Size: 184 bytes
// Signature: undefined __thiscall uninitializedConst(IR_Function * this, IR_Type * param_1)


/* IR_Function::uninitializedConst(IR_Type*) */

ulong __thiscall IR_Function::uninitializedConst(IR_Function *this,IR_Type *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_40 [2];
  IR_Type *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(this + 0x80);
  local_40[0] = 0xe;
  local_30 = param_1;
  if (*(long *)(this + 0x88) - lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = (*(long *)(this + 0x88) - lVar1 >> 3) * -0x5555555555555555;
    do {
      if ((*(int *)(lVar1 + uVar3 * 0x18) == 0xe) &&
         (*(IR_Type **)(lVar1 + uVar3 * 0x18 + 0x10) == param_1)) goto LAB_00c28d18;
      uVar3 = (ulong)((int)uVar3 + 1);
    } while (uVar3 <= uVar4 && uVar4 - uVar3 != 0);
  }
  uVar3 = uVar4;
  FUN_00c290dc(this + 0x80,local_40);
LAB_00c28d18:
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 0xffffffff;
}


