// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getIRCONSTForType
// Entry Point: 00c0bd44
// Size: 188 bytes
// Signature: undefined __thiscall getIRCONSTForType(CreateIR * this, uint param_1, GsTBasicType param_2)


/* CreateIR::getIRCONSTForType(unsigned int, GsTBasicType) */

uint __thiscall CreateIR::getIRCONSTForType(CreateIR *this,uint param_1,GsTBasicType param_2)

{
  long lVar1;
  uint uVar2;
  IR_Function *this_00;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(param_2) {
  case 3:
  case 4:
    local_30 = (float)(ulong)param_1;
    this_00 = *(IR_Function **)(this + 0x70);
    local_38[0] = 3;
    goto LAB_00c0bdb4;
  default:
    local_38[0] = 5;
    break;
  case 6:
  case 8:
    local_38[0] = 6;
    break;
  case 9:
    this_00 = *(IR_Function **)(this + 0x70);
    local_38[0] = 9;
    local_30 = (float)CONCAT31(local_30._1_3_,param_1 != 0);
    goto LAB_00c0bdb4;
  }
  this_00 = *(IR_Function **)(this + 0x70);
  local_30 = (float)param_1;
LAB_00c0bdb4:
  uVar2 = IR_Function::storeConst(this_00,(IR_Const *)local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 | 0x80000000;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


