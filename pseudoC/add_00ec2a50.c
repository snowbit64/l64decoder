// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: add
// Entry Point: 00ec2a50
// Size: 1088 bytes
// Signature: undefined __thiscall add(KdTree * this, float param_1, float param_2, float param_3)


/* FLOAT_MATH::VERTEX_INDEX::KdTree::add(float, float, float) */

undefined4 __thiscall
FLOAT_MATH::VERTEX_INDEX::KdTree::add(KdTree *this,float param_1,float param_2,float param_3)

{
  void **ppvVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *__dest;
  undefined8 *puVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int iVar17;
  float *pfVar18;
  
  pfVar8 = *(float **)(this + 0x48);
  pfVar7 = *(float **)(this + 0x50);
  ppvVar1 = (void **)(this + 0x40);
  uVar3 = *(undefined4 *)(this + 0x20);
  if (pfVar8 == pfVar7) {
    pvVar13 = *ppvVar1;
    uVar15 = (long)pfVar8 - (long)pvVar13;
    lVar9 = (long)uVar15 >> 2;
    uVar2 = lVar9 + 1;
    if (uVar2 >> 0x3e != 0) goto LAB_00ec2e7c;
    if (uVar2 <= (ulong)((long)uVar15 >> 1)) {
      uVar2 = (long)uVar15 >> 1;
    }
    if (0x7ffffffffffffffb < uVar15) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
      pfVar18 = (float *)(lVar9 * 4);
      pfVar7 = (float *)0x0;
      *pfVar18 = param_1;
    }
    else {
      if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar2 << 2);
      pfVar18 = (float *)((long)pvVar5 + lVar9 * 4);
      pfVar7 = (float *)((long)pvVar5 + uVar2 * 4);
      *pfVar18 = param_1;
    }
    pfVar18 = pfVar18 + 1;
    if (0 < (long)uVar15) {
      memcpy(pvVar5,pvVar13,uVar15);
    }
    *(void **)(this + 0x40) = pvVar5;
    *(float **)(this + 0x48) = pfVar18;
    *(float **)(this + 0x50) = pfVar7;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
      pfVar18 = *(float **)(this + 0x48);
      pfVar7 = *(float **)(this + 0x50);
    }
  }
  else {
    pfVar18 = pfVar8 + 1;
    *pfVar8 = param_1;
    *(float **)(this + 0x48) = pfVar18;
  }
  if (pfVar18 == pfVar7) {
    pvVar13 = *ppvVar1;
    uVar15 = (long)pfVar7 - (long)pvVar13;
    lVar9 = (long)uVar15 >> 2;
    uVar2 = lVar9 + 1;
    if (uVar2 >> 0x3e != 0) goto LAB_00ec2e7c;
    if (uVar2 <= (ulong)((long)uVar15 >> 1)) {
      uVar2 = (long)uVar15 >> 1;
    }
    if (0x7ffffffffffffffb < uVar15) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
      pfVar8 = (float *)(lVar9 * 4);
      pfVar7 = (float *)0x0;
      *pfVar8 = param_2;
    }
    else {
      if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar5 = operator_new(uVar2 << 2);
      pfVar8 = (float *)((long)pvVar5 + lVar9 * 4);
      pfVar7 = (float *)((long)pvVar5 + uVar2 * 4);
      *pfVar8 = param_2;
    }
    pfVar8 = pfVar8 + 1;
    if (0 < (long)uVar15) {
      memcpy(pvVar5,pvVar13,uVar15);
    }
    *(void **)(this + 0x40) = pvVar5;
    *(float **)(this + 0x48) = pfVar8;
    *(float **)(this + 0x50) = pfVar7;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
      pfVar8 = *(float **)(this + 0x48);
      pfVar7 = *(float **)(this + 0x50);
    }
  }
  else {
    pfVar8 = pfVar18 + 1;
    *pfVar18 = param_2;
    *(float **)(this + 0x48) = pfVar8;
  }
  if (pfVar8 == pfVar7) {
    pvVar13 = *ppvVar1;
    uVar15 = (long)pfVar7 - (long)pvVar13;
    lVar9 = (long)uVar15 >> 2;
    uVar2 = lVar9 + 1;
    if (uVar2 >> 0x3e != 0) {
LAB_00ec2e7c:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar15 >> 1)) {
      uVar2 = (long)uVar15 >> 1;
    }
    if (0x7ffffffffffffffb < uVar15) {
      uVar2 = 0x3fffffffffffffff;
    }
    if (uVar2 == 0) {
      __dest = (void *)0x0;
      pfVar7 = (float *)(lVar9 * 4);
      pvVar5 = (void *)0x0;
      *pfVar7 = param_3;
    }
    else {
      if (uVar2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      __dest = operator_new(uVar2 << 2);
      pfVar7 = (float *)((long)__dest + lVar9 * 4);
      pvVar5 = (void *)((long)__dest + uVar2 * 4);
      *pfVar7 = param_3;
    }
    if (0 < (long)uVar15) {
      memcpy(__dest,pvVar13,uVar15);
    }
    *(void **)(this + 0x40) = __dest;
    *(float **)(this + 0x48) = pfVar7 + 1;
    *(void **)(this + 0x50) = pvVar5;
    if (pvVar13 != (void *)0x0) {
      operator_delete(pvVar13);
    }
  }
  else {
    *pfVar8 = param_3;
    *(float **)(this + 0x48) = pfVar8 + 1;
  }
  puVar12 = *(undefined8 **)(this + 0x18);
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
  if (puVar12 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)operator_new(0x6010);
    lVar9 = 0x10;
    do {
      puVar16 = (undefined4 *)((long)puVar6 + lVar9);
      lVar9 = lVar9 + 0x18;
      *puVar16 = 0;
      *(undefined8 *)(puVar16 + 2) = 0;
      *(undefined8 *)(puVar16 + 4) = 0;
    } while ((undefined8 *)(puVar16 + 6) != puVar6 + 0xc02);
    *puVar6 = 0;
