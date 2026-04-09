// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkSlopeLimit
// Entry Point: 009d585c
// Size: 184 bytes
// Signature: undefined __thiscall checkSlopeLimit(ProceduralPlacementManager * this, GeoMipMappingTerrain * param_1, float param_2, float param_3, float param_4, float param_5)


/* ProceduralPlacementManager::checkSlopeLimit(GeoMipMappingTerrain*, float, float, float, float) */

void __thiscall
ProceduralPlacementManager::checkSlopeLimit
          (ProceduralPlacementManager *this,GeoMipMappingTerrain *param_1,float param_2,
          float param_3,float param_4,float param_5)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  float fVar4;
  float local_44;
  float fStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_4 <= 1e-05 && 0.999 <= param_5) {
    bVar2 = true;
  }
  else {
    BaseTerrain::getInterpolatedNormalAtPoint((BaseTerrain *)param_1,param_2,param_3,&local_44);
    uVar3 = NEON_fmadd(local_44,local_44,fStack_40 * fStack_40);
    fVar4 = (float)NEON_fmadd(local_3c,local_3c,uVar3);
    bVar2 = param_4 <= fStack_40 / SQRT(fVar4) && fStack_40 / SQRT(fVar4) <= param_5;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}


