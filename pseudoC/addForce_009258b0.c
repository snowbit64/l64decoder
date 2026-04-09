// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addForce
// Entry Point: 009258b0
// Size: 144 bytes
// Signature: undefined __cdecl addForce(uint param_1, Vector3 * param_2, Vector3 * param_3, bool param_4, bool param_5)


/* DestructionShape::addForce(unsigned int, Vector3 const&, Vector3 const&, bool, bool) */

void DestructionShape::addForce
               (uint param_1,Vector3 *param_2,Vector3 *param_3,bool param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(long *)((ulong)param_1 + 0x228) + ((ulong)param_2 & 0xffffffff) * 0x30 + 0x20)
  ;
  if (uVar1 != 0) {
    *(undefined4 *)(*(long *)((ulong)param_1 + 0x228) + ((ulong)param_2 & 0xffffffff) * 0x30 + 0x28)
         = 3;
    ScenegraphPhysicsContextManager::getInstance();
    uVar2 = ScenegraphPhysicsContextManager::getContext();
    Bt2ScenegraphPhysicsContext::enqueueAddLightActorForce
              (uVar2,(Vector3 *)(ulong)uVar1,param_3,param_4,param_5);
    return;
  }
  return;
}


