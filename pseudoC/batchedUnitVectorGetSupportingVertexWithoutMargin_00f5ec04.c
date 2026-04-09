// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: batchedUnitVectorGetSupportingVertexWithoutMargin
// Entry Point: 00f5ec04
// Size: 456 bytes
// Signature: undefined __thiscall batchedUnitVectorGetSupportingVertexWithoutMargin(btCapsuleShape * this, btVector3 * param_1, btVector3 * param_2, int param_3)


/* btCapsuleShape::batchedUnitVectorGetSupportingVertexWithoutMargin(btVector3 const*, btVector3*,
   int) const */

void __thiscall
btCapsuleShape::batchedUnitVectorGetSupportingVertexWithoutMargin
          (btCapsuleShape *this,btVector3 *param_1,btVector3 *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (0 < param_3) {
    uVar1 = *(uint *)(this + 0x44);
    puVar5 = (undefined4 *)(param_2 + 0xc);
    puVar6 = (undefined4 *)(param_1 + 8);
    fVar7 = *(float *)(this + (long)((int)(uVar1 + 2) % 3) * 4 + 0x2c);
    uVar4 = (ulong)(uint)param_3;
    while( true ) {
      uVar4 = uVar4 - 1;
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      local_78 = 0;
      local_70 = 0;
      uVar10 = *(undefined8 *)(puVar6 + -2);
      uVar12 = *puVar6;
      *(undefined4 *)((long)&local_78 + uVar3) = *(undefined4 *)(this + uVar3 + 0x2c);
      fVar14 = (float)local_78;
      uVar3 = (ulong)local_78 >> 0x20;
      uVar13 = NEON_fmadd(uVar12,fVar7,(undefined4)local_70);
      fVar8 = (float)(**(code **)(*(long *)this + 0x60))(this);
      uVar11 = *(undefined8 *)(puVar6 + -2);
      uVar12 = *puVar6;
      fVar9 = (float)((ulong)uVar11 >> 0x20);
      fVar14 = (fVar14 + fVar7 * (float)uVar10) - (float)uVar11 * fVar8;
      fVar16 = ((float)uVar3 + fVar7 * (float)((ulong)uVar10 >> 0x20)) - fVar9 * fVar8;
      uVar13 = NEON_fmsub(uVar12,fVar8,uVar13);
      fVar9 = (float)NEON_fmadd(uVar13,uVar12,fVar14 * (float)uVar11 + fVar16 * fVar9);
      fVar8 = -1e+18;
      if (-1e+18 < fVar9) {
        *(ulong *)(puVar5 + -3) = CONCAT44(fVar16,fVar14);
        puVar5[-1] = uVar13;
        *puVar5 = 0;
        uVar11 = *(undefined8 *)(puVar6 + -2);
        uVar12 = *puVar6;
        fVar8 = fVar9;
      }
      local_78 = 0;
      local_70 = 0;
      *(float *)((long)&local_78 + (long)*(int *)(this + 0x44) * 4) =
           -*(float *)(this + (long)*(int *)(this + 0x44) * 4 + 0x2c);
      fVar15 = (float)local_78;
      uVar3 = (ulong)local_78 >> 0x20;
      uVar12 = NEON_fmadd(uVar12,fVar7,(undefined4)local_70);
      fVar9 = (float)(**(code **)(*(long *)this + 0x60))(this);
      fVar14 = (float)*(undefined8 *)(puVar6 + -2);
      fVar16 = (float)((ulong)*(undefined8 *)(puVar6 + -2) >> 0x20);
      fVar15 = (fVar15 + fVar7 * (float)uVar11) - fVar14 * fVar9;
      fVar17 = ((float)uVar3 + fVar7 * (float)((ulong)uVar11 >> 0x20)) - fVar16 * fVar9;
      uVar12 = NEON_fmsub(*puVar6,fVar9,uVar12);
      fVar9 = (float)NEON_fmadd(uVar12,*puVar6,fVar15 * fVar14 + fVar17 * fVar16);
      if (fVar8 < fVar9) {
        *(ulong *)(puVar5 + -3) = CONCAT44(fVar17,fVar15);
        puVar5[-1] = uVar12;
        *puVar5 = 0;
      }
      if (uVar4 == 0) break;
      uVar1 = *(uint *)(this + 0x44);
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


