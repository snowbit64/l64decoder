// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastClip
// Entry Point: 0098af90
// Size: 228 bytes
// Signature: undefined __thiscall raycastClip(PlayerCenteredCollisionSystem * this, Vector3 * param_1, Vector3 * param_2, float param_3)


/* PlayerCenteredCollisionSystem::raycastClip(Vector3 const&, Vector3 const&, float) */

void __thiscall
PlayerCenteredCollisionSystem::raycastClip
          (PlayerCenteredCollisionSystem *this,Vector3 *param_1,Vector3 *param_2,float param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x20) != 0) {
    uVar4 = 0;
    plVar3 = (long *)(this + 0x28);
    do {
      uVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2,&local_5c);
      if ((uVar2 & 1) != 0) {
        if ((local_5c < param_3) && (param_3 = local_5c, local_5c <= 0.0)) {
          uVar5 = 0;
          goto LAB_0098b044;
        }
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 4;
    } while (uVar4 < *(uint *)(this + 0x20));
  }
  uVar5 = PlayerCenteredCollisionHeightmap::raycastClip
                    (*(PlayerCenteredCollisionHeightmap **)(this + 0x10),param_1,param_2,param_3);
LAB_0098b044:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


