// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addTriangles
// Entry Point: 00b656f4
// Size: 2364 bytes
// Signature: undefined __thiscall addTriangles(Brep * this, uint param_1, BrepTriangle * param_2, ushort param_3, ushort param_4)


/* Brep::addTriangles(unsigned int, BrepTriangle const*, unsigned short, unsigned short) */

undefined4 __thiscall
Brep::addTriangles(Brep *this,uint param_1,BrepTriangle *param_2,ushort param_3,ushort param_4)

{
  ulong uVar1;
  Brep *pBVar2;
  long *this_00;
  undefined2 *puVar3;
  long *this_01;
  long lVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  bool bVar11;
  short sVar12;
  int iVar13;
  long *******ppppppplVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  int *piVar20;
  int iVar21;
  ulong uVar22;
  long ******pppppplVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ushort uVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  uint *puVar32;
  uint uVar33;
  undefined8 *puVar34;
  undefined4 uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long *******local_80;
  long *******local_78;
  long local_70;
  long local_68;
  
  uVar27 = (ulong)param_4;
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  pBVar2 = this + 0x2fb4;
  uVar37 = *(long *)(this + 0x2f70) - *(long *)(this + 0x2f68);
  uVar36 = (long)uVar37 >> 5;
  this_00 = (long *)(this + 0x2f68);
  iVar13 = (int)uVar36;
  uVar33 = iVar13 + param_1;
  uVar38 = (ulong)uVar33;
  if (uVar36 < uVar38) {
    std::__ndk1::vector<Brep::Face,std::__ndk1::allocator<Brep::Face>>::__append
              ((vector<Brep::Face,std::__ndk1::allocator<Brep::Face>> *)this_00,uVar38 - uVar36);
  }
  else if (uVar38 < uVar36) {
    *(ulong *)(this + 0x2f70) = *(long *)(this + 0x2f68) + uVar38 * 0x20;
  }
  if (*pBVar2 != (Brep)0x0) {
    lVar25 = *(long *)(this + 0x2f88) - *(long *)(this + 0x2f80) >> 3;
    uVar26 = lVar25 * -0x5555555555555555;
    if (uVar38 <= uVar26) {
      if (uVar38 <= uVar26 && uVar26 - uVar38 != 0) {
        *(ulong *)(this + 0x2f88) = *(long *)(this + 0x2f80) + uVar38 * 0x18;
      }
    }
    else {
      std::__ndk1::vector<BrepCBox,std::__ndk1::allocator<BrepCBox>>::__append
                ((vector<BrepCBox,std::__ndk1::allocator<BrepCBox>> *)(this + 0x2f80),
                 uVar38 + lVar25 * 0x5555555555555555);
    }
  }
  local_78 = (long *******)0x0;
  local_70 = 0;
  local_80 = (long *******)&local_78;
  if (param_1 != 0) {
    uVar26 = uVar37 >> 5 & 0xffffffff;
    uVar38 = 0;
LAB_00b6582c:
    uVar24 = (int)uVar38 + iVar13;
    lVar25 = *this_00;
    uVar7 = *(undefined2 *)(param_2 + uVar38 * 0x14 + 0xc);
    uVar35 = *(undefined4 *)(param_2 + uVar38 * 0x14 + 0x10);
    puVar3 = (undefined2 *)(lVar25 + (ulong)uVar24 * 0x20);
    *puVar3 = 0x3fff;
    puVar3[1] = uVar7;
    *(undefined4 *)(puVar3 + 2) = uVar35;
    uVar22 = 2;
    uVar39 = 0;
LAB_00b65890:
    if (this[0x2fb6] == (Brep)0x0) {
      uVar28 = 0xffff;
    }
    else {
      uVar28 = *(short *)(param_2 + uVar39 * 2 + uVar38 * 0x14 + 6) + param_3;
    }
    lVar29 = lVar25 + (ulong)uVar24 * 0x20 + uVar39 * 8;
    *(undefined2 *)(lVar29 + 8) =
         *(undefined2 *)
          (*(long *)(this + 0x2ef0) +
           (ulong)*(ushort *)(param_2 + uVar39 * 2 + uVar38 * 0x14) * 0x10 + 0xc);
    *(ushort *)(lVar29 + 10) = uVar28;
    *(undefined4 *)(lVar29 + 0xc) = 0xffffffff;
    if (uVar28 != 0xffff) {
      lVar29 = *(long *)(this + 0x2f98) + (ulong)uVar28 * 0x18;
      *(short *)(lVar29 + 0x14) = *(short *)(lVar29 + 0x14) + 1;
    }
    uVar28 = *(ushort *)
              (*(long *)(this + 0x2ef0) +
               (ulong)*(ushort *)(param_2 + uVar39 * 2 + uVar38 * 0x14) * 0x10 + 0xc);
    uVar8 = *(ushort *)
             (*(long *)(this + 0x2ef0) +
              (ulong)*(ushort *)(param_2 + (uVar22 & 0xffffffff) * 2 + uVar38 * 0x14) * 0x10 + 0xc);
    ppppppplVar14 = (long *******)&local_78;
    ppppppplVar18 = (long *******)&local_78;
    ppppppplVar19 = local_78;
joined_r0x00b65944:
    if (ppppppplVar19 != (long *******)0x0) {
      do {
        ppppppplVar18 = ppppppplVar19;
        if (*(ushort *)((long)ppppppplVar18 + 0x1a) <= uVar28) {
          if (*(ushort *)((long)ppppppplVar18 + 0x1a) < uVar28) goto LAB_00b65988;
          if (*(ushort *)((long)ppppppplVar18 + 0x1c) <= uVar8) goto code_r0x00b65980;
        }
        ppppppplVar14 = ppppppplVar18;
        ppppppplVar19 = (long *******)*ppppppplVar18;
        if ((long *******)*ppppppplVar18 == (long *******)0x0) {
          pppppplVar23 = *ppppppplVar18;
          goto joined_r0x00b659b8;
        }
      } while( true );
    }
    goto LAB_00b659a4;
  }
LAB_00b65a90:
  uVar24 = iVar13 << 2;
  if (uVar24 != uVar33 * 4) {
    lVar25 = *(long *)(this + 0x2f68);
    bVar11 = true;
    lVar29 = *(long *)(this + 0x2f50);
    do {
      if ((uVar24 & 3) != 0) {
        uVar5 = uVar24 + 2;
        if ((uVar24 - 1 & 3) != 0) {
          uVar5 = uVar24 - 1;
        }
        uVar28 = *(ushort *)(lVar25 + (ulong)uVar5 * 8);
        uVar38 = (ulong)uVar24;
        if (local_78 == (long *******)0x0) {
LAB_00b65b50:
          bVar11 = false;
        }
        else {
          uVar8 = *(ushort *)(lVar25 + uVar38 * 8);
          ppppppplVar14 = (long *******)&local_78;
          ppppppplVar18 = local_78;
          do {
            while ((*(ushort *)((long)ppppppplVar18 + 0x1a) < uVar28 ||
                   ((*(ushort *)((long)ppppppplVar18 + 0x1a) <= uVar28 &&
                    (*(ushort *)((long)ppppppplVar18 + 0x1c) < uVar8))))) {
              ppppppplVar18 = (long *******)ppppppplVar18[1];
              if (ppppppplVar18 == (long *******)0x0) goto LAB_00b65b38;
            }
            ppppppplVar19 = (long *******)*ppppppplVar18;
            ppppppplVar14 = ppppppplVar18;
            ppppppplVar18 = ppppppplVar19;
          } while (ppppppplVar19 != (long *******)0x0);
LAB_00b65b38:
          if ((((long ********)ppppppplVar14 == &local_78) ||
              (uVar28 < *(ushort *)((long)ppppppplVar14 + 0x1a))) ||
             ((uVar28 <= *(ushort *)((long)ppppppplVar14 + 0x1a) &&
              (uVar8 < *(ushort *)((long)ppppppplVar14 + 0x1c))))) goto LAB_00b65b50;
          *(uint *)(lVar25 + uVar38 * 8 + 4) = (uint)*(ushort *)((long)ppppppplVar14 + 0x1e);
        }
        puVar32 = (uint *)(lVar29 + (ulong)uVar28 * 0xc + 4);
        if ((*puVar32 == 0xffffffff) || (*(int *)(lVar25 + uVar38 * 8 + 4) == -1)) {
          *puVar32 = uVar24;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar33 * 4);
    if (!bVar11) {
      if (this[0x2fb6] != (Brep)0x0) {
        lVar25 = *(long *)(this + 0x2fa0) - *(long *)(this + 0x2f98) >> 3;
        uVar26 = lVar25 * -0x5555555555555555;
        this_01 = (long *)(this + 0x2f98);
        uVar24 = (uint)uVar26 & 0xffff;
        uVar38 = (ulong)(uVar24 + param_4);
        if (uVar38 <= uVar26) {
          if (uVar38 <= uVar26 && uVar26 - uVar38 != 0) {
            *(ulong *)(this + 0x2fa0) = *(long *)(this + 0x2f98) + uVar38 * 0x18;
          }
        }
        else {
                    /* try { // try from 00b65c34 to 00b65c3b has its CatchHandler @ 00b66044 */
          std::__ndk1::vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>>::__append
                    ((vector<Brep::SharedWedge,std::__ndk1::allocator<Brep::SharedWedge>> *)this_01,
                     uVar38 + lVar25 * 0x5555555555555555);
        }
        if (param_4 != 0) {
          lVar29 = (ulong)uVar24 * 0x18;
          lVar31 = *this_01;
          lVar25 = (ulong)param_3 * 0x18;
          do {
            puVar15 = (undefined8 *)(lVar31 + lVar25);
            puVar34 = (undefined8 *)(lVar31 + lVar29);
            lVar25 = lVar25 + 0x18;
            uVar27 = uVar27 - 1;
            uVar40 = puVar15[1];
            uVar16 = *puVar15;
            *(undefined8 *)((long)puVar34 + 0xe) = *(undefined8 *)((long)puVar15 + 0xe);
            puVar34[1] = uVar40;
            *puVar34 = uVar16;
            lVar31 = *this_01;
            puVar15 = (undefined8 *)(lVar31 + lVar29);
            lVar29 = lVar29 + 0x18;
            *puVar15 = 0x3f800000;
            *(undefined4 *)(puVar15 + 1) = 0;
          } while (uVar27 != 0);
        }
      }
      uVar38 = (ulong)(uVar33 + param_1);
      uVar27 = *(long *)(this + 0x2f70) - *(long *)(this + 0x2f68) >> 5;
      if (uVar27 < uVar38) {
                    /* try { // try from 00b65cfc to 00b65d4f has its CatchHandler @ 00b66048 */
        std::__ndk1::vector<Brep::Face,std::__ndk1::allocator<Brep::Face>>::__append
                  ((vector<Brep::Face,std::__ndk1::allocator<Brep::Face>> *)this_00,uVar38 - uVar27)
        ;
      }
      else if (uVar38 < uVar27) {
        *(ulong *)(this + 0x2f70) = *(long *)(this + 0x2f68) + uVar38 * 0x20;
      }
      if (*pBVar2 != (Brep)0x0) {
        lVar25 = *(long *)(this + 0x2f88) - *(long *)(this + 0x2f80) >> 3;
        uVar27 = lVar25 * -0x5555555555555555;
        if (uVar38 <= uVar27) {
          if (uVar38 <= uVar27 && uVar27 - uVar38 != 0) {
            *(ulong *)(this + 0x2f88) = *(long *)(this + 0x2f80) + uVar38 * 0x18;
          }
        }
        else {
          std::__ndk1::vector<BrepCBox,std::__ndk1::allocator<BrepCBox>>::__append
                    ((vector<BrepCBox,std::__ndk1::allocator<BrepCBox>> *)(this + 0x2f80),
                     uVar38 + lVar25 * 0x5555555555555555);
        }
      }
      if (param_1 != 0) {
        lVar25 = 0;
        iVar9 = param_1 * 4;
        iVar13 = (param_1 + iVar13) * 4;
        lVar29 = (uVar37 >> 5 & 0x3fffffff) * 4;
        do {
          lVar31 = *this_00;
          uVar27 = (ulong)(param_1 + (int)uVar36);
          puVar15 = (undefined8 *)(lVar31 + (uVar36 & 0xffffffff) * 0x20);
          puVar34 = (undefined8 *)(lVar31 + uVar27 * 0x20);
          uVar16 = *puVar15;
          uVar41 = puVar15[3];
          uVar40 = puVar15[2];
          puVar34[1] = puVar15[1];
          *puVar34 = uVar16;
          puVar34[3] = uVar41;
          puVar34[2] = uVar40;
          if (*pBVar2 != (Brep)0x0) {
            puVar15 = (undefined8 *)(*(long *)(this + 0x2f80) + (uVar36 & 0xffffffff) * 0x18);
            puVar34 = (undefined8 *)(*(long *)(this + 0x2f80) + uVar27 * 0x18);
            uVar40 = *puVar15;
            uVar16 = puVar15[2];
            puVar34[1] = puVar15[1];
            *puVar34 = uVar40;
            puVar34[2] = uVar16;
          }
          lVar17 = *(long *)(this + 0x2f68);
          uVar37 = lVar29 + lVar25 + 3;
          uVar33 = (uint)uVar37;
          piVar20 = (int *)(lVar17 + (uVar37 & 0xffffffff) * 8 + 4);
          iVar30 = *piVar20;
          iVar21 = (int)lVar25;
          if (iVar30 == -1) {
            *piVar20 = iVar13 + iVar21 + 1;
          }
          else {
            uVar33 = iVar30 + iVar9;
            if ((uVar33 & 3) == 3) {
              uVar33 = uVar33 - 2;
            }
            else if ((uVar33 & 3) == 1) {
              uVar33 = uVar33 + 2;
            }
          }
          iVar30 = (int)lVar29;
          uVar37 = (ulong)(iVar30 + iVar21 + 2);
          if (this[0x2fb6] == (Brep)0x0) {
            sVar12 = -1;
          }
          else {
            sVar12 = *(short *)(lVar17 + uVar37 * 8 + 2) + param_4;
          }
          lVar4 = lVar31 + uVar27 * 0x20;
          *(undefined2 *)(lVar4 + 8) = *(undefined2 *)(lVar17 + uVar37 * 8);
          *(short *)(lVar4 + 10) = sVar12;
          *(uint *)(lVar4 + 0xc) = uVar33;
          lVar17 = *(long *)(this + 0x2f68);
          uVar37 = lVar29 + lVar25 + 2;
          uVar33 = (uint)uVar37;
          piVar20 = (int *)(lVar17 + (uVar37 & 0xffffffff) * 8 + 4);
          iVar6 = *piVar20;
          if (iVar6 == -1) {
            *piVar20 = iVar13 + iVar21 + 2;
          }
          else {
            uVar33 = iVar6 + iVar9;
            if ((uVar33 & 3) == 3) {
              uVar33 = uVar33 - 2;
            }
            else if ((uVar33 & 3) == 1) {
              uVar33 = uVar33 + 2;
            }
          }
          uVar37 = (ulong)(iVar30 + iVar21 + 1);
          if (this[0x2fb6] == (Brep)0x0) {
            sVar12 = -1;
          }
          else {
            sVar12 = *(short *)(lVar17 + uVar37 * 8 + 2) + param_4;
          }
          lVar4 = lVar31 + uVar27 * 0x20;
          *(undefined2 *)(lVar4 + 0x10) = *(undefined2 *)(lVar17 + uVar37 * 8);
          *(short *)(lVar4 + 0x12) = sVar12;
          *(uint *)(lVar4 + 0x14) = uVar33;
          lVar17 = *(long *)(this + 0x2f68);
          uVar37 = lVar29 + lVar25 + 1;
          uVar33 = (uint)uVar37;
          piVar20 = (int *)(lVar17 + (uVar37 & 0xffffffff) * 8 + 4);
          iVar6 = *piVar20;
          if (iVar6 == -1) {
            *piVar20 = iVar13 + iVar21 + 3;
          }
          else {
            uVar33 = iVar6 + iVar9;
            if ((uVar33 & 3) == 3) {
              uVar33 = uVar33 - 2;
            }
            else if ((uVar33 & 3) == 1) {
              uVar33 = uVar33 + 2;
            }
          }
          uVar37 = (ulong)(iVar30 + iVar21 + 3);
          if (this[0x2fb6] == (Brep)0x0) {
            sVar12 = -1;
          }
          else {
            sVar12 = *(short *)(lVar17 + uVar37 * 8 + 2) + param_4;
          }
          lVar31 = lVar31 + uVar27 * 0x20;
          lVar25 = lVar25 + 4;
          uVar36 = (ulong)((int)uVar36 + 1);
          *(undefined2 *)(lVar31 + 0x18) = *(undefined2 *)(lVar17 + uVar37 * 8);
          *(short *)(lVar31 + 0x1a) = sVar12;
          *(uint *)(lVar31 + 0x1c) = uVar33;
        } while ((ulong)param_1 * 4 - lVar25 != 0);
      }
    }
  }
  uVar35 = 1;
LAB_00b65f9c:
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::__map_value_compare<std::__ndk1::pair<unsigned_short,unsigned_short>,std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>,std::__ndk1::less<std::__ndk1::pair<unsigned_short,unsigned_short>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::pair<unsigned_short,unsigned_short>,unsigned_short>>>
             *)&local_80,(__tree_node *)local_78);
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return uVar35;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00b65980:
  if (uVar8 <= *(ushort *)((long)ppppppplVar18 + 0x1c)) goto LAB_00b659a4;
LAB_00b65988:
  ppppppplVar14 = ppppppplVar18 + 1;
  ppppppplVar19 = (long *******)*ppppppplVar14;
  goto joined_r0x00b65944;
LAB_00b659a4:
  pppppplVar23 = *ppppppplVar14;
joined_r0x00b659b8:
  if (pppppplVar23 != (long ******)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar13 != 0))
    {
                    /* try { // try from 00b65ff0 to 00b65ffb has its CatchHandler @ 00b66030 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
                    /* try { // try from 00b65a50 to 00b65be7 has its CatchHandler @ 00b6604c */
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Topology: Mesh contains non-manifold edges\n");
    uVar27 = *(long *)(this + 0x2f70) - *(long *)(this + 0x2f68) >> 5;
    if (uVar26 < uVar27 || uVar26 - uVar27 == 0) {
      if (uVar26 < uVar27) {
        *(ulong *)(this + 0x2f70) = *(long *)(this + 0x2f68) + uVar26 * 0x20;
      }
    }
    else {
      std::__ndk1::vector<Brep::Face,std::__ndk1::allocator<Brep::Face>>::__append
                ((vector<Brep::Face,std::__ndk1::allocator<Brep::Face>> *)this_00,uVar26 - uVar27);
    }
    if (*pBVar2 != (Brep)0x0) {
      lVar25 = *(long *)(this + 0x2f88) - *(long *)(this + 0x2f80) >> 3;
      bVar11 = uVar26 < (ulong)(lVar25 * -0x5555555555555555);
      uVar27 = uVar26 + lVar25 * 0x5555555555555555;
      if (bVar11 || uVar27 == 0) {
        if (bVar11) {
          uVar35 = 0;
          *(ulong *)(this + 0x2f88) = *(long *)(this + 0x2f80) + uVar26 * 0x18;
          goto LAB_00b65f9c;
        }
      }
      else {
        std::__ndk1::vector<BrepCBox,std::__ndk1::allocator<BrepCBox>>::__append
                  ((vector<BrepCBox,std::__ndk1::allocator<BrepCBox>> *)(this + 0x2f80),uVar27);
      }
    }
    uVar35 = 0;
    goto LAB_00b65f9c;
  }
                    /* try { // try from 00b659bc to 00b659c7 has its CatchHandler @ 00b66050 */
  pppppplVar23 = (long ******)operator_new(0x20);
  uVar1 = uVar39 + 1;
  *pppppplVar23 = (long *****)0x0;
  pppppplVar23[1] = (long *****)0x0;
  pppppplVar23[2] = (long *****)ppppppplVar18;
  *(uint *)((long)pppppplVar23 + 0x1a) = CONCAT22(uVar8,uVar28);
  *(short *)((long)pppppplVar23 + 0x1e) = (short)uVar24 * 4 + (short)uVar1;
  *ppppppplVar14 = pppppplVar23;
  if ((long *******)*local_80 != (long *******)0x0) {
    pppppplVar23 = *ppppppplVar14;
    local_80 = (long *******)*local_80;
  }
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)local_78,(__tree_node_base *)pppppplVar23);
  local_70 = local_70 + 1;
  uVar22 = uVar39;
  uVar39 = uVar1;
  if (uVar1 == 3) goto LAB_00b65a04;
  goto LAB_00b65890;
LAB_00b65a04:
  computeBBox(this,uVar24);
  uVar38 = uVar38 + 1;
  if (uVar38 == param_1) goto LAB_00b65a90;
  goto LAB_00b6582c;
}


