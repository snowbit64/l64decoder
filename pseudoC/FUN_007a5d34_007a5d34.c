// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a5d34
// Entry Point: 007a5d34
// Size: 216 bytes
// Signature: undefined FUN_007a5d34(void)


void FUN_007a5d34(long param_1,long param_2)

{
  long lVar1;
  Bt2PhysicsRBObject *this;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Bt2PhysicsRBObject *)RawTransformGroup::getPhysicsObject();
  if (((*(uint *)(this + 8) ^ 0xffffffff) & 0x88) == 0) {
    Bt2PhysicsRBObject::getLinearVelocity(this,(Vector3 *)&local_48);
    RawTransformGroup::updateWorldTransformation();
    uVar3 = NEON_fmadd(local_48,*(undefined4 *)(param_1 + 0xb8),
                       fStack_44 * *(float *)(param_1 + 0xbc));
    uVar4 = NEON_fmadd(local_48,*(undefined4 *)(param_1 + 200),
                       fStack_44 * *(float *)(param_1 + 0xcc));
    uVar2 = NEON_fmadd(local_48,*(undefined4 *)(param_1 + 0xd8),
                       fStack_44 * *(float *)(param_1 + 0xdc));
    uVar7 = *(undefined4 *)(param_1 + 0xc0);
    uVar5 = *(undefined4 *)(param_1 + 0xd0);
    uVar6 = *(undefined4 *)(param_1 + 0xe0);
    *(undefined4 *)(param_2 + 0x108) = 4;
    uVar3 = NEON_fmadd(local_40,uVar7,uVar3);
    *(undefined4 *)(param_2 + 0x118) = 4;
    uVar4 = NEON_fmadd(local_40,uVar5,uVar4);
    *(undefined4 *)(param_2 + 0x128) = 4;
    uVar2 = NEON_fmadd(local_40,uVar6,uVar2);
    *(undefined4 *)(param_2 + 0x100) = uVar3;
    *(undefined4 *)(param_2 + 0x110) = uVar4;
    *(undefined4 *)(param_2 + 0x120) = uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


