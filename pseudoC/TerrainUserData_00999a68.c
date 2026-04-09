// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainUserData
// Entry Point: 00999a68
// Size: 52 bytes
// Signature: undefined __thiscall TerrainUserData(TerrainUserData * this, uint param_1, TransformGroup * param_2, ushort * param_3)


/* Bt2PhysicsUtil::TerrainUserData::TerrainUserData(unsigned int, TransformGroup*, unsigned short
   const*) */

void __thiscall
Bt2PhysicsUtil::TerrainUserData::TerrainUserData
          (TerrainUserData *this,uint param_1,TransformGroup *param_2,ushort *param_3)

{
  undefined4 uVar1;
  
  *(TransformGroup **)(this + 0x10) = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(uint *)(this + 8) = param_1 | 0x11;
  this[0x1c] = (TerrainUserData)0x0;
  *(ushort **)(this + 0x20) = param_3;
  *(undefined4 *)(this + 0x18) = uVar1;
  *(undefined ***)this = &PTR__HeightmapDataOwner_00fe0ff0;
  return;
}


