// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAll
// Entry Point: 00a704f8
// Size: 84 bytes
// Signature: undefined __thiscall updateAll(Manager * this, ICommandBuffer * param_1, CameraInfo * param_2)


/* PlayerCenteredSystem::Manager::updateAll(ICommandBuffer*, PlayerCenteredSystem::CameraInfo
   const&) */

void __thiscall
PlayerCenteredSystem::Manager::updateAll(Manager *this,ICommandBuffer *param_1,CameraInfo *param_2)

{
  long **pplVar1;
  long **pplVar2;
  
  pplVar1 = *(long ***)(this + 8);
  for (pplVar2 = *(long ***)this; pplVar2 != pplVar1; pplVar2 = pplVar2 + 1) {
    (**(code **)(**pplVar2 + 0x10))(*pplVar2,param_1,param_2);
  }
  return;
}


