// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readServerEventFromStream
// Entry Point: 00984c74
// Size: 924 bytes
// Signature: undefined __thiscall readServerEventFromStream(MeshSplitManager * this, GsBitStream * param_1)


/* MeshSplitManager::readServerEventFromStream(GsBitStream*) */

void __thiscall
MeshSplitManager::readServerEventFromStream(MeshSplitManager *this,GsBitStream *param_1)

{
  MeshSplitManager **ppMVar1;
  MeshSplitManager **ppMVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  MeshSplitManager **ppMVar8;
  long *plVar9;
  MeshSplitManager **ppMVar10;
  ulong uVar11;
  MeshSplitManager **ppMVar12;
  MeshSplitManager *pMVar13;
  long lVar14;
  size_t __n;
  uint uVar15;
  long local_a0;
  int local_94;
  uint local_90;
  uint local_8c;
  byte local_88 [4];
  byte local_84 [4];
  MeshSplitManager **local_80;
  MeshSplitManager **local_78;
  MeshSplitManager **local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  Mutex::enterCriticalSection();
  local_80 = (MeshSplitManager **)0x0;
  local_78 = (MeshSplitManager **)0x0;
  local_70 = (MeshSplitManager **)0x0;
                    /* try { // try from 00984cbc to 00984ce7 has its CatchHandler @ 00985024 */
  uVar7 = GsBitStream::readBits(param_1,local_84,8,true);
  if (((uVar7 & 1) != 0) &&
     (uVar7 = GsBitStream::readBits(param_1,local_88,8,true), (uVar7 & 1) != 0)) {
    if (local_84[0] != 0) {
      uVar15 = 0;
      ppMVar1 = (MeshSplitManager **)(this + 0x128);
      ppMVar2 = (MeshSplitManager **)(this + 200);
      do {
                    /* try { // try from 00984d1c to 00984d4b has its CatchHandler @ 00985028 */
        uVar7 = GsBitStream::readBits(param_1,(uchar *)&local_8c,0x20,true);
        if ((uVar7 & 1) == 0) break;
        if (local_8c == 0xffffffff) {
                    /* try { // try from 00984d54 to 00984d67 has its CatchHandler @ 00985020 */
          uVar7 = GsBitStream::readBits(param_1,(uchar *)&local_90,0x20,true);
          ppMVar12 = local_80;
          if ((uVar7 & 1) == 0) break;
          if ((int)local_90 < 0) {
                    /* try { // try from 00984e20 to 00984e33 has its CatchHandler @ 0098501c */
            uVar7 = GsBitStream::readBits(param_1,(uchar *)&local_94,0x20,true);
            if ((uVar7 & 1) == 0) break;
            ppMVar12 = (MeshSplitManager **)*ppMVar1;
            if (ppMVar12 != (MeshSplitManager **)0x0) {
              uVar3 = local_90 & 0x7fffffff;
              ppMVar8 = ppMVar1;
              do {
                bVar5 = *(uint *)((long)ppMVar12 + 0x1c) < uVar3;
                if (!bVar5) {
                  ppMVar8 = ppMVar12;
                }
                ppMVar12 = (MeshSplitManager **)ppMVar12[bVar5];
              } while (ppMVar12 != (MeshSplitManager **)0x0);
              if ((ppMVar8 != ppMVar1) && (*(uint *)((long)ppMVar8 + 0x1c) <= uVar3)) {
                plVar9 = *(long **)(this + 0x60);
                if (plVar9 != *(long **)(this + 0x68)) {
                  do {
                    lVar14 = *plVar9;
                    if (((*(int *)(lVar14 + 0x208) == *(int *)(ppMVar8 + 4)) &&
                        (*(int *)(lVar14 + 0x20c) == local_94)) &&
                       ((*(byte *)(lVar14 + 0x210) >> 6 & 1) == 0)) {
                    /* try { // try from 00984ec4 to 00984ecf has its CatchHandler @ 00985010 */
                      local_a0 = lVar14;
                      FUN_0098245c(&local_80,&local_a0);
                      break;
                    }
                    plVar9 = plVar9 + 1;
                  } while (plVar9 != *(long **)(this + 0x68));
                }
              }
            }
          }
          else {
            ppMVar10 = (MeshSplitManager **)*ppMVar2;
            ppMVar8 = ppMVar2;
            if (ppMVar10 != (MeshSplitManager **)0x0) {
              do {
                if (*(uint *)(ppMVar10 + 4) >= local_90) {
                  ppMVar8 = ppMVar10;
                }
                ppMVar10 = (MeshSplitManager **)ppMVar10[*(uint *)(ppMVar10 + 4) < local_90];
              } while (ppMVar10 != (MeshSplitManager **)0x0);
              if ((ppMVar8 != ppMVar2) && (*(uint *)(ppMVar8 + 4) <= local_90)) {
                pMVar13 = ppMVar8[5];
                if (local_78 < local_70) {
                  *local_78 = pMVar13;
                  local_78 = local_78 + 1;
                }
                else {
                  __n = (long)local_78 - (long)local_80;
                  uVar7 = ((long)__n >> 3) + 1;
                  if (uVar7 >> 0x3d != 0) {
                    /* try { // try from 00984ff8 to 0098500b has its CatchHandler @ 00985018 */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  uVar11 = (long)local_70 - (long)local_80 >> 2;
                  if (uVar7 <= uVar11) {
                    uVar7 = uVar11;
                  }
                  if (0x7ffffffffffffff7 < (ulong)((long)local_70 - (long)local_80)) {
                    uVar7 = 0x1fffffffffffffff;
                  }
                  if (uVar7 == 0) {
                    ppMVar8 = (MeshSplitManager **)0x0;
                  }
                  else {
                    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_006d1f18(
                                  "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                  );
                    }
                    /* try { // try from 00984e10 to 00984e13 has its CatchHandler @ 00985014 */
                    ppMVar8 = (MeshSplitManager **)operator_new(uVar7 << 3);
                  }
                  ppMVar10 = ppMVar8 + ((long)__n >> 3);
                  *ppMVar10 = pMVar13;
                  if (0 < (long)__n) {
                    memcpy(ppMVar8,ppMVar12,__n);
                  }
                  local_70 = ppMVar8 + uVar7;
                  local_80 = ppMVar8;
                  local_78 = ppMVar10 + 1;
                  if (ppMVar12 != (MeshSplitManager **)0x0) {
                    operator_delete(ppMVar12);
                  }
                }
              }
            }
          }
        }
        else {
          uVar7 = readServerEventSingleShapeFromStream(this,param_1,local_8c);
          if ((uVar7 & 1) == 0) break;
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_84[0]);
    }
    if (local_88[0] != 0) {
      uVar15 = 1;
      do {
                    /* try { // try from 00984f2c to 00984f37 has its CatchHandler @ 0098502c */
        bVar6 = readServerEventSingleRemovedAttachmentFromStream(this,param_1);
        bVar5 = uVar15 < local_88[0];
        uVar15 = uVar15 + 1;
      } while ((bVar6 & bVar5) != 0);
    }
  }
                    /* try { // try from 00984f50 to 00984f57 has its CatchHandler @ 00985024 */
  Mutex::leaveCriticalSection();
  uVar7 = (long)local_78 - (long)local_80;
  if ((int)(uVar7 >> 3) != 0) {
    lVar14 = 0;
    do {
      plVar9 = (long *)(*(long **)((long)local_80 + lVar14))[4];
      if ((plVar9 == (long *)0x0) || ((*(byte *)(plVar9 + 2) >> 6 & 1) == 0)) {
        (**(code **)(**(long **)((long)local_80 + lVar14) + 8))();
      }
      else {
        (**(code **)(*plVar9 + 8))(plVar9);
      }
      lVar14 = lVar14 + 8;
    } while ((uVar7 >> 3 & 0xffffffff) * 8 - lVar14 != 0);
  }
  if (local_80 != (MeshSplitManager **)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


