// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeleteAttribute
// Entry Point: 00dff9e0
// Size: 228 bytes
// Signature: undefined __thiscall DeleteAttribute(XMLElement * this, char * param_1)


/* tinyxml2::XMLElement::DeleteAttribute(char const*) */

void __thiscall tinyxml2::XMLElement::DeleteAttribute(XMLElement *this,char *param_1)

{
  int iVar1;
  char *__s2;
  code **ppcVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar4 = *(undefined8 **)(this + 0x70);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  __s2 = (char *)StrPair::GetStr();
  if (__s2 == param_1) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    do {
      puVar5 = puVar4;
      iVar1 = strncmp(param_1,__s2,0x7fffffff);
      puVar4 = puVar5;
      if (iVar1 == 0) break;
      puVar4 = (undefined8 *)puVar5[8];
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      __s2 = (char *)StrPair::GetStr();
      puVar6 = puVar5;
    } while (__s2 != param_1);
  }
  puVar5 = (undefined8 *)(this + 0x70);
  if (puVar6 != (undefined8 *)0x0) {
    puVar5 = puVar6 + 8;
  }
  ppcVar2 = (code **)*puVar4;
  *puVar5 = puVar4[8];
  plVar3 = (long *)puVar4[9];
  (**ppcVar2)(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00dffac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x20))(plVar3,puVar4);
  return;
}


