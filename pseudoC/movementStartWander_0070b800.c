// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementStartWander
// Entry Point: 0070b800
// Size: 216 bytes
// Signature: undefined movementStartWander(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystem::movementStartWander() */

void AnimalLocomotionSystem::movementStartWander(void)

{
  long in_x0;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  pfVar1 = *(float **)(in_x0 + 0x3b8);
  fVar3 = *pfVar1;
  fVar2 = pfVar1[2];
  *(float *)(in_x0 + 0x42c) = fVar3;
  *(float *)(in_x0 + 0x430) = fVar2;
  fVar4 = pfVar1[5];
  fVar5 = pfVar1[3];
  fVar7 = (float)NEON_fmadd(fVar5,fVar5,fVar4 * fVar4);
  fVar6 = 1.0;
  *(undefined4 *)(in_x0 + 0x428) = 1;
  if (1e-06 < fVar7) {
    fVar6 = 1.0 / SQRT(fVar7);
  }
  *(undefined4 *)(in_x0 + 0x3fc) = 0;
  *(float *)(in_x0 + 0x434) = fVar5 * fVar6;
  *(float *)(in_x0 + 0x438) = fVar4 * fVar6;
  uVar8 = *(undefined4 *)(*(long *)(in_x0 + 0x68) + 0xc);
  *(undefined8 *)(in_x0 + 0x494) = 0;
  *(float *)(in_x0 + 0x44c) = fVar3 + fVar5 * fVar6;
  *(undefined2 *)(in_x0 + 0x4a5) = 1;
  *(undefined4 *)(in_x0 + 0x48c) = uVar8;
  *(float *)(in_x0 + 0x450) = fVar2 + fVar4 * fVar6;
  *(ulong *)(in_x0 + 0x43c) =
       CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x434) >> 0x20) * 0.0001,
                (float)*(undefined8 *)(in_x0 + 0x434) * 0.0001);
  uVar8 = AnimalAnimationSystem::getActiveAnimationSpeed();
  *(undefined4 *)(in_x0 + 0x4a0) = uVar8;
  *(undefined8 *)(in_x0 + 0x454) = *(undefined8 *)(in_x0 + 0x42c);
  return;
}


