// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TerrainDeformation
// Entry Point: 0089e940
// Size: 252 bytes
// Signature: undefined __thiscall ~TerrainDeformation(TerrainDeformation * this)


/* TerrainDeformation::~TerrainDeformation() */

void __thiscall TerrainDeformation::~TerrainDeformation(TerrainDeformation *this)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR__TerrainDeformation_00fdd340;
  *(undefined ***)(this + 0x20) = &PTR__TerrainDeformation_00fdd368;
  if (*(void **)(this + 0x100) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x100));
  }
  if (*(void **)(this + 0x110) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x110));
  }
  lVar3 = *(long *)(this + 0x60);
  lVar4 = *(long *)(this + 0x68);
  if (lVar3 != lVar4) {
    do {
      if (*(void **)(lVar3 + 0x38) != (void *)0x0) {
        operator_delete(*(void **)(lVar3 + 0x38));
      }
      lVar3 = lVar3 + 0x48;
    } while (lVar3 != lVar4);
    lVar3 = *(long *)(this + 0x60);
  }
  lVar4 = *(long *)(this + 0x78);
  lVar1 = *(long *)(this + 0x80);
  *(long *)(this + 0x68) = lVar3;
  if (lVar4 != lVar1) {
    do {
      if (*(void **)(lVar4 + 0x10) != (void *)0x0) {
        operator_delete(*(void **)(lVar4 + 0x10));
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar1);
    lVar4 = *(long *)(this + 0x78);
  }
  *(long *)(this + 0x80) = lVar4;
  if (*(void **)(this + 0x90) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x90));
  }
  if (((byte)this[0x130] & 1) != 0) {
    operator_delete(*(void **)(this + 0x140));
  }
  pvVar2 = *(void **)(this + 0x78);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar2;
    operator_delete(pvVar2);
  }
  Entity::~Entity((Entity *)this);
  return;
}


