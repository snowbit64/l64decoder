// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BillboardShape
// Entry Point: 006f9328
// Size: 112 bytes
// Signature: undefined __thiscall ~BillboardShape(BillboardShape * this)


/* BillboardShape::~BillboardShape() */

void __thiscall BillboardShape::~BillboardShape(BillboardShape *this)

{
  GiantsAdsProvider *this_00;
  MaterialManager *this_01;
  Bt2ScenegraphPhysicsContext *this_02;
  
  if (*(long *)(this + 0x28) != 0) {
                    /* try { // try from 006f9340 to 006f9367 has its CatchHandler @ 006f939c */
    AdsProviderManager::getInstance();
    this_00 = (GiantsAdsProvider *)AdsProviderManager::getAdsProvider();
    GiantsAdsProvider::destroyAdPlacement(this_00,*(GiantsAdPlacement **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(long *)(this + 0x30) != 0) {
    this_01 = (MaterialManager *)MaterialManager::getInstance();
    MaterialManager::releaseMaterial(this_01,*(GsMaterial **)(this + 0x30));
  }
                    /* try { // try from 006f9368 to 006f9377 has its CatchHandler @ 006f9398 */
  ScenegraphPhysicsContextManager::getInstance();
  this_02 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::cancelRaycastShapes(this_02,(IRaycastReport *)(this + 0x88));
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
    return;
  }
  return;
}


