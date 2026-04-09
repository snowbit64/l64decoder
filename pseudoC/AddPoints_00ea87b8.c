// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddPoints
// Entry Point: 00ea87b8
// Size: 304 bytes
// Signature: undefined __cdecl AddPoints(Mesh * param_1, SArray * param_2)


/* VHACD::AddPoints(VHACD::Mesh const*, VHACD::SArray<VHACD::Vec3<double>, 64ul>&) */

void VHACD::AddPoints(Mesh *param_1,SArray *param_2)

{
  Mesh *pMVar1;
  SArray *__src;
  undefined auVar2 [16];
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *__dest;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  SArray *pSVar10;
  
  uVar4 = *(ulong *)(param_1 + 0x608);
  if (0 < (int)uVar4) {
    lVar6 = 0;
    uVar7 = *(ulong *)(param_2 + 0x610);
    uVar8 = *(ulong *)(param_2 + 0x608);
    do {
      pMVar1 = param_1;
      if (*(long *)(param_1 + 0x610) != 0x40) {
        pMVar1 = *(Mesh **)(param_1 + 0x600);
      }
      if (uVar8 == uVar7) {
        uVar9 = uVar7 * 2;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar9;
        uVar8 = uVar7 * 0x30 | 8;
        if (SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
          uVar8 = 0xffffffffffffffff;
        }
        puVar3 = (ulong *)operator_new__(uVar8);
        pSVar10 = *(SArray **)(param_2 + 0x600);
        __src = param_2;
        if (uVar7 != 0x40) {
          __src = pSVar10;
        }
        __dest = puVar3 + 1;
        *puVar3 = uVar9;
        memcpy(__dest,__src,uVar7 * 0x18);
        uVar8 = uVar7;
        if (pSVar10 != (SArray *)0x0) {
          operator_delete__(pSVar10 + -8);
          uVar8 = *(ulong *)(param_2 + 0x608);
        }
        *(ulong **)(param_2 + 0x600) = __dest;
        *(ulong *)(param_2 + 0x610) = uVar9;
        uVar7 = uVar9;
      }
      else {
        __dest = *(ulong **)(param_2 + 0x600);
      }
      puVar3 = (ulong *)(pMVar1 + lVar6);
      puVar5 = (ulong *)param_2;
      if (uVar7 != 0x40) {
        puVar5 = __dest;
      }
      puVar5 = puVar5 + uVar8 * 3;
      lVar6 = lVar6 + 0x18;
      uVar9 = *puVar3;
      *(ulong *)(param_2 + 0x608) = uVar8 + 1;
      *puVar5 = uVar9;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      uVar8 = uVar8 + 1;
    } while ((uVar4 & 0xffffffff) * 0x18 - lVar6 != 0);
  }
  return;
}


