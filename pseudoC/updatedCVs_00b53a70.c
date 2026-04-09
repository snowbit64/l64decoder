// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatedCVs
// Entry Point: 00b53a70
// Size: 860 bytes
// Signature: undefined updatedCVs(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CubicSpline::updatedCVs() */

void CubicSpline::updatedCVs(void)

{
  uint uVar1;
  CubicSpline *in_x0;
  void *pvVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  uVar7 = *(uint *)(in_x0 + 0x28);
  uVar8 = (ulong)uVar7;
  if (uVar7 < 2) {
    puVar4 = *(undefined8 **)(in_x0 + 0x18);
    iVar5 = uVar7 * 3;
    uVar10 = 0;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 0;
    *(undefined4 *)((long)puVar4 + uVar8 * 0xc + 0xc) = 0;
    *(undefined4 *)((long)puVar4 + (ulong)(iVar5 + 6) * 4) = 0;
    *(undefined4 *)((long)puVar4 + (ulong)(iVar5 + 4) * 4) = 0;
    *(undefined4 *)((long)puVar4 + (ulong)(iVar5 + 7) * 4) = 0;
    *(undefined4 *)((long)puVar4 + (ulong)(iVar5 + 5) * 4) = 0;
  }
  else {
    uVar1 = uVar7 * 3;
    puVar4 = *(undefined8 **)(in_x0 + 0x18);
    if (*(int *)(in_x0 + 8) == 0) {
      uVar10 = NEON_fnmsub(*(undefined4 *)((long)puVar4 + 0xc),0x40000000,
                           *(undefined4 *)(puVar4 + 3));
      *(undefined4 *)puVar4 = uVar10;
      uVar10 = *(undefined4 *)((long)puVar4 + (ulong)uVar1 * 4);
      uVar11 = *(undefined4 *)((long)puVar4 + (ulong)(uVar1 - 3) * 4);
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 6) * 4) = 0;
      uVar10 = NEON_fnmsub(uVar10,0x40000000,uVar11);
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 3) * 4) = uVar10;
      uVar10 = NEON_fnmsub(*(undefined4 *)(puVar4 + 2),0x40000000,
                           *(undefined4 *)((long)puVar4 + 0x1c));
      *(undefined4 *)((long)puVar4 + 4) = uVar10;
      uVar10 = *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 1) * 4);
      uVar11 = *(undefined4 *)((long)puVar4 + (ulong)(uVar1 - 2) * 4);
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 7) * 4) = 0;
      uVar10 = NEON_fnmsub(uVar10,0x40000000,uVar11);
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 4) * 4) = uVar10;
      uVar10 = NEON_fnmsub(*(undefined4 *)((long)puVar4 + 0x14),0x40000000,
                           *(undefined4 *)(puVar4 + 4));
      *(undefined4 *)(puVar4 + 1) = uVar10;
      uVar11 = NEON_fnmsub(*(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 2) * 4),0x40000000,
                           *(undefined4 *)((long)puVar4 + (ulong)(uVar1 - 1) * 4));
      uVar10 = 0;
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 5) * 4) = uVar11;
    }
    else {
      *(undefined4 *)puVar4 = *(undefined4 *)((long)puVar4 + (ulong)uVar1 * 4);
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 3) * 4) = *(undefined4 *)((long)puVar4 + 0xc);
      uVar10 = *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 1) * 4);
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 6) * 4) = *(undefined4 *)(puVar4 + 3);
      *(undefined4 *)((long)puVar4 + 4) = uVar10;
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 4) * 4) = *(undefined4 *)(puVar4 + 2);
      uVar10 = *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 2) * 4);
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 7) * 4) = *(undefined4 *)((long)puVar4 + 0x1c);
      *(undefined4 *)(puVar4 + 1) = uVar10;
      *(undefined4 *)((long)puVar4 + (ulong)(uVar1 + 5) * 4) = *(undefined4 *)((long)puVar4 + 0x14);
      uVar10 = *(undefined4 *)(puVar4 + 4);
    }
  }
  pvVar2 = *(void **)(in_x0 + 0x10);
  *(undefined4 *)((long)puVar4 + (ulong)(uVar7 * 3 + 8) * 4) = uVar10;
  if (pvVar2 != (void *)0x0) {
    operator_delete__(pvVar2);
    uVar8 = (ulong)*(uint *)(in_x0 + 0x28);
  }
  uVar7 = (uint)uVar8;
  puVar3 = (undefined4 *)operator_new__(uVar8 << 2);
  *(undefined4 **)(in_x0 + 0x10) = puVar3;
  if (*(void **)(in_x0 + 0x38) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x38));
    uVar7 = *(uint *)(in_x0 + 0x28);
    puVar3 = *(undefined4 **)(in_x0 + 0x10);
  }
  pvVar2 = operator_new__((ulong)(uVar7 * 0x21) << 2);
  *(void **)(in_x0 + 0x38) = pvVar2;
  *puVar3 = 0;
  if (1 < uVar7) {
    fVar12 = 0.0;
    uVar8 = 1;
    do {
      fVar9 = (float)preCalcSegment(in_x0,(int)uVar8 - 1);
      fVar12 = fVar12 + fVar9;
      puVar3 = *(undefined4 **)(in_x0 + 0x10);
      uVar7 = *(uint *)(in_x0 + 0x28);
      puVar3[uVar8] = fVar12;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  if (*(int *)(in_x0 + 8) == 0) {
    lVar6 = *(long *)(in_x0 + 0x38);
    iVar5 = uVar7 * 0x21;
    *(undefined4 *)(in_x0 + 0x2c) = puVar3[uVar7 - 1];
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x21) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x20) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x1f) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x1e) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x1d) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x1c) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x1b) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x1a) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x19) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x18) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x17) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x16) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x15) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x14) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x13) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x12) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x11) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0x10) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0xf) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0xe) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0xd) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0xc) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 0xb) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 10) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 9) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 8) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 7) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 6) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 5) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 4) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 3) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 2) * 4) = 0;
    *(undefined4 *)(lVar6 + (ulong)(iVar5 - 1) * 4) = 0;
  }
  else if (*(int *)(in_x0 + 8) == 1) {
    fVar9 = (float)puVar3[uVar7 - 1];
    fVar12 = (float)preCalcSegment(in_x0,uVar7 - 1);
    *(float *)(in_x0 + 0x2c) = fVar9 + fVar12;
  }
  return;
}


