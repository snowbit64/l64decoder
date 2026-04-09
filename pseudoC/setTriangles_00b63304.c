// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTriangles
// Entry Point: 00b63304
// Size: 1248 bytes
// Signature: undefined __cdecl setTriangles(uint param_1, BrepTriangle * param_2, ushort * param_3, ushort param_4)


/* Brep::setTriangles(unsigned int, BrepTriangle const*, unsigned short const*, unsigned short) */

undefined4 Brep::setTriangles(uint param_1,BrepTriangle *param_2,ushort *param_3,ushort param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  Brep *this;
  ulong uVar8;
  long ******pppppplVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  undefined4 uVar19;
  ulong uVar20;
  ulong uVar21;
  long *******local_80;
  long *******local_78;
  long local_70;
  long local_68;
  
  uVar12 = (ulong)param_4;
  this = (Brep *)(ulong)param_1;
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  uVar20 = (ulong)param_2 & 0xffffffff;
  uVar10 = *(long *)(this + 0x2f70) - *(long *)(this + 0x2f68) >> 5;
  if (uVar10 < uVar20) {
    std::__ndk1::vector<Brep::Face,std::__ndk1::allocator<Brep::Face>>::__append
              ((vector<Brep::Face,std::__ndk1::allocator<Brep::Face>> *)(this + 0x2f68),
               uVar20 - uVar10);
  }
  else if (uVar20 < uVar10) {
    *(ulong *)(this + 0x2f70) = *(long *)(this + 0x2f68) + uVar20 * 0x20;
  }
  if (this[0x2fb4] != (Brep)0x0) {
    lVar11 = *(long *)(this + 0x2f88) - *(long *)(this + 0x2f80) >> 3;
    uVar10 = lVar11 * -0x5555555555555555;
    if (uVar20 <= uVar10) {
      if (uVar20 <= uVar10 && uVar10 - uVar20 != 0) {
        *(ulong *)(this + 0x2f88) = *(long *)(this + 0x2f80) + uVar20 * 0x18;
      }
    }
    else {
      std::__ndk1::vector<BrepCBox,std::__ndk1::allocator<BrepCBox>>::__append
                ((vector<BrepCBox,std::__ndk1::allocator<BrepCBox>> *)(this + 0x2f80),
                 uVar20 + lVar11 * 0x5555555555555555);
    }
  }
  local_78 = (long *******)0x0;
  local_70 = 0;
  local_80 = (long *******)&local_78;
  if ((int)param_2 != 0) {
    uVar10 = 0;
code_r0x00b63414:
    lVar11 = *(long *)(this + 0x2f68);
    puVar1 = (undefined2 *)(lVar11 + uVar10 * 0x20);
    uVar3 = param_3[uVar10 * 10 + 6];
    uVar19 = *(undefined4 *)(param_3 + uVar10 * 10 + 8);
    *puVar1 = 0x3fff;
    puVar1[1] = uVar3;
    *(undefined4 *)(puVar1 + 2) = uVar19;
    uVar8 = 2;
    uVar21 = 0;
LAB_00b63470:
    if (this[0x2fb6] == (Brep)0x0) {
      uVar14 = 0xffff;
    }
    else {
      uVar14 = (ulong)param_3[uVar10 * 10 + uVar21 + 3];
    }
    lVar13 = lVar11 + uVar10 * 0x20 + uVar21 * 8;
    *(undefined2 *)(lVar13 + 8) = *(undefined2 *)(uVar12 + (ulong)param_3[uVar10 * 10 + uVar21] * 2)
    ;
    *(short *)(lVar13 + 10) = (short)uVar14;
    *(undefined4 *)(lVar13 + 0xc) = 0xffffffff;
    if (this[0x2fb6] != (Brep)0x0) {
      lVar13 = *(long *)(this + 0x2f98) + uVar14 * 0x18;
      *(short *)(lVar13 + 0x14) = *(short *)(lVar13 + 0x14) + 1;
    }
    uVar3 = *(ushort *)(uVar12 + (ulong)param_3[uVar10 * 10 + uVar21] * 2);
    uVar4 = *(ushort *)(uVar12 + (ulong)param_3[uVar10 * 10 + (uVar8 & 0xffffffff)] * 2);
    ppppppplVar16 = (long *******)&local_78;
    ppppppplVar17 = (long *******)&local_78;
    ppppppplVar18 = local_78;
joined_r0x00b63500:
    if (ppppppplVar18 != (long *******)0x0) {
      do {
        ppppppplVar17 = ppppppplVar18;
        if (*(ushort *)((long)ppppppplVar17 + 0x1c) <= uVar3) {
          if (*(ushort *)((long)ppppppplVar17 + 0x1c) < uVar3) goto LAB_00b63544;
          if (*(ushort *)((long)ppppppplVar17 + 0x1e) <= uVar4) goto code_r0x00b6353c;
        }
        ppppppplVar16 = ppppppplVar17;
        ppppppplVar18 = (long *******)*ppppppplVar17;
        if ((long *******)*ppppppplVar17 == (long *******)0x0) {
          pppppplVar9 = *ppppppplVar17;
          goto joined_r0x00b63574;
        }
      } while( true );
    }
    goto LAB_00b63560;
  }
LAB_00b63674:
  uVar19 = 1;
LAB_00b63678:
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_int>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_int>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_int>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_int>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_int>>>
             *)&local_80,(__tree_node *)local_78);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00b6353c:
  if (uVar4 <= *(ushort *)((long)ppppppplVar17 + 0x1e)) goto LAB_00b63560;
