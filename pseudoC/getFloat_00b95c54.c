// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFloat
// Entry Point: 00b95c54
// Size: 124 bytes
// Signature: undefined __thiscall getFloat(Properties * this, char * param_1, bool * param_2)


/* Properties::getFloat(char const*, bool&) */

void __thiscall Properties::getFloat(Properties *this,char *param_1,bool *param_2)

{
  long lVar1;
  char *pcVar2;
  float fVar3;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)(**(code **)(*(long *)this + 0x10))(this,param_1,0);
  if (pcVar2 == (char *)0x0) {
    fVar3 = 0.0;
    *param_2 = false;
  }
  else {
    local_2c = 0.0;
    *param_2 = true;
    StringUtil::atof(pcVar2,&local_2c);
    fVar3 = local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


