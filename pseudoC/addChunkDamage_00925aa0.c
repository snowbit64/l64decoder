// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addChunkDamage
// Entry Point: 00925aa0
// Size: 792 bytes
// Signature: undefined __thiscall addChunkDamage(DestructionShape * this, uint param_1, float param_2)


/* DestructionShape::addChunkDamage(unsigned int, float) */

void __thiscall DestructionShape::addChunkDamage(DestructionShape *this,uint param_1,float param_2)

{
  DestructionShape **ppDVar1;
  DestructionShape **ppDVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  Bt2ScenegraphPhysicsContext *this_00;
  long lVar6;
  DestructionShape **ppDVar7;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  DestructionShape **ppDVar11;
  long *plVar12;
  DestructionEmitterShape **ppDVar13;
  DestructionEmitterShape **ppDVar14;
  ulong uVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  float local_ac [2];
  float local_a4;
  float local_a0 [2];
  float local_98;
  float afStack_94 [3];
  float local_88;
  float fStack_84;
  float local_80;
  long local_78;
  
  uVar10 = (ulong)param_1;
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  lVar6 = *(long *)(this + 0x228);
  fVar17 = *(float *)(lVar6 + uVar10 * 0x30) + param_2;
  *(float *)(lVar6 + uVar10 * 0x30) = fVar17;
  if (*(float *)(this + 700) <= fVar17) {
    lVar6 = lVar6 + uVar10 * 0x30;
    plVar16 = (long *)(lVar6 + 8);
    lVar9 = *plVar16;
    plVar12 = (long *)(lVar6 + 0x10);
    uVar10 = *plVar12 - lVar9;
    if ((int)(uVar10 >> 2) != 0) {
      uVar10 = uVar10 >> 2 & 0xffffffff;
      do {
        this_00 = *(Bt2ScenegraphPhysicsContext **)(this + 0x290);
        if ((*(long *)(this + 0x3b8) != 0) || (*(long *)(this + 0x368) != *(long *)(this + 0x360)))
        {
          uVar15 = Bt2ScenegraphPhysicsContext::getLightJointPosition
                             ((uint)this_00,(float *)(ulong)*(uint *)(*plVar16 + uVar10 * 4 + -4));
          if ((uVar15 & 1) != 0) {
            afStack_94[0] = local_88 + 0.2;
            ppDVar14 = *(DestructionEmitterShape ***)(this + 0x368);
            local_98 = local_80 + -0.173205;
            local_ac[0] = local_88 + -0.1;
            local_a4 = local_80 + 0.173205;
            local_a0[0] = local_ac[0];
            for (ppDVar13 = *(DestructionEmitterShape ***)(this + 0x360); ppDVar13 != ppDVar14;
                ppDVar13 = ppDVar13 + 1) {
              DestructionEmitterShape::addEmitTriangle(*ppDVar13,afStack_94,local_a0,local_ac);
            }
            if (*(long *)(this + 0x3b8) != 0) {
              *(ulong *)(this + 0x3a8) =
                   CONCAT44(fStack_84 + (float)((ulong)*(undefined8 *)(this + 0x3a8) >> 0x20),
                            local_88 + (float)*(undefined8 *)(this + 0x3a8));
              *(float *)(this + 0x3b0) = local_80 + *(float *)(this + 0x3b0);
              *(int *)(this + 0x3b4) = *(int *)(this + 0x3b4) + 1;
            }
          }
          this_00 = *(Bt2ScenegraphPhysicsContext **)(this + 0x290);
        }
        uVar10 = uVar10 - 1;
        uVar3 = *(uint *)(*plVar16 + uVar10 * 4);
        Bt2ScenegraphPhysicsContext::enqueueRemoveLightJoint(this_00,uVar3);
        onJointRemoved(this,uVar3,true);
      } while (uVar10 != 0);
      lVar9 = *plVar16;
    }
    *plVar12 = lVar9;
  }
  else if (*(long *)(this + 0x290) != 0) {
    fVar17 = fVar17 / *(float *)(this + 700);
    fVar18 = 0.0;
    if ((0.0 <= fVar17) && (fVar18 = 1.0, fVar17 <= 1.0)) {
      fVar18 = fVar17;
    }
    lVar6 = lVar6 + uVar10 * 0x30;
    plVar12 = (long *)(lVar6 + 8);
    lVar9 = *plVar12;
    uVar10 = *(long *)(lVar6 + 0x10) - lVar9;
    if ((int)(uVar10 >> 2) != 0) {
      uVar15 = 0;
      ppDVar1 = (DestructionShape **)(this + 0x250);
      ppDVar2 = (DestructionShape **)(this + 0x268);
      fVar17 = (float)NEON_fmadd(fVar18,0xbf4ccccd,0x3f800000);
      do {
        uVar3 = *(uint *)(lVar9 + uVar15 * 4);
        ppDVar11 = (DestructionShape **)*ppDVar1;
        ppDVar7 = ppDVar1;
        if (ppDVar11 == (DestructionShape **)0x0) {
LAB_00925bac:
          ppDVar11 = (DestructionShape **)*ppDVar2;
          ppDVar7 = ppDVar2;
          if (ppDVar11 != (DestructionShape **)0x0) {
            do {
              if (*(uint *)(ppDVar11 + 4) >= uVar3) {
                ppDVar7 = ppDVar11;
              }
              ppDVar11 = (DestructionShape **)ppDVar11[*(uint *)(ppDVar11 + 4) < uVar3];
            } while (ppDVar11 != (DestructionShape **)0x0);
            if ((ppDVar7 != ppDVar2) && (*(uint *)(ppDVar7 + 4) <= uVar3)) {
              ppDVar11 = ppDVar7 + 7;
              pfVar8 = (float *)((long)ppDVar7 + 0x3c);
              goto LAB_00925bfc;
            }
          }
        }
        else {
          do {
            bVar5 = *(uint *)((long)ppDVar11 + 0x1c) < uVar3;
            if (!bVar5) {
              ppDVar7 = ppDVar11;
            }
            ppDVar11 = (DestructionShape **)ppDVar11[bVar5];
          } while (ppDVar11 != (DestructionShape **)0x0);
          if ((ppDVar7 == ppDVar1) || (uVar3 < *(uint *)((long)ppDVar7 + 0x1c))) goto LAB_00925bac;
          ppDVar11 = ppDVar7 + 5;
          pfVar8 = (float *)((long)ppDVar7 + 0x2c);
LAB_00925bfc:
          Bt2ScenegraphPhysicsContext::enqueueSetLightJointBreakForce
                    ((uint)*(undefined8 *)(this + 0x290),(fVar17 + 0.2) * *(float *)ppDVar11,
                     (fVar17 + 0.2) * *pfVar8);
        }
        uVar15 = uVar15 + 1;
        if (uVar15 == (uVar10 >> 2 & 0xffffffff)) break;
        lVar9 = *plVar12;
      } while( true );
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


