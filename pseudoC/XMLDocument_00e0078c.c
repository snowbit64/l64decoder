// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~XMLDocument
// Entry Point: 00e0078c
// Size: 496 bytes
// Signature: undefined __thiscall ~XMLDocument(XMLDocument * this)


/* tinyxml2::XMLDocument::~XMLDocument() */

void __thiscall tinyxml2::XMLDocument::~XMLDocument(XMLDocument *this)

{
  int iVar1;
  XMLDocument *pXVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR_ToElement_010135a8;
  Clear();
  iVar1 = *(int *)(this + 0x2ec);
  *(undefined ***)(this + 0x288) = &PTR__MemPoolT_01013960;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    pvVar3 = *(void **)(*(long *)(this + 0x290) + (long)iVar1 * 8);
    *(int *)(this + 0x2ec) = iVar1;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      iVar1 = *(int *)(this + 0x2ec);
    }
  }
  pXVar2 = *(XMLDocument **)(this + 0x290);
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  if ((pXVar2 != this + 0x298) && (pXVar2 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar2);
  }
  iVar1 = *(int *)(this + 0x26c);
  *(undefined ***)(this + 0x208) = &PTR__MemPoolT_01013908;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    pvVar3 = *(void **)(*(long *)(this + 0x210) + (long)iVar1 * 8);
    *(int *)(this + 0x26c) = iVar1;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      iVar1 = *(int *)(this + 0x26c);
    }
  }
  pXVar2 = *(XMLDocument **)(this + 0x210);
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  if ((pXVar2 != this + 0x218) && (pXVar2 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar2);
  }
  iVar1 = *(int *)(this + 0x1ec);
  *(undefined ***)(this + 0x188) = &PTR__MemPoolT_010138b0;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    pvVar3 = *(void **)(*(long *)(this + 400) + (long)iVar1 * 8);
    *(int *)(this + 0x1ec) = iVar1;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      iVar1 = *(int *)(this + 0x1ec);
    }
  }
  pXVar2 = *(XMLDocument **)(this + 400);
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  if ((pXVar2 != this + 0x198) && (pXVar2 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar2);
  }
  iVar1 = *(int *)(this + 0x16c);
  *(undefined ***)(this + 0x108) = &PTR__MemPoolT_01013848;
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    pvVar3 = *(void **)(*(long *)(this + 0x110) + (long)iVar1 * 8);
    *(int *)(this + 0x16c) = iVar1;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      iVar1 = *(int *)(this + 0x16c);
    }
  }
  pXVar2 = *(XMLDocument **)(this + 0x110);
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  if ((pXVar2 != this + 0x118) && (pXVar2 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar2);
  }
  pXVar2 = *(XMLDocument **)(this + 0xa8);
  if ((pXVar2 != this + 0xb0) && (pXVar2 != (XMLDocument *)0x0)) {
    operator_delete__(pXVar2);
  }
  if ((((byte)this[0x79] >> 1 & 1) != 0) && (*(void **)(this + 0x80) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x80));
  }
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  XMLNode::~XMLNode((XMLNode *)this);
  return;
}


