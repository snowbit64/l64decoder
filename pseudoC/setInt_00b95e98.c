// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInt
// Entry Point: 00b95e98
// Size: 132 bytes
// Signature: undefined __thiscall setInt(Properties * this, char * param_1, int param_2)


/* Properties::setInt(char const*, int) */

void __thiscall Properties::setInt(Properties *this,char *param_1,int param_2)

{
  long lVar1;
  undefined auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b95f1c(auStack_48,0x10,0x10,&DAT_004c7f7a,param_2);
  (**(code **)(*(long *)this + 0x18))(this,param_1,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


