// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solve
// Entry Point: 0076a854
// Size: 656 bytes
// Signature: undefined __thiscall solve(IKChain * this, MethodInvocation * param_1)


/* IKChain::solve(MethodInvocation*) */

void __thiscall IKChain::solve(IKChain *this,MethodInvocation *param_1)

{
  float *pfVar1;
  long lVar2;
  Joint *pJVar3;
  RawTransformGroup *this_00;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = *(uint *)(this + 0x10);
  if (uVar4 != 0) {
    pJVar3 = *(Joint **)this;
    lVar5 = 0;
    plVar6 = *(long **)(this + 8);
    puVar7 = (undefined4 *)(pJVar3 + 0x30);
    do {
      lVar8 = *(long *)((long)plVar6 + lVar5);
      if (lVar8 != 0) {
        puVar7[-4] = *(undefined4 *)(lVar8 + 0x78);
        puVar7[-3] = *(undefined4 *)(lVar8 + 0x7c);
        puVar7[-2] = *(undefined4 *)(lVar8 + 0x80);
        puVar7[-1] = *(undefined4 *)(lVar8 + 0x84);
        *puVar7 = *(undefined4 *)(lVar8 + 0x88);
        puVar7[1] = *(undefined4 *)(lVar8 + 0x8c);
        puVar7[2] = *(undefined4 *)(lVar8 + 0x90);
        puVar7[3] = *(undefined4 *)(lVar8 + 0x94);
        puVar7[4] = *(undefined4 *)(lVar8 + 0x98);
        puVar7[5] = *(undefined4 *)(lVar8 + 0x9c);
        puVar7[6] = *(undefined4 *)(lVar8 + 0xa0);
        puVar7[7] = *(undefined4 *)(lVar8 + 0xa4);
        puVar7[8] = *(undefined4 *)(lVar8 + 0xa8);
        puVar7[9] = *(undefined4 *)(lVar8 + 0xac);
        puVar7[10] = *(undefined4 *)(lVar8 + 0xb0);
        puVar7[0xb] = *(undefined4 *)(lVar8 + 0xb4);
      }
      lVar5 = lVar5 + 8;
      puVar7 = puVar7 + 0x39;
    } while ((ulong)uVar4 * 8 - lVar5 != 0);
    fVar11 = *(float *)param_1;
    fVar14 = *(float *)(param_1 + 0x10);
    lVar5 = *plVar6;
    fVar10 = *(float *)(param_1 + 0x20);
    if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) {
      local_48 = CONCAT44(fVar14,fVar11);
      local_40 = fVar10;
    }
    else {
      RawTransformGroup::updateWorldTransformation();
      Matrix4x4::invert3x4((Matrix4x4 *)&local_88,(Matrix4x4 *)(lVar5 + 0xb8));
      pJVar3 = *(Joint **)this;
      uVar4 = *(uint *)(this + 0x10);
      uVar12 = NEON_fmadd(fVar11,local_80,fVar14 * local_70);
      fVar13 = (float)NEON_fmadd(fVar10,local_60,uVar12);
      local_48 = CONCAT44(fStack_54 + fStack_74 * fVar14 + fStack_84 * fVar11 + fStack_64 * fVar10,
                          local_58 + local_78 * fVar14 + local_88 * fVar11 + local_68 * fVar10);
      local_40 = local_50 + fVar13;
    }
    uVar12 = CCDIKSolverUtil::solveIKChain
                       (pJVar3,uVar4,*(uint *)(param_1 + 0x30),*(uint *)(this + 0x14),
                        *(float *)(param_1 + 0x40),(float *)&local_48);
    uVar4 = *(uint *)(this + 0x10);
    *(undefined4 *)(this + 0x14) = uVar12;
    if (uVar4 != 0) {
      uVar9 = 0;
      lVar5 = 0x30;
      do {
        this_00 = *(RawTransformGroup **)(*(long *)(this + 8) + uVar9 * 8);
        if (this_00 != (RawTransformGroup *)0x0) {
          pfVar1 = (float *)(*(long *)this + lVar5);
          local_88 = pfVar1[-4];
          fStack_84 = pfVar1[-3];
          local_80 = pfVar1[-2];
          local_7c = pfVar1[-1];
          local_78 = *pfVar1;
          fStack_74 = pfVar1[1];
          local_70 = pfVar1[2];
          local_6c = pfVar1[3];
          local_68 = pfVar1[4];
          fStack_64 = pfVar1[5];
          local_60 = pfVar1[6];
          local_5c = pfVar1[7];
          local_58 = pfVar1[8];
          fStack_54 = pfVar1[9];
          local_50 = pfVar1[10];
          local_4c = pfVar1[0xb];
          RawTransformGroup::setTransformation(this_00,(Matrix4x4 *)&local_88,0);
          uVar4 = *(uint *)(this + 0x10);
        }
        uVar9 = uVar9 + 1;
        lVar5 = lVar5 + 0xe4;
      } while (uVar9 < uVar4);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


