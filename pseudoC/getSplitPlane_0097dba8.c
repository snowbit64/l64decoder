// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getSplitPlane
// Entry Point: 0097dba8
// Size: 536 bytes
// Signature: undefined __cdecl getSplitPlane(TransformGroup * param_1, Matrix4x4 * param_2, BrepPlane * param_3, Matrix4x4 * param_4)


/* MeshSplitManager::getSplitPlane(TransformGroup*, Matrix4x4 const&, BrepPlane&, Matrix4x4&) */

void MeshSplitManager::getSplitPlane
               (TransformGroup *param_1,Matrix4x4 *param_2,BrepPlane *param_3,Matrix4x4 *param_4)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  float local_58;
  float local_54;
  float fStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  RawTransformGroup::updateWorldTransformation();
  Matrix4x4::invert3x4((Matrix4x4 *)&local_88,(Matrix4x4 *)(param_1 + 0xb8));
  uVar2 = NEON_fmadd(*(undefined4 *)param_2,local_88,*(float *)(param_2 + 4) * local_78);
  uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 8),local_68,uVar2);
  *(undefined4 *)param_4 = uVar2;
  uVar3 = NEON_fmadd(*(undefined4 *)param_2,local_84,*(float *)(param_2 + 4) * fStack_74);
  fVar4 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),uStack_64,uVar3);
  *(float *)(param_4 + 4) = fVar4;
  uVar3 = *(undefined4 *)param_2;
  fVar5 = *(float *)(param_2 + 4);
  uVar8 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_4 + 0xc) = 0;
  uVar3 = NEON_fmadd(uVar3,uStack_80,fVar5 * local_70);
  uVar7 = NEON_fmadd(uVar8,local_60,uVar3);
  *(undefined4 *)(param_4 + 8) = uVar7;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),local_88,local_78 * *(float *)(param_2 + 0x14))
  ;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),local_68,uVar3);
  *(undefined4 *)(param_4 + 0x10) = uVar3;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),local_84,fStack_74 * *(float *)(param_2 + 0x14)
                    );
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x18),uStack_64,uVar3);
  *(undefined4 *)(param_4 + 0x14) = uVar3;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x10),uStack_80,local_70 * *(float *)(param_2 + 0x14)
                    );
  uVar8 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_4 + 0x1c) = 0;
  uVar3 = NEON_fmadd(uVar8,local_60,uVar3);
  *(undefined4 *)(param_4 + 0x18) = uVar3;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),local_88,local_78 * *(float *)(param_2 + 0x24))
  ;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),local_68,uVar3);
  *(undefined4 *)(param_4 + 0x20) = uVar3;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),local_84,fStack_74 * *(float *)(param_2 + 0x24)
                    );
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x28),uStack_64,uVar3);
  *(undefined4 *)(param_4 + 0x24) = uVar3;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x20),uStack_80,local_70 * *(float *)(param_2 + 0x24)
                    );
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_4 + 0x2c) = 0;
  uVar3 = NEON_fmadd(uVar8,local_60,uVar3);
  *(undefined4 *)(param_4 + 0x28) = uVar3;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),local_88,local_78 * *(float *)(param_2 + 0x34))
  ;
  fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),local_68,uVar3);
  *(float *)(param_4 + 0x30) = local_58 + fVar5;
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),local_84,fStack_74 * *(float *)(param_2 + 0x34)
                    );
  fVar6 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x38),uStack_64,uVar3);
  *(float *)(param_4 + 0x34) = local_54 + fVar6;
  fVar5 = (float)NEON_fmadd(uVar2,local_58 + fVar5,fVar4 * (local_54 + fVar6));
  uVar3 = NEON_fmadd(*(undefined4 *)(param_2 + 0x30),uStack_80,local_70 * *(float *)(param_2 + 0x34)
                    );
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_4 + 0x3c) = 0x3f800000;
  fVar6 = (float)NEON_fmadd(uVar8,local_60,uVar3);
  fStack_50 = fStack_50 + fVar6;
  fVar6 = (float)NEON_fmadd(uVar7,fStack_50,fVar5);
  *(float *)(param_4 + 0x38) = fStack_50;
  uVar3 = NEON_fnmadd(uVar7,fStack_50,-fVar5);
  *(undefined4 *)param_3 = uVar2;
  *(float *)(param_3 + 4) = fVar4;
  *(undefined4 *)(param_3 + 8) = uVar7;
  fVar6 = ABS(fVar6);
  *(undefined4 *)(param_3 + 0xc) = uVar3;
  if (fVar6 <= 1.0) {
    fVar6 = 1.0;
  }
  *(float *)(param_3 + 0x10) = fVar6 * 1.192093e-06;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


