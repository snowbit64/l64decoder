// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntities
// Entry Point: 008c4cc0
// Size: 396 bytes
// Signature: undefined __cdecl getEntities(Frustum * param_1, Vector3 param_2, TransformGroup * * param_3, uint param_4)


/* SimpleCullingStructure::getEntities(Frustum const&, Vector3, TransformGroup**, unsigned int)
   const */

uint SimpleCullingStructure::getEntities
               (float param_1_00,float param_2,float param_3,long *param_1,Frustum *param_5,
               long param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_b8;
  float fStack_b4;
  float local_b0;
  long local_a8;
  
  lVar1 = tpidr_el0;
  local_a8 = *(long *)(lVar1 + 0x28);
  lVar4 = *param_1;
  if (param_1[1] == lVar4) {
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
    do {
      lVar4 = *(long *)(lVar4 + uVar5 * 8);
      RawTransformGroup::updateWorldTransformation();
      fVar8 = *(float *)(lVar4 + 0xe8);
      fVar12 = *(float *)(lVar4 + 0xec);
      fVar11 = *(float *)(lVar4 + 0xf0);
      fVar9 = *(float *)(lVar4 + 0x124) * *(float *)(lVar4 + 0x124);
      fVar10 = *(float *)(lVar4 + 0x128);
      local_b8 = fVar8;
      fStack_b4 = fVar12;
      local_b0 = fVar11;
      if ((*(byte *)(lVar4 + 0x17) >> 3 & 1) == 0) {
        fVar6 = 0.01;
      }
      else {
        fVar6 = (float)NoteNode::getCollisionRadius();
        uVar2 = NoteNode::getFixedSize();
        if ((uVar2 & 1) == 0) {
          fVar9 = 160000.0;
        }
      }
      uVar7 = NEON_fmadd(fVar12 - param_2,fVar12 - param_2,
                         (fVar8 - param_1_00) * (fVar8 - param_1_00));
      fVar8 = (float)NEON_fmadd(fVar11 - param_3,fVar11 - param_3,uVar7);
      if ((fVar10 * fVar10 < fVar8 && fVar8 < fVar9) &&
         (uVar2 = Frustum::sphereInFrustumNonVirtual(param_5,(Vector3 *)&local_b8,fVar6),
         (uVar2 & 1) != 0)) {
        if (param_7 <= uVar3) break;
        *(long *)(param_6 + (ulong)uVar3 * 8) = lVar4;
        uVar3 = uVar3 + 1;
      }
      lVar4 = *param_1;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(param_1[1] - lVar4 >> 3));
  }
  if (*(long *)(lVar1 + 0x28) == local_a8) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


