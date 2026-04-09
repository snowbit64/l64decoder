// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clusterCom
// Entry Point: 00f802fc
// Size: 104 bytes
// Signature: undefined __thiscall clusterCom(btSoftBody * this, int param_1)


/* btSoftBody::clusterCom(int) const */

undefined  [16] __thiscall btSoftBody::clusterCom(btSoftBody *this,int param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  float *pfVar4;
  float fVar5;
  float fVar7;
  undefined auVar6 [16];
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  
  lVar1 = *(long *)(*(long *)(this + 0x5e8) + (long)param_1 * 8);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x24);
  if ((int)*(uint *)(lVar1 + 0x24) < 1) {
    fVar5 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar5 = 0.0;
    fVar7 = 0.0;
    uVar8 = 0;
    plVar3 = *(long **)(lVar1 + 0x30);
    pfVar4 = *(float **)(lVar1 + 0x10);
    do {
      fVar9 = *pfVar4;
      uVar2 = uVar2 - 1;
      uVar10 = *(undefined8 *)(*plVar3 + 0x10);
      fVar5 = fVar5 + (float)uVar10 * fVar9;
      fVar7 = fVar7 + (float)((ulong)uVar10 >> 0x20) * fVar9;
      uVar8 = NEON_fmadd(*(undefined4 *)(*plVar3 + 0x18),fVar9,uVar8);
      plVar3 = plVar3 + 1;
      pfVar4 = pfVar4 + 1;
    } while (uVar2 != 0);
  }
  auVar6._0_4_ = fVar5 * *(float *)(lVar1 + 0xa4);
  auVar6._4_4_ = fVar7 * *(float *)(lVar1 + 0xa4);
  auVar6._8_8_ = 0;
  return auVar6;
}


