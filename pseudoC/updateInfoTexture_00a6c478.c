// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateInfoTexture
// Entry Point: 00a6c478
// Size: 416 bytes
// Signature: undefined __thiscall updateInfoTexture(DensityAnimationMap * this, ICommandBuffer * param_1, uint param_2, uint param_3)


/* DensityAnimationMap::updateInfoTexture(ICommandBuffer*, unsigned int, unsigned int) */

void __thiscall
DensityAnimationMap::updateInfoTexture
          (DensityAnimationMap *this,ICommandBuffer *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  long local_c8;
  uint local_c0;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar10 = *(uint *)(this + 0x50);
  iVar2 = *(int *)(this + 0x44);
  uVar8 = 0;
  if (uVar10 != 0) {
    uVar8 = *(uint *)(this + 0x6c) / uVar10;
  }
  iVar7 = (uVar8 - 1 & param_2) * uVar10;
  iVar4 = (uVar8 - 1 & param_3) * uVar10;
  (**(code **)(**(long **)(this + 0x90) + 0x68))
            (*(long **)(this + 0x90),param_1,0,0,iVar7,iVar4,iVar7 + uVar10,iVar4 + uVar10,0,1,3,
             &local_c8);
  if (*(int *)(this + 0x50) != 0) {
    uVar8 = iVar2 * param_3;
    uVar10 = 0;
    do {
      lVar9 = 0;
      uVar6 = *(uint *)(this + 0x20);
      uVar3 = local_c0 >> 1;
      uVar1 = iVar2 * param_2;
      do {
        fVar11 = (float)FoliageBendingSystem::getInstanceHeight
                                  (*(FoliageBendingSystem **)(this + 8),uVar1,uVar8,uVar6,uVar6);
        fVar11 = (float)NEON_fmadd(fVar11 * 0.125,0x477fff00,0x3f000000);
        iVar7 = (int)fVar11;
        if (0xfffe < iVar7) {
          iVar7 = 0xffff;
        }
        iVar4 = 0;
        if (0 < iVar7) {
          iVar4 = iVar7;
        }
        *(short *)(local_c8 + (ulong)(uVar10 * uVar3) * 2 + lVar9 * 2) = (short)iVar4;
        lVar9 = lVar9 + 1;
        uVar6 = *(uint *)(this + 0x20);
        uVar1 = uVar6 + uVar1;
      } while ((uint)lVar9 < *(uint *)(this + 0x50));
      uVar8 = uVar6 + uVar8;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(this + 0x50));
  }
  (**(code **)(**(long **)(this + 0x90) + 0x70))(*(long **)(this + 0x90),param_1,&local_c8);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


