// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: triangulate
// Entry Point: 00ec2054
// Size: 708 bytes
// Signature: undefined __thiscall triangulate(CTriangulator * this, uint * param_1, double param_2)


/* FLOAT_MATH::CTriangulator::triangulate(unsigned int&, double) */

long __thiscall
FLOAT_MATH::CTriangulator::triangulate(CTriangulator *this,uint *param_1,double param_2)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  void *__src;
  size_t __n;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = *(long *)(this + 0x40);
  lVar1 = *(long *)(this + 0x48);
  *param_1 = 0;
  *(double *)(this + 8) = param_2;
  if (lVar4 == lVar1) {
    lVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(this + 0x58);
    *(undefined8 **)(this + 0x60) = puVar3;
    dVar13 = *(double *)(this + 0x28) - *(double *)(this + 0x10);
    dVar14 = *(double *)(this + 0x30) - *(double *)(this + 0x18);
    dVar15 = *(double *)(this + 0x38) - *(double *)(this + 0x20);
    if ((dVar14 < dVar13 && dVar13 != dVar15) && (dVar13 <= dVar14 || dVar15 <= dVar13)) {
      lVar8 = 0;
      uVar6 = 2;
      if (dVar15 < dVar14) {
        uVar6 = 1;
      }
      uVar7 = 2;
      if (dVar14 <= dVar15) {
        uVar7 = 1;
      }
      iVar5 = (int)((ulong)(lVar1 - lVar4) >> 3);
    }
    else if ((dVar14 <= dVar13 || dVar14 == dVar15) || dVar13 < dVar14 && dVar14 < dVar15) {
      lVar8 = 2;
      uVar7 = (ulong)(dVar14 < dVar13);
      uVar6 = (ulong)(dVar13 <= dVar14);
      iVar5 = (int)((ulong)(lVar1 - lVar4) >> 3);
    }
    else {
      lVar8 = 1;
      uVar6 = (ulong)(dVar13 <= dVar15) << 1;
      uVar7 = (ulong)(dVar15 < dVar13) << 1;
      iVar5 = (int)((ulong)(lVar1 - lVar4) >> 3);
    }
    if (iVar5 * -0x55555555 != 0) {
      iVar5 = iVar5 * -0x55555555 + -1;
      puVar9 = (undefined8 *)(lVar4 + lVar8 * 8);
      puVar10 = (undefined8 *)(lVar4 + uVar6 * 8);
      puVar12 = (undefined8 *)(lVar4 + uVar7 * 8);
      uVar16 = *puVar9;
      uVar18 = *puVar10;
      uVar17 = *puVar12;
      if (puVar3 == *(undefined8 **)(this + 0x68)) goto LAB_00ec21b0;
      do {
        *puVar3 = uVar16;
        puVar3[1] = uVar18;
        puVar3[2] = uVar17;
        *(undefined8 **)(this + 0x60) = puVar3 + 3;
        while( true ) {
          if (iVar5 == 0) goto LAB_00ec2298;
          puVar3 = *(undefined8 **)(this + 0x60);
          iVar5 = iVar5 + -1;
          puVar9 = puVar9 + 3;
          uVar16 = *puVar9;
          puVar10 = puVar10 + 3;
          uVar18 = *puVar10;
          puVar12 = puVar12 + 3;
          uVar17 = *puVar12;
          if (puVar3 != *(undefined8 **)(this + 0x68)) break;
LAB_00ec21b0:
          __src = *(void **)(this + 0x58);
          __n = (long)puVar3 - (long)__src;
          lVar4 = (long)__n >> 3;
          uVar6 = lVar4 * -0x5555555555555555 + 1;
          if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          if (uVar6 <= (ulong)(lVar4 * 0x5555555555555556)) {
            uVar6 = lVar4 * 0x5555555555555556;
          }
          if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
            uVar6 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar6) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          pvVar2 = operator_new(uVar6 * 0x18);
          puVar3 = (undefined8 *)((long)pvVar2 + lVar4 * 8);
          *puVar3 = uVar16;
          puVar3[1] = uVar18;
          puVar3[2] = uVar17;
          if (0 < (long)__n) {
            memcpy((void *)((long)puVar3 - __n),__src,__n);
          }
          *(void **)(this + 0x68) = (void *)((long)pvVar2 + uVar6 * 0x18);
          *(void **)(this + 0x58) = (void *)((long)puVar3 - __n);
          *(undefined8 **)(this + 0x60) = puVar3 + 3;
          if (__src != (void *)0x0) {
            operator_delete(__src);
          }
        }
      } while( true );
    }
LAB_00ec2298:
    plVar11 = (long *)(this + 0x70);
    *(long *)(this + 0x78) = *plVar11;
    _process(this,(vector *)plVar11);
    uVar6 = *(long *)(this + 0x78) - *plVar11;
    lVar4 = 0;
    if (2 < (uint)(uVar6 >> 2)) {
      lVar4 = *plVar11;
    }
    *param_1 = (uint)((uVar6 >> 2 & 0xffffffff) / 3);
  }
  return lVar4;
}


