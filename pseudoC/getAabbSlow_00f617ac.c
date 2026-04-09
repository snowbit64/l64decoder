// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabbSlow
// Entry Point: 00f617ac
// Size: 568 bytes
// Signature: undefined __thiscall getAabbSlow(btConvexInternalShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btConvexInternalShape::getAabbSlow(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btConvexInternalShape::getAabbSlow
          (btConvexInternalShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 local_a8;
  float local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  float local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))();
  lVar2 = 0;
  do {
    local_88 = 0;
    local_80 = 0;
    uVar6 = *(undefined8 *)param_1;
    *(undefined4 *)((long)&local_88 + lVar2) = 0x3f800000;
    local_8c = 0;
    uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),local_88._4_4_,
                       *(float *)(param_1 + 8) * (float)local_88);
    local_98 = CONCAT44((float)((ulong)uVar6 >> 0x20) * (float)local_88 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * local_88._4_4_ +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * (float)local_80,
                        (float)uVar6 * (float)local_88 +
                        (float)*(undefined8 *)(param_1 + 0x10) * local_88._4_4_ +
                        (float)*(undefined8 *)(param_1 + 0x20) * (float)local_80);
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),(float)local_80,uVar7);
    local_90 = fVar8;
    fVar5 = (float)local_80;
    fVar4 = (float)(**(code **)(*(long *)this + 0x80))(this,&local_98);
    uVar6 = *(undefined8 *)param_1;
    fVar10 = *(float *)(param_1 + 0x20);
    uVar7 = *(undefined4 *)(param_1 + 0x24);
    uVar11 = *(undefined8 *)(param_1 + 4);
    local_8c = 0;
    fVar9 = *(float *)(param_1 + 0x10);
    fVar12 = *(float *)(param_1 + 0x14);
    *(undefined4 *)((long)&local_88 + lVar2) = 0xbf800000;
    local_9c = 0;
    uVar7 = NEON_fmadd(uVar7,fVar8,fVar10 * fVar4);
    fVar10 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar5,uVar7);
    local_90 = fVar10 + *(float *)(param_1 + 0x38);
    local_98 = CONCAT44(fVar9 * fVar4 + fVar12 * fVar8 + *(float *)(param_1 + 0x18) * fVar5 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                        (float)uVar6 * fVar4 + (float)uVar11 * fVar8 +
                        (float)*(undefined8 *)(param_1 + 8) * fVar5 +
                        (float)*(undefined8 *)(param_1 + 0x30));
    *(float *)(param_3 + lVar2) = *(float *)((long)&local_98 + lVar2) + fVar3;
    uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 0x18),local_88._4_4_,
                       *(float *)(param_1 + 8) * (float)local_88);
    fVar10 = *(float *)(param_1 + 0x28);
    local_a8 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * (float)local_88 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * local_88._4_4_ +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * (float)local_80,
                        (float)*(undefined8 *)param_1 * (float)local_88 +
                        (float)*(undefined8 *)(param_1 + 0x10) * local_88._4_4_ +
                        (float)*(undefined8 *)(param_1 + 0x20) * (float)local_80);
    fVar4 = (float)NEON_fmadd(fVar10,(float)local_80,uVar7);
    local_a0 = fVar4;
    fVar5 = (float)(**(code **)(*(long *)this + 0x80))(this,&local_a8);
    local_8c = 0;
    uVar7 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),fVar4,*(float *)(param_1 + 0x20) * fVar5);
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 0x28),fVar10,uVar7);
    local_90 = fVar8 + *(float *)(param_1 + 0x38);
    local_98 = CONCAT44(*(float *)(param_1 + 0x10) * fVar5 + *(float *)(param_1 + 0x14) * fVar4 +
                        *(float *)(param_1 + 0x18) * fVar10 +
                        (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
                        (float)*(undefined8 *)param_1 * fVar5 +
                        (float)*(undefined8 *)(param_1 + 4) * fVar4 +
                        (float)*(undefined8 *)(param_1 + 8) * fVar10 +
                        (float)*(undefined8 *)(param_1 + 0x30));
    *(float *)(param_2 + lVar2) = *(float *)((long)&local_98 + lVar2) - fVar3;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0xc);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


