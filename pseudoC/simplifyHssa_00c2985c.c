// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: simplifyHssa
// Entry Point: 00c2985c
// Size: 808 bytes
// Signature: undefined __thiscall simplifyHssa(IR_Function * this, bool param_1)


/* IR_Function::simplifyHssa(bool) */

void __thiscall IR_Function::simplifyHssa(IR_Function *this,bool param_1)

{
  long lVar1;
  undefined4 **ppuVar2;
  void *__dest;
  size_t __n;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  long lVar12;
  long lVar13;
  IR_Section *this_00;
  ulong uVar14;
  vector **ppvVar15;
  ulong uVar16;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  void *local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  ppuVar2 = (undefined4 **)(this + 0x98);
  do {
    ppvVar15 = *(vector ***)(this + 0xc0);
    if (ppvVar15 != *(vector ***)(this + 0xb8)) {
      uVar14 = 0;
      ppvVar15 = *(vector ***)(this + 0xb8);
      do {
        IR_Section::doInlining
                  ((IR_Section *)ppvVar15[uVar14],*(IR_TypeSet **)(this + 0x38),(set *)(this + 0xd8)
                  );
        ppvVar15 = *(vector ***)(this + 0xb8);
        uVar14 = (ulong)((int)uVar14 + 1);
      } while (uVar14 < (ulong)(*(long *)(this + 0xc0) - (long)ppvVar15 >> 3));
    }
    uVar7 = *(uint *)ppuVar2;
    local_b0 = (undefined4 *)0x0;
    local_a8 = (undefined4 *)0x0;
    local_b8 = (undefined4 *)0x0;
    if (uVar7 != 0) {
      local_b8 = (undefined4 *)operator_new((ulong)uVar7 * 0x20);
      local_a8 = local_b8 + (ulong)uVar7 * 8;
      puVar11 = local_b8;
      do {
        *puVar11 = 0;
        *(undefined8 *)(puVar11 + 4) = 0;
        puVar11[6] = 0xffffffff;
        puVar11 = puVar11 + 8;
      } while (puVar11 != local_a8);
    }
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_98 = (void *)0x0;
    local_90 = (void *)0x0;
    local_88 = 0;
                    /* try { // try from 00c29938 to 00c29953 has its CatchHandler @ 00c29b98 */
    local_b0 = local_a8;
    IR_Section::executeConstantFolding
              (*ppvVar15,(vector *)&local_b8,(vector *)&local_80,SUB81(&local_98,0),true);
                    /* try { // try from 00c2995c to 00c29973 has its CatchHandler @ 00c29b9c */
    uVar7 = IR_Section::removeRedundantCOND(**(IR_Section ***)(this + 0xb8),param_1);
    uVar8 = IR_Section::reduceInterfaces();
    uVar7 = uVar7 | uVar8;
    if (*(long *)(this + 0xc0) != *(long *)(this + 0xb8)) {
      uVar14 = 0;
      uVar16 = 1;
      do {
                    /* try { // try from 00c29990 to 00c299bb has its CatchHandler @ 00c29ba0 */
        uVar8 = IR_Section::removeDuplicateOperations();
        uVar9 = IR_Section::doInlining
                          (*(IR_Section **)(*(long *)(this + 0xb8) + uVar14 * 8),
                           *(IR_TypeSet **)(this + 0x38),(set *)(this + 0xd8));
        uVar10 = IR_Section::scalarize();
        uVar7 = uVar7 | uVar8 | uVar9 | uVar10;
        bVar6 = uVar16 < (ulong)(*(long *)(this + 0xc0) - *(long *)(this + 0xb8) >> 3);
        uVar14 = uVar16;
        uVar16 = (ulong)((int)uVar16 + 1);
      } while (bVar6);
    }
    if (local_98 != (void *)0x0) {
      local_90 = local_98;
      operator_delete(local_98);
    }
    if (local_80 != (void *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
    if (local_b8 != (undefined4 *)0x0) {
      local_b0 = local_b8;
      operator_delete(local_b8);
    }
  } while ((uVar7 & 1) != 0);
  lVar13 = *(long *)(this + 0xb8);
  lVar12 = *(long *)(this + 0xc0) - lVar13;
  if (lVar12 != 0) {
    uVar14 = 0;
    do {
      lVar1 = uVar14 * 8;
      uVar14 = (ulong)((int)uVar14 + 1);
      *(undefined *)(*(long *)(lVar13 + lVar1) + 0x98) = 0;
    } while (uVar14 < (ulong)(lVar12 >> 3));
  }
  IR_Section::markSections();
  lVar12 = *(long *)(this + 0xb8);
  lVar13 = *(long *)(this + 0xc0);
  if (lVar13 != lVar12) {
    uVar14 = 0;
    uVar7 = 0;
    do {
      this_00 = *(IR_Section **)(lVar12 + uVar14 * 8);
      if (this_00[0x98] == (IR_Section)0x0) {
        IR_Section::~IR_Section(this_00);
        operator_delete(this_00);
        lVar12 = *(long *)(this + 0xb8);
        __dest = (void *)(lVar12 + uVar14 * 8);
        __n = *(long *)(this + 0xc0) - (long)(void *)((long)__dest + 8);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 8),__n);
          lVar12 = *(long *)(this + 0xb8);
        }
        lVar13 = (long)__dest + __n;
        uVar7 = uVar7 - 1;
        *(long *)(this + 0xc0) = lVar13;
      }
      else {
        *(uint *)(this_00 + 0x3c) = uVar7;
      }
      uVar7 = uVar7 + 1;
      uVar14 = (ulong)uVar7;
    } while (uVar14 < (ulong)(lVar13 - lVar12 >> 3));
  }
  IR_RegisterSet::IR_RegisterSet((IR_RegisterSet *)&local_b8);
                    /* try { // try from 00c29ad8 to 00c29aff has its CatchHandler @ 00c29b84 */
  IR_Section::renumberRegs
            (**(IR_Section ***)(this + 0xb8),(IR_RegisterSet *)ppuVar2,(IR_RegisterSet *)&local_b8);
  *(uint *)ppuVar2 = (uint)local_b8;
  if (ppuVar2 != &local_b8) {
    std::__ndk1::
    vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>::
    assign<IR_RegisterSet::RegisterInfo*>
              ((vector<IR_RegisterSet::RegisterInfo,std::__ndk1::allocator<IR_RegisterSet::RegisterInfo>>
                *)(this + 0xa0),(RegisterInfo *)local_b0,(RegisterInfo *)local_a8);
  }
  puVar11 = local_b0;
  puVar5 = local_a8;
  if (local_b0 != (undefined4 *)0x0) {
    while (puVar4 = puVar5, puVar4 != puVar11) {
      puVar5 = puVar4 + -10;
      if ((*(byte *)(puVar4 + -8) & 1) != 0) {
        operator_delete(*(void **)(puVar4 + -4));
      }
    }
    local_a8 = puVar11;
    operator_delete(local_b0);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


