// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TextFilterManager
// Entry Point: 00b43834
// Size: 8012 bytes
// Signature: undefined __thiscall TextFilterManager(TextFilterManager * this)


/* WARNING: Type propagation algorithm not settling */
/* TextFilterManager::TextFilterManager() */

void __thiscall TextFilterManager::TextFilterManager(TextFilterManager *this)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long **pplVar10;
  uint uVar11;
  int iVar12;
  long **pplVar13;
  long **pplVar14;
  long **pplVar15;
  long **pplVar16;
  long **pplVar17;
  long **pplVar18;
  
  *(undefined8 *)(this + 0x10) = 0;
  pplVar14 = (long **)(this + 8);
  *pplVar14 = (long *)0x0;
  *(long ***)this = pplVar14;
                    /* try { // try from 00b438c0 to 00b438cb has its CatchHandler @ 00b458d8 */
  puVar4 = (undefined8 *)operator_new(0x20);
  *(undefined4 *)((long)puVar4 + 0x1c) = 0x20;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = pplVar14;
  *(undefined8 **)this = puVar4;
  *(undefined8 **)(this + 8) = puVar4;
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            ((__tree_node_base *)puVar4,(__tree_node_base *)puVar4);
  pplVar13 = *(long ***)(this + 8);
  *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  pplVar15 = pplVar14;
  pplVar10 = pplVar13;
  if (pplVar13 == (long **)0x0) {
    pplVar13 = (long **)0x0;
    pplVar17 = pplVar14;
  }
  else {
    do {
      while (pplVar17 = pplVar10, *(uint *)((long)pplVar17 + 0x1c) < 0x2d) {
        if (*(uint *)((long)pplVar17 + 0x1c) == 0x2c) goto LAB_00b43870;
        pplVar15 = pplVar17 + 1;
        pplVar10 = (long **)*pplVar15;
        if ((long **)*pplVar15 == (long **)0x0) goto LAB_00b43870;
      }
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
    } while ((long **)*pplVar17 != (long **)0x0);
  }
