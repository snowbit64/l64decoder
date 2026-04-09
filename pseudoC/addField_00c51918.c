// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addField
// Entry Point: 00c51918
// Size: 92 bytes
// Signature: undefined __thiscall addField(IR_Struct * this, char * param_1, IR_Type * param_2, IR_QualFlags param_3, char * param_4)


/* IR_Struct::addField(char const*, IR_Type*, IR_QualFlags, char const*) */

uint __thiscall
IR_Struct::addField(IR_Struct *this,char *param_1,IR_Type *param_2,IR_QualFlags param_3,
                   char *param_4)

{
  long lVar1;
  uint uVar2;
  char *local_60;
  char *local_58;
  IR_Type *pIStack_50;
  IR_QualFlags local_48;
  undefined8 local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_60 = param_1;
  local_58 = param_4;
  pIStack_50 = param_2;
  local_48 = param_3;
  uVar2 = addField(this,(IR_StructField *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


