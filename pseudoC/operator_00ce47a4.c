// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<=
// Entry Point: 00ce47a4
// Size: 848 bytes
// Signature: undefined __thiscall operator<<=(PolynomialMod2 * this, uint param_1)


/* CryptoPP::PolynomialMod2::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

PolynomialMod2 * __thiscall CryptoPP::PolynomialMod2::operator<<=(PolynomialMod2 *this,uint param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *__s;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  void *pvVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar17 = *(ulong *)(this + 0x10);
  if (uVar17 == 0) {
    return this;
  }
  pvVar15 = *(void **)(this + 0x18);
  iVar16 = (int)uVar17;
  if (param_1 == 1) {
    if (iVar16 == 0) {
      return this;
    }
    lVar9 = 0;
    uVar8 = 0;
    do {
      lVar12 = lVar9 * 4;
      lVar9 = lVar9 + 1;
      uVar18 = *(uint *)((long)pvVar15 + lVar12);
      uVar4 = uVar8 | uVar18 << 1;
      uVar8 = uVar18 >> 0x1f;
      *(uint *)((long)pvVar15 + lVar12) = uVar4;
    } while (iVar16 != (int)lVar9);
    if (-1 < (int)uVar18) {
      return this;
    }
    uVar1 = uVar17 + 1;
    if (uVar17 == 0xffffffffffffffff) {
      uVar17 = 0xfffffffffffffffe;
      pvVar7 = pvVar15;
    }
    else {
      AllocatorBase<unsigned_int>::CheckSize(uVar1);
      pvVar7 = (void *)UnalignedAllocate(uVar1 * 4);
      uVar10 = uVar17;
      if ((pvVar15 != (void *)0x0) && (pvVar7 != (void *)0x0)) {
        uVar10 = uVar1;
        if (uVar17 <= uVar1) {
          uVar10 = uVar17;
        }
        memcpy(pvVar7,pvVar15,uVar10 << 2);
        uVar10 = uVar17;
      }
      do {
        uVar14 = uVar10 - 1;
        *(undefined4 *)((long)pvVar15 + uVar10 * 4 + -4) = 0;
        uVar10 = uVar14;
      } while (uVar14 != 0);
      UnalignedDeallocate(pvVar15);
      *(ulong *)(this + 0x10) = uVar1;
      *(void **)(this + 0x18) = pvVar7;
    }
    *(undefined4 *)((long)pvVar7 + uVar17 * 4) = 1;
    *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
    return this;
  }
  uVar8 = param_1 >> 5;
  uVar1 = (ulong)uVar8;
  if (((param_1 & 0x1f) == 0) || (iVar16 == 0)) {
LAB_00ce48d0:
    uVar10 = uVar17 + uVar1;
    if (uVar17 < uVar10) {
      AllocatorBase<unsigned_int>::CheckSize(uVar10);
      pvVar7 = (void *)UnalignedAllocate(uVar10 * 4);
      if ((pvVar15 != (void *)0x0) && (pvVar7 != (void *)0x0)) {
        uVar14 = uVar10;
        if (uVar17 <= uVar10) {
          uVar14 = uVar17;
        }
        memcpy(pvVar7,pvVar15,uVar14 << 2);
      }
      do {
        uVar14 = uVar17 - 1;
        *(undefined4 *)((long)pvVar15 + uVar17 * 4 + -4) = 0;
        uVar17 = uVar14;
      } while (uVar14 != 0);
      UnalignedDeallocate(pvVar15);
      *(ulong *)(this + 0x10) = uVar10;
      *(void **)(this + 0x18) = pvVar7;
      *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
    }
    else {
      *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
      uVar10 = uVar17;
    }
  }
  else {
    lVar9 = 0;
    uVar18 = 0;
    do {
      lVar12 = lVar9 * 4;
      lVar9 = lVar9 + 1;
      uVar4 = *(uint *)((long)pvVar15 + lVar12);
      uVar5 = uVar4 << (ulong)(param_1 & 0x1f) | uVar18;
      uVar18 = uVar4 >> (ulong)(0x20 - (param_1 & 0x1f) & 0x1f);
      *(uint *)((long)pvVar15 + lVar12) = uVar5;
    } while (iVar16 != (int)lVar9);
    if (uVar18 == 0) goto LAB_00ce48d0;
    uVar14 = uVar17 + (uVar8 + 1);
    uVar10 = uVar17;
    if (uVar17 < uVar14) {
      AllocatorBase<unsigned_int>::CheckSize(uVar14);
      pvVar7 = (void *)UnalignedAllocate(uVar14 * 4);
      if ((pvVar15 != (void *)0x0) && (pvVar7 != (void *)0x0)) {
        uVar10 = uVar14;
        if (uVar17 <= uVar14) {
          uVar10 = uVar17;
        }
        memcpy(pvVar7,pvVar15,uVar10 << 2);
        uVar10 = uVar17;
      }
      do {
        uVar11 = uVar10 - 1;
        *(undefined4 *)((long)pvVar15 + uVar10 * 4 + -4) = 0;
        uVar10 = uVar11;
      } while (uVar11 != 0);
      UnalignedDeallocate(pvVar15);
      *(ulong *)(this + 0x10) = uVar14;
      *(void **)(this + 0x18) = pvVar7;
      pvVar15 = pvVar7;
      uVar10 = uVar14;
    }
    *(uint *)((long)pvVar15 + uVar17 * 4) = uVar18;
    *(undefined8 *)(this + 8) = 0x3fffffffffffffff;
  }
  if (param_1 < 0x20) {
    return this;
  }
  __s = *(undefined8 **)(this + 0x18);
  iVar16 = (int)uVar10;
  if (iVar16 <= (int)uVar8) {
    uVar8 = iVar16 - 1;
    uVar17 = (ulong)uVar8;
    goto joined_r0x00ce49c8;
  }
  lVar9 = (long)iVar16;
  uVar17 = lVar9 - 1;
  uVar10 = lVar9 - uVar1;
  if (uVar10 < 8) {
LAB_00ce4994:
    uVar10 = uVar17;
    do {
      uVar17 = uVar10 - 1;
      *(undefined4 *)((long)__s + uVar10 * 4) = *(undefined4 *)((long)__s + uVar10 * 4 + uVar1 * -4)
      ;
      bVar6 = (long)uVar1 < (long)uVar10;
      uVar10 = uVar17;
    } while (bVar6);
  }
  else {
    pvVar15 = (void *)((long)__s + uVar17 * 4);
    uVar14 = lVar9 + ~uVar1;
    bVar6 = uVar14 >> 0x3e != 0;
    if ((((pvVar15 < (void *)((long)pvVar15 + uVar14 * -4)) || (bVar6)) ||
        ((undefined8 *)((long)__s + uVar14 * 4) < __s)) ||
       ((bVar6 || ((puVar2 = (undefined8 *)((long)__s + lVar9 * 4),
                   (void *)((long)__s + uVar1 * 4) < (void *)((long)__s + uVar10 * 4) &&
                   (__s < puVar2)))))) goto LAB_00ce4994;
    uVar11 = uVar10 & 0xfffffffffffffff8;
    uVar17 = uVar17 - uVar11;
    uVar14 = uVar11;
    do {
      puVar13 = puVar2 + -4;
      puVar3 = (undefined8 *)((long)puVar13 + uVar1 * -4);
      uVar14 = uVar14 - 8;
      uVar21 = *puVar3;
      uVar20 = puVar3[3];
      uVar19 = puVar3[2];
      puVar2[-3] = puVar3[1];
      *puVar13 = uVar21;
      puVar2[-1] = uVar20;
      puVar2[-2] = uVar19;
      puVar2 = puVar13;
    } while (uVar14 != 0);
    if (uVar10 != uVar11) goto LAB_00ce4994;
  }
  __s = *(undefined8 **)(this + 0x18);
  uVar8 = (uint)uVar17;
joined_r0x00ce49c8:
  if (-1 < (int)uVar8) {
    memset(__s,0,(uVar17 & 0xffffffff) * 4 + 4);
  }
  return this;
}


