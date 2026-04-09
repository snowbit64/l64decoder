// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConnection
// Entry Point: 008ee26c
// Size: 344 bytes
// Signature: undefined __thiscall addConnection(BaseTerrainSyncer * this, uint param_1)


/* BaseTerrainSyncer::addConnection(unsigned int) */

void __thiscall BaseTerrainSyncer::addConnection(BaseTerrainSyncer *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  void **ppvVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  void **ppvVar10;
  int iVar11;
  void **ppvVar12;
  uint local_88 [2];
  undefined local_80;
  void **local_78;
  void **ppvStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar11 = 0;
  lVar2 = *(long *)this;
  iVar7 = (int)((ulong)(*(long *)(this + 8) - lVar2) >> 5);
  iVar8 = iVar7 + -1;
  if (0 < iVar7) {
    do {
      while( true ) {
        iVar7 = iVar11 + iVar8;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 1;
        }
        uVar1 = iVar7 >> 1;
        uVar3 = *(uint *)(lVar2 + (-(ulong)(uVar1 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar1 << 5)
                         );
        if (uVar3 < param_1) break;
        if (uVar3 <= param_1) goto LAB_008ee390;
        iVar8 = uVar1 - 1;
        if (iVar8 < iVar11) goto LAB_008ee2f8;
      }
      iVar11 = uVar1 + 1;
    } while (iVar11 <= iVar8);
  }
LAB_008ee2f8:
  ppvVar5 = (void **)operator_new(0x10);
  ppvVar10 = *(void ***)(this + 0x18);
  *(undefined4 *)(ppvVar5 + 1) = *(undefined4 *)(ppvVar10 + 1);
  uVar9 = (ulong)*(uint *)((long)ppvVar10 + 0xc) << 3;
  *(uint *)((long)ppvVar5 + 0xc) = *(uint *)((long)ppvVar10 + 0xc);
                    /* try { // try from 008ee31c to 008ee323 has its CatchHandler @ 008ee3d0 */
  pvVar6 = operator_new__(uVar9);
  *ppvVar5 = pvVar6;
  memcpy(pvVar6,*ppvVar10,uVar9);
  ppvVar10 = (void **)operator_new(0x10);
  ppvVar12 = *(void ***)(this + 0x20);
  *(undefined4 *)(ppvVar10 + 1) = *(undefined4 *)(ppvVar12 + 1);
  uVar9 = (ulong)*(uint *)((long)ppvVar12 + 0xc) << 3;
  *(uint *)((long)ppvVar10 + 0xc) = *(uint *)((long)ppvVar12 + 0xc);
                    /* try { // try from 008ee358 to 008ee35f has its CatchHandler @ 008ee3c4 */
  pvVar6 = operator_new__(uVar9);
  *ppvVar10 = pvVar6;
  memcpy(pvVar6,*ppvVar12,uVar9);
  local_80 = 0;
  local_88[0] = param_1;
  local_78 = ppvVar5;
  ppvStack_70 = ppvVar10;
  std::__ndk1::
  vector<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>>
  ::insert((vector<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,BaseTerrainSyncer::SpanSetPair>>>
            *)this,(int)lVar2 + iVar11 * 0x20,local_88);
LAB_008ee390:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


