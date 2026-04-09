// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRope
// Entry Point: 009a2e08
// Size: 576 bytes
// Signature: undefined __thiscall addRope(Bt2ScenegraphPhysicsContext * this, AddRopeDesc * param_1)


/* Bt2ScenegraphPhysicsContext::addRope(Bt2ScenegraphPhysicsContext::AddRopeDesc const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::addRope(Bt2ScenegraphPhysicsContext *this,AddRopeDesc *param_1)

{
  long lVar1;
  pair pVar2;
  long *this_00;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  btRigidBody *local_80;
  btRigidBody *local_78 [2];
  AddRopeDesc *local_68;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float fStack_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (btRigidBody *)0x0;
  local_78[0] = (btRigidBody *)0x0;
  getRopeAnchorInfo(*(TransformGroup **)(param_1 + 0x20),(Vector3 *)(param_1 + 0x2c),local_78,
                    (btVector3 *)&local_48);
  getRopeAnchorInfo(*(TransformGroup **)(param_1 + 0x38),(Vector3 *)(param_1 + 0x44),&local_80,
                    (btVector3 *)&local_58);
  this_00 = (long *)btAlignedAllocInternal(0x40,0x10);
                    /* try { // try from 009a2e80 to 009a2e83 has its CatchHandler @ 009a3048 */
  Bt2Rope::Bt2Rope((Bt2Rope *)this_00,*(uint *)(param_1 + 4),*(TransformGroup ***)(param_1 + 8),
                   *(float *)(param_1 + 0x10),*(float *)(param_1 + 0x14),*(float *)(param_1 + 0x18),
                   *(uint *)(param_1 + 0x1c));
  Bt2Rope::addToScene((Bt2ScenegraphPhysicsContext *)this_00,(btVector3 *)this,
                      (btVector3 *)&local_48,SUB81(&local_58,0));
  if (local_78[0] == (btRigidBody *)0x0) {
    if (param_1[0x28] != (AddRopeDesc)0x0) {
      Bt2Rope::setNodeFixed((Bt2Rope *)this_00,0,true);
    }
  }
  else {
    fVar3 = *(float *)(local_78[0] + 0x38);
    fVar5 = -*(float *)(local_78[0] + 0x3c);
    fVar6 = (float)*(undefined8 *)(local_78[0] + 0x18);
    fVar7 = (float)((ulong)*(undefined8 *)(local_78[0] + 0x18) >> 0x20);
    fVar10 = (float)*(undefined8 *)(local_78[0] + 8);
    fVar11 = (float)((ulong)*(undefined8 *)(local_78[0] + 8) >> 0x20);
    fVar12 = *(float *)(local_78[0] + 0x40);
    uVar8 = NEON_fmadd(local_48,*(undefined4 *)(local_78[0] + 0x10),
                       *(float *)(local_78[0] + 0x20) * fStack_44);
    local_5c = 0;
    uVar4 = NEON_fmsub(*(undefined4 *)(local_78[0] + 0x10),fVar3,
                       *(float *)(local_78[0] + 0x20) * fVar5);
    fVar13 = (float)*(undefined8 *)(local_78[0] + 0x28);
    fVar14 = (float)((ulong)*(undefined8 *)(local_78[0] + 0x28) >> 0x20);
    fVar9 = (float)NEON_fmadd(local_40,*(undefined4 *)(local_78[0] + 0x30),uVar8);
    local_60 = (float)NEON_fmsub(*(undefined4 *)(local_78[0] + 0x30),fVar12,uVar4);
    local_60 = local_60 + fVar9;
    local_68 = (AddRopeDesc *)
               CONCAT44(((fVar7 * fVar5 - fVar11 * fVar3) - fVar14 * fVar12) +
                        fVar7 * fStack_44 + fVar11 * local_48 + fVar14 * local_40,
                        ((fVar6 * fVar5 - fVar10 * fVar3) - fVar13 * fVar12) +
                        fVar6 * fStack_44 + fVar10 * local_48 + fVar13 * local_40);
    Bt2Rope::appendAnchor((Bt2Rope *)this_00,0,local_78[0],(btVector3 *)&local_68,false);
  }
  if (local_80 == (btRigidBody *)0x0) {
    if (param_1[0x40] != (AddRopeDesc)0x0) {
      Bt2Rope::setNodeFixed((Bt2Rope *)this_00,*(int *)(*this_00 + 0x374) - 1,true);
    }
  }
  else {
    fVar3 = *(float *)(local_80 + 0x38);
    fVar5 = -*(float *)(local_80 + 0x3c);
    fVar6 = (float)*(undefined8 *)(local_80 + 0x18);
    fVar7 = (float)((ulong)*(undefined8 *)(local_80 + 0x18) >> 0x20);
    local_5c = 0;
    fVar10 = (float)*(undefined8 *)(local_80 + 8);
    fVar11 = (float)((ulong)*(undefined8 *)(local_80 + 8) >> 0x20);
    fVar12 = *(float *)(local_80 + 0x40);
    uVar8 = NEON_fmadd(local_58,*(undefined4 *)(local_80 + 0x10),
                       *(float *)(local_80 + 0x20) * fStack_54);
    uVar4 = NEON_fmsub(*(undefined4 *)(local_80 + 0x10),fVar3,*(float *)(local_80 + 0x20) * fVar5);
    fVar13 = (float)*(undefined8 *)(local_80 + 0x28);
    fVar14 = (float)((ulong)*(undefined8 *)(local_80 + 0x28) >> 0x20);
    fVar9 = (float)NEON_fmadd(local_50,*(undefined4 *)(local_80 + 0x30),uVar8);
    local_60 = (float)NEON_fmsub(*(undefined4 *)(local_80 + 0x30),fVar12,uVar4);
    local_60 = local_60 + fVar9;
    local_68 = (AddRopeDesc *)
               CONCAT44(((fVar7 * fVar5 - fVar11 * fVar3) - fVar14 * fVar12) +
                        fVar7 * fStack_54 + fVar11 * local_58 + fVar14 * local_50,
                        ((fVar6 * fVar5 - fVar10 * fVar3) - fVar13 * fVar12) +
                        fVar6 * fStack_54 + fVar10 * local_58 + fVar13 * local_50);
    Bt2Rope::appendAnchor
              ((Bt2Rope *)this_00,*(int *)(*this_00 + 0x374) - 1,local_80,(btVector3 *)&local_68,
               false);
  }
  local_68 = param_1;
  pVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,Bt2Rope*>>>
          ::
          __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                    ((uint *)(this + 0x2b0),(piecewise_construct_t *)param_1,(tuple *)&DAT_0051a3e5,
                     (tuple *)&local_68);
  *(long **)((ulong)pVar2 + 0x18) = this_00;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


