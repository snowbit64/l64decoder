// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00f58238
// Size: 656 bytes
// Signature: undefined __thiscall setLocalScaling(btBvhTriangleMeshShape * this, btVector3 * param_1)


/* btBvhTriangleMeshShape::setLocalScaling(btVector3 const&) */

void __thiscall
btBvhTriangleMeshShape::setLocalScaling(btBvhTriangleMeshShape *this,btVector3 *param_1)

{
  long lVar1;
  float *pfVar2;
  undefined8 *this_00;
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
  pfVar2 = (float *)(**(code **)(*(long *)this + 0x38))();
  fVar7 = *pfVar2;
  fVar4 = (float)*(undefined8 *)(pfVar2 + 1) - (float)*(undefined8 *)(param_1 + 4);
  fVar6 = (float)((ulong)*(undefined8 *)(pfVar2 + 1) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  fVar4 = (float)NEON_fmadd(fVar7 - *(float *)param_1,fVar7 - *(float *)param_1,fVar4 * fVar4);
  if (1.192093e-07 < fVar4 + fVar6 * fVar6) {
    lVar3 = *(long *)(this + 0x40);
    uVar5 = *(undefined8 *)param_1;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 8);
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
    if (this[0x59] != (btBvhTriangleMeshShape)0x0) {
      (**(code **)**(undefined8 **)(this + 0x48))();
      if (*(long *)(this + 0x48) != 0) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
    }
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    this_00 = (undefined8 *)(*(code *)PTR_FUN_01048e38)(0xf8,0x10);
    *(undefined *)(this_00 + 8) = 0;
    *(undefined4 *)(this_00 + 7) = 0x11c;
    *(undefined *)(this_00 + 0xc) = 1;
    this_00[0xb] = 0;
    *(undefined8 *)((long)this_00 + 0x4c) = 0;
    *(undefined *)(this_00 + 0x10) = 1;
    this_00[0xf] = 0;
    *(undefined8 *)((long)this_00 + 0x6c) = 0;
    *(undefined *)(this_00 + 0x14) = 1;
    this_00[0x13] = 0;
    *(undefined8 *)((long)this_00 + 0x8c) = 0;
    *(undefined *)(this_00 + 0x18) = 1;
    *(undefined8 *)((long)this_00 + 0xac) = 0;
    *(undefined8 *)((long)this_00 + 0xd4) = 0;
    this_00[0x17] = 0;
    *(undefined4 *)(this_00 + 0x19) = 0;
    this_00[2] = 0xff7fffff;
    this_00[1] = 0xff7fffffff7fffff;
    *(undefined *)(this_00 + 0x1d) = 1;
    this_00[0x1c] = 0;
    *(undefined4 *)(this_00 + 0x1e) = 0;
    this_00[4] = 0x7f7fffff;
    this_00[3] = 0x7f7fffff7f7fffff;
    *this_00 = &PTR__btOptimizedBvh_0101ace8;
    *(undefined8 **)(this + 0x48) = this_00;
    btOptimizedBvh::build
              ((btOptimizedBvh *)this_00,*(btStridingMeshInterface **)(this + 0x40),(bool)this[0x58]
               ,(btVector3 *)(this + 0x20),(btVector3 *)(this + 0x30));
    this[0x59] = (btBvhTriangleMeshShape)0x1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


