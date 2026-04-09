// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInterpolatedCollisionHeightAtWorldPos
// Entry Point: 00861860
// Size: 208 bytes
// Signature: undefined __thiscall getInterpolatedCollisionHeightAtWorldPos(DensityMapHeightUpdater * this, float param_1, float param_2, float param_3, float * param_4)


/* DensityMapHeightUpdater::getInterpolatedCollisionHeightAtWorldPos(float, float, float, float&)
   const */

void __thiscall
DensityMapHeightUpdater::getInterpolatedCollisionHeightAtWorldPos
          (DensityMapHeightUpdater *this,float param_1,float param_2,float param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  RawTransformGroup::updateWorldTransformation();
  fVar3 = param_2 - *(float *)(lVar2 + 0xec);
  fVar5 = param_1 - *(float *)(lVar2 + 0xe8);
  lVar1 = *(long *)(*(long *)(this + 0xa40) + 0x40);
  fVar7 = param_3 - *(float *)(lVar2 + 0xf0);
  uVar6 = NEON_fmadd(fVar5,*(undefined4 *)(lVar2 + 0xb8),fVar3 * *(float *)(lVar2 + 0xbc));
  uVar4 = NEON_fmadd(fVar5,*(undefined4 *)(lVar2 + 0xd8),fVar3 * *(float *)(lVar2 + 0xdc));
  fVar8 = (float)NEON_fmadd(fVar7,*(undefined4 *)(lVar2 + 0xc0),uVar6);
  fVar7 = (float)NEON_fmadd(fVar7,*(undefined4 *)(lVar2 + 0xe0),uVar4);
  fVar3 = (float)BaseTerrain::getUnitsPerPixel();
  fVar5 = (float)BaseTerrain::getTerrainHalfSize();
  *param_4 = 0.0;
  BaseTerrain::getInterpolatedHeightAtPoint
            ((BaseTerrain *)(lVar1 + 0x170),fVar8 / fVar3 + fVar5,fVar7 / fVar3 + fVar5);
  return;
}


