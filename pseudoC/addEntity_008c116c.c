// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addEntity
// Entry Point: 008c116c
// Size: 504 bytes
// Signature: undefined __thiscall addEntity(CullingGrid2D * this, CullingEntity * param_1, BoundingVolume * param_2, Vector3 * param_3, float param_4, float param_5, float param_6, bool param_7)


/* CullingGrid2D::addEntity(CullingGrid2D::CullingEntity*, BoundingVolume const*, Vector3 const&,
   float, float, float, bool) */

void __thiscall
CullingGrid2D::addEntity
          (CullingGrid2D *this,CullingEntity *param_1,BoundingVolume *param_2,Vector3 *param_3,
          float param_4,float param_5,float param_6,bool param_7)

{
  void **ppvVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  CullingEntity **ppCVar8;
  CullingEntity *pCVar9;
  short sVar10;
  undefined8 uVar11;
  void **ppvVar12;
  void *__dest;
  void *__src;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  uint local_94;
  uint local_90;
  uint uStack_8c;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  lVar5 = getGridCell(this,param_2,&uStack_8c,&local_90,&local_94);
  uVar6 = 2;
  if (param_4 + param_5 <= *(float *)(this + 0x38)) {
    uVar6 = 1;
  }
  if (param_4 + param_5 <= *(float *)(this + 0x34)) {
    uVar6 = 0;
  }
  ppvVar1 = (void **)(lVar5 + (ulong)uVar6 * 0x10);
  ppvVar12 = ppvVar1 + 1;
  uVar2 = *(ushort *)ppvVar12;
  uVar13 = (ulong)uVar2;
  uVar3 = *(ushort *)((long)ppvVar1 + 10);
  if (uVar2 < uVar3) {
    __dest = *ppvVar1;
  }
  else {
    sVar10 = 8;
    if (0x3f < uVar3) {
      sVar10 = 0x20;
    }
    uVar3 = sVar10 + uVar3;
    *(ushort *)((long)ppvVar1 + 10) = uVar3;
    __dest = operator_new__(((ulong)uVar3 + (ulong)uVar3 * 2) * 0x10);
    if (uVar2 == 0) {
      __src = *ppvVar1;
    }
    else {
      __src = *ppvVar1;
      memcpy(__dest,__src,uVar13 * 0x30);
    }
    if (__src != (void *)0x0) {
      operator_delete__(__src);
      uVar13 = (ulong)*(ushort *)ppvVar12;
    }
    *ppvVar1 = __dest;
  }
  if (param_2 == (BoundingVolume *)0x0) {
    *(undefined8 *)((long)__dest + uVar13 * 0x30 + 8) = 0;
    *(undefined4 *)((long)__dest + uVar13 * 0x30 + 0x10) = 0;
    uVar14 = 0x7f7fffff;
  }
  else {
    uVar11 = *(undefined8 *)(param_2 + 0xc);
    *(undefined4 *)((long)__dest + uVar13 * 0x30 + 0x10) = *(undefined4 *)(param_2 + 0x14);
    *(undefined8 *)((long)__dest + uVar13 * 0x30 + 8) = uVar11;
    uVar14 = *(undefined4 *)(param_2 + 0x18);
  }
  ppCVar8 = (CullingEntity **)((long)__dest + uVar13 * 0x30);
  *(undefined4 *)((long)ppCVar8 + 0x14) = uVar14;
  fVar15 = -param_4;
  if (!param_7) {
    fVar15 = param_4;
  }
  pCVar9 = *(CullingEntity **)param_3;
  uVar14 = *(undefined4 *)(param_3 + 8);
  *(float *)(ppCVar8 + 3) = param_5;
  *(float *)((long)ppCVar8 + 0x1c) = param_6;
  *ppCVar8 = param_1;
  *(float *)((long)ppCVar8 + 0x2c) = fVar15;
  *(undefined4 *)(ppCVar8 + 5) = uVar14;
  ppCVar8[4] = pCVar9;
  uVar7 = (uint)*(ushort *)ppvVar12;
  if (0x1ffe < uVar7) {
    uVar7 = 0x1fff;
  }
  *(ushort *)ppvVar12 = *(ushort *)ppvVar12 + 1;
  *(uint *)param_1 = uStack_8c | uVar6 << 0x11 | local_90 << 3 | uVar7 << 0x13 | local_94 << 10;
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


