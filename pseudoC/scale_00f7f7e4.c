// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: scale
// Entry Point: 00f7f7e4
// Size: 516 bytes
// Signature: undefined __thiscall scale(btSoftBody * this, btVector3 * param_1)


/* btSoftBody::scale(btVector3 const&) */

void __thiscall btSoftBody::scale(btSoftBody *this,btVector3 *param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float *pfVar6;
  ulong uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
  uVar2 = *(uint *)(this + 0x374);
  if (0 < (int)uVar2) {
    uVar7 = 0;
    plVar1 = (long *)(this + 0x4b8);
    do {
      lVar4 = *(long *)(this + 0x380) + uVar7 * 0x78;
      pfVar6 = *(float **)(lVar4 + 0x68);
      fVar12 = *(float *)(lVar4 + 0x10) * *(float *)param_1;
      *(float *)(lVar4 + 0x10) = fVar12;
      fVar10 = *(float *)(lVar4 + 0x14) * *(float *)(param_1 + 4);
      *(float *)(lVar4 + 0x14) = fVar10;
      fVar11 = *(float *)(lVar4 + 0x18) * *(float *)(param_1 + 8);
      *(float *)(lVar4 + 0x18) = fVar11;
      *(float *)(lVar4 + 0x20) = *(float *)(lVar4 + 0x20) * *(float *)param_1;
      *(float *)(lVar4 + 0x24) = *(float *)(lVar4 + 0x24) * *(float *)(param_1 + 4);
      *(float *)(lVar4 + 0x28) = *(float *)(lVar4 + 0x28) * *(float *)(param_1 + 8);
      lVar4 = FUN_00f424e4(plVar1,pfVar6);
      if (lVar4 != 0) {
        iVar3 = *(int *)(this + 0x4c8);
        if (iVar3 < 0) {
          lVar4 = *plVar1;
        }
        else {
          while ((iVar3 != 0 && (*(long *)(lVar4 + 0x20) != 0))) {
            iVar3 = iVar3 + -1;
            lVar4 = *(long *)(lVar4 + 0x20);
          }
        }
      }
      pfVar6[3] = 0.0;
      *pfVar6 = fVar12 - fVar8;
      pfVar6[1] = fVar10 - fVar8;
      pfVar6[2] = fVar11 - fVar8;
      pfVar6[4] = fVar12 + fVar8;
      pfVar6[5] = fVar10 + fVar8;
      pfVar6[6] = fVar11 + fVar8;
      pfVar6[7] = 0.0;
      FUN_00f42680(plVar1,lVar4,pfVar6);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  updateNormals();
  puVar5 = *(undefined8 **)(this + 0x4b8);
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x49c) = 0;
    *(undefined8 *)(this + 0x494) = 0;
    *(undefined8 *)(this + 0x4ac) = 0;
    *(undefined8 *)(this + 0x4a4) = 0;
  }
  else {
    fVar8 = (float)(**(code **)(**(long **)(this + 200) + 0x60))();
    fVar10 = *(float *)(puVar5 + 1);
    uVar9 = *puVar5;
    *(undefined4 *)(this + 0x4a0) = 0;
    *(float *)(this + 0x49c) = fVar10 - fVar8;
    *(ulong *)(this + 0x494) = CONCAT44((float)((ulong)uVar9 >> 0x20) - fVar8,(float)uVar9 - fVar8);
    uVar9 = puVar5[2];
    fVar10 = *(float *)(puVar5 + 3);
    *(undefined4 *)(this + 0x4b0) = 0;
    *(ulong *)(this + 0x4a4) = CONCAT44((float)((ulong)uVar9 >> 0x20) + fVar8,(float)uVar9 + fVar8);
    *(float *)(this + 0x4ac) = fVar10 + fVar8;
    if (*(long *)(this + 0xc0) != 0) {
      plVar1 = *(long **)(*(long *)(this + 0x348) + 0x20);
      (**(code **)(*plVar1 + 0x20))
                (plVar1,*(long *)(this + 0xc0),this + 0x494,this + 0x4a4,
                 *(undefined8 *)(*(long *)(this + 0x348) + 0x28));
    }
  }
  updateConstants();
  return;
}


