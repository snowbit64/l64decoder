// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doUpdateDirtyRegion
// Entry Point: 009ea968
// Size: 248 bytes
// Signature: undefined __cdecl doUpdateDirtyRegion(DirtyRegion * param_1)


/* ProceduralPlacementTerrainSlopeMask::doUpdateDirtyRegion(ProceduralPlacementMask::DirtyRegion
   const&) */

void ProceduralPlacementTerrainSlopeMask::doUpdateDirtyRegion(DirtyRegion *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float local_64;
  float fStack_60;
  undefined4 local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1[0xd0] != (DirtyRegion)0x0) {
    uVar4 = *(uint *)(param_1 + 0x54);
    if (uVar4 != 0) {
      uVar5 = 0;
      uVar3 = *(uint *)(param_1 + 0x50);
      do {
        if (uVar3 != 0) {
          uVar4 = 0;
          do {
            BaseTerrain::getInterpolatedNormalAtPoint
                      (*(BaseTerrain **)(param_1 + 200),(float)(ulong)uVar4,(float)(ulong)uVar5,
                       &local_64);
            uVar3 = *(uint *)(param_1 + 0x50);
            uVar1 = uVar4 + uVar5 * uVar3;
            uVar4 = uVar4 + 1;
            uVar6 = NEON_fmadd(local_64,local_64,fStack_60 * fStack_60);
            fVar7 = (float)NEON_fmadd(local_5c,local_5c,uVar6);
            *(float *)(*(long *)(param_1 + 0x58) + (ulong)uVar1 * 4) =
                 (1.0 - fStack_60 / SQRT(fVar7)) * 255.0;
          } while (uVar4 < uVar3);
          uVar4 = *(uint *)(param_1 + 0x54);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


