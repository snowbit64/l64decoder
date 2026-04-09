// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initPatchStructure
// Entry Point: 008ef684
// Size: 216 bytes
// Signature: undefined __thiscall initPatchStructure(GeoMipMappingTerrain * this, uint param_1)


/* GeoMipMappingTerrain::initPatchStructure(unsigned int) */

undefined8 __thiscall
GeoMipMappingTerrain::initPatchStructure(GeoMipMappingTerrain *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  uVar5 = param_1 - 1;
  uVar9 = NEON_cnt((ulong)uVar5,1);
  uVar8 = NEON_uaddlv(uVar9,1);
  if ((int)CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) == 1) {
    bVar3 = (uVar5 & 0xffff0000) != 0;
    uVar1 = uVar5 >> 0x10;
    if (!bVar3) {
      uVar1 = uVar5;
    }
    uVar6 = (uint)bVar3;
    uVar5 = uVar6 << 4 | 8;
    uVar2 = uVar1 >> 8;
    if (uVar1 < 0x100) {
      uVar5 = uVar6 << 4;
      uVar2 = uVar1;
    }
    uVar1 = uVar5 | 4;
    uVar6 = uVar2 >> 4;
    if (uVar2 < 0x10) {
      uVar1 = uVar5;
      uVar6 = uVar2;
    }
    uVar5 = uVar1 | 2;
    uVar2 = uVar6 >> 2;
    if (uVar6 < 4) {
      uVar5 = uVar1;
      uVar2 = uVar6;
    }
    uVar5 = (uVar2 + uVar5) - 1;
  }
  else {
    uVar5 = 0;
  }
  *(uint *)(this + 0x198) = uVar5;
  uVar5 = *(int *)(this + 0x90) - 1U >> (ulong)(uVar5 & 0x1f);
  *(uint *)(this + 0x19c) = uVar5;
  uVar7 = (ulong)(uVar5 * uVar5) << 3;
  pvVar4 = operator_new__(uVar7);
  *(void **)(this + 0x188) = pvVar4;
  pvVar4 = operator_new__(uVar7);
  *(void **)(this + 0x2c8) = pvVar4;
  return 1;
}


