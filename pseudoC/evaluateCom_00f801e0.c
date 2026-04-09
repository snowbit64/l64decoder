// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: evaluateCom
// Entry Point: 00f801e0
// Size: 88 bytes
// Signature: undefined evaluateCom(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::evaluateCom() const */

undefined  [16] btSoftBody::evaluateCom(void)

{
  long in_x0;
  ulong uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined auVar5 [16];
  float fVar6;
  undefined4 uVar7;
  
  uVar4 = 0;
  if ((*(char *)(in_x0 + 0x259) != '\0') &&
     (uVar1 = (ulong)*(uint *)(in_x0 + 0x374), 0 < (int)*(uint *)(in_x0 + 0x374))) {
    uVar4 = 0;
    uVar7 = 0;
    pfVar2 = *(float **)(in_x0 + 0x290);
    puVar3 = (undefined4 *)(*(long *)(in_x0 + 0x380) + 0x18);
    do {
      fVar6 = *pfVar2;
      uVar1 = uVar1 - 1;
      uVar4 = CONCAT44((float)(uVar4 >> 0x20) +
                       (float)((ulong)*(undefined8 *)(puVar3 + -2) >> 0x20) * fVar6,
                       (float)uVar4 + (float)*(undefined8 *)(puVar3 + -2) * fVar6);
      uVar7 = NEON_fmadd(*puVar3,fVar6,uVar7);
      pfVar2 = pfVar2 + 1;
      puVar3 = puVar3 + 0x1e;
    } while (uVar1 != 0);
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


