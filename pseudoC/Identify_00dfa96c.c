// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Identify
// Entry Point: 00dfa96c
// Size: 1480 bytes
// Signature: undefined __thiscall Identify(XMLDocument * this, char * param_1, XMLNode * * param_2)


/* tinyxml2::XMLDocument::Identify(char*, tinyxml2::XMLNode**) */

byte * __thiscall tinyxml2::XMLDocument::Identify(XMLDocument *this,char *param_1,XMLNode **param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  ulong uVar9;
  byte *__s1;
  void *pvVar10;
  XMLDocument *pXVar11;
  
  iVar1 = *(int *)(this + 0xa0);
  bVar2 = *param_1;
  iVar4 = iVar1;
  __s1 = (byte *)param_1;
  while (uVar3 = (uint)bVar2, -1 < (char)bVar2) {
    if ((uVar3 != 0x20) && (4 < uVar3 - 9)) {
      if (uVar3 == 0) {
        puVar5 = (undefined8 *)0x0;
        goto LAB_00dfacc0;
      }
      break;
    }
    if (uVar3 == 10) {
      iVar4 = iVar4 + 1;
      *(int *)(this + 0xa0) = iVar4;
    }
    __s1 = __s1 + 1;
    bVar2 = *__s1;
  }
  if ((__s1 == &DAT_004d3069) || (iVar4 = strncmp((char *)__s1,"<?",2), iVar4 == 0)) {
    puVar5 = (undefined8 *)(**(code **)(*(long *)(this + 0x288) + 0x18))(this + 0x288);
    puVar7 = &XMLDeclaration::vtable;
LAB_00dfab34:
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[10] = 0;
    puVar5[9] = 0;
    puVar5[0xb] = 0;
    iVar4 = *(int *)(this + 0x104);
    puVar5[2] = 0;
    iVar1 = *(int *)(this + 0x100);
    *puVar5 = puVar7 + 0x10;
    puVar5[1] = this;
    *(undefined4 *)(puVar5 + 3) = 0;
    puVar5[0xc] = this + 0x288;
    if (iVar4 < iVar1) {
      pvVar10 = *(void **)(this + 0xa8);
    }
    else {
      uVar3 = iVar4 * 2 + 2;
      uVar9 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      if ((ulong)(long)(int)uVar3 >> 0x3d != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pvVar10 = operator_new__(uVar9);
      pXVar11 = *(XMLDocument **)(this + 0xa8);
      memcpy(pvVar10,pXVar11,(long)iVar4 << 3);
      if ((pXVar11 != (XMLDocument *)0x0) && (this + 0xb0 != pXVar11)) {
        operator_delete__(pXVar11);
        iVar4 = *(int *)(this + 0x104);
      }
      *(void **)(this + 0xa8) = pvVar10;
      *(uint *)(this + 0x100) = uVar3;
    }
    iVar6 = iVar4 + 1;
    uVar8 = *(undefined4 *)(this + 0xa0);
    *(undefined8 **)((long)pvVar10 + (long)iVar4 * 8) = puVar5;
    param_1 = (char *)(__s1 + 2);
  }
  else if ((__s1 == &DAT_004f37a3) || (iVar4 = strncmp((char *)__s1,"<!--",4), iVar4 == 0)) {
    puVar5 = (undefined8 *)(**(code **)(*(long *)(this + 0x288) + 0x18))(this + 0x288);
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = 0;
    puVar5[8] = 0;
    puVar5[7] = 0;
    puVar5[10] = 0;
    puVar5[9] = 0;
    puVar5[0xb] = 0;
    iVar4 = *(int *)(this + 0x104);
    puVar5[2] = 0;
    iVar1 = *(int *)(this + 0x100);
    *puVar5 = &PTR_ToElement_01013328;
    puVar5[1] = this;
    *(undefined4 *)(puVar5 + 3) = 0;
    puVar5[0xc] = this + 0x288;
    if (iVar4 < iVar1) {
      pvVar10 = *(void **)(this + 0xa8);
    }
    else {
      uVar3 = iVar4 * 2 + 2;
      uVar9 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      if ((ulong)(long)(int)uVar3 >> 0x3d != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pvVar10 = operator_new__(uVar9);
      pXVar11 = *(XMLDocument **)(this + 0xa8);
      memcpy(pvVar10,pXVar11,(long)iVar4 << 3);
      if ((pXVar11 != (XMLDocument *)0x0) && (this + 0xb0 != pXVar11)) {
        operator_delete__(pXVar11);
        iVar4 = *(int *)(this + 0x104);
      }
      *(void **)(this + 0xa8) = pvVar10;
      *(uint *)(this + 0x100) = uVar3;
    }
    uVar8 = *(undefined4 *)(this + 0xa0);
    iVar6 = iVar4 + 1;
    *(undefined8 **)((long)pvVar10 + (long)iVar4 * 8) = puVar5;
    param_1 = (char *)(__s1 + 4);
  }
  else {
    if ((__s1 == (byte *)"<![CDATA[") || (iVar4 = strncmp((char *)__s1,"<![CDATA[",9), iVar4 == 0))
    {
      puVar5 = (undefined8 *)(**(code **)(*(long *)(this + 0x208) + 0x18))(this + 0x208);
      puVar5[4] = 0;
      puVar5[5] = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      puVar5[8] = 0;
      puVar5[7] = 0;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5[0xb] = 0;
      iVar4 = *(int *)(this + 0x104);
      puVar5[2] = 0;
      *puVar5 = &PTR_ToElement_010136c0;
      puVar5[1] = this;
      iVar1 = *(int *)(this + 0x100);
      *(undefined4 *)(puVar5 + 3) = 0;
      *(undefined *)(puVar5 + 0xd) = 0;
      puVar5[0xc] = this + 0x208;
      if (iVar4 < iVar1) {
        pvVar10 = *(void **)(this + 0xa8);
      }
      else {
        uVar3 = iVar4 * 2 + 2;
        uVar9 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
        if ((ulong)(long)(int)uVar3 >> 0x3d != 0) {
          uVar9 = 0xffffffffffffffff;
        }
        pvVar10 = operator_new__(uVar9);
        pXVar11 = *(XMLDocument **)(this + 0xa8);
        memcpy(pvVar10,pXVar11,(long)iVar4 << 3);
        if ((pXVar11 != (XMLDocument *)0x0) && (this + 0xb0 != pXVar11)) {
          operator_delete__(pXVar11);
          iVar4 = *(int *)(this + 0x104);
        }
        *(void **)(this + 0xa8) = pvVar10;
        *(uint *)(this + 0x100) = uVar3;
      }
      uVar8 = *(undefined4 *)(this + 0xa0);
      *(undefined8 **)((long)pvVar10 + (long)iVar4 * 8) = puVar5;
      __s1 = __s1 + 9;
      *(int *)(this + 0x104) = iVar4 + 1;
      *(undefined4 *)(puVar5 + 6) = uVar8;
      *(undefined *)(puVar5 + 0xd) = 1;
      goto LAB_00dfacc0;
    }
    if ((__s1 == &DAT_0050a12b) || (iVar4 = strncmp((char *)__s1,"<!",2), iVar4 == 0)) {
      puVar5 = (undefined8 *)(**(code **)(*(long *)(this + 0x288) + 0x18))(this + 0x288);
      puVar7 = &XMLUnknown::vtable;
      goto LAB_00dfab34;
    }
    if ((__s1 == &DAT_004c7e9d) || (uVar3 == 0x3c)) {
      puVar5 = (undefined8 *)(**(code **)(*(long *)(this + 0x108) + 0x18))(this + 0x108);
      puVar5[4] = 0;
      puVar5[5] = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      puVar5[8] = 0;
      puVar5[7] = 0;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5[0xb] = 0;
      iVar4 = *(int *)(this + 0x104);
      puVar5[2] = 0;
      *puVar5 = &PTR_ToElement_01013508;
      puVar5[1] = this;
      iVar1 = *(int *)(this + 0x100);
      *(undefined4 *)(puVar5 + 3) = 0;
      *(undefined4 *)(puVar5 + 0xd) = 0;
      puVar5[0xe] = 0;
      puVar5[0xc] = this + 0x108;
      if (iVar4 < iVar1) {
        pvVar10 = *(void **)(this + 0xa8);
      }
      else {
        uVar3 = iVar4 * 2 + 2;
        uVar9 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
        if ((ulong)(long)(int)uVar3 >> 0x3d != 0) {
          uVar9 = 0xffffffffffffffff;
        }
        pvVar10 = operator_new__(uVar9);
        pXVar11 = *(XMLDocument **)(this + 0xa8);
        memcpy(pvVar10,pXVar11,(long)iVar4 << 3);
        if ((pXVar11 != (XMLDocument *)0x0) && (this + 0xb0 != pXVar11)) {
          operator_delete__(pXVar11);
          iVar4 = *(int *)(this + 0x104);
        }
        *(void **)(this + 0xa8) = pvVar10;
        *(uint *)(this + 0x100) = uVar3;
      }
      uVar8 = *(undefined4 *)(this + 0xa0);
      iVar6 = iVar4 + 1;
      *(undefined8 **)((long)pvVar10 + (long)iVar4 * 8) = puVar5;
      param_1 = (char *)(__s1 + 1);
    }
    else {
      puVar5 = (undefined8 *)(**(code **)(*(long *)(this + 0x208) + 0x18))(this + 0x208);
      puVar5[4] = 0;
      puVar5[5] = 0;
      *(undefined4 *)(puVar5 + 6) = 0;
      puVar5[8] = 0;
      puVar5[7] = 0;
      puVar5[10] = 0;
      puVar5[9] = 0;
      puVar5[0xb] = 0;
      iVar4 = *(int *)(this + 0x104);
      puVar5[2] = 0;
      *puVar5 = &PTR_ToElement_010136c0;
      puVar5[1] = this;
      iVar6 = *(int *)(this + 0x100);
      *(undefined4 *)(puVar5 + 3) = 0;
      *(undefined *)(puVar5 + 0xd) = 0;
      puVar5[0xc] = this + 0x208;
      if (iVar4 < iVar6) {
        pvVar10 = *(void **)(this + 0xa8);
      }
      else {
        uVar3 = iVar4 * 2 + 2;
        uVar9 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
        if ((ulong)(long)(int)uVar3 >> 0x3d != 0) {
          uVar9 = 0xffffffffffffffff;
        }
        pvVar10 = operator_new__(uVar9);
        pXVar11 = *(XMLDocument **)(this + 0xa8);
        memcpy(pvVar10,pXVar11,(long)iVar4 << 3);
        if ((pXVar11 != (XMLDocument *)0x0) && (this + 0xb0 != pXVar11)) {
          operator_delete__(pXVar11);
          iVar4 = *(int *)(this + 0x104);
        }
        *(void **)(this + 0xa8) = pvVar10;
        *(uint *)(this + 0x100) = uVar3;
      }
      iVar6 = iVar4 + 1;
      uVar8 = *(undefined4 *)(this + 0xa0);
      *(undefined8 **)((long)pvVar10 + (long)iVar4 * 8) = puVar5;
      *(int *)(this + 0xa0) = iVar1;
    }
  }
  *(int *)(this + 0x104) = iVar6;
  *(undefined4 *)(puVar5 + 6) = uVar8;
  __s1 = (byte *)param_1;
LAB_00dfacc0:
  *param_2 = (XMLNode *)puVar5;
  return __s1;
}


