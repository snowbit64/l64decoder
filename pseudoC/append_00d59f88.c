// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00d59f88
// Size: 608 bytes
// Signature: undefined __thiscall __append(vector<HACD::MDVertex,std::__ndk1::allocator<HACD::MDVertex>> * this, ulong param_1)


/* std::__ndk1::vector<HACD::MDVertex, std::__ndk1::allocator<HACD::MDVertex> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<HACD::MDVertex,std::__ndk1::allocator<HACD::MDVertex>>::__append
          (vector<HACD::MDVertex,std::__ndk1::allocator<HACD::MDVertex>> *this,ulong param_1)

{
  ulong uVar1;
  MDVertex *pMVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *puVar5;
  void **ppvVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  MDVertex *pMVar10;
  undefined8 *puVar11;
  
  puVar5 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar5 >> 3) * 0x7d6343eb1a1f58d1) < param_1) {
    lVar4 = (long)puVar5 - *(long *)this >> 3;
    uVar1 = lVar4 * 0x7d6343eb1a1f58d1 + param_1;
    if (0xa72f05397829cb < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar8 = lVar7 * -0x5397829cbc14e5e;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x5397829cbc14e4 < (ulong)(lVar7 * 0x7d6343eb1a1f58d1)) {
      uVar1 = 0xa72f05397829cb;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0xa72f05397829cb < uVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar3 = operator_new(uVar1 * 0x188);
    }
    puVar9 = (undefined8 *)((long)pvVar3 + lVar4 * 8);
    puVar11 = puVar9 + param_1 * 0x31;
    puVar5 = puVar9;
    do {
      puVar5[0x30] = 0;
      puVar5[0x2d] = 0;
      puVar5[0x2c] = 0;
      puVar5[0x2f] = 0;
      puVar5[0x2e] = 0;
      puVar5[0x29] = 0;
      puVar5[0x28] = 0;
      puVar5[0x2b] = 0;
      puVar5[0x2a] = 0;
      puVar5[0x25] = 0;
      puVar5[0x24] = 0;
      puVar5[0x27] = 0;
      puVar5[0x26] = 0;
      puVar5[0x21] = 0;
      puVar5[0x20] = 0;
      puVar5[0x23] = 0;
      puVar5[0x22] = 0;
      puVar5[0x1d] = 0;
      puVar5[0x1c] = 0;
      puVar5[0x1f] = 0;
      puVar5[0x1e] = 0;
      puVar5[0x19] = 0;
      puVar5[0x18] = 0;
      puVar5[0x1b] = 0;
      puVar5[0x1a] = 0;
      puVar5[0x15] = 0;
      puVar5[0x14] = 0;
      puVar5[0x17] = 0;
      puVar5[0x16] = 0;
      puVar5[0x11] = 0;
      puVar5[0x10] = 0;
      puVar5[0x13] = 0;
      puVar5[0x12] = 0;
      puVar5[0xd] = 0;
      puVar5[0xc] = 0;
      puVar5[0xf] = 0;
      puVar5[0xe] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[7] = 0;
      puVar5[6] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[0x12] = 0x10;
      puVar5[0x23] = 0;
      puVar5[0x24] = 0;
      puVar5[0x25] = 0x10;
      puVar5 = puVar5 + 0x31;
    } while (puVar5 != puVar11);
    pMVar2 = *(MDVertex **)this;
    pMVar10 = *(MDVertex **)(this + 8);
    pvVar3 = (void *)((long)pvVar3 + uVar1 * 0x188);
    if (pMVar10 == pMVar2) {
      *(undefined8 **)this = puVar9;
      *(undefined8 **)(this + 8) = puVar11;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      do {
        puVar9 = puVar9 + -0x31;
        pMVar10 = pMVar10 + -0x188;
        HACD::MDVertex::MDVertex((MDVertex *)puVar9,pMVar10);
      } while (pMVar10 != pMVar2);
      pMVar2 = *(MDVertex **)this;
      pMVar10 = *(MDVertex **)(this + 8);
      *(undefined8 **)this = puVar9;
      *(undefined8 **)(this + 8) = puVar11;
      *(void **)(this + 0x10) = pvVar3;
      while (pMVar10 != pMVar2) {
        if (*(void **)(pMVar10 + -0x70) != (void *)0x0) {
          operator_delete__(*(void **)(pMVar10 + -0x70));
        }
        ppvVar6 = (void **)(pMVar10 + -0x108);
        pMVar10 = pMVar10 + -0x188;
        if (*ppvVar6 != (void *)0x0) {
          operator_delete__(*ppvVar6);
        }
      }
    }
    if (pMVar2 != (MDVertex *)0x0) {
      operator_delete(pMVar2);
      return;
    }
  }
  else {
    puVar9 = puVar5;
    if (param_1 != 0) {
      puVar9 = puVar5 + param_1 * 0x31;
      do {
        puVar5[0x30] = 0;
        puVar5[0x2d] = 0;
        puVar5[0x2c] = 0;
        puVar5[0x2f] = 0;
        puVar5[0x2e] = 0;
        puVar5[0x29] = 0;
        puVar5[0x28] = 0;
        puVar5[0x2b] = 0;
        puVar5[0x2a] = 0;
        puVar5[0x25] = 0;
        puVar5[0x24] = 0;
        puVar5[0x27] = 0;
        puVar5[0x26] = 0;
        puVar5[0x21] = 0;
        puVar5[0x20] = 0;
        puVar5[0x23] = 0;
        puVar5[0x22] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x19] = 0;
        puVar5[0x18] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1a] = 0;
        puVar5[0x15] = 0;
        puVar5[0x14] = 0;
        puVar5[0x17] = 0;
        puVar5[0x16] = 0;
        puVar5[0x11] = 0;
        puVar5[0x10] = 0;
        puVar5[0x13] = 0;
        puVar5[0x12] = 0;
        puVar5[0xd] = 0;
        puVar5[0xc] = 0;
        puVar5[0xf] = 0;
        puVar5[0xe] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[0xb] = 0;
        puVar5[10] = 0;
        puVar5[5] = 0;
        puVar5[4] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[0x12] = 0x10;
        puVar5[0x23] = 0;
        puVar5[0x24] = 0;
        puVar5[0x25] = 0x10;
        puVar5 = puVar5 + 0x31;
      } while (puVar5 != puVar9);
    }
    *(undefined8 **)(this + 8) = puVar9;
  }
  return;
}


