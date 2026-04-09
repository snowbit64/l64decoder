// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFloatAttribute
// Entry Point: 00b82f3c
// Size: 108 bytes
// Signature: undefined __thiscall getFloatAttribute(AttributedProperties * this, char * param_1, char * param_2, char * param_3, float param_4)


/* AttributedProperties::getFloatAttribute(char const*, char const*, char const*, float) */

float __thiscall
AttributedProperties::getFloatAttribute
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,float param_4)

{
  long lVar1;
  char *pcVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)getStringAttribute(this,param_1,param_2,param_3,(char *)0x0);
  if (pcVar2 != (char *)0x0) {
    local_2c = 0.0;
    StringUtil::atof(pcVar2,&local_2c);
    param_4 = local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


