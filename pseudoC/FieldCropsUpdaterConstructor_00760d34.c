// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FieldCropsUpdaterConstructor
// Entry Point: 00760d34
// Size: 80 bytes
// Signature: undefined __thiscall FieldCropsUpdaterConstructor(FieldCropsUpdaterConstructor * this)


/* FieldCropsUpdaterConstructor::FieldCropsUpdaterConstructor() */

void __thiscall
FieldCropsUpdaterConstructor::FieldCropsUpdaterConstructor(FieldCropsUpdaterConstructor *this)

{
  long lVar1;
  long lVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__FieldCropsUpdaterConstructor_00fdb508;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x20;
    *(undefined8 *)(this + lVar2 + 0x30) = 0;
    *(undefined8 *)(this + lVar2 + 0x24) = 0;
    *(undefined8 *)(this + lVar2 + 0x1c) = 0;
    this[lVar2 + 0x2c] = (FieldCropsUpdaterConstructor)0x0;
    lVar2 = lVar1;
  } while (lVar1 != 0x400);
  *(undefined4 *)(this + 0x438) = 0;
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  return;
}


