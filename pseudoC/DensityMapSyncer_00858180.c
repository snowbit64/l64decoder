// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DensityMapSyncer
// Entry Point: 00858180
// Size: 164 bytes
// Signature: undefined __thiscall DensityMapSyncer(DensityMapSyncer * this, TerrainTransformGroup * param_1, uint param_2, char * param_3, bool param_4)


/* DensityMapSyncer::DensityMapSyncer(TerrainTransformGroup*, unsigned int, char const*, bool) */

void __thiscall
DensityMapSyncer::DensityMapSyncer
          (DensityMapSyncer *this,TerrainTransformGroup *param_1,uint param_2,char *param_3,
          bool param_4)

{
  int iVar1;
  uint uVar2;
  
  Entity::Entity((Entity *)this,param_3,param_4);
  uVar2 = (param_2 + 0x1f >> 5) - 1;
  *(TerrainTransformGroup **)(this + 0x58) = param_1;
  uVar2 = uVar2 | uVar2 >> 1;
  this[0x68] = (DensityMapSyncer)0x0;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  *(undefined ***)(this + 0x20) = &PTR__DensityMapSyncer_00fdbd08;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  uVar2 = uVar2 | uVar2 >> 0x10;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  iVar1 = uVar2 + 1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  if (uVar2 == 0xffffffff) {
    iVar1 = 1;
  }
  *(undefined ***)this = &PTR__DensityMapSyncer_00fdbcd8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x80000000000000;
  *(int *)(this + 0x60) = iVar1;
  *(int *)(this + 100) = iVar1 << 5;
  return;
}


