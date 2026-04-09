// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadHeightMap
// Entry Point: 008e4ba4
// Size: 116 bytes
// Signature: undefined unloadHeightMap(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BaseTerrain::unloadHeightMap() */

void BaseTerrain::unloadHeightMap(void)

{
  long in_x0;
  void *pvVar1;
  long *plVar2;
  BaseTerrainSyncer *this;
  
  pvVar1 = *(void **)(in_x0 + 0x80);
  if (pvVar1 != (void *)0x0) {
    plVar2 = *(long **)(in_x0 + 0x88);
    if (plVar2 == (long *)0x0) {
      operator_delete__(pvVar1);
    }
    else {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    this = *(BaseTerrainSyncer **)(in_x0 + 0x170);
    *(void **)(in_x0 + 0x80) = (void *)0x0;
    *(undefined8 *)(in_x0 + 0x88) = 0;
    *(undefined4 *)(in_x0 + 0x90) = 0;
    if (this != (BaseTerrainSyncer *)0x0) {
      BaseTerrainSyncer::~BaseTerrainSyncer(this);
      operator_delete(this);
    }
    *(undefined8 *)(in_x0 + 0x170) = 0;
  }
  return;
}


