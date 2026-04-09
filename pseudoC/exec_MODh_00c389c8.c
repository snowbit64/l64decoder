// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exec_MODh
// Entry Point: 00c389c8
// Size: 136 bytes
// Signature: undefined __cdecl exec_MODh(IR_Const * param_1, IR_Const * param_2)


/* IR_Interpreter::exec_MODh(IR_Const const&, IR_Const const&) */

undefined  [16] IR_Interpreter::exec_MODh(IR_Const *param_1,IR_Const *param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined auVar3 [16];
  undefined8 local_18;
  
  if ((*(int *)param_1 == 3) && (*(int *)param_2 == 3)) {
    fVar2 = *(float *)(param_2 + 8);
    if (fVar2 == 0.0) {
      fVar2 = nanf("");
    }
    else {
      fVar2 = (float)NEON_fmsub((int)(*(float *)(param_1 + 8) / fVar2),fVar2,*(float *)(param_1 + 8)
                               );
    }
    uVar1 = 3;
    local_18 = (char *)CONCAT44(local_18._4_4_,fVar2);
  }
  else {
    uVar1 = 0xc;
    local_18 = "type error interpreting IR";
  }
  auVar3._8_8_ = local_18;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


