// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroy
// Entry Point: 00a4f2f8
// Size: 168 bytes
// Signature: undefined destroy(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::Element::destroy() */

void AudioSourceSample::Element::destroy(void)

{
  long in_x0;
  ResourceManager *pRVar1;
  long *plVar2;
  
  if (*(long **)(in_x0 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x30) + 8))();
  }
  plVar2 = *(long **)(in_x0 + 0x28);
  *(undefined8 *)(in_x0 + 0x30) = 0;
  if (plVar2 == (long *)0x0) {
    if (*(long *)(in_x0 + 0x20) != 0) {
      pRVar1 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar1,*(Resource **)(in_x0 + 0x20));
      *(undefined8 *)(in_x0 + 0x20) = 0;
    }
  }
  else {
    if ((long *)plVar2[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar2[1] + 8))();
      plVar2 = *(long **)(in_x0 + 0x28);
    }
    plVar2[1] = 0;
    if (*plVar2 != 0) {
      pRVar1 = (ResourceManager *)ResourceManager::getInstance();
      ResourceManager::release(pRVar1,**(Resource ***)(in_x0 + 0x28));
      plVar2 = *(long **)(in_x0 + 0x28);
      *plVar2 = 0;
    }
    LoopSynthesisGenerator::~LoopSynthesisGenerator((LoopSynthesisGenerator *)(plVar2 + 2));
    operator_delete(plVar2);
    *(undefined8 *)(in_x0 + 0x28) = 0;
  }
  return;
}


