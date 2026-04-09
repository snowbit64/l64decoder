// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterCom
// Entry Point: 00f8029c
// Size: 96 bytes
// Signature: undefined __cdecl clusterCom(Cluster * param_1)


/* btSoftBody::clusterCom(btSoftBody::Cluster const*) */

undefined  [16] btSoftBody::clusterCom(Cluster *param_1)

{
  ulong uVar1;
  long *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar6;
  undefined auVar5 [16];
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x24);
  if ((int)*(uint *)(param_1 + 0x24) < 1) {
    fVar4 = 0.0;
    fVar6 = 0.0;
  }
  else {
    fVar4 = 0.0;
    fVar6 = 0.0;
    uVar7 = 0;
    plVar2 = *(long **)(param_1 + 0x30);
    pfVar3 = *(float **)(param_1 + 0x10);
    do {
      fVar8 = *pfVar3;
      uVar1 = uVar1 - 1;
      uVar9 = *(undefined8 *)(*plVar2 + 0x10);
      fVar4 = fVar4 + (float)uVar9 * fVar8;
      fVar6 = fVar6 + (float)((ulong)uVar9 >> 0x20) * fVar8;
      uVar7 = NEON_fmadd(*(undefined4 *)(*plVar2 + 0x18),fVar8,uVar7);
      plVar2 = plVar2 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar1 != 0);
  }
  auVar5._0_4_ = fVar4 * *(float *)(param_1 + 0xa4);
  auVar5._4_4_ = fVar6 * *(float *)(param_1 + 0xa4);
  auVar5._8_8_ = 0;
  return auVar5;
}


