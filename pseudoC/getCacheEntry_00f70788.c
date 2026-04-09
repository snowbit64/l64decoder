// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCacheEntry
// Entry Point: 00f70788
// Size: 112 bytes
// Signature: undefined __thiscall getCacheEntry(btPersistentManifold * this, btManifoldPoint * param_1)


/* btPersistentManifold::getCacheEntry(btManifoldPoint const&) const */

undefined4 __thiscall
btPersistentManifold::getCacheEntry(btPersistentManifold *this,btManifoldPoint *param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  if (0 < (int)*(uint *)(this + 0x318)) {
    uVar5 = 0;
    puVar6 = (undefined8 *)(this + 0xc);
    fVar7 = *(float *)(this + 0x31c) * *(float *)(this + 0x31c);
    uVar4 = 0xffffffff;
    do {
      uVar9 = *puVar6;
      pfVar1 = (float *)((long)puVar6 + -4);
      puVar6 = puVar6 + 0x18;
      fVar8 = (float)uVar9 - (float)*(undefined8 *)(param_1 + 4);
      fVar10 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
      fVar11 = *pfVar1 - *(float *)param_1;
      fVar8 = (float)NEON_fmadd(fVar11,fVar11,fVar8 * fVar8);
      fVar8 = fVar8 + fVar10 * fVar10;
      bVar3 = fVar7 <= fVar8;
      fVar7 = (float)NEON_fminnm(fVar8,fVar7);
      uVar2 = (int)uVar5;
      if (bVar3) {
        uVar2 = uVar4;
      }
      uVar5 = uVar5 + 1;
      uVar4 = uVar2;
    } while (*(uint *)(this + 0x318) != uVar5);
    return uVar2;
  }
  return 0xffffffff;
}


