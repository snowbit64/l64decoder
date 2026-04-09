// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MultiresTexture
// Entry Point: 0095cae4
// Size: 364 bytes
// Signature: undefined __thiscall ~MultiresTexture(MultiresTexture * this)


/* MultiresTexture::~MultiresTexture() */

void __thiscall MultiresTexture::~MultiresTexture(MultiresTexture *this)

{
  int iVar1;
  void *pvVar2;
  MultiresTextureGpuUpdater *this_00;
  SoftVirtualTexture *this_01;
  void *pvVar3;
  void *pvVar4;
  
  *(undefined ***)this = &PTR__MultiresTexture_00fe04b0;
  if (((PlayerCenteredSystem::Manager::getInstance()::mgr & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&PlayerCenteredSystem::Manager::getInstance()::mgr), iVar1 != 0))
  {
                    /* try { // try from 0095cc18 to 0095cc23 has its CatchHandler @ 0095cc50 */
    PlayerCenteredSystem::Manager::Manager
              ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr);
    __cxa_atexit(PlayerCenteredSystem::Manager::~Manager,
                 PlayerCenteredSystem::Manager::getInstance()::mgr,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&PlayerCenteredSystem::Manager::getInstance()::mgr);
  }
                    /* try { // try from 0095cb18 to 0095cb33 has its CatchHandler @ 0095cc64 */
  PlayerCenteredSystem::Manager::remove
            ((Manager *)PlayerCenteredSystem::Manager::getInstance()::mgr,
             (PlayerCenteredSystem *)this);
  if (*(long *)(this + 0x1b0) != 0) {
    MultiresTextureGpuUpdater::cancelAllUpdates();
    this_00 = *(MultiresTextureGpuUpdater **)(this + 0x1b0);
    if (this_00 != (MultiresTextureGpuUpdater *)0x0) {
      MultiresTextureGpuUpdater::~MultiresTextureGpuUpdater(this_00);
      operator_delete(this_00);
    }
  }
  this_01 = *(SoftVirtualTexture **)(this + 0xe0);
  if (this_01 != (SoftVirtualTexture *)0x0) {
    SoftVirtualTexture::~SoftVirtualTexture(this_01);
    operator_delete(this_01);
  }
  if (m_pCurrentInstance == this) {
    m_pCurrentInstance = (MultiresTexture *)0x0;
  }
  pvVar4 = *(void **)(this + 400);
  if (pvVar4 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x198);
    pvVar2 = pvVar4;
    if (pvVar3 != pvVar4) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0xf0);
        FUN_0095ec20(this + 0x1a0,pvVar3);
      } while (pvVar3 != pvVar4);
      pvVar2 = *(void **)(this + 400);
    }
    *(void **)(this + 0x198) = pvVar4;
    operator_delete(pvVar2);
  }
  pvVar4 = *(void **)(this + 0x108);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x110) = pvVar4;
    operator_delete(pvVar4);
  }
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xf8));
  }
  if (((byte)this[0x70] & 1) != 0) {
    operator_delete(*(void **)(this + 0x80));
    return;
  }
  return;
}


