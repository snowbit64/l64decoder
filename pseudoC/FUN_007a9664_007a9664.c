// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9664
// Entry Point: 007a9664
// Size: 532 bytes
// Signature: undefined FUN_007a9664(void)


void FUN_007a9664(Camera *param_1,float *param_2)

{
  Camera CVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float fStack_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  fVar8 = *param_2;
  fVar9 = param_2[4];
  fVar10 = param_2[8];
  fVar11 = param_2[0xc];
  RawTransformGroup::updateWorldTransformation();
  fVar10 = fVar10 - *(float *)(param_1 + 0xec);
  fVar9 = fVar9 - *(float *)(param_1 + 0xe8);
  fVar11 = fVar11 - *(float *)(param_1 + 0xf0);
  uVar4 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xb8),fVar10 * *(float *)(param_1 + 0xbc));
  uVar6 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 200),fVar10 * *(float *)(param_1 + 0xcc));
  uVar3 = NEON_fmadd(fVar9,*(undefined4 *)(param_1 + 0xd8),fVar10 * *(float *)(param_1 + 0xdc));
  uVar3 = NEON_fmadd(fVar11,*(undefined4 *)(param_1 + 0xe0),uVar3);
  uVar4 = NEON_fmadd(fVar11,*(undefined4 *)(param_1 + 0xc0),uVar4);
  fVar11 = (float)NEON_fmadd(fVar11,*(undefined4 *)(param_1 + 0xd0),uVar6);
  Camera::getProjectionSides(param_1,fVar8,&fStack_bc,&local_c0,&fStack_c4,&local_c8);
  CVar1 = param_1[0x16c];
  fVar10 = (float)Camera::getNearClip();
  fVar9 = (float)Camera::getFarClip();
  if (CVar1 == (Camera)0x0) {
    RenderDeviceUtil::makePerspProjectionMatrix
              (fStack_bc,local_c0,fStack_c4,local_c8,fVar10,fVar9,(bool)param_1[0x16d],&local_b8);
  }
  else {
    RenderDeviceUtil::makeOrthoProjectionMatrix
              (fStack_bc,local_c0,fStack_c4,local_c8,fVar10,fVar9,&local_b8);
  }
  param_2[0x42] = 5.605194e-45;
  param_2[0x46] = 5.605194e-45;
  uVar6 = NEON_fmadd(uVar4,local_ac,fVar11 * fStack_9c);
  uVar5 = NEON_fmadd(uVar4,local_b8,fVar11 * fStack_a8);
  uVar7 = NEON_fmadd(uVar4,uStack_b4,fVar11 * local_a4);
  uVar4 = NEON_fmadd(uVar4,local_b0,fVar11 * local_a0);
  fVar10 = (float)NEON_fmadd(uVar3,local_8c,uVar6);
  param_2[0x4a] = 5.605194e-45;
  fVar9 = (float)NEON_fmadd(uVar3,local_98,uVar5);
  fVar11 = (float)NEON_fmadd(uVar3,uStack_94,uVar7);
  fVar8 = (float)NEON_fmadd(uVar3,local_90,uVar4);
  fVar10 = 1.0 / (local_7c + fVar10);
  param_2[0x40] = ((local_88 + fVar9) * fVar10 + 1.0) * 0.5;
  param_2[0x44] = ((fStack_84 + fVar11) * fVar10 + 1.0) * 0.5;
  param_2[0x48] = ((local_80 + fVar8) * fVar10 + 1.0) * 0.5;
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


