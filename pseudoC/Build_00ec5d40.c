// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Build
// Entry Point: 00ec5d40
// Size: 1020 bytes
// Signature: undefined Build(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* aabbtree::AABBTreeImpl::Build() */

void aabbtree::AABBTreeImpl::Build(void)

{
  ulong uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  AABBTreeImpl *in_x0;
  void *pvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  void *pvVar10;
  size_t sVar11;
  ulong __n;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  pvVar10 = *(void **)(in_x0 + 0x30);
  uVar3 = *(uint *)(in_x0 + 0x28);
  uVar8 = (ulong)uVar3;
  if ((ulong)(*(long *)(in_x0 + 0x40) - (long)pvVar10 >> 2) < uVar8) {
    sVar11 = *(long *)(in_x0 + 0x38) - (long)pvVar10;
    pvVar6 = operator_new(uVar8 * 4);
    if (0 < (long)sVar11) {
      memcpy(pvVar6,pvVar10,sVar11);
    }
    *(void **)(in_x0 + 0x30) = pvVar6;
    *(size_t *)(in_x0 + 0x38) = (long)pvVar6 + sVar11;
    *(void **)(in_x0 + 0x40) = (void *)((long)pvVar6 + uVar8 * 4);
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  pvVar10 = *(void **)(in_x0 + 0x60);
  if ((ulong)((*(long *)(in_x0 + 0x70) - (long)pvVar10 >> 4) * -0x5555555555555555) < uVar8) {
    sVar11 = *(long *)(in_x0 + 0x68) - (long)pvVar10;
    pvVar6 = operator_new(uVar8 * 0x30);
    if (0 < (long)sVar11) {
      memcpy(pvVar6,pvVar10,sVar11);
    }
    *(void **)(in_x0 + 0x60) = pvVar6;
    *(size_t *)(in_x0 + 0x68) = (long)pvVar6 + sVar11;
    *(void **)(in_x0 + 0x70) = (void *)((long)pvVar6 + uVar8 * 0x30);
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  local_6c = 0;
  if (uVar3 != 0) {
    do {
      uVar5 = local_6c;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      CalculateFaceBounds(in_x0,&local_6c,1,(XVector3 *)&local_a0,(XVector3 *)&uStack_88);
      puVar2 = *(uint **)(in_x0 + 0x38);
      if (puVar2 == *(uint **)(in_x0 + 0x40)) {
        pvVar10 = *(void **)(in_x0 + 0x30);
        __n = (long)puVar2 - (long)pvVar10;
        lVar7 = (long)__n >> 2;
        uVar1 = lVar7 + 1;
        if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n >> 1)) {
          uVar1 = (long)__n >> 1;
        }
        if (0x7ffffffffffffffb < __n) {
          uVar1 = 0x3fffffffffffffff;
        }
        if (uVar1 == 0) {
          pvVar6 = (void *)0x0;
          puVar2 = (uint *)(lVar7 * 4);
          *puVar2 = uVar5;
        }
        else {
          if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pvVar6 = operator_new(uVar1 << 2);
          puVar2 = (uint *)((long)pvVar6 + lVar7 * 4);
          *puVar2 = uVar5;
        }
        if (0 < (long)__n) {
          memcpy(pvVar6,pvVar10,__n);
        }
        *(void **)(in_x0 + 0x30) = pvVar6;
        *(uint **)(in_x0 + 0x38) = puVar2 + 1;
        *(void **)(in_x0 + 0x40) = (void *)((long)pvVar6 + uVar1 * 4);
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
      }
      else {
        *puVar2 = uVar5;
        *(uint **)(in_x0 + 0x38) = puVar2 + 1;
      }
      puVar9 = *(undefined8 **)(in_x0 + 0x68);
      if (puVar9 == *(undefined8 **)(in_x0 + 0x70)) {
        pvVar10 = *(void **)(in_x0 + 0x60);
        sVar11 = (long)puVar9 - (long)pvVar10;
        lVar7 = (long)sVar11 >> 4;
        uVar1 = lVar7 * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)(lVar7 * 0x5555555555555556)) {
          uVar1 = lVar7 * 0x5555555555555556;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
          uVar1 = 0x555555555555555;
        }
        if (uVar1 == 0) {
          pvVar6 = (void *)0x0;
        }
        else {
          if (0x555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pvVar6 = operator_new(uVar1 * 0x30);
        }
        puVar9 = (undefined8 *)((long)pvVar6 + lVar7 * 0x10);
        puVar9[5] = uStack_78;
        puVar9[4] = local_80;
        puVar9[1] = uStack_98;
        *puVar9 = local_a0;
        puVar9[3] = uStack_88;
        puVar9[2] = local_90;
        if (0 < (long)sVar11) {
          memcpy((void *)((long)puVar9 - sVar11),pvVar10,sVar11);
        }
        *(void **)(in_x0 + 0x60) = (void *)((long)puVar9 - sVar11);
        *(undefined8 **)(in_x0 + 0x68) = puVar9 + 6;
        *(void **)(in_x0 + 0x70) = (void *)((long)pvVar6 + uVar1 * 0x30);
        if (pvVar10 != (void *)0x0) {
          operator_delete(pvVar10);
        }
      }
      else {
        puVar9[1] = uStack_98;
        *puVar9 = local_a0;
        puVar9[3] = uStack_88;
        puVar9[2] = local_90;
        puVar9[5] = uStack_78;
        puVar9[4] = local_80;
        *(undefined8 **)(in_x0 + 0x68) = puVar9 + 6;
      }
      local_6c = uVar5 + 1;
    } while (uVar3 != local_6c);
  }
  pvVar10 = *(void **)(in_x0 + 0x48);
  if ((ulong)(*(long *)(in_x0 + 0x58) - (long)pvVar10 >> 6) < (ulong)(uint)(int)((float)uVar8 * 1.5)
     ) {
    uVar8 = (ulong)(uint)(int)((float)uVar8 * 1.5) * 0x40;
    sVar11 = *(long *)(in_x0 + 0x50) - (long)pvVar10;
    pvVar6 = operator_new(uVar8);
    if (0 < (long)sVar11) {
      memcpy(pvVar6,pvVar10,sVar11);
    }
    *(void **)(in_x0 + 0x48) = pvVar6;
    *(size_t *)(in_x0 + 0x50) = (long)pvVar6 + sVar11;
    *(void **)(in_x0 + 0x58) = (void *)((long)pvVar6 + uVar8);
    if (pvVar10 != (void *)0x0) {
      operator_delete(pvVar10);
    }
  }
  *(undefined4 *)(in_x0 + 8) = 1;
  BuildRecursive(in_x0,0,*(uint **)(in_x0 + 0x30),uVar3);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


