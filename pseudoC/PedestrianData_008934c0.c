// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PedestrianData
// Entry Point: 008934c0
// Size: 200 bytes
// Signature: undefined __thiscall ~PedestrianData(PedestrianData * this)


/* PedestrianData::~PedestrianData() */

void __thiscall PedestrianData::~PedestrianData(PedestrianData *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_onAssetLoaded_00fdd278;
  if (((byte)this[0x390] & 1) != 0) {
    operator_delete(*(void **)(this + 0x3a0));
  }
  pvVar1 = *(void **)(this + 0x378);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x380) = pvVar1;
    operator_delete(pvVar1);
  }
  I3DAssetPtr::~I3DAssetPtr((I3DAssetPtr *)(this + 0x348));
  pvVar1 = *(void **)(this + 0x2f8);
  *(undefined ***)(this + 0x278) = &PTR__PedestrianVisuals_00fdd2b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x300) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x228);
  *(undefined ***)(this + 0x1a8) = &PTR__PedestrianVisuals_00fdd2b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x230) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x158);
  *(undefined ***)(this + 0xd8) = &PTR__PedestrianVisuals_00fdd2b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x160) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x88);
  *(undefined ***)(this + 8) = &PTR__PedestrianVisuals_00fdd2b0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


