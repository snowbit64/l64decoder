// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DensityMapEntity
// Entry Point: 0088f608
// Size: 64 bytes
// Signature: undefined __thiscall DensityMapEntity(DensityMapEntity * this, char * param_1, bool param_2)


/* DensityMapEntity::DensityMapEntity(char const*, bool) */

void __thiscall
DensityMapEntity::DensityMapEntity(DensityMapEntity *this,char *param_1,bool param_2)

{
  Entity::Entity((Entity *)this,param_1,param_2);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__DensityMapEntity_00fdd0d8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x200000000000;
  return;
}