LAB_00b43870:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (*pplVar15 == (long *)0x0) {
                    /* try { // try from 00b43938 to 00b43943 has its CatchHandler @ 00b458d0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2c;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x2e < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b439e4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x2e) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b439e4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b439e8 to 00b439f3 has its CatchHandler @ 00b458c8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2e;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x3f < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b43a94;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x3f) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b43a94:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43a98 to 00b43aa3 has its CatchHandler @ 00b458c0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x3f;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x27 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b43b44;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x27) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b43b44:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43b48 to 00b43b53 has its CatchHandler @ 00b458b8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x27;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x40 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b43bf4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x40) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b43bf4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43bf8 to 00b43c03 has its CatchHandler @ 00b458b0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x40;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x23 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b43ca4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x23) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b43ca4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43ca8 to 00b43cb3 has its CatchHandler @ 00b458a8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x23;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x24 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b43d54;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x24) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b43d54:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43d58 to 00b43d63 has its CatchHandler @ 00b458a0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x24;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x25 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b43e04;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x25) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b43e04:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43e08 to 00b43e13 has its CatchHandler @ 00b45898 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x25;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x26 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b43eb4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x26) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b43eb4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43eb8 to 00b43ec3 has its CatchHandler @ 00b45890 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x26;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x28 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b43f64;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x28) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b43f64:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b43f68 to 00b43f73 has its CatchHandler @ 00b45888 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x28;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x29 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44014;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x29) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44014:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44018 to 00b44023 has its CatchHandler @ 00b45880 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x29;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x5f < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b440c4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x5f) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b440c4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b440c8 to 00b440d3 has its CatchHandler @ 00b45878 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x5f;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x3d < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44174;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x3d) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44174:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44178 to 00b44183 has its CatchHandler @ 00b45870 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x3d;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x2b < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44224;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x2b) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44224:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44228 to 00b44233 has its CatchHandler @ 00b45868 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2b;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x2d < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b442d4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x2d) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b442d4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b442d8 to 00b442e3 has its CatchHandler @ 00b45860 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2d;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x5c < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44384;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x5c) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44384:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44388 to 00b44393 has its CatchHandler @ 00b45858 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x5c;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x3b < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44434;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x3b) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44434:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44438 to 00b44443 has its CatchHandler @ 00b45850 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x3b;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x3a < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b444e4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x3a) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b444e4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b444e8 to 00b444f3 has its CatchHandler @ 00b45848 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x3a;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x22 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44594;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x22) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44594:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44598 to 00b445a3 has its CatchHandler @ 00b45840 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x22;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x2a < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44644;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x2a) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44644:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44648 to 00b44653 has its CatchHandler @ 00b45838 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2a;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x2f < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b446f4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x2f) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b446f4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b446f8 to 00b44703 has its CatchHandler @ 00b45830 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2f;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x3c < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b447a4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x3c) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b447a4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b447a8 to 00b447b3 has its CatchHandler @ 00b45828 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x3c;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x3e < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44854;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x3e) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44854:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44858 to 00b44863 has its CatchHandler @ 00b45820 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x3e;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x5b < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44904;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x5b) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44904:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44908 to 00b44913 has its CatchHandler @ 00b45818 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x5b;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x5d < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b449b4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x5d) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b449b4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b449b8 to 00b449c3 has its CatchHandler @ 00b45810 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x5d;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x7b < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44a64;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x7b) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44a64:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44a68 to 00b44a73 has its CatchHandler @ 00b45808 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x7b;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x7d < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44b14;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x7d) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44b14:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44b18 to 00b44b23 has its CatchHandler @ 00b45800 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x7d;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x7c < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44bc4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x7c) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44bc4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44bc8 to 00b44bd3 has its CatchHandler @ 00b457f8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x7c;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x7e < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44c74;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x7e) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44c74:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44c78 to 00b44c83 has its CatchHandler @ 00b457f0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x7e;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x5e < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44d24;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x5e) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44d24:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44d28 to 00b44d33 has its CatchHandler @ 00b457e8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x5e;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x21 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44dd4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x21) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44dd4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44dd8 to 00b44de3 has its CatchHandler @ 00b457e0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x21;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0xa9 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44e84;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0xa9) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44e84:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44e88 to 00b44e93 has its CatchHandler @ 00b457d8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xa9;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0xa3 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b44f34;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0xa3) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b44f34:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44f38 to 00b44f43 has its CatchHandler @ 00b457d0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xa3;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0xbd < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b44fe4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0xbd) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b44fe4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b44fe8 to 00b44ff3 has its CatchHandler @ 00b457c8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xbd;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0xbc < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b45094;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0xbc) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b45094:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b45098 to 00b450a3 has its CatchHandler @ 00b457c0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xbc;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0xa6 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b45144;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0xa6) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b45144:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b45148 to 00b45153 has its CatchHandler @ 00b457b8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xa6;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0xb6 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b451f4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0xb6) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b451f4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b451f8 to 00b45203 has its CatchHandler @ 00b457b0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xb6;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0xba < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b452a4;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0xba) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b452a4:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b452a8 to 00b452b3 has its CatchHandler @ 00b457a8 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xba;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0xb0 < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b45354;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0xb0) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b45354:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b45358 to 00b45363 has its CatchHandler @ 00b457a0 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xb0;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0xb5 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b4540c;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0xb5) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b4540c:
  pplVar15 = pplVar14;
  pplVar17 = pplVar14;
  pplVar13 = pplVar10;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b45410 to 00b4541b has its CatchHandler @ 00b45798 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0xb5;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar13 = pplVar10;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar17 = pplVar10, 0x20ac < *(uint *)((long)pplVar17 + 0x1c)) {
      pplVar15 = pplVar17;
      pplVar10 = (long **)*pplVar17;
      if ((long **)*pplVar17 == (long **)0x0) {
        plVar5 = *pplVar17;
        goto joined_r0x00b454c4;
      }
    }
    if (*(uint *)((long)pplVar17 + 0x1c) == 0x20ac) break;
    pplVar10 = (long **)pplVar17[1];
    pplVar15 = pplVar17 + 1;
  }
  plVar5 = *pplVar15;
joined_r0x00b454c4:
  pplVar16 = pplVar14;
  pplVar18 = pplVar14;
  pplVar10 = pplVar13;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b454c8 to 00b454d3 has its CatchHandler @ 00b45790 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar17;
    *pplVar15 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x20ac;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar15;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar13 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    pplVar10 = pplVar13;
  }
  while (pplVar13 != (long **)0x0) {
    while (pplVar18 = pplVar13, 0x2022 < *(uint *)((long)pplVar18 + 0x1c)) {
      pplVar16 = pplVar18;
      pplVar13 = (long **)*pplVar18;
      if ((long **)*pplVar18 == (long **)0x0) {
        plVar5 = *pplVar18;
        goto joined_r0x00b45534;
      }
    }
    if (*(uint *)((long)pplVar18 + 0x1c) == 0x2022) break;
    pplVar13 = (long **)pplVar18[1];
    pplVar16 = pplVar18 + 1;
  }
  plVar5 = *pplVar16;
joined_r0x00b45534:
  pplVar13 = pplVar14;
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 00b45538 to 00b45543 has its CatchHandler @ 00b45788 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar18;
    *pplVar16 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2022;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar16;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    pplVar10 = *(long ***)(this + 8);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  while (pplVar10 != (long **)0x0) {
    while (pplVar13 = pplVar10, 0x2219 < *(uint *)((long)pplVar13 + 0x1c)) {
      pplVar14 = pplVar13;
      pplVar10 = (long **)*pplVar13;
      if ((long **)*pplVar13 == (long **)0x0) goto LAB_00b455d0;
    }
    if (*(uint *)((long)pplVar13 + 0x1c) == 0x2219) break;
    pplVar14 = pplVar13 + 1;
    pplVar10 = (long **)*pplVar14;
  }
LAB_00b455d0:
  if (*pplVar14 == (long *)0x0) {
                    /* try { // try from 00b455d8 to 00b455e3 has its CatchHandler @ 00b45780 */
    plVar5 = (long *)operator_new(0x20);
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[2] = (long)pplVar13;
    *pplVar14 = plVar5;
    plVar6 = *(long **)this;
    *(undefined4 *)((long)plVar5 + 0x1c) = 0x2219;
    if (*plVar6 != 0) {
      *(long *)this = *plVar6;
      plVar5 = *pplVar14;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              (*(__tree_node_base **)(this + 8),(__tree_node_base *)plVar5);
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
  }
  *(undefined8 *)(this + 0x18) = 0x7e00000296;
  memset(this + 0x20,0,0x18a0);
  uVar9 = 0;
  uVar11 = 0;
  uVar7 = 0;
  do {
    while (iVar12 = (int)((uVar9 & 0xffffffff) * 0x24924925 >> 0x20),
          bVar2 = (&TextFilterManagerData::s_words)[uVar9],
          bVar3 = (&TextFilterManagerData::s_xorPattern)
                  [(int)uVar9 + (iVar12 + ((uint)((int)uVar9 - iVar12) >> 1) >> 2) * -7],
          (&TextFilterManagerData::s_words)[uVar9] = bVar3 ^ bVar2, (bVar3 ^ bVar2) != 0) {
      uVar9 = uVar9 + 1;
      if (uVar9 == 0x157f) goto LAB_00b456d4;
    }
    uVar1 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    *(undefined1 **)(this + uVar1 * 8 + 0x20) = &TextFilterManagerData::s_words + uVar7;
    if (0x296 < uVar11) break;
    uVar9 = uVar9 + 1;
    uVar7 = (uint)uVar9;
  } while (uVar9 != 0x157f);
LAB_00b456d4:
  uVar9 = 0;
  uVar11 = 0;
  uVar8 = 0;
  uVar7 = *(uint *)(this + 0x1c);
  do {
    while (iVar12 = (int)((uVar9 & 0xffffffff) * 0x24924925 >> 0x20),
          bVar2 = (&TextFilterManagerData::s_nickWords)[uVar9],
          bVar3 = (&TextFilterManagerData::s_xorPattern)
                  [(int)uVar9 + (iVar12 + ((uint)((int)uVar9 - iVar12) >> 1) >> 2) * -7],
          (&TextFilterManagerData::s_nickWords)[uVar9] = bVar3 ^ bVar2, (bVar3 ^ bVar2) != 0) {
      uVar9 = uVar9 + 1;
      if (uVar9 == 0x42e) {
        return;
      }
    }
    uVar1 = (ulong)uVar11;
    uVar11 = uVar11 + 1;
    *(undefined1 **)(this + uVar1 * 8 + 0x14d0) = &TextFilterManagerData::s_nickWords + uVar8;
    if (uVar7 < uVar11) {
      return;
    }
    uVar9 = uVar9 + 1;
    uVar8 = (uint)uVar9;
  } while (uVar9 != 0x42e);
  return;
}


