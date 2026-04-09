// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeArchiveFile
// Entry Point: 00bf8edc
// Size: 6564 bytes
// Signature: undefined __thiscall writeArchiveFile(CompiledShaderArchive * this, char * param_1, char * param_2, bool param_3, bool param_4, bool param_5)


/* CompiledShaderArchive::writeArchiveFile(char const*, char const*, bool, bool, bool) */

void __thiscall
CompiledShaderArchive::writeArchiveFile
          (CompiledShaderArchive *this,char *param_1,char *param_2,bool param_3,bool param_4,
          bool param_5)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  long lVar9;
  ulong *puVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  void *pvVar16;
  void *pvVar17;
  ulong *puVar18;
  void *pvVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  void *pvVar22;
  size_t sVar23;
  Logger *pLVar24;
  int iVar25;
  ulong *puVar26;
  ulong uVar27;
  __tree_node_base **pp_Var28;
  CompiledShaderArchive **ppCVar29;
  ulong uVar30;
  ulong *puVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  CompiledShaderArchive *pCVar39;
  int *piVar40;
  __tree_node_base **pp_Var41;
  __tree_node_base *p_Var42;
  ulong *puVar43;
  undefined4 *puVar44;
  uint *puVar45;
  uint *puVar46;
  undefined8 *puVar47;
  CompiledShaderArchive **ppCVar48;
  CompiledShaderArchive **ppCVar49;
  __tree_node_base **pp_Var50;
  __tree_node_base **pp_Var51;
  ulong uVar52;
  void **ppvVar53;
  ulong uVar54;
  ulong uVar55;
  void **ppvVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  ulong local_1c8;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_178;
  long local_70;
  
  lVar9 = tpidr_el0;
  local_70 = *(long *)(lVar9 + 0x28);
  plVar15 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                     false);
  if (plVar15 == (long *)0x0) goto LAB_00bfa2d8;
  uVar34 = (*(long *)(this + 0x38) - *(long *)(this + 0x30) >> 3) * -0x3333333333333333;
  uVar35 = uVar34 & 0xffffffff;
  uVar52 = *(long *)(this + 8) - *(long *)this;
  lVar36 = *(long *)(this + 0x20);
  lVar37 = *(long *)(this + 0x18);
  pvVar16 = operator_new__(uVar35 * 0x14);
  pvVar17 = operator_new__(uVar35 * 4);
  if (*(CompiledShaderArchive ***)(this + 0xd0) != (CompiledShaderArchive **)(this + 0xd8)) {
    uVar33 = 0;
    ppCVar49 = *(CompiledShaderArchive ***)(this + 0xd0);
    do {
      puVar47 = (undefined8 *)((long)pvVar16 + (ulong)uVar33 * 0x14);
      uVar57 = *(undefined8 *)((long)ppCVar49 + 0x1c);
      puVar47[1] = *(undefined8 *)((long)ppCVar49 + 0x24);
      *puVar47 = uVar57;
      uVar6 = *(uint *)((long)ppCVar49 + 0x2c);
      *(uint *)(puVar47 + 2) = uVar6;
      *(uint *)((long)pvVar17 + (ulong)uVar6 * 4) = uVar33;
      ppCVar29 = (CompiledShaderArchive **)ppCVar49[1];
      if ((CompiledShaderArchive **)ppCVar49[1] == (CompiledShaderArchive **)0x0) {
        ppCVar29 = ppCVar49 + 2;
        ppCVar48 = (CompiledShaderArchive **)*ppCVar29;
        if ((CompiledShaderArchive **)*ppCVar48 != ppCVar49) {
          do {
            pCVar39 = *ppCVar29;
            ppCVar29 = (CompiledShaderArchive **)(pCVar39 + 0x10);
            ppCVar48 = (CompiledShaderArchive **)*ppCVar29;
          } while (*ppCVar48 != pCVar39);
        }
      }
      else {
        do {
          ppCVar48 = ppCVar29;
          ppCVar29 = (CompiledShaderArchive **)*ppCVar48;
        } while ((CompiledShaderArchive **)*ppCVar48 != (CompiledShaderArchive **)0x0);
      }
      uVar33 = uVar33 + 1;
      ppCVar49 = ppCVar48;
    } while (ppCVar48 != (CompiledShaderArchive **)(this + 0xd8));
  }
  pp_Var51 = *(__tree_node_base ***)(this + 0x60);
  while (pp_Var51 != (__tree_node_base **)(this + 0x68)) {
    pp_Var28 = (__tree_node_base **)pp_Var51[1];
    if (*(int *)(pp_Var51 + 6) == -1) {
      pp_Var41 = pp_Var28;
      if (pp_Var28 == (__tree_node_base **)0x0) {
        pp_Var41 = pp_Var51 + 2;
        pp_Var50 = (__tree_node_base **)*pp_Var41;
        if ((__tree_node_base **)*pp_Var50 != pp_Var51) {
          do {
            p_Var42 = *pp_Var41;
            pp_Var41 = (__tree_node_base **)(p_Var42 + 0x10);
            pp_Var50 = (__tree_node_base **)*pp_Var41;
          } while (*pp_Var50 != p_Var42);
          goto LAB_00bf9164;
        }
LAB_00bf9178:
        pp_Var28 = pp_Var51 + 2;
        pp_Var41 = (__tree_node_base **)*pp_Var28;
        if ((__tree_node_base **)*pp_Var41 != pp_Var51) {
          do {
            p_Var42 = *pp_Var28;
            pp_Var28 = (__tree_node_base **)(p_Var42 + 0x10);
            pp_Var41 = (__tree_node_base **)*pp_Var28;
          } while (*pp_Var41 != p_Var42);
        }
      }
      else {
        do {
          pp_Var50 = pp_Var41;
          pp_Var41 = (__tree_node_base **)*pp_Var50;
        } while ((__tree_node_base **)*pp_Var50 != (__tree_node_base **)0x0);
LAB_00bf9164:
        if (pp_Var28 == (__tree_node_base **)0x0) goto LAB_00bf9178;
        do {
          pp_Var41 = pp_Var28;
          pp_Var28 = (__tree_node_base **)*pp_Var41;
        } while ((__tree_node_base **)*pp_Var41 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)(this + 0x60) == pp_Var51) {
        *(__tree_node_base ***)(this + 0x60) = pp_Var41;
      }
      *(long *)(this + 0x70) = *(long *)(this + 0x70) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x68),(__tree_node_base *)pp_Var51);
      operator_delete(pp_Var51);
      pp_Var51 = pp_Var50;
    }
    else if (pp_Var28 == (__tree_node_base **)0x0) {
      pp_Var28 = pp_Var51 + 2;
      bVar11 = (__tree_node_base **)*(__tree_node_base **)*pp_Var28 != pp_Var51;
      pp_Var51 = (__tree_node_base **)*pp_Var28;
      if (bVar11) {
        do {
          p_Var42 = *pp_Var28;
          pp_Var28 = (__tree_node_base **)(p_Var42 + 0x10);
          pp_Var51 = (__tree_node_base **)*pp_Var28;
        } while (*pp_Var51 != p_Var42);
      }
    }
    else {
      do {
        pp_Var51 = pp_Var28;
        pp_Var28 = (__tree_node_base **)*pp_Var51;
      } while ((__tree_node_base **)*pp_Var51 != (__tree_node_base **)0x0);
    }
  }
  uVar55 = uVar52 >> 5 & 0xffffffff;
  puVar18 = (ulong *)operator_new__(uVar55 * 0x48 + 8);
  puVar26 = puVar18 + 1;
  *puVar18 = uVar55;
  if (uVar55 != 0) {
    lVar38 = uVar55 * 0x48;
    puVar21 = puVar18 + 2;
    do {
      lVar38 = lVar38 + -0x48;
      puVar21[3] = 0;
      puVar21[2] = 0;
      puVar21[5] = 0;
      puVar21[4] = 0;
      puVar21[1] = 0;
      *puVar21 = 0;
      puVar21 = puVar21 + 9;
    } while (lVar38 != 0);
  }
  iVar14 = (int)(uVar52 >> 5);
  if (iVar14 != 0) {
    if (uVar55 < 2) {
      uVar27 = 0;
    }
    else {
      uVar30 = 0;
      uVar32 = uVar52 >> 5 & 1;
      uVar27 = uVar55 - uVar32;
      puVar21 = puVar18 + 10;
      do {
        iVar13 = (int)uVar30;
        *(int *)(puVar21 + -9) = iVar13;
        uVar30 = uVar30 + 2;
        *(int *)puVar21 = iVar13 + 1;
        puVar21 = puVar21 + 0x12;
      } while (uVar27 != uVar30);
      if (uVar32 == 0) goto LAB_00bf9204;
    }
    puVar21 = puVar18 + uVar27 * 9 + 1;
    do {
      *(int *)puVar21 = (int)uVar27;
      uVar27 = uVar27 + 1;
      puVar21 = puVar21 + 9;
    } while (uVar55 != uVar27);
  }
