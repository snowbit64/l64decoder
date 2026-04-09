// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroyOldParticles
// Entry Point: 008d72a0
// Size: 136 bytes
// Signature: undefined destroyOldParticles(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ParticleSystem::destroyOldParticles() */

void ParticleSystem::destroyOldParticles(void)

{
  undefined4 uVar1;
  long in_x0;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((*(char *)(in_x0 + 0x138) == '\0') && (uVar3 = *(uint *)(in_x0 + 0x1b0), uVar3 != 0)) {
    fVar7 = *(float *)(in_x0 + 0xc4);
    uVar2 = 0;
    fVar8 = *(float *)(in_x0 + 0x134);
    do {
      while (lVar5 = *(long *)(in_x0 + 0x1a8),
            fVar7 - fVar8 <= *(float *)(lVar5 + (ulong)uVar2 * 0x24 + 0x18)) {
        uVar2 = uVar2 + 1;
        if (uVar3 <= uVar2) {
          return;
        }
      }
      puVar4 = (undefined8 *)(lVar5 + (ulong)(uVar3 - 1) * 0x24);
      puVar6 = (undefined8 *)(lVar5 + (ulong)uVar2 * 0x24);
      uVar11 = *puVar4;
      uVar10 = puVar4[3];
      uVar9 = puVar4[2];
      uVar1 = *(undefined4 *)(puVar4 + 4);
      puVar6[1] = puVar4[1];
      *puVar6 = uVar11;
      puVar6[3] = uVar10;
      puVar6[2] = uVar9;
      *(undefined4 *)(puVar6 + 4) = uVar1;
      uVar3 = *(int *)(in_x0 + 0x1b0) - 1;
      *(uint *)(in_x0 + 0x1b0) = uVar3;
    } while (uVar2 < uVar3);
  }
  return;
}


