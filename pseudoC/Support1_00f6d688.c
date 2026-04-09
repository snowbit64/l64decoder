// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Support1
// Entry Point: 00f6d688
// Size: 264 bytes
// Signature: undefined __thiscall Support1(MinkowskiDiff * this, btVector3 * param_1)


/* gjkepa2_impl::MinkowskiDiff::Support1(btVector3 const&) const */

float __thiscall gjkepa2_impl::MinkowskiDiff::Support1(MinkowskiDiff *this,btVector3 *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar3 = *(code **)(this + 0x80);
  plVar1 = (long *)(*(long *)(this + 8) + ((long)*(ulong *)(this + 0x88) >> 1));
  if ((*(ulong *)(this + 0x88) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *plVar1);
  }
  fVar5 = *(float *)param_1;
  uVar8 = *(undefined4 *)(param_1 + 4);
  local_2c = 0;
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar4 = NEON_fmadd(uVar8,*(undefined4 *)(this + 0x14),fVar5 * *(float *)(this + 0x10));
  uVar6 = NEON_fmadd(*(undefined4 *)(this + 0x24),uVar8,*(float *)(this + 0x20) * fVar5);
  uVar8 = NEON_fmadd(*(undefined4 *)(this + 0x34),uVar8,*(float *)(this + 0x30) * fVar5);
  local_38 = NEON_fmadd(uVar7,*(undefined4 *)(this + 0x18),uVar4);
  uVar4 = NEON_fmadd(*(undefined4 *)(this + 0x28),uVar7,uVar6);
  uVar8 = NEON_fmadd(*(undefined4 *)(this + 0x38),uVar7,uVar8);
  uStack_34 = uVar4;
  local_30 = uVar8;
  fVar5 = (float)(*pcVar3)(plVar1,&local_38);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    uVar6 = NEON_fmadd(*(undefined4 *)(this + 0x44),uVar4,fVar5 * *(float *)(this + 0x40));
    uVar7 = NEON_fmadd(*(undefined4 *)(this + 0x54),uVar4,*(float *)(this + 0x50) * fVar5);
    uVar4 = NEON_fmadd(*(undefined4 *)(this + 100),uVar4,*(float *)(this + 0x60) * fVar5);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(this + 0x48),uVar8,uVar6);
    NEON_fmadd(*(undefined4 *)(this + 0x58),uVar8,uVar7);
    NEON_fmadd(*(undefined4 *)(this + 0x68),uVar8,uVar4);
    return fVar5 + *(float *)(this + 0x70);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


