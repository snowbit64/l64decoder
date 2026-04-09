// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFloat
// Entry Point: 00b95fc0
// Size: 132 bytes
// Signature: undefined __thiscall setFloat(Properties * this, char * param_1, float param_2)


/* Properties::setFloat(char const*, float) */

void __thiscall Properties::setFloat(Properties *this,char *param_1,float param_2)

{
  long lVar1;
  undefined auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b95f1c((double)param_2,auStack_78,0x40,0x40,&DAT_004e0aa9);
  (**(code **)(*(long *)this + 0x18))(this,param_1,auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