LAB_00bf9204:
  pp_Var51 = *(__tree_node_base ***)(this + 0x60);
  while (pp_Var51 != (__tree_node_base **)(this + 0x68)) {
    uVar33 = *(uint *)(pp_Var51 + 6);
    puVar21 = puVar26 + (ulong)uVar33 * 9 + 2;
    pp_Var28 = (__tree_node_base **)*puVar21;
    if (pp_Var28 == (__tree_node_base **)puVar26[(ulong)uVar33 * 9 + 3]) {
      pvVar22 = (void *)puVar26[(ulong)uVar33 * 9 + 1];
      uVar27 = (long)pp_Var28 - (long)pvVar22;
      uVar30 = ((long)uVar27 >> 4) + 1;
      if (uVar30 >> 0x3c != 0) goto LAB_00bfa31c;
      if (uVar30 <= (ulong)((long)uVar27 >> 3)) {
        uVar30 = (long)uVar27 >> 3;
      }
      if (0x7fffffffffffffef < uVar27) {
        uVar30 = 0xfffffffffffffff;
      }
      if (uVar30 == 0) {
        pvVar19 = (void *)0x0;
      }
      else {
        if (uVar30 >> 0x3c != 0) goto LAB_00bfa310;
        pvVar19 = operator_new(uVar30 << 4);
      }
      pp_Var28 = (__tree_node_base **)((long)pvVar19 + ((long)uVar27 >> 4) * 0x10);
      p_Var42 = pp_Var51[4];
      pp_Var28[1] = pp_Var51[5];
      *pp_Var28 = p_Var42;
      if (0 < (long)uVar27) {
        memcpy(pvVar19,pvVar22,uVar27);
      }
      puVar26[(ulong)uVar33 * 9 + 1] = (ulong)pvVar19;
      puVar26[(ulong)uVar33 * 9 + 3] = (ulong)((long)pvVar19 + uVar30 * 0x10);
      *puVar21 = (ulong)(pp_Var28 + 2);
      if (pvVar22 != (void *)0x0) {
        operator_delete(pvVar22);
      }
    }
    else {
      p_Var42 = pp_Var51[4];
      pp_Var28[1] = pp_Var51[5];
      *pp_Var28 = p_Var42;
      *puVar21 = (ulong)(pp_Var28 + 2);
    }
    pp_Var28 = (__tree_node_base **)pp_Var51[1];
    if ((__tree_node_base **)pp_Var51[1] == (__tree_node_base **)0x0) {
      pp_Var28 = pp_Var51 + 2;
      bVar11 = *(__tree_node_base ***)*pp_Var28 != pp_Var51;
      pp_Var51 = (__tree_node_base **)*pp_Var28;
      if (bVar11) {
        do {
          p_Var42 = *pp_Var28;
          pp_Var28 = (__tree_node_base **)(p_Var42 + 0x10);
          pp_Var51 = (__tree_node_base **)*pp_Var28;
        } while (*pp_Var51 != p_Var42);
      }
    }
    else {
      do {
        pp_Var51 = pp_Var28;
        pp_Var28 = (__tree_node_base **)*pp_Var51;
      } while ((__tree_node_base **)*pp_Var51 != (__tree_node_base **)0x0);
    }
  }
  ppCVar49 = *(CompiledShaderArchive ***)(this + 0xb8);
  while (ppCVar49 != (CompiledShaderArchive **)(this + 0xc0)) {
    uVar33 = *(uint *)((long)ppCVar49 + 0x2c);
    uVar30 = *(ulong *)((long)ppCVar49 + 0x1c);
    puVar26[(ulong)uVar33 * 9 + 8] = *(ulong *)((long)ppCVar49 + 0x24);
    puVar26[(ulong)uVar33 * 9 + 7] = uVar30;
    ppCVar29 = (CompiledShaderArchive **)ppCVar49[1];
    if ((CompiledShaderArchive **)ppCVar49[1] == (CompiledShaderArchive **)0x0) {
      ppCVar29 = ppCVar49 + 2;
      bVar11 = (CompiledShaderArchive **)*(CompiledShaderArchive **)*ppCVar29 != ppCVar49;
      ppCVar49 = (CompiledShaderArchive **)*ppCVar29;
      if (bVar11) {
        do {
          pCVar39 = *ppCVar29;
          ppCVar29 = (CompiledShaderArchive **)(pCVar39 + 0x10);
          ppCVar49 = (CompiledShaderArchive **)*ppCVar29;
        } while (*ppCVar49 != pCVar39);
      }
    }
    else {
      do {
        ppCVar49 = ppCVar29;
        ppCVar29 = (CompiledShaderArchive **)*ppCVar49;
      } while ((CompiledShaderArchive **)*ppCVar49 != (CompiledShaderArchive **)0x0);
    }
  }
  if (param_3) {
    ppCVar49 = *(CompiledShaderArchive ***)(this + 0xa0);
    while (ppCVar49 != (CompiledShaderArchive **)(this + 0xa8)) {
      uVar33 = *(uint *)((long)ppCVar49 + 0x2c);
      ppvVar53 = (void **)(puVar26 + (ulong)uVar33 * 9 + 5);
      puVar47 = (undefined8 *)*ppvVar53;
      if (puVar47 == (undefined8 *)puVar26[(ulong)uVar33 * 9 + 6]) {
        pvVar22 = (void *)puVar26[(ulong)uVar33 * 9 + 4];
        uVar27 = (long)puVar47 - (long)pvVar22;
        uVar30 = ((long)uVar27 >> 4) + 1;
        if (uVar30 >> 0x3c != 0) {
LAB_00bfa31c:
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar30 <= (ulong)((long)uVar27 >> 3)) {
          uVar30 = (long)uVar27 >> 3;
        }
        if (0x7fffffffffffffef < uVar27) {
          uVar30 = 0xfffffffffffffff;
        }
        if (uVar30 == 0) {
          pvVar19 = (void *)0x0;
        }
        else {
          if (uVar30 >> 0x3c != 0) goto LAB_00bfa310;
          pvVar19 = operator_new(uVar30 << 4);
        }
        puVar47 = (undefined8 *)((long)pvVar19 + ((long)uVar27 >> 4) * 0x10);
        uVar57 = *(undefined8 *)((long)ppCVar49 + 0x1c);
        puVar47[1] = *(undefined8 *)((long)ppCVar49 + 0x24);
        *puVar47 = uVar57;
        if (0 < (long)uVar27) {
          memcpy(pvVar19,pvVar22,uVar27);
        }
        *ppvVar53 = puVar47 + 2;
        puVar26[(ulong)uVar33 * 9 + 6] = (ulong)((long)pvVar19 + uVar30 * 0x10);
        puVar26[(ulong)uVar33 * 9 + 4] = (ulong)pvVar19;
        if (pvVar22 != (void *)0x0) {
          operator_delete(pvVar22);
        }
      }
      else {
        uVar57 = *(undefined8 *)((long)ppCVar49 + 0x1c);
        puVar47[1] = *(undefined8 *)((long)ppCVar49 + 0x24);
        *puVar47 = uVar57;
        *ppvVar53 = puVar47 + 2;
      }
      ppCVar29 = (CompiledShaderArchive **)ppCVar49[1];
      if ((CompiledShaderArchive **)ppCVar49[1] == (CompiledShaderArchive **)0x0) {
        ppCVar29 = ppCVar49 + 2;
        bVar11 = (CompiledShaderArchive **)*(CompiledShaderArchive **)*ppCVar29 != ppCVar49;
        ppCVar49 = (CompiledShaderArchive **)*ppCVar29;
        if (bVar11) {
          do {
            pCVar39 = *ppCVar29;
            ppCVar29 = (CompiledShaderArchive **)(pCVar39 + 0x10);
            ppCVar49 = (CompiledShaderArchive **)*ppCVar29;
          } while (*ppCVar49 != pCVar39);
        }
      }
      else {
        do {
          ppCVar49 = ppCVar29;
          ppCVar29 = (CompiledShaderArchive **)*ppCVar49;
        } while ((CompiledShaderArchive **)*ppCVar49 != (CompiledShaderArchive **)0x0);
      }
    }
  }
  if (param_5) {
    std::__ndk1::
    __sort<CompiledShaderArchive::SortTempShaderByFirstId&,CompiledShaderArchive::TempShaderData*>
              ((TempShaderData *)puVar26,(TempShaderData *)(puVar26 + uVar55 * 9),
               (SortTempShaderByFirstId *)&local_178);
  }
  puVar20 = (undefined4 *)operator_new__((uVar52 >> 3) + 4 & 0x3fffffffc);
  *puVar20 = 0xffffffff;
  if (iVar14 != 0) {
    if (uVar55 < 2) {
      uVar27 = 0;
    }
    else {
      uVar30 = 0;
      uVar32 = uVar52 >> 5 & 1;
      uVar27 = uVar55 - uVar32;
      puVar21 = puVar18 + 10;
      do {
        iVar25 = (int)uVar30;
        iVar13 = *(int *)puVar21;
        puVar20[*(int *)(puVar21 + -9) + 1] = iVar25;
        uVar30 = uVar30 + 2;
        puVar20[iVar13 + 1] = iVar25 + 1;
        puVar21 = puVar21 + 0x12;
      } while (uVar27 != uVar30);
      if (uVar32 == 0) goto LAB_00bf9620;
    }
    puVar21 = puVar18 + uVar27 * 9 + 1;
    do {
      puVar20[*(int *)puVar21 + 1] = (int)uVar27;
      uVar27 = uVar27 + 1;
      puVar21 = puVar21 + 9;
    } while (uVar55 != uVar27);
  }
