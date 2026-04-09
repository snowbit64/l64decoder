// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NewUnknown
// Entry Point: 00dfd5a0
// Size: 376 bytes
// Signature: undefined __thiscall NewUnknown(XMLDocument * this, char * param_1)


/* tinyxml2::XMLDocument::NewUnknown(char const*) */

undefined8 * __thiscall tinyxml2::XMLDocument::NewUnknown(XMLDocument *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  XMLDocument *__src;
  void **ppvVar8;
  int iVar9;
  
  puVar4 = (undefined8 *)(**(code **)(*(long *)(this + 0x288) + 0x18))(this + 0x288);
  puVar4[5] = 0;
  *(undefined4 *)(puVar4 + 6) = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  ppvVar8 = (void **)(puVar4 + 4);
  *ppvVar8 = (void *)0x0;
  puVar4[0xb] = 0;
  iVar9 = *(int *)(this + 0x104);
  puVar4[2] = 0;
  iVar2 = *(int *)(this + 0x100);
  *puVar4 = &PTR_ToElement_01013468;
  puVar4[1] = this;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[0xc] = this + 0x288;
  if (iVar9 < iVar2) {
    *(undefined8 **)(*(long *)(this + 0xa8) + (long)iVar9 * 8) = puVar4;
    *(int *)(this + 0x104) = iVar9 + 1;
  }
  else {
    uVar1 = iVar9 * 2 + 2;
    uVar7 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
      uVar7 = 0xffffffffffffffff;
    }
    pvVar6 = operator_new__(uVar7);
    __src = *(XMLDocument **)(this + 0xa8);
    memcpy(pvVar6,__src,(long)iVar9 << 3);
    if ((__src != (XMLDocument *)0x0) && (this + 0xb0 != __src)) {
      operator_delete__(__src);
      iVar9 = *(int *)(this + 0x104);
    }
    uVar3 = *(uint *)(puVar4 + 3);
    *(void **)(this + 0xa8) = pvVar6;
    *(uint *)(this + 0x100) = uVar1;
    *(undefined8 **)((long)pvVar6 + (long)iVar9 * 8) = puVar4;
    *(int *)(this + 0x104) = iVar9 + 1;
    if (((uVar3 >> 9 & 1) != 0) && (*ppvVar8 != (void *)0x0)) {
      operator_delete__(*ppvVar8);
    }
  }
  *(undefined4 *)(puVar4 + 3) = 0;
  *ppvVar8 = (void *)0x0;
  puVar4[5] = 0;
  sVar5 = strlen(param_1);
  pvVar6 = operator_new__(sVar5 + 1);
  puVar4[4] = pvVar6;
  memcpy(pvVar6,param_1,sVar5 + 1);
  puVar4[5] = (long)pvVar6 + sVar5;
  *(undefined4 *)(puVar4 + 3) = 0x200;
  return puVar4;
}


