// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeIndexedTriangleSetData
// Entry Point: 00942900
// Size: 1240 bytes
// Signature: undefined __cdecl deserializeIndexedTriangleSetData(uchar * param_1, IndexedTriangleSet * param_2, char * param_3, uint param_4)


/* SerializationHelper::deserializeIndexedTriangleSetData(unsigned char*, IndexedTriangleSet*, char
   const*, unsigned int) */

undefined8 *
SerializationHelper::deserializeIndexedTriangleSetData
          (uchar *param_1,IndexedTriangleSet *param_2,char *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint local_8c;
  long local_88;
  
  lVar3 = tpidr_el0;
  puVar13 = (undefined8 *)(param_1 + 0x10);
  local_88 = *(long *)(lVar3 + 0x28);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)param_1;
  uVar4 = *(uint *)(param_1 + 4);
  *(uint *)(param_2 + 0x78) = uVar4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_2 + 0x8c) = uVar1 >> 0x10;
  *(uint *)(param_2 + 0xc) = uVar1 & 0xffff;
  pvVar5 = operator_new__((ulong)uVar4 * 8);
  *(void **)(param_2 + 0x80) = pvVar5;
  if (uVar4 != 0) {
    lVar17 = 0;
    puVar12 = puVar13;
    do {
      puVar13 = puVar12 + 2;
      uVar23 = puVar12[1];
      uVar22 = *puVar12;
      if (param_4 < 6) {
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
LAB_0094299c:
        uVar21 = 0;
      }
      else {
        if ((uVar1 >> 1 & 1) == 0) {
          uVar18 = 0;
          if ((uVar1 >> 2 & 1) != 0) goto LAB_009429ec;
LAB_00942a0c:
          uVar19 = 0;
          if ((uVar1 >> 3 & 1) == 0) goto LAB_00942a14;
LAB_009429f4:
          puVar12 = (undefined8 *)((long)puVar13 + 4);
          uVar20 = *(undefined4 *)puVar13;
        }
        else {
          uVar18 = *(undefined4 *)(puVar12 + 2);
          puVar13 = (undefined8 *)((long)puVar12 + 0x14);
          if ((uVar1 >> 2 & 1) == 0) goto LAB_00942a0c;
LAB_009429ec:
          puVar12 = (undefined8 *)((long)puVar13 + 4);
          uVar19 = *(undefined4 *)puVar13;
          puVar13 = puVar12;
          if ((uVar1 >> 3 & 1) != 0) goto LAB_009429f4;
LAB_00942a14:
          uVar20 = 0;
          puVar12 = puVar13;
        }
        puVar13 = puVar12;
        if ((uVar1 >> 4 & 1) == 0) goto LAB_0094299c;
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar21 = *(undefined4 *)puVar12;
      }
      puVar12 = (undefined8 *)operator_new(0x20);
      lVar10 = *(long *)(param_2 + 0x80);
      *(undefined4 *)(puVar12 + 2) = uVar18;
      *(undefined4 *)((long)puVar12 + 0x14) = uVar19;
      *(undefined4 *)(puVar12 + 3) = uVar20;
      *(undefined4 *)((long)puVar12 + 0x1c) = uVar21;
      *(undefined8 **)(lVar10 + lVar17) = puVar12;
      lVar17 = lVar17 + 8;
      puVar12[1] = uVar23;
      *puVar12 = uVar22;
      puVar12 = puVar13;
    } while ((ulong)uVar4 * 8 - lVar17 != 0);
  }
  uVar6 = IndexedTriangleSet::is16Bit();
  uVar4 = *(uint *)(param_2 + 0x68);
  uVar14 = (ulong)uVar4;
  if ((uVar6 & 1) == 0) {
    puVar8 = (undefined4 *)operator_new__(uVar14 << 2);
    *(undefined4 **)(param_2 + 0x70) = puVar8;
    puVar12 = puVar13;
    if (uVar4 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar14 = uVar14 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar14 != 0);
    }
  }
  else {
    puVar7 = (undefined2 *)operator_new__(uVar14 * 2 + 6 & 0x3fffffffc);
    *(undefined2 **)(param_2 + 0x70) = puVar7;
    puVar12 = puVar13;
    if (uVar4 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 2);
        uVar14 = uVar14 - 1;
        *puVar7 = *(undefined2 *)puVar12;
        puVar7 = puVar7 + 1;
        puVar12 = puVar13;
      } while (uVar14 != 0);
    }
    puVar13 = (undefined8 *)((long)puVar13 + ((ulong)(uVar4 << 1) & 2));
  }
  uVar4 = *(uint *)(param_2 + 8);
  uVar15 = (ulong)uVar4;
  uVar1 = uVar4 * 3;
  uVar6 = (ulong)uVar1;
  puVar8 = (undefined4 *)operator_new__(uVar6 << 2);
  *(undefined4 **)(param_2 + 0x10) = puVar8;
  uVar14 = uVar6;
  puVar12 = puVar13;
  if (uVar1 != 0) {
    do {
      puVar13 = (undefined8 *)((long)puVar12 + 4);
      uVar14 = uVar14 - 1;
      *puVar8 = *(undefined4 *)puVar12;
      puVar8 = puVar8 + 1;
      puVar12 = puVar13;
    } while (uVar14 != 0);
  }
  uVar16 = *(uint *)(param_2 + 0xc);
  if ((uVar16 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar6 << 2);
    *(undefined4 **)(param_2 + 0x38) = puVar8;
    puVar12 = puVar13;
    if (uVar1 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar6 = uVar6 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar6 != 0);
    }
  }
  uVar1 = uVar4 << 2;
  uVar14 = (ulong)uVar1;
  if ((uVar16 >> 7 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar14 << 2);
    *(undefined4 **)(param_2 + 0x40) = puVar8;
    if ((4 < param_4) && (uVar6 = uVar14, puVar12 = puVar13, uVar1 != 0)) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar6 = uVar6 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar6 != 0);
    }
  }
  uVar2 = uVar4 << 1;
  uVar6 = (ulong)uVar2;
  if ((uVar16 >> 1 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar6 << 2);
    *(undefined4 **)(param_2 + 0x18) = puVar8;
    uVar11 = uVar6;
    puVar12 = puVar13;
    if (uVar2 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar11 = uVar11 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar11 != 0);
    }
  }
  if ((uVar16 >> 2 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar6 << 2);
    *(undefined4 **)(param_2 + 0x20) = puVar8;
    uVar11 = uVar6;
    puVar12 = puVar13;
    if (uVar2 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar11 = uVar11 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar11 != 0);
    }
  }
  if ((uVar16 >> 3 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar6 << 2);
    *(undefined4 **)(param_2 + 0x28) = puVar8;
    uVar11 = uVar6;
    puVar12 = puVar13;
    if (uVar2 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar11 = uVar11 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar11 != 0);
    }
  }
  if ((uVar16 >> 4 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar6 << 2);
    *(undefined4 **)(param_2 + 0x30) = puVar8;
    puVar12 = puVar13;
    if (uVar2 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar6 = uVar6 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar6 != 0);
    }
  }
  if ((uVar16 >> 5 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar14 << 2);
    *(undefined4 **)(param_2 + 0x48) = puVar8;
    if (param_4 < 3) {
      if (uVar4 != 0) {
        uVar14 = 0;
        uVar4 = 3;
        do {
          uVar14 = uVar14 + 1;
          puVar8 = puVar8 + (uVar4 - 3);
          *puVar8 = *(undefined4 *)puVar13;
          puVar8[1] = *(undefined4 *)((long)puVar13 + 4);
          puVar12 = puVar13 + 1;
          puVar13 = (undefined8 *)((long)puVar13 + 0xc);
          puVar8[2] = *(undefined4 *)puVar12;
          puVar8 = *(undefined4 **)(param_2 + 0x48);
          uVar15 = (ulong)*(uint *)(param_2 + 8);
          puVar8[uVar4] = 0x3f800000;
          uVar4 = uVar4 + 4;
        } while (uVar14 < uVar15);
        uVar16 = *(uint *)(param_2 + 0xc);
      }
    }
    else {
      puVar12 = puVar13;
      if (uVar1 != 0) {
        do {
          puVar13 = (undefined8 *)((long)puVar12 + 4);
          uVar14 = uVar14 - 1;
          *puVar8 = *(undefined4 *)puVar12;
          puVar8 = puVar8 + 1;
          puVar12 = puVar13;
        } while (uVar14 != 0);
      }
    }
  }
  if ((uVar16 >> 6 & 1) != 0) {
    iVar9 = 4;
    if ((uVar16 & 0x100) != 0) {
      iVar9 = 1;
    }
    uVar4 = (int)uVar15 * iVar9;
    uVar14 = (ulong)uVar4;
    puVar12 = puVar13;
    if ((uVar16 >> 8 & 1) == 0) {
      puVar8 = (undefined4 *)operator_new__(uVar14 << 2);
      *(undefined4 **)(param_2 + 0x50) = puVar8;
      uVar6 = uVar14;
      if (uVar4 == 0) {
        uVar14 = 0;
      }
      else {
        do {
          puVar12 = (undefined8 *)((long)puVar13 + 4);
          uVar6 = uVar6 - 1;
          *puVar8 = *(undefined4 *)puVar13;
          puVar8 = puVar8 + 1;
          puVar13 = puVar12;
        } while (uVar6 != 0);
      }
    }
    pvVar5 = operator_new__(uVar14);
    *(void **)(param_2 + 0x58) = pvVar5;
    memcpy(pvVar5,puVar12,uVar14);
    puVar13 = (undefined8 *)((long)puVar12 + uVar14);
  }
  if ((uVar16 >> 9 & 1) != 0) {
    puVar8 = (undefined4 *)operator_new__(uVar15 << 2);
    *(undefined4 **)(param_2 + 0x60) = puVar8;
    puVar12 = puVar13;
    if ((int)uVar15 != 0) {
      do {
        puVar13 = (undefined8 *)((long)puVar12 + 4);
        uVar15 = uVar15 - 1;
        *puVar8 = *(undefined4 *)puVar12;
        puVar8 = puVar8 + 1;
        puVar12 = puVar13;
      } while (uVar15 != 0);
    }
  }
  param_2[0x88] = (IndexedTriangleSet)0x1;
  if (param_4 < 5) {
    uVar4 = TriangleSet::getAttributes();
    if ((uVar4 >> 7 & 1) != 0) {
      local_8c = 0;
      IndexedTriangleSetGeometryUtil::getDefaultTangentUvIndex(uVar4,(int *)&local_8c);
      if (local_8c != 0xffffffff) {
        IndexedTriangleSet::buildTangents(param_2,local_8c);
      }
    }
  }
  else if (param_4 != 5) goto LAB_00942d94;
  if (*(int *)(param_2 + 0x78) != 0) {
    uVar14 = 0;
    do {
      lVar17 = *(long *)(*(long *)(param_2 + 0x80) + uVar14 * 8);
      uVar18 = IndexedTriangleSet::computeUvDensity
                         (param_2,0,*(uint *)(lVar17 + 8),*(uint *)(lVar17 + 0xc));
      uVar19 = IndexedTriangleSet::computeUvDensity
                         (param_2,1,*(uint *)(lVar17 + 8),*(uint *)(lVar17 + 0xc));
      uVar20 = IndexedTriangleSet::computeUvDensity
                         (param_2,2,*(uint *)(lVar17 + 8),*(uint *)(lVar17 + 0xc));
      uVar21 = IndexedTriangleSet::computeUvDensity
                         (param_2,3,*(uint *)(lVar17 + 8),*(uint *)(lVar17 + 0xc));
      *(undefined4 *)(lVar17 + 0x10) = uVar18;
      uVar14 = uVar14 + 1;
      *(undefined4 *)(lVar17 + 0x14) = uVar19;
      *(undefined4 *)(lVar17 + 0x18) = uVar20;
      *(undefined4 *)(lVar17 + 0x1c) = uVar21;
    } while (uVar14 < *(uint *)(param_2 + 0x78));
  }
LAB_00942d94:
  if (*(long *)(lVar3 + 0x28) == local_88) {
    return puVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


