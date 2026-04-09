// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~I3DMaterialPoolFactory
// Entry Point: 00907bdc
// Size: 168 bytes
// Signature: undefined __thiscall ~I3DMaterialPoolFactory(I3DMaterialPoolFactory * this)


/* I3DMaterialPoolFactory::~I3DMaterialPoolFactory() */

void __thiscall I3DMaterialPoolFactory::~I3DMaterialPoolFactory(I3DMaterialPoolFactory *this)

{
  ResourceManager *pRVar1;
  MaterialManager *this_00;
  ulong uVar2;
  
                    /* try { // try from 00907bf0 to 00907c1f has its CatchHandler @ 00907c84 */
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x70));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x78));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x80));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x88));
  if (*(int *)(this + 0xcc) != 0) {
    uVar2 = 0;
    do {
                    /* try { // try from 00907c30 to 00907c3b has its CatchHandler @ 00907c88 */
      pRVar1 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar1,*(Resource **)(this + uVar2 * 8 + 0xd8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0xcc));
  }
                    /* try { // try from 00907c4c to 00907c57 has its CatchHandler @ 00907c84 */
  this_00 = (MaterialManager *)MaterialManager::getInstance();
  MaterialManager::releaseCustomShader(this_00,*(CustomShader **)(this + 0xc0));
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