LAB_00bf9620:
  uVar30 = (lVar36 - lVar37 >> 3) * -0x5555555555555555;
  pp_Var51 = *(__tree_node_base ***)(this + 0x48);
  while (pp_Var51 != (__tree_node_base **)(this + 0x50)) {
    pp_Var28 = (__tree_node_base **)pp_Var51[1];
    if (*(int *)(pp_Var51 + 6) == -1) {
      pp_Var41 = pp_Var28;
      if (pp_Var28 == (__tree_node_base **)0x0) {
        pp_Var41 = pp_Var51 + 2;
        pp_Var50 = (__tree_node_base **)*pp_Var41;
        if ((__tree_node_base **)*pp_Var50 != pp_Var51) {
          do {
            p_Var42 = *pp_Var41;
            pp_Var41 = (__tree_node_base **)(p_Var42 + 0x10);
            pp_Var50 = (__tree_node_base **)*pp_Var41;
          } while (*pp_Var50 != p_Var42);
          goto LAB_00bf97d8;
        }
LAB_00bf97ec:
        pp_Var28 = pp_Var51 + 2;
        pp_Var41 = (__tree_node_base **)*pp_Var28;
        if ((__tree_node_base **)*pp_Var41 != pp_Var51) {
          do {
            p_Var42 = *pp_Var28;
            pp_Var28 = (__tree_node_base **)(p_Var42 + 0x10);
            pp_Var41 = (__tree_node_base **)*pp_Var28;
          } while (*pp_Var41 != p_Var42);
        }
      }
      else {
        do {
          pp_Var50 = pp_Var41;
          pp_Var41 = (__tree_node_base **)*pp_Var50;
        } while ((__tree_node_base **)*pp_Var50 != (__tree_node_base **)0x0);
LAB_00bf97d8:
        if (pp_Var28 == (__tree_node_base **)0x0) goto LAB_00bf97ec;
        do {
          pp_Var41 = pp_Var28;
          pp_Var28 = (__tree_node_base **)*pp_Var41;
        } while ((__tree_node_base **)*pp_Var41 != (__tree_node_base **)0x0);
      }
      if (*(__tree_node_base ***)(this + 0x48) == pp_Var51) {
        *(__tree_node_base ***)(this + 0x48) = pp_Var41;
      }
      *(long *)(this + 0x58) = *(long *)(this + 0x58) + -1;
      std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                (*(__tree_node_base **)(this + 0x50),(__tree_node_base *)pp_Var51);
      operator_delete(pp_Var51);
      pp_Var51 = pp_Var50;
    }
    else if (pp_Var28 == (__tree_node_base **)0x0) {
      pp_Var28 = pp_Var51 + 2;
      bVar11 = (__tree_node_base **)*(__tree_node_base **)*pp_Var28 != pp_Var51;
      pp_Var51 = (__tree_node_base **)*pp_Var28;
      if (bVar11) {
        do {
          p_Var42 = *pp_Var28;
          pp_Var28 = (__tree_node_base **)(p_Var42 + 0x10);
          pp_Var51 = (__tree_node_base **)*pp_Var28;
        } while (*pp_Var51 != p_Var42);
      }
    }
    else {
      do {
        pp_Var51 = pp_Var28;
        pp_Var28 = (__tree_node_base **)*pp_Var51;
      } while ((__tree_node_base **)*pp_Var51 != (__tree_node_base **)0x0);
    }
  }
  uVar27 = uVar30 & 0xffffffff;
  puVar21 = (ulong *)operator_new__(uVar27 * 0x28 + 8);
  puVar31 = puVar21 + 1;
  *puVar21 = uVar27;
  if (uVar27 != 0) {
    lVar36 = uVar27 * 0x28;
    puVar43 = puVar31;
    do {
      *puVar43 = 0;
      puVar43[1] = 0;
      lVar36 = lVar36 + -0x28;
      puVar43[2] = 0;
      puVar43 = puVar43 + 5;
    } while (lVar36 != 0);
  }
  iVar13 = (int)uVar30;
  if (iVar13 != 0) {
    piVar40 = (int *)(*(long *)(this + 0x18) + 0xc);
    uVar32 = uVar30 & 0xffffffff;
    puVar44 = (undefined4 *)((long)puVar21 + 0x2c);
    do {
      uVar32 = uVar32 - 1;
      puVar44[-3] = puVar20[piVar40[-1] + 1];
      puVar44[-2] = puVar20[*piVar40 + 1];
      puVar44[-1] = puVar20[piVar40[1] + 1];
      puVar45 = (uint *)(piVar40 + 2);
      piVar40 = piVar40 + 6;
      *puVar44 = *(undefined4 *)((long)pvVar17 + (ulong)*puVar45 * 4);
      puVar44 = puVar44 + 10;
    } while (uVar32 != 0);
  }
  operator_delete__(pvVar17);
  operator_delete__(puVar20);
  pp_Var51 = *(__tree_node_base ***)(this + 0x48);
  while (pp_Var51 != (__tree_node_base **)(this + 0x50)) {
    ppvVar53 = (void **)(puVar31 + (ulong)*(uint *)(pp_Var51 + 6) * 5);
    ppvVar56 = ppvVar53 + 1;
    pp_Var28 = (__tree_node_base **)*ppvVar56;
    if (pp_Var28 == (__tree_node_base **)ppvVar53[2]) {
      pvVar17 = *ppvVar53;
      uVar54 = (long)pp_Var28 - (long)pvVar17;
      uVar32 = ((long)uVar54 >> 4) + 1;
      if (uVar32 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar32 <= (ulong)((long)uVar54 >> 3)) {
        uVar32 = (long)uVar54 >> 3;
      }
      if (0x7fffffffffffffef < uVar54) {
        uVar32 = 0xfffffffffffffff;
      }
      if (uVar32 == 0) {
        pvVar22 = (void *)0x0;
      }
      else {
        if (uVar32 >> 0x3c != 0) {
LAB_00bfa310:
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        pvVar22 = operator_new(uVar32 << 4);
      }
      pp_Var28 = (__tree_node_base **)((long)pvVar22 + ((long)uVar54 >> 4) * 0x10);
      p_Var42 = pp_Var51[4];
      pp_Var28[1] = pp_Var51[5];
      *pp_Var28 = p_Var42;
      if (0 < (long)uVar54) {
        memcpy(pvVar22,pvVar17,uVar54);
      }
      *ppvVar53 = pvVar22;
      *ppvVar56 = pp_Var28 + 2;
      ppvVar53[2] = (void *)((long)pvVar22 + uVar32 * 0x10);
      if (pvVar17 != (void *)0x0) {
        operator_delete(pvVar17);
      }
    }
    else {
      p_Var42 = pp_Var51[4];
      pp_Var28[1] = pp_Var51[5];
      *pp_Var28 = p_Var42;
      *ppvVar56 = pp_Var28 + 2;
    }
    pp_Var28 = (__tree_node_base **)pp_Var51[1];
    if ((__tree_node_base **)pp_Var51[1] == (__tree_node_base **)0x0) {
      pp_Var28 = pp_Var51 + 2;
      bVar11 = *(__tree_node_base ***)*pp_Var28 != pp_Var51;
      pp_Var51 = (__tree_node_base **)*pp_Var28;
      if (bVar11) {
        do {
          p_Var42 = *pp_Var28;
          pp_Var28 = (__tree_node_base **)(p_Var42 + 0x10);
          pp_Var51 = (__tree_node_base **)*pp_Var28;
        } while (*pp_Var51 != p_Var42);
      }
    }
    else {
      do {
        pp_Var51 = pp_Var28;
        pp_Var28 = (__tree_node_base **)*pp_Var51;
      } while ((__tree_node_base **)*pp_Var51 != (__tree_node_base **)0x0);
    }
  }
  if (param_5) {
    std::__ndk1::
    __sort<CompiledShaderArchive::SortTempProgramByFirstId&,CompiledShaderArchive::TempProgramData*>
              ((TempProgramData *)puVar31,(TempProgramData *)(puVar31 + uVar27 * 5),
               (SortTempProgramByFirstId *)&local_178);
  }
  uStack_198 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  (**(code **)(*plVar15 + 0x30))(plVar15,&local_1a0,0x20);
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    uVar33 = 0;
  }
  else {
    sVar23 = strlen(param_2);
    uVar6 = (int)sVar23 + 0xf;
    (**(code **)(*plVar15 + 0x30))(plVar15,param_2,sVar23 & 0xffffffff);
    uVar33 = uVar6 & 0xfffffff0;
    (**(code **)(*plVar15 + 0x30))(plVar15,&DAT_00528920,(uVar6 & 0xfffffff0) - (int)sVar23);
  }
  pvVar17 = operator_new__(uVar35 * 0x18);
  iVar25 = (int)uVar34;
  if (iVar25 != 0) {
    lVar36 = *(long *)(this + 0x30);
    puVar45 = (uint *)((long)pvVar16 + 0x10);
    uVar35 = uVar34 & 0xffffffff;
    puVar46 = (uint *)((long)pvVar17 + 4);
    do {
      uVar6 = *puVar45;
      uVar35 = uVar35 - 1;
      uVar58 = *(undefined8 *)(puVar45 + -2);
      uVar57 = *(undefined8 *)(puVar45 + -4);
      puVar45 = puVar45 + 5;
      lVar37 = lVar36 + (ulong)uVar6 * 0x28;
      puVar46[-1] = *(uint *)(lVar37 + 0x18);
      bVar8 = *(byte *)(lVar37 + 0x1c);
      *(undefined8 *)(puVar46 + 3) = uVar58;
      *(undefined8 *)(puVar46 + 1) = uVar57;
      *puVar46 = (uint)bVar8;
      puVar46 = puVar46 + 6;
    } while (uVar35 != 0);
  }
  (**(code **)(*plVar15 + 0x30))(plVar15,pvVar17,iVar25 * 0x18);
  operator_delete__(pvVar17);
  puVar20 = (undefined4 *)operator_new__(uVar55 << 5);
  if (iVar14 != 0) {
    lVar37 = *(long *)this;
    lVar36 = 0;
    puVar44 = puVar20;
    do {
      lVar38 = lVar36 + 0x48;
      lVar3 = *(long *)((long)puVar18 + lVar36 + 0x10);
      lVar5 = *(long *)((long)puVar18 + lVar36 + 0x18);
      lVar1 = lVar37 + (ulong)*(uint *)((long)puVar18 + lVar36 + 8) * 0x20;
      uVar58 = *(undefined8 *)((long)puVar18 + lVar36 + 0x48);
      uVar57 = *(undefined8 *)((long)puVar18 + lVar36 + 0x40);
      lVar4 = *(long *)((long)puVar18 + lVar36 + 0x28);
      lVar36 = *(long *)((long)puVar18 + lVar36 + 0x30);
      *puVar44 = *(undefined4 *)(lVar1 + 0x10);
      bVar8 = *(byte *)(lVar1 + 0x14);
      puVar44[7] = (int)((ulong)(lVar5 - lVar3) >> 4);
      *(undefined8 *)(puVar44 + 5) = uVar58;
      *(undefined8 *)(puVar44 + 3) = uVar57;
      puVar44[1] = (uint)bVar8;
      puVar44[2] = (int)((ulong)(lVar36 - lVar4) >> 4);
      puVar44 = puVar44 + 8;
      lVar36 = lVar38;
    } while (uVar55 * 0x48 - lVar38 != 0);
  }
  (**(code **)(*plVar15 + 0x30))(plVar15,puVar20,iVar14 << 5);
  operator_delete__(puVar20);
  pvVar17 = operator_new__(uVar27 * 0x14);
  if (iVar13 != 0) {
    puVar43 = puVar21 + 2;
    uVar35 = uVar30 & 0xffffffff;
    puVar20 = (undefined4 *)((long)pvVar17 + 0x10);
    do {
      uVar27 = puVar43[-1];
      uVar32 = *puVar43;
      uVar35 = uVar35 - 1;
      puVar10 = puVar43 + 3;
      uVar54 = puVar43[2];
      puVar43 = puVar43 + 5;
      *(ulong *)(puVar20 + -2) = *puVar10;
      *(ulong *)(puVar20 + -4) = uVar54;
      *puVar20 = (int)(uVar32 - uVar27 >> 4);
      puVar20 = puVar20 + 5;
    } while (uVar35 != 0);
  }
  (**(code **)(*plVar15 + 0x30))(plVar15,pvVar17,iVar13 * 0x14);
  operator_delete__(pvVar17);
  if (iVar25 != 0) {
    uVar35 = uVar34 & 0xffffffff;
    puVar45 = (uint *)((long)pvVar16 + 0x10);
    do {
      uVar6 = *puVar45;
      lVar36 = *(long *)(this + 0x30) + (ulong)uVar6 * 0x28;
      (**(code **)(*plVar15 + 0x30))
                (plVar15,*(undefined8 *)(lVar36 + 0x10),*(undefined4 *)(lVar36 + 0x18));
      lVar36 = *(long *)(this + 0x30) + (ulong)uVar6 * 0x28;
      (**(code **)(*plVar15 + 0x30))(plVar15,lVar36 + 0x1d,(uint)*(byte *)(lVar36 + 0x1c) * 5);
      uVar35 = uVar35 - 1;
      puVar45 = puVar45 + 5;
    } while (uVar35 != 0);
  }
  if (iVar14 == 0) {
    uVar35 = 0;
    local_1c8 = 0;
  }
  else {
    uVar27 = 0;
    uVar35 = 0;
    local_1c8 = 0;
    do {
      puVar43 = puVar26 + uVar27 * 9;
      lVar36 = (ulong)*(uint *)puVar43 * 0x20;
      (**(code **)(*plVar15 + 0x30))
                (plVar15,*(undefined8 *)(*(long *)this + lVar36 + 8),
                 *(undefined4 *)(*(long *)this + lVar36 + 0x10));
      (**(code **)(*plVar15 + 0x30))
                (plVar15,*(long *)this + lVar36 + 0x15,
                 (uint)*(byte *)(*(long *)this + lVar36 + 0x14) * 5);
      lVar36 = *(long *)this + lVar36;
      uVar32 = puVar43[4];
      uVar7 = *(uint *)(lVar36 + 0x10);
      uVar6 = uVar7;
      if (*(char *)(lVar36 + 0x14) != '\0') {
        uVar6 = *(uint *)(lVar36 + 0x16);
      }
      if (puVar43[5] != uVar32) {
        uVar54 = 0;
        do {
          (**(code **)(*plVar15 + 0x30))(plVar15,uVar32 + uVar54 * 0x10,0x10);
          uVar54 = (ulong)((int)uVar54 + 1);
          uVar32 = puVar43[4];
        } while (uVar54 < (ulong)((long)(puVar43[5] - uVar32) >> 4));
      }
      uVar32 = puVar26[uVar27 * 9 + 1];
      if (puVar26[uVar27 * 9 + 2] != uVar32) {
        uVar54 = 0;
        do {
          puVar20 = (undefined4 *)(uVar32 + uVar54 * 0x10);
          __memcpy_chk((ulong)&local_178 | 2,*(undefined8 *)(puVar20 + 2),puVar20[1],0xff);
          (**(code **)(*plVar15 + 0x30))(plVar15,&local_178,puVar20[1] + 2);
          uVar54 = (ulong)((int)uVar54 + 1);
          uVar32 = puVar26[uVar27 * 9 + 1];
        } while (uVar54 < (ulong)((long)(puVar26[uVar27 * 9 + 2] - uVar32) >> 4));
      }
      uVar35 = uVar35 + uVar7;
      uVar27 = uVar27 + 1;
      local_1c8 = local_1c8 + uVar6;
    } while (uVar27 != uVar55);
  }
  if (iVar13 != 0) {
    uVar27 = 0;
    do {
      puVar26 = puVar31 + uVar27 * 5;
      uVar32 = *puVar26;
      if (puVar26[1] != uVar32) {
        uVar54 = 0;
        do {
          piVar40 = (int *)(uVar32 + uVar54 * 0x10);
          local_178 = CONCAT31(local_178._1_3_,(char)*piVar40);
          __memcpy_chk((ulong)&local_178 | 1,*(undefined8 *)(piVar40 + 2),*piVar40,0xff);
          (**(code **)(*plVar15 + 0x30))(plVar15,&local_178,*piVar40 + 1);
          uVar54 = (ulong)((int)uVar54 + 1);
          uVar32 = *puVar26;
        } while (uVar54 < (ulong)((long)(puVar26[1] - uVar32) >> 4));
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != (uVar30 & 0xffffffff));
  }
  local_178 = 0;
  local_1a4 = 0;
  if (*(CompressionDictionary **)(this + 0x78) != (CompressionDictionary *)0x0) {
    CompressionDictionary::serialize
              (*(CompressionDictionary **)(this + 0x78),(File *)plVar15,&local_1a4,&local_178);
  }
  local_1ac = 0;
  local_1a8 = 0;
  if (*(MarkovHuffmanTree **)(this + 0x80) != (MarkovHuffmanTree *)0x0) {
    MarkovHuffmanTree::serialize
              (*(MarkovHuffmanTree **)(this + 0x80),(File *)plVar15,&local_1ac,&local_1a8);
  }
  operator_delete__(pvVar16);
  for (lVar36 = *puVar18 * 0x48; lVar36 != 0; lVar36 = lVar36 + -0x48) {
    pvVar16 = *(void **)((long)puVar18 + lVar36 + -0x20);
    if (pvVar16 != (void *)0x0) {
      *(void **)((long)puVar18 + lVar36 + -0x18) = pvVar16;
      operator_delete(pvVar16);
    }
    pvVar16 = *(void **)((long)puVar18 + lVar36 + -0x38);
    if (pvVar16 != (void *)0x0) {
      *(void **)((long)puVar18 + lVar36 + -0x30) = pvVar16;
      operator_delete(pvVar16);
    }
  }
  operator_delete__(puVar18);
  for (lVar36 = *puVar21 * 0x28; lVar36 != 0; lVar36 = lVar36 + -0x28) {
    pvVar16 = *(void **)((long)puVar21 + lVar36 + -0x20);
    if (pvVar16 != (void *)0x0) {
      *(void **)((long)puVar21 + lVar36 + -0x18) = pvVar16;
      operator_delete(pvVar16);
    }
  }
  operator_delete__(puVar21);
  uVar57 = local_188;
  uStack_198 = CONCAT44(iVar25,uVar33 + 0x20);
  local_1a0 = 0x853484152;
  local_190 = CONCAT44(iVar13,iVar14);
  uVar12 = (**(code **)(**(long **)(this + 0x110) + 0x28))();
  local_188 = CONCAT44(local_188._4_4_,uVar12);
  lVar36 = (**(code **)(*plVar15 + 0x40))(plVar15);
  (**(code **)(*plVar15 + 0x38))(plVar15,0);
  (**(code **)(*plVar15 + 0x30))(plVar15,&local_1a0,0x20);
  (**(code **)(*plVar15 + 8))(plVar15);
  if (param_4) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar13 != 0))
    {
                    /* try { // try from 00bfa338 to 00bfa33f has its CatchHandler @ 00bfa928 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa344 to 00bfa347 has its CatchHandler @ 00bfa8d8 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Written shader archive to \'%s\'.\n",param_1);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar13 != 0))
    {
                    /* try { // try from 00bfa38c to 00bfa393 has its CatchHandler @ 00bfa924 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa398 to 00bfa39b has its CatchHandler @ 00bfa8c8 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Archive bytes: %u KB\n",lVar36 + 0x200U >> 10);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar13 != 0))
    {
                    /* try { // try from 00bfa3dc to 00bfa3e3 has its CatchHandler @ 00bfa920 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa3e8 to 00bfa3eb has its CatchHandler @ 00bfa8c4 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    if (iVar14 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = 0;
      if (uVar55 != 0) {
        uVar27 = uVar35 / uVar55;
      }
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Shader bytes: %u KB (av %u B)\n",uVar35 + 0x200 >> 10,uVar27);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar13 != 0))
    {
                    /* try { // try from 00bfa42c to 00bfa433 has its CatchHandler @ 00bfa91c */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa438 to 00bfa43b has its CatchHandler @ 00bfa8c0 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    if (iVar14 == 0) {
      uVar35 = 0;
    }
    else {
      uVar35 = 0;
      if (uVar55 != 0) {
        uVar35 = local_1c8 / uVar55;
      }
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Shader uncompressed bytes: %u KB (av %u B)\n",local_1c8 + 0x200 >> 10,
                      uVar35);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa480 to 00bfa487 has its CatchHandler @ 00bfa918 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa48c to 00bfa48f has its CatchHandler @ 00bfa8bc */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Dictionary bytes: %u KB\n",local_178 + 0x200 >> 10);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa4d0 to 00bfa4d7 has its CatchHandler @ 00bfa914 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa4dc to 00bfa4df has its CatchHandler @ 00bfa8b8 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Dictionary uncompressed bytes: %u KB\n",local_1a4 + 0x200 >> 10);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa520 to 00bfa527 has its CatchHandler @ 00bfa910 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa52c to 00bfa52f has its CatchHandler @ 00bfa8b4 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Markov-Huffman tree bytes: %u KB\n",local_1a8 + 0x200 >> 10);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa570 to 00bfa577 has its CatchHandler @ 00bfa90c */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa57c to 00bfa57f has its CatchHandler @ 00bfa8b0 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Markov-Huffman tree uncompressed bytes: %u KB\n",local_1ac + 0x200 >> 10);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa5c0 to 00bfa5c7 has its CatchHandler @ 00bfa908 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa5cc to 00bfa5cf has its CatchHandler @ 00bfa8ac */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Num shaders: %u\n",
                      uVar52 >> 5);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa610 to 00bfa617 has its CatchHandler @ 00bfa904 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa61c to 00bfa61f has its CatchHandler @ 00bfa8a8 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,"  Num programs: %u\n"
                      ,uVar30);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa660 to 00bfa667 has its CatchHandler @ 00bfa900 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa66c to 00bfa66f has its CatchHandler @ 00bfa8a4 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Num struct layouts: %u\n",uVar34);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa6b0 to 00bfa6b7 has its CatchHandler @ 00bfa8fc */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa6bc to 00bfa6bf has its CatchHandler @ 00bfa8a0 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Num shader ids: %u\n",(ulong)*(uint *)(this + 0x70));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa700 to 00bfa707 has its CatchHandler @ 00bfa8f8 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa70c to 00bfa70f has its CatchHandler @ 00bfa89c */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Num program ids: %u\n",(ulong)*(uint *)(this + 0x58));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa750 to 00bfa757 has its CatchHandler @ 00bfa8f4 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa75c to 00bfa75f has its CatchHandler @ 00bfa898 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Num compiled shader hashes: %u\n",(ulong)*(uint *)(this + 200));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa7a0 to 00bfa7a7 has its CatchHandler @ 00bfa8f0 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa7ac to 00bfa7af has its CatchHandler @ 00bfa894 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar2 = "";
    if (!param_3) {
      pcVar2 = " (not stored)";
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Num shader source hashes: %u%s\n",(ulong)*(uint *)(this + 0xb0),pcVar2);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa7f0 to 00bfa7f7 has its CatchHandler @ 00bfa8ec */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa7fc to 00bfa7ff has its CatchHandler @ 00bfa890 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Num program hashes: %u\n",(ulong)*(uint *)(this + 0x98));
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar14 != 0))
    {
                    /* try { // try from 00bfa840 to 00bfa847 has its CatchHandler @ 00bfa8e8 */
      pLVar24 = (Logger *)operator_new(0x38);
                    /* try { // try from 00bfa84c to 00bfa84f has its CatchHandler @ 00bfa880 */
      Logger::Logger(pLVar24);
      LogManager::getInstance()::singletonLogManager = pLVar24;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Scratch mem requirement: %u KB\n",(int)local_188 + 0x200U >> 10);
  }
LAB_00bfa2d8:
  if (*(long *)(lVar9 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar15 != (long *)0x0);
}


