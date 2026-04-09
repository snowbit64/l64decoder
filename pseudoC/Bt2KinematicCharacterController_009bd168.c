// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2KinematicCharacterController
// Entry Point: 009bd168
// Size: 276 bytes
// Signature: undefined __thiscall Bt2KinematicCharacterController(Bt2KinematicCharacterController * this, btPairCachingGhostObject * param_1, btConvexShape * param_2, float param_3, int param_4)


/* Bt2KinematicCharacterController::Bt2KinematicCharacterController(btPairCachingGhostObject*,
   btConvexShape*, float, int) */

void __thiscall
Bt2KinematicCharacterController::Bt2KinematicCharacterController
          (Bt2KinematicCharacterController *this,btPairCachingGhostObject *param_1,
          btConvexShape *param_2,float param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(int *)(this + 200) = param_4;
  this[0x98] = (Bt2KinematicCharacterController)0x1;
  if ((DAT_021119c8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_021119c8);
    if (iVar1 != 0) {
      DAT_021119a4 = 0;
      DAT_0211199c = 0;
      DAT_02111998 = 0x3f800000;
      DAT_021119ac = 0x3f800000;
      DAT_021119b0 = 0;
      DAT_021119b8 = 0;
      DAT_021119c0 = 0x3f800000;
      __cxa_guard_release(&DAT_021119c8);
    }
  }
  uVar3 = *(undefined8 *)((long)&DAT_0211199c + (long)param_4 * 0x10 + 4);
  uVar2 = *(undefined8 *)(&DAT_02111998 + (long)param_4 * 4);
  *(float *)(this + 0x24) = param_3;
  *(undefined8 *)(this + 0x28) = 0x3ca3d70a;
  this[0xb6] = (Bt2KinematicCharacterController)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0xc0) = uVar3;
  *(undefined8 *)(this + 0xb8) = uVar2;
  *(undefined4 *)(this + 0x20) = 0;
  *(btPairCachingGhostObject **)(this + 8) = param_1;
  *(btConvexShape **)(this + 0x10) = param_2;
  *(undefined2 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xcc) = 0x3a83126f;
  *(undefined8 *)(this + 0x18) = 0x3f3504f33f490fdb;
  return;
}


