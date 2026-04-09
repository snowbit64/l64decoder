// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MultiLayer
// Entry Point: 00a64228
// Size: 120 bytes
// Signature: undefined __thiscall ~MultiLayer(MultiLayer * this)


/* FoliageSystemDesc::MultiLayer::~MultiLayer() */

void __thiscall FoliageSystemDesc::MultiLayer::~MultiLayer(MultiLayer *this)

{
  ResourceManager *this_00;
  Layer *pLVar1;
  Layer *this_01;
  Layer *pLVar2;
  
                    /* try { // try from 00a6423c to 00a64247 has its CatchHandler @ 00a642a0 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)this);
  pLVar2 = *(Layer **)(this + 8);
  if (pLVar2 == (Layer *)0x0) {
    return;
  }
  this_01 = *(Layer **)(this + 0x10);
  pLVar1 = pLVar2;
  if (this_01 != pLVar2) {
    do {
      this_01 = this_01 + -0x70;
      Layer::~Layer(this_01);
    } while (this_01 != pLVar2);
    pLVar1 = *(Layer **)(this + 8);
  }
  *(Layer **)(this + 0x10) = pLVar2;
  operator_delete(pLVar1);
  return;
}


