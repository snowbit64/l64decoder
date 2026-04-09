// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addWorldspaceSoftBrush
// Entry Point: 0089eee0
// Size: 284 bytes
// Signature: undefined __thiscall addWorldspaceSoftBrush(TerrainDeformation * this, float param_1, float param_2, BRUSH_TYPE param_3, float param_4, float param_5, float param_6, TerrainBrush * param_7)


/* TerrainDeformation::addWorldspaceSoftBrush(float, float, TerrainDeformation::BRUSH_TYPE, float,
   float, float, TerrainBrush*) */

void __thiscall
TerrainDeformation::addWorldspaceSoftBrush
          (TerrainDeformation *this,float param_1,float param_2,BRUSH_TYPE param_3,float param_4,
          float param_5,float param_6,TerrainBrush *param_7)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  float local_98;
  float local_90;
  undefined4 local_88;
  undefined4 local_80;
  float local_78;
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(this + 0x30);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)local_a8,(Matrix4x4 *)(lVar2 + 0xb8));
  uVar5 = NEON_fmadd(param_1,local_a8[0],local_98 * 0.0);
  uVar3 = NEON_fmadd(param_1,local_a0,local_90 * 0.0);
  fVar6 = (float)NEON_fmadd(param_2,local_88,uVar5);
  fVar4 = (float)NEON_fmadd(param_2,local_80,uVar3);
  fVar7 = *(float *)(*(long *)(this + 0x38) + 0xa8);
  fVar8 = *(float *)(*(long *)(this + 0x38) + 0x94);
  addHeightmapSpaceSoftBrush
            (this,(local_78 + fVar6) / fVar7 + fVar8,(local_70 + fVar4) / fVar7 + fVar8,param_3,
             param_4 / fVar7,param_5,param_6,param_7);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


