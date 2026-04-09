// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DomXMLFile
// Entry Point: 00b25744
// Size: 120 bytes
// Signature: undefined __thiscall ~DomXMLFile(DomXMLFile * this)


/* DomXMLFile::~DomXMLFile() */

void __thiscall DomXMLFile::~DomXMLFile(DomXMLFile *this)

{
  uint uVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__DomXMLFile_00fe9178;
  if (*(long **)(this + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x80))();
  }
  uVar1 = *(uint *)(this + 0x38);
  *(undefined4 *)(this + 0x38) = 0;
  pvVar2 = *(void **)(this + 0xc0);
  if (8 < uVar1) {
    *(void **)(this + 200) = pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 200) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x10] & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
  }
  AttributedProperties::~AttributedProperties((AttributedProperties *)this);
  return;
}


