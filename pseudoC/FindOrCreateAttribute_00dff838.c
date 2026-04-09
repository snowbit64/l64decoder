// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FindOrCreateAttribute
// Entry Point: 00dff838
// Size: 312 bytes
// Signature: undefined __thiscall FindOrCreateAttribute(XMLElement * this, char * param_1)


/* tinyxml2::XMLElement::FindOrCreateAttribute(char const*) */

undefined8 * __thiscall tinyxml2::XMLElement::FindOrCreateAttribute(XMLElement *this,char *param_1)

{
  long *plVar1;
  int iVar2;
  char *__s1;
  size_t sVar3;
  void *__dest;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  void **ppvVar8;
  
  puVar4 = *(undefined8 **)(this + 0x70);
  if (puVar4 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar7 = puVar4;
      __s1 = (char *)StrPair::GetStr();
      if (__s1 == param_1) {
        return puVar7;
      }
      iVar2 = strncmp(__s1,param_1,0x7fffffff);
      if (iVar2 == 0) {
        return puVar7;
      }
      puVar4 = (undefined8 *)puVar7[8];
    } while ((undefined8 *)puVar7[8] != (undefined8 *)0x0);
  }
  puVar4 = (undefined8 *)MemPoolT<80>::Alloc();
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  ppvVar8 = (void **)(puVar4 + 2);
  *ppvVar8 = (void *)0x0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  lVar6 = *(long *)(this + 8);
  *puVar4 = &PTR__XMLAttribute_01013818;
  *(undefined4 *)(puVar4 + 1) = 0;
  lVar5 = *(long *)(lVar6 + 0x188);
  puVar4[9] = lVar6 + 0x188;
  (**(code **)(lVar5 + 0x28))();
  plVar1 = (long *)(this + 0x70);
  if (puVar7 != (undefined8 *)0x0) {
    plVar1 = puVar7 + 8;
  }
  *plVar1 = (long)puVar4;
  if (((*(byte *)((long)puVar4 + 9) >> 1 & 1) != 0) && (*ppvVar8 != (void *)0x0)) {
    operator_delete__(*ppvVar8);
  }
  *(undefined4 *)(puVar4 + 1) = 0;
  *ppvVar8 = (void *)0x0;
  puVar4[3] = 0;
  sVar3 = strlen(param_1);
  __dest = operator_new__(sVar3 + 1);
  puVar4[2] = __dest;
  memcpy(__dest,param_1,sVar3 + 1);
  puVar4[3] = (long)__dest + sVar3;
  *(undefined4 *)(puVar4 + 1) = 0x200;
  return puVar4;
}


