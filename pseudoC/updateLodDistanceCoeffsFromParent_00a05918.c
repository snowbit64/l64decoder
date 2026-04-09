// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLodDistanceCoeffsFromParent
// Entry Point: 00a05918
// Size: 72 bytes
// Signature: undefined __thiscall updateLodDistanceCoeffsFromParent(CullingArgs * this, CullingArgs * param_1)


/* CullingArgs::updateLodDistanceCoeffsFromParent(CullingArgs const*) */

void __thiscall
CullingArgs::updateLodDistanceCoeffsFromParent(CullingArgs *this,CullingArgs *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x3a0);
  bVar3 = param_1 != (CullingArgs *)0x0;
  puVar2 = (undefined4 *)(lVar4 + 0x6c);
  if (bVar3) {
    puVar2 = (undefined4 *)(param_1 + 0x3e0);
  }
  puVar1 = (undefined4 *)(lVar4 + 0x70);
  if (bVar3) {
    puVar1 = (undefined4 *)(param_1 + 0x3e4);
  }
  *(undefined4 *)(this + 0x3e0) = *puVar2;
  puVar2 = (undefined4 *)(lVar4 + 0x74);
  if (bVar3) {
    puVar2 = (undefined4 *)(param_1 + 1000);
  }
  *(undefined4 *)(this + 0x3e4) = *puVar1;
  *(undefined4 *)(this + 1000) = *puVar2;
  return;
}