LAB_00ec2cf4:
    uVar11 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
    *(undefined8 **)(this + 0x18) = puVar6;
  }
  else {
    uVar11 = *(uint *)(puVar12 + 1);
    puVar6 = puVar12;
    if (uVar11 == 0x400) {
      puVar6 = (undefined8 *)operator_new(0x6010);
      lVar9 = 0x10;
      do {
        puVar16 = (undefined4 *)((long)puVar6 + lVar9);
        lVar9 = lVar9 + 0x18;
        *puVar16 = 0;
        *(undefined8 *)(puVar16 + 2) = 0;
        *(undefined8 *)(puVar16 + 4) = 0;
      } while ((undefined8 *)(puVar16 + 6) != puVar6 + 0xc02);
      *puVar6 = 0;
      *puVar12 = puVar6;
      goto LAB_00ec2cf4;
    }
  }
  puVar14 = puVar6 + (ulong)uVar11 * 3 + 2;
  *(undefined4 *)puVar14 = uVar3;
  puVar6[(ulong)uVar11 * 3 + 3] = 0;
  puVar6[(ulong)uVar11 * 3 + 4] = 0;
  puVar12 = (undefined8 *)(this + 0x10);
  puVar16 = (undefined4 *)*puVar12;
  *(uint *)(puVar6 + 1) = uVar11 + 1;
  if (puVar16 != (undefined4 *)0x0) {
    iVar17 = 0;
    uVar4 = uVar3;
    do {
      pfVar7 = (float *)(**(code **)(*(long *)this + 8))(this,uVar4);
      pfVar8 = (float *)(**(code **)(*(long *)this + 8))(this,*puVar16);
      if (iVar17 == 2) {
        if (pfVar7[2] <= pfVar8[2]) {
          puVar10 = *(undefined4 **)(puVar16 + 2);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec2dfc;
        }
        else {
          puVar10 = *(undefined4 **)(puVar16 + 4);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec2df4;
        }
        iVar17 = 0;
      }
      else if (iVar17 == 1) {
        if (pfVar7[1] <= pfVar8[1]) {
          puVar10 = *(undefined4 **)(puVar16 + 2);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec2dfc;
        }
        else {
          puVar10 = *(undefined4 **)(puVar16 + 4);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec2df4;
        }
        iVar17 = 2;
      }
      else {
        if (iVar17 != 0) {
          return uVar3;
        }
        if (*pfVar7 <= *pfVar8) {
          puVar10 = *(undefined4 **)(puVar16 + 2);
          if (puVar10 == (undefined4 *)0x0) {
LAB_00ec2dfc:
            puVar12 = (undefined8 *)(puVar16 + 2);
            break;
          }
        }
        else {
          puVar10 = *(undefined4 **)(puVar16 + 4);
          if (puVar10 == (undefined4 *)0x0) goto LAB_00ec2df4;
        }
        iVar17 = 1;
      }
      uVar4 = *(undefined4 *)puVar14;
      puVar16 = puVar10;
    } while( true );
  }
LAB_00ec2e00:
  *puVar12 = puVar14;
  return uVar3;
LAB_00ec2df4:
  puVar12 = (undefined8 *)(puVar16 + 4);
  goto LAB_00ec2e00;
}


