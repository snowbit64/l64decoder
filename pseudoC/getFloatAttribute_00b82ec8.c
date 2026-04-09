// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFloatAttribute
// Entry Point: 00b82ec8
// Size: 116 bytes
// Signature: undefined __thiscall getFloatAttribute(AttributedProperties * this, char * param_1, char * param_2, char * param_3, bool * param_4)


/* AttributedProperties::getFloatAttribute(char const*, char const*, char const*, bool&) */

void __thiscall
AttributedProperties::getFloatAttribute
          (AttributedProperties *this,char *param_1,char *param_2,char *param_3,bool *param_4)

{
  long lVar1;
  char *pcVar2;
  float fVar3;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcVar2 = (char *)getStringAttribute(this,param_1,param_2,param_3,(char *)0x0);
  if (pcVar2 == (char *)0x0) {
    fVar3 = 0.0;
    *param_4 = false;
  }
  else {
    local_2c = 0.0;
    *param_4 = true;
    StringUtil::atof(pcVar2,&local_2c);
    fVar3 = local_2c;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


