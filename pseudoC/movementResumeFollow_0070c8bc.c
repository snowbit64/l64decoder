// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementResumeFollow
// Entry Point: 0070c8bc
// Size: 184 bytes
// Signature: undefined movementResumeFollow(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystem::movementResumeFollow() */

void AnimalLocomotionSystem::movementResumeFollow(void)

{
  long in_x0;
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = *(undefined4 **)(in_x0 + 0x3b8);
  uVar3 = puVar1[2];
  *(undefined4 *)(in_x0 + 0x42c) = *puVar1;
  *(undefined4 *)(in_x0 + 0x430) = uVar3;
  fVar2 = (float)puVar1[5];
  fVar4 = (float)puVar1[3];
  fVar6 = (float)NEON_fmadd(fVar4,fVar4,fVar2 * fVar2);
  fVar5 = 1.0;
  *(undefined4 *)(in_x0 + 0x428) = 2;
  if (1e-06 < fVar6) {
    fVar5 = 1.0 / SQRT(fVar6);
  }
  *(undefined8 *)(in_x0 + 0x444) = 0;
  *(float *)(in_x0 + 0x434) = fVar4 * fVar5;
  *(float *)(in_x0 + 0x438) = fVar2 * fVar5;
  *(undefined *)(in_x0 + 0x4a5) = 1;
  *(ulong *)(in_x0 + 0x43c) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x434) >> 0x20) * 0.0001,
                (float)*(undefined8 *)(in_x0 + 0x434) * 0.0001);
  uVar3 = AnimalAnimationSystem::getActiveAnimationSpeed();
  *(undefined4 *)(in_x0 + 0x4a0) = uVar3;
  *(undefined8 *)(in_x0 + 0x454) = *(undefined8 *)(in_x0 + 0x42c);
  return;
}


