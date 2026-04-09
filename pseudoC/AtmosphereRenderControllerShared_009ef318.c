// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AtmosphereRenderControllerShared
// Entry Point: 009ef318
// Size: 288 bytes
// Signature: undefined __thiscall ~AtmosphereRenderControllerShared(AtmosphereRenderControllerShared * this)


/* AtmosphereRenderControllerShared::~AtmosphereRenderControllerShared() */

void __thiscall
AtmosphereRenderControllerShared::~AtmosphereRenderControllerShared
          (AtmosphereRenderControllerShared *this)

{
  ResourceManager *pRVar1;
  
                    /* try { // try from 009ef328 to 009ef36f has its CatchHandler @ 009ef438 */
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)this);
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 8));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x10));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x18));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x20));
  pRVar1 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(pRVar1,*(Resource **)(this + 0x28));
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 8))();
  }
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
  ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                 (this + 0x290));
  AdhocShader::ShaderVariants::~ShaderVariants((ShaderVariants *)(this + 0x270));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x170));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x70));
  return;
}


