// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btDefaultCollisionConfiguration
// Entry Point: 00f92f08
// Size: 864 bytes
// Signature: undefined __thiscall ~btDefaultCollisionConfiguration(btDefaultCollisionConfiguration * this)


/* btDefaultCollisionConfiguration::~btDefaultCollisionConfiguration() */

void __thiscall
btDefaultCollisionConfiguration::~btDefaultCollisionConfiguration
          (btDefaultCollisionConfiguration *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__btDefaultCollisionConfiguration_0101bde0;
  if (this[0x28] != (btDefaultCollisionConfiguration)0x0) {
    lVar1 = *(long *)(this + 0x20);
    if (*(long *)(lVar1 + 0x18) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(*(long *)(lVar1 + 0x18));
      lVar1 = *(long *)(this + 0x20);
    }
    if (lVar1 != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  if (this[0x18] != (btDefaultCollisionConfiguration)0x0) {
    lVar1 = *(long *)(this + 0x10);
    if (*(long *)(lVar1 + 0x18) != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)(*(long *)(lVar1 + 0x18));
      lVar1 = *(long *)(this + 0x10);
    }
    if (lVar1 != 0) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
  }
  (**(code **)**(undefined8 **)(this + 0x40))();
  if (*(long *)(this + 0x40) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x48))();
  if (*(long *)(this + 0x48) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x50))();
  if (*(long *)(this + 0x50) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x58))();
  if (*(long *)(this + 0x58) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x60))();
  if (*(long *)(this + 0x60) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x68))();
  if (*(long *)(this + 0x68) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x70))();
  if (*(long *)(this + 0x70) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x78))();
  if (*(long *)(this + 0x78) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x98))();
  if (*(long *)(this + 0x98) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0xa0))();
  if (*(long *)(this + 0xa0) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x90))();
  if (*(long *)(this + 0x90) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0xb0))();
  if (*(long *)(this + 0xb0) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0xa8))();
  if (*(long *)(this + 0xa8) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  if (*(long *)(this + 0x30) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0x38))();
  if (*(long *)(this + 0x38) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f93254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_01048e40)();
    return;
  }
  return;
}


