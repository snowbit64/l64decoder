// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAllTriangles
// Entry Point: 00f69928
// Size: 240 bytes
// Signature: undefined __thiscall processAllTriangles(btScaledBvhTriangleMeshShape * this, btTriangleCallback * param_1, btVector3 * param_2, btVector3 * param_3)


/* btScaledBvhTriangleMeshShape::processAllTriangles(btTriangleCallback*, btVector3 const&,
   btVector3 const&) const */

void __thiscall
btScaledBvhTriangleMeshShape::processAllTriangles
          (btScaledBvhTriangleMeshShape *this,btTriangleCallback *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_68;
  float fStack_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  undefined4 local_4c;
  undefined **local_48;
  btTriangleCallback *pbStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar2 = *(float *)(this + 0x20);
  fVar3 = *(float *)(this + 0x24);
  fVar4 = *(float *)(this + 0x28);
  local_58 = *(float *)param_3;
  if (0.0 <= fVar2) {
    local_58 = *(float *)param_2;
  }
  local_68 = *(float *)param_3;
  if (fVar2 <= 0.0) {
    local_68 = *(float *)param_2;
  }
  fStack_54 = *(float *)(param_3 + 4);
  if (0.0 <= fVar3) {
    fStack_54 = *(float *)(param_2 + 4);
  }
  fStack_64 = *(float *)(param_3 + 4);
  if (fVar3 <= 0.0) {
    fStack_64 = *(float *)(param_2 + 4);
  }
  local_4c = 0;
  local_68 = local_68 * (1.0 / fVar2);
  local_5c = 0;
  local_50 = *(float *)(param_3 + 8);
  if (0.0 <= fVar4) {
    local_50 = *(float *)(param_2 + 8);
  }
  local_60 = *(float *)(param_3 + 8);
  if (fVar4 <= 0.0) {
    local_60 = *(float *)(param_2 + 8);
  }
  local_48 = &PTR__btTriangleCallback_0101b0e8;
  uStack_30 = *(undefined8 *)(this + 0x28);
  local_38 = *(undefined8 *)(this + 0x20);
  local_58 = local_58 * (1.0 / fVar2);
  fStack_54 = fStack_54 * (1.0 / fVar3);
  fStack_64 = fStack_64 * (1.0 / fVar3);
  local_50 = local_50 * (1.0 / fVar4);
  local_60 = local_60 * (1.0 / fVar4);
  pbStack_40 = param_1;
  (**(code **)(**(long **)(this + 0x30) + 0x80))
            (*(long **)(this + 0x30),&local_48,&local_58,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


