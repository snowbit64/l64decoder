// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOptimizedBvh
// Entry Point: 00f597d4
// Size: 404 bytes
// Signature: undefined __thiscall setOptimizedBvh(btBvhTriangleMeshShape * this, btOptimizedBvh * param_1, btVector3 * param_2)


/* btBvhTriangleMeshShape::setOptimizedBvh(btOptimizedBvh*, btVector3 const&) */

void __thiscall
btBvhTriangleMeshShape::setOptimizedBvh
          (btBvhTriangleMeshShape *this,btOptimizedBvh *param_1,btVector3 *param_2)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar6;
  undefined8 uVar5;
  float fVar7;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(btOptimizedBvh **)(this + 0x48) = param_1;
  this[0x59] = (btBvhTriangleMeshShape)0x0;
  pfVar2 = (float *)(**(code **)(*(long *)this + 0x38))();
  fVar7 = *pfVar2;
  fVar4 = (float)*(undefined8 *)(pfVar2 + 1) - (float)*(undefined8 *)(param_2 + 4);
  fVar6 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
  fVar4 = (float)NEON_fmadd(fVar7 - *(float *)param_2,fVar7 - *(float *)param_2,fVar4 * fVar4);
  if (1.192093e-07 < fVar4 + fVar6 * fVar6) {
    lVar3 = *(long *)(this + 0x40);
    uVar5 = *(undefined8 *)param_2;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar3 + 8) = uVar5;
    local_3c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    local_48 = 0x3f800000;
    fVar4 = (float)(**(code **)(*(long *)this + 0x88))(this,&local_48);
    local_48 = 0xbf800000;
    *(float *)(this + 0x30) = fVar4 + *(float *)(this + 0x1c);
    fVar4 = (float)(**(code **)(*(long *)this + 0x88))(this,&local_48);
    fVar6 = *(float *)(this + 0x1c);
    local_48 = 0;
    uStack_40 = 0;
    local_3c = 0;
    uStack_44 = 0x3f800000;
    *(float *)(this + 0x20) = fVar4 - fVar6;
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    uStack_44 = 0xbf800000;
    *(float *)(this + 0x34) = fVar6 + *(float *)(this + 0x1c);
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    local_48 = 0;
    uStack_44 = 0;
    local_3c = 0;
    uStack_40 = 0x3f800000;
    *(float *)(this + 0x24) = fVar6 - *(float *)(this + 0x1c);
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    uStack_40 = 0xbf800000;
    *(float *)(this + 0x38) = fVar7 + *(float *)(this + 0x1c);
    (**(code **)(*(long *)this + 0x88))(this,&local_48);
    *(float *)(this + 0x28) = fVar7 - *(float *)(this + 0x1c);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


