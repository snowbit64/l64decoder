// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: appendvertice
// Entry Point: 00f6cc94
// Size: 300 bytes
// Signature: undefined __thiscall appendvertice(GJK * this, sSimplex * param_1, btVector3 * param_2)


/* gjkepa2_impl::GJK::appendvertice(gjkepa2_impl::GJK::sSimplex&, btVector3 const&) */

void __thiscall gjkepa2_impl::GJK::appendvertice(GJK *this,sSimplex *param_1,btVector3 *param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_58;
  float local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + (ulong)uVar2 * 4 + 0x20) = 0;
  iVar3 = *(int *)(this + 0x1b8);
  *(uint *)(this + 0x1b8) = iVar3 - 1U;
  puVar6 = *(undefined8 **)(this + (ulong)(iVar3 - 1U) * 8 + 0x198);
  *(undefined8 **)(param_1 + (ulong)uVar2 * 8) = puVar6;
  *(uint *)(param_1 + 0x30) = uVar2 + 1;
  fVar7 = *(float *)param_2;
  fVar9 = *(float *)(param_2 + 4);
  fVar13 = *(float *)(param_2 + 8);
  *(float *)((long)puVar6 + 0xc) = 0.0;
  uVar11 = NEON_fmadd(fVar9,fVar9,fVar7 * fVar7);
  fVar12 = (float)NEON_fmadd(fVar13,fVar13,uVar11);
  fVar12 = 1.0 / SQRT(fVar12);
  fVar9 = fVar12 * fVar9;
  fVar13 = fVar12 * fVar13;
  *(float *)puVar6 = fVar12 * fVar7;
  *(float *)((long)puVar6 + 4) = fVar9;
  *(float *)(puVar6 + 1) = fVar13;
  pcVar5 = *(code **)(this + 0x80);
  plVar1 = (long *)(*(long *)this + ((long)*(ulong *)(this + 0x88) >> 1));
  if ((*(ulong *)(this + 0x88) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  fVar12 = (float)(*pcVar5)(plVar1,puVar6);
  local_4c = 0;
  local_58 = CONCAT44(-(float)((ulong)*puVar6 >> 0x20),-(float)*puVar6);
  fVar10 = -*(float *)(puVar6 + 1);
  fVar7 = fVar13;
  local_50 = fVar10;
  fVar8 = (float)MinkowskiDiff::Support1((MinkowskiDiff *)this,(btVector3 *)&local_58);
  *(float *)((long)puVar6 + 0x1c) = 0.0;
  *(float *)(puVar6 + 2) = fVar12 - fVar8;
  *(float *)((long)puVar6 + 0x14) = fVar9 - fVar10;
  *(float *)(puVar6 + 3) = fVar13 - fVar7;
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


