// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00877bbc
// Size: 784 bytes
// Signature: undefined __thiscall __append(vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>> * this, ulong param_1)


/* std::__ndk1::vector<AnimalSteering, std::__ndk1::allocator<AnimalSteering> >::__append(unsigned
   long) */

void __thiscall
std::__ndk1::vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>>::__append
          (vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>> *this,ulong param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  AnimalSteering *pAVar11;
  AnimalSteering *pAVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  AnimalSteering *local_78;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  pAVar11 = *(AnimalSteering **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)pAVar11 >> 5) * 0x6db6db6db6db6db7) < param_1) {
    lVar8 = (long)pAVar11 - *(long *)this >> 5;
    uVar1 = lVar8 * 0x6db6db6db6db6db7 + param_1;
    if (0x124924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = *(long *)(this + 0x10) - *(long *)this >> 5;
    uVar10 = lVar5 * -0x2492492492492492;
    if (uVar1 <= uVar10) {
      uVar1 = uVar10;
    }
    if (0x92492492492491 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
      uVar1 = 0x124924924924924;
    }
    if (uVar1 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x124924924924924 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar1 * 0xe0);
    }
    local_78 = (AnimalSteering *)((long)pvVar3 + lVar8 * 0x20);
    lVar8 = param_1 * 0xe0;
    pAVar12 = local_78 + lVar8;
    pAVar11 = local_78;
    do {
                    /* try { // try from 00877cfc to 00877d03 has its CatchHandler @ 00877ed4 */
      AnimalSteering::AnimalSteering(pAVar11);
      pAVar11 = pAVar11 + 0xe0;
      lVar8 = lVar8 + -0xe0;
    } while (lVar8 != 0);
    puVar6 = *(undefined8 **)this;
    puVar7 = puVar6;
    if (*(undefined8 **)(this + 8) != puVar6) {
      puVar7 = *(undefined8 **)(this + 8) + -0xc;
      do {
        uVar15 = puVar7[-0xc];
        uVar14 = puVar7[-9];
        uVar13 = puVar7[-10];
        uVar19 = puVar7[-0xf];
        uVar18 = puVar7[-0x10];
        uVar17 = puVar7[-0xd];
        uVar16 = puVar7[-0xe];
        *(undefined8 *)(local_78 + -0xb8) = puVar7[-0xb];
        *(undefined8 *)(local_78 + -0xc0) = uVar15;
        *(undefined8 *)(local_78 + -0xa8) = uVar14;
        *(undefined8 *)(local_78 + -0xb0) = uVar13;
        *(undefined8 *)(local_78 + -0xd8) = uVar19;
        *(undefined8 *)(local_78 + -0xe0) = uVar18;
        *(undefined8 *)(local_78 + -200) = uVar17;
        *(undefined8 *)(local_78 + -0xd0) = uVar16;
        uVar18 = puVar7[-5];
        uVar17 = puVar7[-6];
        uVar16 = puVar7[-3];
        uVar15 = puVar7[-4];
        uVar14 = *(undefined8 *)((long)puVar7 + -0xe);
        uVar13 = *(undefined8 *)((long)puVar7 + -0x16);
        uVar20 = puVar7[-7];
        uVar19 = puVar7[-8];
        *(undefined8 *)(local_78 + -0x58) = 0;
        *(undefined8 *)(local_78 + -0x50) = 0;
        *(undefined8 *)(local_78 + -0x60) = 0;
        *(undefined8 *)(local_78 + -0x6e) = uVar14;
        *(undefined8 *)(local_78 + -0x76) = uVar13;
        *(undefined8 *)(local_78 + -0x88) = uVar18;
        *(undefined8 *)(local_78 + -0x90) = uVar17;
        *(undefined8 *)(local_78 + -0x78) = uVar16;
        *(undefined8 *)(local_78 + -0x80) = uVar15;
        *(undefined8 *)(local_78 + -0x98) = uVar20;
        *(undefined8 *)(local_78 + -0xa0) = uVar19;
        *(undefined8 *)(local_78 + -0x60) = *puVar7;
        *(undefined8 *)(local_78 + -0x58) = puVar7[1];
        *(undefined8 *)(local_78 + -0x50) = puVar7[2];
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        *(undefined8 *)(local_78 + -0x48) = 0;
        *(undefined8 *)(local_78 + -0x40) = 0;
        *(undefined8 *)(local_78 + -0x38) = 0;
        *(undefined8 *)(local_78 + -0x48) = puVar7[3];
        *(undefined8 *)(local_78 + -0x40) = puVar7[4];
        *(undefined8 *)(local_78 + -0x38) = puVar7[5];
        uVar13 = puVar7[6];
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        *(undefined8 *)(local_78 + -0x28) = puVar7[7];
        *(undefined8 *)(local_78 + -0x30) = uVar13;
        *(undefined8 *)(local_78 + -0x20) = puVar7[8];
        lVar8 = puVar7[9];
        *(long *)(local_78 + -0x18) = lVar8;
        lVar5 = puVar7[10];
        *(long *)(local_78 + -0x10) = lVar5;
        if (lVar5 == 0) {
          *(AnimalSteering **)(local_78 + -0x20) = local_78 + -0x18;
        }
        else {
          *(AnimalSteering **)(lVar8 + 0x10) = local_78 + -0x18;
          puVar7[9] = 0;
          puVar7[8] = puVar7 + 9;
          puVar7[10] = 0;
        }
        *(undefined8 *)(local_78 + -8) = puVar7[0xb];
        local_78 = local_78 + -0xe0;
        puVar9 = puVar7 + -0x10;
        puVar7 = puVar7 + -0x1c;
      } while (puVar9 != puVar6);
      puVar6 = *(undefined8 **)(this + 8);
      puVar7 = *(undefined8 **)this;
    }
    *(AnimalSteering **)this = local_78;
    *(AnimalSteering **)(this + 8) = pAVar12;
    *(void **)(this + 0x10) = (void *)((long)pvVar3 + uVar1 * 0xe0);
    if (puVar6 != puVar7) {
      puVar6 = puVar6 + -4;
      do {
        __tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
        ::destroy((__tree<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::__map_value_compare<unsigned_int,std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>,std::__ndk1::less<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_int,SteeringTargetProvider*>>>
                   *)puVar6,(__tree_node *)puVar6[1]);
        pvVar3 = (void *)puVar6[-5];
        if (pvVar3 != (void *)0x0) {
          puVar6[-4] = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar3 = (void *)puVar6[-8];
        if (pvVar3 != (void *)0x0) {
          puVar6[-7] = pvVar3;
          operator_delete(pvVar3);
        }
        puVar9 = puVar6 + -0x18;
        puVar6 = puVar6 + -0x1c;
      } while (puVar9 != puVar7);
    }
    if (puVar7 != (undefined8 *)0x0) {
      operator_delete(puVar7);
    }
  }
  else {
    pAVar12 = pAVar11;
    if (param_1 != 0) {
      pAVar12 = pAVar11 + param_1 * 0xe0;
      lVar8 = param_1 * 0xe0;
      do {
                    /* try { // try from 00877cb8 to 00877cbf has its CatchHandler @ 00877ecc */
        AnimalSteering::AnimalSteering(pAVar11);
        pAVar11 = pAVar11 + 0xe0;
        lVar8 = lVar8 + -0xe0;
      } while (lVar8 != 0);
    }
    *(AnimalSteering **)(this + 8) = pAVar12;
  }
  if (*(long *)(lVar2 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


