// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00877858
// Size: 696 bytes
// Signature: undefined __thiscall __append(vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>> * this, ulong param_1)


/* std::__ndk1::vector<ObstacleAvoidance, std::__ndk1::allocator<ObstacleAvoidance>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>>::__append
          (vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>> *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ObstacleAvoidance *pOVar11;
  undefined8 *puVar12;
  ObstacleAvoidance *pOVar13;
  undefined8 uVar14;
  ObstacleAvoidance *local_78;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  pOVar11 = *(ObstacleAvoidance **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pOVar11 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_1) {
    lVar9 = (long)pOVar11 - *(long *)this >> 3;
    uVar1 = lVar9 * 0x2e8ba2e8ba2e8ba3 + param_1;
    if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(this + 0x10) - *(long *)this >> 3;
    uVar10 = lVar6 * 0x5d1745d1745d1746;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x1745d1745d1745c < (ulong)(lVar6 * 0x2e8ba2e8ba2e8ba3)) {
      uVar1 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar1 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar1 * 0x58);
    }
    local_78 = (ObstacleAvoidance *)((long)pvVar4 + lVar9 * 8);
    lVar9 = param_1 * 0x58;
    pOVar13 = local_78 + lVar9;
    pOVar11 = local_78;
    do {
                    /* try { // try from 00877998 to 0087799f has its CatchHandler @ 00877b18 */
      ObstacleAvoidance::ObstacleAvoidance(pOVar11);
      pOVar11 = pOVar11 + 0x58;
      lVar9 = lVar9 + -0x58;
    } while (lVar9 != 0);
    puVar12 = *(undefined8 **)this;
    puVar7 = puVar12;
    if (*(undefined8 **)(this + 8) != puVar12) {
      puVar7 = *(undefined8 **)(this + 8) + -5;
      do {
        *(undefined8 *)(local_78 + -0x58) = 0;
        *(undefined8 *)(local_78 + -0x50) = 0;
        *(undefined8 *)(local_78 + -0x48) = 0;
        puVar8 = puVar7 + -6;
        *(undefined8 *)(local_78 + -0x58) = *puVar8;
        *(undefined8 *)(local_78 + -0x50) = puVar7[-5];
        *(undefined8 *)(local_78 + -0x48) = puVar7[-4];
        *puVar8 = 0;
        puVar7[-5] = 0;
        puVar7[-4] = 0;
        *(undefined8 *)(local_78 + -0x40) = 0;
        *(undefined8 *)(local_78 + -0x38) = 0;
        *(undefined8 *)(local_78 + -0x30) = 0;
        *(undefined8 *)(local_78 + -0x40) = puVar7[-3];
        *(undefined8 *)(local_78 + -0x38) = puVar7[-2];
        *(undefined8 *)(local_78 + -0x30) = puVar7[-1];
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *(undefined8 *)(local_78 + -0x28) = 0;
        *(undefined8 *)(local_78 + -0x20) = 0;
        *(undefined8 *)(local_78 + -0x18) = 0;
        *(undefined8 *)(local_78 + -0x28) = *puVar7;
        *(undefined8 *)(local_78 + -0x20) = puVar7[1];
        *(undefined8 *)(local_78 + -0x18) = puVar7[2];
        puVar3 = puVar7 + 4;
        uVar14 = puVar7[3];
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7 = puVar7 + -0xb;
        *(undefined8 *)(local_78 + -8) = *puVar3;
        *(undefined8 *)(local_78 + -0x10) = uVar14;
        local_78 = local_78 + -0x58;
      } while (puVar8 != puVar12);
      puVar12 = *(undefined8 **)this;
      puVar7 = *(undefined8 **)(this + 8);
    }
    *(ObstacleAvoidance **)this = local_78;
    *(ObstacleAvoidance **)(this + 8) = pOVar13;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x58);
    while (puVar3 = puVar7, puVar3 != puVar12) {
      pvVar4 = (void *)puVar3[-5];
      if (pvVar4 != (void *)0x0) {
        puVar3[-4] = pvVar4;
        operator_delete(pvVar4);
      }
      pvVar4 = (void *)puVar3[-8];
      if (pvVar4 != (void *)0x0) {
        puVar3[-7] = pvVar4;
        operator_delete(pvVar4);
      }
      pvVar4 = (void *)puVar3[-0xb];
      puVar7 = puVar3 + -0xb;
      if (pvVar4 != (void *)0x0) {
        puVar3[-10] = pvVar4;
        operator_delete(pvVar4);
      }
    }
    if (puVar12 != (undefined8 *)0x0) {
      operator_delete(puVar12);
    }
  }
  else {
    pOVar13 = pOVar11;
    if (param_1 != 0) {
      pOVar13 = pOVar11 + param_1 * 0x58;
      lVar9 = param_1 * 0x58;
      do {
                    /* try { // try from 00877954 to 0087795b has its CatchHandler @ 00877b10 */
        ObstacleAvoidance::ObstacleAvoidance(pOVar11);
        pOVar11 = pOVar11 + 0x58;
        lVar9 = lVar9 + -0x58;
      } while (lVar9 != 0);
    }
    *(ObstacleAvoidance **)(this + 8) = pOVar13;
  }
  if (*(long *)(lVar2 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


