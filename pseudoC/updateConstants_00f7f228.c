// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateConstants
// Entry Point: 00f7f228
// Size: 152 bytes
// Signature: undefined updateConstants(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::updateConstants() */

void btSoftBody::updateConstants(void)

{
  long lVar1;
  long lVar2;
  btSoftBody *in_x0;
  ulong uVar3;
  float *pfVar4;
  long *plVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = (ulong)*(uint *)(in_x0 + 0x394);
  if (0 < (int)*(uint *)(in_x0 + 0x394)) {
    pfVar4 = (float *)(*(long *)(in_x0 + 0x3a0) + 0x30);
    uVar6 = uVar3;
    do {
      lVar1 = *(long *)(pfVar4 + -8);
      lVar2 = *(long *)(pfVar4 + -6);
      uVar6 = uVar6 - 1;
      fVar7 = *(float *)(lVar1 + 0x10) - *(float *)(lVar2 + 0x10);
      fVar10 = *(float *)(lVar1 + 0x14) - *(float *)(lVar2 + 0x14);
      fVar9 = *(float *)(lVar1 + 0x18) - *(float *)(lVar2 + 0x18);
      uVar8 = NEON_fmadd(fVar10,fVar10,fVar7 * fVar7);
      fVar7 = (float)NEON_fmadd(fVar9,fVar9,uVar8);
      pfVar4[-1] = fVar7;
      *pfVar4 = fVar7;
      pfVar4[-4] = SQRT(fVar7);
      pfVar4 = pfVar4 + 0x12;
    } while (uVar6 != 0);
    plVar5 = (long *)(*(long *)(in_x0 + 0x3a0) + 0x18);
    do {
      uVar3 = uVar3 - 1;
      *(float *)(plVar5 + 2) =
           (*(float *)(*plVar5 + 0x60) + *(float *)(plVar5[-1] + 0x60)) / *(float *)(plVar5[-2] + 8)
      ;
      plVar5 = plVar5 + 9;
    } while (uVar3 != 0);
  }
  updateArea(in_x0,true);
  return;
}


