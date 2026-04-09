// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EngineApplication
// Entry Point: 006dc368
// Size: 320 bytes
// Signature: undefined __thiscall ~EngineApplication(EngineApplication * this)


/* WARNING: Type propagation algorithm not settling */
/* EngineApplication::~EngineApplication() */

void __thiscall EngineApplication::~EngineApplication(EngineApplication *this)

{
  long **pplVar1;
  EngineApplication EVar2;
  long *plVar3;
  long **pplVar4;
  long **pplVar5;
  
  pplVar1 = (long **)(this + 0x1f8);
  pplVar4 = *(long ***)(this + 0x1f8);
  plVar3 = pplVar4[*(uint *)(this + 0x210)];
  *(undefined ***)this = &PTR__EngineApplication_00fd9160;
  *(undefined **)(this + 8) = &DAT_00fd91c0;
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 006dc3ac to 006dc3af has its CatchHandler @ 006dc4a8 */
    (**(code **)(*plVar3 + 0x18))();
    pplVar4 = (long **)*pplVar1;
  }
  pplVar5 = *(long ***)(this + 0x200);
  for (; pplVar4 != pplVar5; pplVar4 = pplVar4 + 1) {
    if (*pplVar4 != (long *)0x0) {
      (**(code **)(**pplVar4 + 8))();
    }
  }
                    /* try { // try from 006dc3e0 to 006dc407 has its CatchHandler @ 006dc4a8 */
  TerrainPatchOccluderManager::getInstance();
  TerrainPatchOccluderManager::deinit();
  TextureStreamingManager::getInstance();
  TextureStreamingManager::deinit();
  StatsOverlayManager::getInstance();
  StatsOverlayManager::removeAll();
  GenericStoreUtil::term();
  FileHashManager::saveFileHashes();
  if (((byte)this[0x308] & 1) == 0) {
    EVar2 = this[0x2f0];
  }
  else {
    operator_delete(*(void **)(this + 0x318));
    EVar2 = this[0x2f0];
  }
  if (((byte)EVar2 & 1) == 0) {
    EVar2 = this[0x2d8];
  }
  else {
    operator_delete(*(void **)(this + 0x300));
    EVar2 = this[0x2d8];
  }
  if (((byte)EVar2 & 1) == 0) {
    EVar2 = this[0x2c0];
  }
  else {
    operator_delete(*(void **)(this + 0x2e8));
    EVar2 = this[0x2c0];
  }
  if (((byte)EVar2 & 1) == 0) {
    EVar2 = this[0x2a8];
  }
  else {
    operator_delete(*(void **)(this + 0x2d0));
    EVar2 = this[0x2a8];
  }
  if (((byte)EVar2 & 1) == 0) {
    plVar3 = *pplVar1;
  }
  else {
    operator_delete(*(void **)(this + 0x2b8));
    plVar3 = *pplVar1;
  }
  if (plVar3 != (long *)0x0) {
    *(long **)(this + 0x200) = plVar3;
    operator_delete(plVar3);
  }
  Application::~Application((Application *)this);
  return;
}