LAB_00b63544:
  ppppppplVar16 = ppppppplVar17 + 1;
  ppppppplVar18 = (long *******)*ppppppplVar16;
  goto joined_r0x00b63500;
LAB_00b63560:
  pppppplVar9 = *ppppppplVar16;
joined_r0x00b63574:
  if (pppppplVar9 != (long ******)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar7 != 0)) {
                    /* try { // try from 00b637a8 to 00b637b3 has its CatchHandler @ 00b637e4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b6361c to 00b6362f has its CatchHandler @ 00b637f8 */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Topology: Mesh contains non-manifold edges\n");
    if (*(long *)(this + 0x2f70) != *(long *)(this + 0x2f68)) {
      *(long *)(this + 0x2f70) = *(long *)(this + 0x2f68);
    }
    if ((this[0x2fb4] != (Brep)0x0) && (*(long *)(this + 0x2f88) != *(long *)(this + 0x2f80))) {
      *(long *)(this + 0x2f88) = *(long *)(this + 0x2f80);
    }
    uVar19 = 0;
    goto LAB_00b63678;
  }
                    /* try { // try from 00b63578 to 00b63583 has its CatchHandler @ 00b637fc */
  pppppplVar9 = (long ******)operator_new(0x28);
  uVar14 = uVar21 + 1;
  *pppppplVar9 = (long *****)0x0;
  pppppplVar9[1] = (long *****)0x0;
  pppppplVar9[2] = (long *****)ppppppplVar17;
  *(ulong *)((long)pppppplVar9 + 0x1c) =
       (ulong)CONCAT22(uVar4,uVar3) | uVar14 + ((uint)uVar10 << 2) << 0x20;
  *ppppppplVar16 = pppppplVar9;
  if ((long *******)*local_80 != (long *******)0x0) {
    pppppplVar9 = *ppppppplVar16;
    local_80 = (long *******)*local_80;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)local_78,(__tree_node_base *)pppppplVar9);
  local_70 = local_70 + 1;
  uVar8 = uVar21;
  uVar21 = uVar14;
  if (uVar14 == 3) goto LAB_00b635c0;
  goto LAB_00b63470;
LAB_00b635c0:
  computeBBox(this,(uint)uVar10);
  uVar10 = uVar10 + 1;
  if (uVar10 == uVar20) goto code_r0x00b635e0;
  goto code_r0x00b63414;
code_r0x00b635e0:
  uVar5 = (int)param_2 << 2;
  if (uVar5 != 0) {
    uVar12 = 0;
    uVar19 = 1;
    lVar11 = *(long *)(this + 0x2f68);
    lVar13 = *(long *)(this + 0x2f50);
    do {
      iVar7 = (int)uVar12;
      if ((uVar12 & 3) != 0) {
        uVar2 = iVar7 + 2;
        if ((iVar7 - 1U & 3) != 0) {
          uVar2 = iVar7 - 1U;
        }
        uVar3 = *(ushort *)(lVar11 + (ulong)uVar2 * 8);
        if (local_78 != (long *******)0x0) {
          uVar4 = *(ushort *)(lVar11 + uVar12 * 8);
          ppppppplVar16 = (long *******)&local_78;
          ppppppplVar17 = local_78;
          do {
            while ((*(ushort *)((long)ppppppplVar17 + 0x1c) < uVar3 ||
                   ((*(ushort *)((long)ppppppplVar17 + 0x1c) <= uVar3 &&
                    (*(ushort *)((long)ppppppplVar17 + 0x1e) < uVar4))))) {
              ppppppplVar17 = (long *******)ppppppplVar17[1];
              if (ppppppplVar17 == (long *******)0x0) goto LAB_00b63738;
            }
            ppppppplVar18 = (long *******)*ppppppplVar17;
            ppppppplVar16 = ppppppplVar17;
            ppppppplVar17 = ppppppplVar18;
          } while (ppppppplVar18 != (long *******)0x0);
LAB_00b63738:
          if ((((long ********)ppppppplVar16 != &local_78) &&
              (*(ushort *)((long)ppppppplVar16 + 0x1c) <= uVar3)) &&
             ((*(ushort *)((long)ppppppplVar16 + 0x1c) < uVar3 ||
              (*(ushort *)((long)ppppppplVar16 + 0x1e) <= uVar4)))) {
            *(undefined4 *)(lVar11 + uVar12 * 8 + 4) = *(undefined4 *)(ppppppplVar16 + 4);
          }
        }
        piVar15 = (int *)(lVar13 + (ulong)uVar3 * 0xc + 4);
        if ((*piVar15 == -1) || (*(int *)(lVar11 + uVar12 * 8 + 4) == -1)) {
          *piVar15 = iVar7;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar5);
    goto LAB_00b63678;
  }
  goto LAB_00b63674;
}


