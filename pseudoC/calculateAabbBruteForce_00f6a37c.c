// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateAabbBruteForce
// Entry Point: 00f6a37c
// Size: 164 bytes
// Signature: undefined __thiscall calculateAabbBruteForce(btStridingMeshInterface * this, btVector3 * param_1, btVector3 * param_2)


/* btStridingMeshInterface::calculateAabbBruteForce(btVector3&, btVector3&) */

void __thiscall
btStridingMeshInterface::calculateAabbBruteForce
          (btStridingMeshInterface *this,btVector3 *param_1,btVector3 *param_2)

{
  long lVar1;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 8) = 0xdd5e0b6b;
  *(undefined8 *)param_1 = 0xdd5e0b6bdd5e0b6b;
  *(undefined8 *)(param_2 + 8) = 0x5d5e0b6b;
  *(undefined8 *)param_2 = 0x5d5e0b6b5d5e0b6b;
  uStack_50 = 0x5d5e0b6b;
  local_58 = 0x5d5e0b6b5d5e0b6b;
  uStack_40 = 0xdd5e0b6b;
  local_48 = 0xdd5e0b6bdd5e0b6b;
  local_60 = &PTR__btInternalTriangleIndexCallback_0101b1e0;
  (**(code **)(*(long *)this + 0x10))(this,&local_60,param_1,param_2);
  *(undefined8 *)(param_1 + 8) = uStack_50;
  *(undefined8 *)param_1 = local_58;
  *(undefined8 *)(param_2 + 8) = uStack_40;
  *(undefined8 *)param_2 = local_48;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


