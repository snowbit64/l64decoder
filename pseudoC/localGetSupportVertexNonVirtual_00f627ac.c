// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportVertexNonVirtual
// Entry Point: 00f627ac
// Size: 316 bytes
// Signature: undefined __thiscall localGetSupportVertexNonVirtual(btConvexShape * this, btVector3 * param_1)


/* btConvexShape::localGetSupportVertexNonVirtual(btVector3 const&) const */

undefined4 __thiscall
btConvexShape::localGetSupportVertexNonVirtual(btConvexShape *this,btVector3 *param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float fStack_5c;
  float fStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  local_60 = (float)*(undefined8 *)param_1;
  fStack_5c = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar6 = NEON_fmadd(fStack_5c,fStack_5c,local_60 * local_60);
  fStack_58 = (float)*(undefined8 *)(param_1 + 8);
  fVar7 = (float)NEON_fmadd(fStack_58,fStack_58,uVar6);
  if (fVar7 < 1.421085e-14) {
    fStack_58 = -1.0;
    fStack_5c = -1.0;
    local_60 = -1.0;
  }
  uVar6 = NEON_fmadd(fStack_5c,fStack_5c,local_60 * local_60);
  fVar7 = (float)NEON_fmadd(fStack_58,fStack_58,uVar6);
  fVar8 = 1.0 / SQRT(fVar7);
  local_60 = fVar8 * local_60;
  fStack_5c = fVar8 * fStack_5c;
  fVar7 = fStack_5c;
  fVar5 = local_60;
  uVar6 = localGetSupportVertexWithoutMarginNonVirtual((btVector3 *)this);
  switch(*(undefined4 *)(this + 8)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 10:
  case 0xb:
  case 0xd:
    uVar4 = (ulong)*(uint *)(this + 0x3c);
    break;
  default:
    uVar4 = (**(code **)(*(long *)this + 0x60))(this);
    break;
  case 8:
    uVar4 = (ulong)(uint)(*(float *)(this + 0x1c) * *(float *)(this + 0x2c));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    uVar3 = (undefined4)uVar4;
    uVar6 = NEON_fmadd(local_60,uVar3,uVar6);
    NEON_fmadd(fStack_5c,uVar3,fVar7);
    NEON_fmadd(fVar8 * fStack_58,uVar3,fVar5);
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4,local_60,fStack_5c,fVar8 * fStack_58);
}


