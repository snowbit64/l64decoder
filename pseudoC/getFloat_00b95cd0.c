// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFloat
// Entry Point: 00b95cd0
// Size: 116 bytes
// Signature: undefined __thiscall getFloat(Properties * this, char * param_1, float param_2)


/* Properties::getFloat(char const*, float) */

float __thiscall Properties::getFloat(Properties *this,char *param_1,float param_2)

{
  long lVar1;
  char *pcVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (pcVar2 != (char *)0x0) {
    local_2c = 0.0;
    StringUtil::atof(pcVar2,&local_2c);
    param_2 = local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


