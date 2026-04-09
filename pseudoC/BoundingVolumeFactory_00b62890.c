// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BoundingVolumeFactory
// Entry Point: 00b62890
// Size: 96 bytes
// Signature: undefined __thiscall ~BoundingVolumeFactory(BoundingVolumeFactory * this)


/* BoundingVolumeFactory::~BoundingVolumeFactory() */

void __thiscall BoundingVolumeFactory::~BoundingVolumeFactory(BoundingVolumeFactory *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(this + 0x100) != 0) {
    lVar1 = *(long *)(this + 0xf0);
    plVar2 = *(long **)(this + 0xf8);
    *(undefined8 *)(this + 0x100) = 0;
    lVar3 = *plVar2;
    *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar3;
    while (plVar2 != (long *)(this + 0xf0)) {
      plVar4 = (long *)plVar2[1];
      operator_delete(plVar2);
      plVar2 = plVar4;
    }
  }
  return;
}


