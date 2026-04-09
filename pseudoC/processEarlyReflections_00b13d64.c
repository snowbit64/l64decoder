// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processEarlyReflections
// Entry Point: 00b13d64
// Size: 568 bytes
// Signature: undefined __thiscall processEarlyReflections(FDNReverb * this, float param_1)


/* FDNReverb::processEarlyReflections(float) */

float __thiscall FDNReverb::processEarlyReflections(FDNReverb *this,float param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  piVar3 = *(int **)(this + 0x50);
  uVar1 = *(uint *)(this + 4);
  uVar2 = *(uint *)(this + 0x44);
  lVar4 = *(long *)(this + 0x38);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - *piVar3 & uVar2) * 4),0x3f574bc7,0);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[1] & uVar2) * 4),0x3f010625,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[2] & uVar2) * 4),0x3efb645a,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[3] & uVar2) * 4),0x3ec20c4a,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[4] & uVar2) * 4),0x3ec28f5c,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[5] & uVar2) * 4),0x3eb126e9,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[6] & uVar2) * 4),0x3e93f7cf,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[7] & uVar2) * 4),0x3e8b4396,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[8] & uVar2) * 4),0x3e449ba6,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[9] & uVar2) * 4),0x3e45a1cb,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[10] & uVar2) * 4),0x3e5e353f,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[0xb] & uVar2) * 4),0x3e395810,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[0xc] & uVar2) * 4),0x3e3851ec,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[0xd] & uVar2) * 4),0x3e395810,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[0xe] & uVar2) * 4),0x3e343958,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[0xf] & uVar2) * 4),0x3e116873,
                     uVar5);
  uVar5 = NEON_fmadd(*(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[0x10] & uVar2) * 4),0x3e2b020c,
                     uVar5);
  uVar7 = *(undefined4 *)(lVar4 + (ulong)(uVar1 - piVar3[0x11] & uVar2) * 4);
  *(float *)(lVar4 + (ulong)(uVar2 & uVar1) * 4) = param_1;
  fVar6 = (float)NEON_fmadd(uVar7,0x3e09374c,uVar5);
  return fVar6 * *(float *)(this + 0xec);
}


