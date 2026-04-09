// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConnection
// Entry Point: 009826f0
// Size: 612 bytes
// Signature: undefined __thiscall addConnection(MeshSplitManager * this, uint param_1, PLATFORM_ID param_2)


/* MeshSplitManager::addConnection(unsigned int, SysUtilBase::PLATFORM_ID) */

void __thiscall
MeshSplitManager::addConnection(MeshSplitManager *this,uint param_1,PLATFORM_ID param_2)

{
  undefined8 *this_00;
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong local_88;
  undefined8 *puStack_80;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar13 = 0;
  lVar9 = *(long *)(this + 0x198);
  iVar7 = (int)((ulong)(*(long *)(this + 0x1a0) - lVar9) >> 4);
  iVar8 = iVar7 + -1;
  if (0 < iVar7) {
    do {
      while( true ) {
        iVar7 = iVar13 + iVar8;
        if (iVar7 < 0) {
          iVar7 = iVar7 + 1;
        }
        uVar3 = iVar7 >> 1;
        uVar1 = *(uint *)(lVar9 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)
                         );
        if (uVar1 < param_1) break;
        if (uVar1 <= param_1) goto LAB_00982920;
        iVar8 = uVar3 - 1;
        if (iVar8 < iVar13) goto LAB_00982780;
      }
      iVar13 = uVar3 + 1;
    } while (iVar13 <= iVar8);
  }
LAB_00982780:
  puVar6 = (undefined8 *)operator_new(0x20);
  this_00 = puVar6 + 1;
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  *(PLATFORM_ID *)puVar6 = param_2;
  local_88 = (ulong)param_1;
  puStack_80 = puVar6;
  std::__ndk1::
  vector<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>>
  ::insert((vector<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>,std::__ndk1::allocator<std::__ndk1::pair<unsigned_int,MeshSplitManager::ConnectionData*>>>
            *)(this + 0x198),(int)lVar9 + iVar13 * 0x10,(pair *)&local_88);
  if (*(long *)(this + 0x1a0) - *(long *)(this + 0x198) == 0x10) {
    lVar9 = *(long *)(this + 0x60);
    uVar10 = *(long *)(this + 0x68) - lVar9;
    *(undefined8 *)(this + 0x188) = *(undefined8 *)(this + 0x180);
    if ((int)(uVar10 >> 3) != 0) {
      uVar12 = 0;
      do {
        lVar9 = *(long *)(lVar9 + uVar12 * 8);
        if (*(char *)(lVar9 + 0x210) < '\0') {
          lVar2 = *(long *)(this + 0x180);
          iVar13 = 0;
          iVar7 = (int)((ulong)(*(long *)(this + 0x188) - lVar2) >> 2);
          iVar8 = iVar7 + -1;
          if (0 < iVar7) {
            do {
              while( true ) {
                iVar7 = iVar13 + iVar8;
                if (iVar7 < 0) {
                  iVar7 = iVar7 + 1;
                }
                iVar7 = iVar7 >> 1;
                uVar3 = *(uint *)(lVar2 + (long)iVar7 * 4);
                if (uVar3 < *(uint *)(lVar9 + 0x214)) break;
                if (uVar3 <= *(uint *)(lVar9 + 0x214)) goto LAB_0098287c;
                iVar8 = iVar7 + -1;
                if (iVar8 < iVar13) goto LAB_00982850;
              }
              iVar13 = iVar7 + 1;
            } while (iVar13 <= iVar8);
          }
LAB_00982850:
          std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::insert
                    ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x180),
                     (int)lVar2 + iVar13 * 4,(uint *)(lVar9 + 0x214));
          local_70 = 0;
          std::__ndk1::
          vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
          ::insert((vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
                    *)this_00,(int)*this_00 + iVar13 * 0x1c,(ConnectionShapeData *)&local_88);
        }
LAB_0098287c:
        uVar12 = uVar12 + 1;
        if (uVar12 == (uVar10 >> 3 & 0xffffffff)) break;
        lVar9 = *(long *)(this + 0x60);
      } while( true );
    }
  }
  else {
    lVar9 = (long)(puVar6[2] - puVar6[1]) >> 2;
    uVar12 = *(long *)(this + 0x188) - *(long *)(this + 0x180) >> 2;
    bVar5 = uVar12 < (ulong)(lVar9 * 0x6db6db6db6db6db7);
    uVar10 = uVar12 + lVar9 * -0x6db6db6db6db6db7;
    if (bVar5 || uVar10 == 0) {
      if (bVar5) {
        puVar6[2] = puVar6[1] + uVar12 * 0x1c;
      }
    }
    else {
      std::__ndk1::
      vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
      ::__append((vector<MeshSplitManager::ConnectionShapeData,std::__ndk1::allocator<MeshSplitManager::ConnectionShapeData>>
                  *)this_00,uVar10);
    }
  }
  uVar1 = *(uint *)(this + 4);
  uVar3 = *(uint *)(s_platformLimits + (ulong)param_2 * 8 + 4);
  uVar11 = *(uint *)(s_platformLimits + (ulong)param_2 * 8);
  if ((*(uint *)(s_platformLimits + (ulong)param_2 * 8) < *(uint *)this) ||
     (uVar11 = *(uint *)this, uVar3 < uVar1)) {
    if (uVar1 <= uVar3) {
      uVar3 = uVar1;
    }
    *(uint *)this = uVar11;
    *(uint *)(this + 4) = uVar3;
    ensurePlatformLimits(this,(MeshSplitShape *)0x0);
  }
LAB_00982920:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


