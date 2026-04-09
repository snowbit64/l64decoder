// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateRigidBodyFrictionVelocity
// Entry Point: 00999864
// Size: 224 bytes
// Signature: undefined __cdecl updateRigidBodyFrictionVelocity(Bt2PhysicsRBObject * param_1, btRigidBody * param_2, float param_3)


/* Bt2PhysicsUtil::updateRigidBodyFrictionVelocity(Bt2PhysicsRBObject*, btRigidBody*, float) */

void Bt2PhysicsUtil::updateRigidBodyFrictionVelocity
               (Bt2PhysicsRBObject *param_1,btRigidBody *param_2,float param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  float *pfVar7;
  undefined4 uVar8;
  
  puVar5 = *(uint **)(param_2 + 0x108);
  bVar1 = param_3 != 0.0;
  if ((*puVar5 >> 1 & 1) == 0) {
    if (param_3 != 0.0) goto LAB_00999880;
LAB_009998fc:
    param_3 = 1.0;
    if (*(int *)(*(long *)(param_2 + 200) + 8) - 0x15U < 2) {
      uVar2 = 0;
      uVar8 = 0x3f800000;
      goto LAB_00999934;
    }
    uVar2 = 0;
    uVar8 = 0x3f800000;
    uVar3 = *(uint *)(param_2 + 0xe0) & 0xfffffff7;
  }
  else {
    if ((*puVar5 >> 7 & 1) == 0) {
      *(float *)(*(long *)(puVar5 + 6) + 0xc) = param_3;
    }
    else {
      uVar4 = (ulong)*(uint *)(*(long *)(param_2 + 200) + 0x24);
      if (0 < (int)*(uint *)(*(long *)(param_2 + 200) + 0x24)) {
        lVar6 = *(long *)(param_1 + 0x28);
        pfVar7 = (float *)(*(long *)(puVar5 + 6) + 0xc);
        do {
          if (*(long *)(pfVar7 + -3) == lVar6) {
            *pfVar7 = param_3;
          }
          else {
            bVar1 = (bool)(bVar1 | *pfVar7 != 0.0);
          }
          pfVar7 = pfVar7 + 4;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    if (!bVar1) goto LAB_009998fc;
LAB_00999880:
    uVar8 = 0;
    uVar3 = *(uint *)(param_2 + 0xe0) | 8;
    uVar2 = 4;
  }
  *(uint *)(param_2 + 0xe0) = uVar3;
LAB_00999934:
  *(float *)(param_2 + 0xa8) = param_3;
  *(undefined4 *)(param_2 + 0xac) = uVar8;
  *(undefined4 *)(param_2 + 0xb0) = uVar8;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  *(undefined4 *)(param_2 + 0xb8) = uVar2;
  return;
}


