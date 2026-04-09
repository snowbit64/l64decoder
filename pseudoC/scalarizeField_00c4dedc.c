// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scalarizeField
// Entry Point: 00c4dedc
// Size: 128 bytes
// Signature: undefined __thiscall scalarizeField(IR_Section * this, uint param_1, vector * param_2)


/* IR_Section::scalarizeField(unsigned int, std::__ndk1::vector<unsigned int,
   std::__ndk1::allocator<unsigned int> >&) */

void __thiscall IR_Section::scalarizeField(IR_Section *this,uint param_1,vector *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((int)param_1 < 0) {
    puVar1 = (undefined8 *)
             (*(long *)(*(IR_Function **)this + 0x80) + (ulong)(param_1 & 0x7fffffff) * 0x18);
    uStack_38 = puVar1[1];
    local_40 = *puVar1;
    uVar3 = IR_Function::storeConst(*(IR_Function **)this,(IR_Const *)&local_40);
    param_1 = uVar3 | 0x80000000;
  }
  else {
    uVar3 = *(uint *)(*(long *)param_2 + (ulong)param_1 * 4);
    if (uVar3 != 0xffffffff) {
      param_1 = uVar3;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


