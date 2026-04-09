// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GsMaterial
// Entry Point: 0094504c
// Size: 128 bytes
// Signature: undefined __thiscall ~GsMaterial(GsMaterial * this)


/* GsMaterial::~GsMaterial() */

void __thiscall GsMaterial::~GsMaterial(GsMaterial *this)

{
  ResourceManager *pRVar1;
  
  *(undefined ***)this = &PTR__GsMaterial_00fe03a8;
  *(undefined ***)(this + 0x20) = &PTR__GsMaterial_00fe03d0;
                    /* try { // try from 00945074 to 009450ab has its CatchHandler @ 009450cc */
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x30));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x38));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x40));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x48));
  releaseCustomShaderResources();
  *(undefined ***)(this + 0x20) = &PTR__AtomicRefCounted_00fda810;
  Entity::~Entity((Entity *)this);
  return;
}


